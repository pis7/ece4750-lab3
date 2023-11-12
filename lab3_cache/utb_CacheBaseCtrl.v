//========================================================================
// utb_CacheBaseCtrl
//========================================================================
// A basic Verilog unit test bench for the Cache Base Control module

`default_nettype none
`timescale 1ps/1ps

`include "CacheBaseCtrl.v"
`include "vc/trace.v"
`include "vc/mem-msgs.v"

//------------------------------------------------------------------------
// Top-level module
//------------------------------------------------------------------------

module top(  input logic clk, input logic linetrace );

    logic                    reset;

    // imem: connection between proc and cache
    logic                    memreq_val;
    logic                    memreq_rdy;
    mem_req_4B_t             memreq_msg;

    logic                    memresp_val;
    logic                    memresp_rdy;
    mem_resp_4B_t            memresp_msg;

    //cache: connection between cache and imem
    logic                    cache_req_val;
    logic                    cache_req_rdy;
    mem_req_4B_t             cache_req_msg;

    logic                     cache_resp_val;
    logic                     cache_resp_rdy;
    mem_resp_4B_t             cache_resp_msg;

    // flush
    logic flush;
    logic all_flushed;
    logic flush_done;

    // Status signals (dpath -> ctrl)
    logic tarray_match;
    logic line_dirty;
    logic line_valid;

    logic req_count_done;
    logic resp_count_done;

    logic incoming_mem_type;

    // Control signals (ctrl -> dpath)
    logic input_en;
    logic tarray_en;
    logic tarray_wen;

    logic req_count_en;
    logic resp_count_en;
    logic count_reset;

    logic write_data_sel;
    logic darray_en;
    logic darray_wen;
    logic index_sel;
    logic write_word_sel;
    logic read_word_sel;
    logic mem_action;

    logic clean_set;
    logic dirty_set;

    logic valid_set;
    logic [2:0] state;

    lab3_cache_CacheBaseCtrl DUT
    (
        .*
    );

    // General logic
    localparam y = 1'b1;
    localparam n = 1'b0;
    localparam r = 1'b0;
    localparam w = 1'b1;
    localparam dc = 1'dx;

    // Data array write word select
    localparam OFF = 1'd0;
    localparam REFILL = 1'd1;

    // Data array read word select
    // OFF
    localparam EVICT = 1'b1;

    // Data array index select;
    localparam IDX = 1'd0;
    localparam FLUSH = 1'd1;

    // Write tag and data source select
    localparam PROC = 1'd0;
    localparam IMEM = 1'd1;

    // imem action
    localparam READ = `VC_MEM_REQ_MSG_TYPE_READ;
    localparam WRITE = `VC_MEM_REQ_MSG_TYPE_WRITE;
    localparam DCMEM = 3'dx;

    // FSM states
    localparam ID = 3'd0; // Idle
    localparam MT = 3'd1; // Check tag
    localparam E0 = 3'd2; // Evict data
    localparam R0 = 3'd3; // Refill data
    localparam MD = 3'd4; // Data access (R/W)
    localparam FL = 3'd5; // Flush

    initial begin

        memreq_msg.type_ = DCMEM;
        memreq_msg.opaque = 8'b0;
        memreq_msg.addr = 32'dx;
        memreq_msg.len = 2'd0;
        memreq_msg.data = 32'dx;

        //--------------------------------------------------------------------
        // Unit Testing #1 Test Refill on Read Miss - Invalid Line
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.

        $display("");
        $display("---------------------------------------");
        $display("Unit Test 1: Test Refill on Read Miss - Invalid Line");
        $display("---------------------------------------");

        reset = 1;
        @(negedge clk);
        reset = 0;
        //         mem  mem    mem     mem     mem  cac  cac  cac     cac     fsh  all  tar  lin  lne  req  res
        //         req  req    req     req     res  req  res  res     res          fsh  mat  dty  val  dne  dne
        //         val  typ    adr     dat     rdy  rdy  val  typ     dat                              
        set_inputs(n,   r,     32'dx,  32'dx,  n,   n,   n,   DCMEM,  32'dx,  n,   n,   n,   n,   n,   n,   n);
        
        $display("");
        $display("Waiting for proc to send a val request");
        @(negedge clk);
        //           mem  mem  cac  cac  tar  tar  req  res  cnt  wrt  dar  dar  idx  wrt  rd   mem cln  dty  val  fsh  st  nxt  inp
        //           req  res  req  res  en   wen  en   en   rst  dat  en   wen  sel  wrd  wrd  act set  set  set  dne      st  en
        //           rdy  val  val  rdy                           sel                 sel  sel                         
        test_outputs(y,   n,   n,   n,   n,   n,   n,   n,   y,   dc,  n,   n,   dc,  dc,  dc,  dc, n,   n,   n,   n,   ID, ID,  y);

        delay( $urandom_range(0, 127) ); 

        $display("");
        $display("Still waiting for proc val request");
        @(negedge clk);
        //           mem  mem  cac  cac  tar  tar  req  res  cnt  wrt  dar  dar  idx  wrt  rd   mem cln  dty  val  fsh  st  nxt  inp
        //           req  res  req  res  en   wen  en   en   rst  dat  en   wen  sel  wrd  wrd  act set  set  set  dne      st  en
        //           rdy  val  val  rdy                           sel                 sel  sel                         
        test_outputs(y,   n,   n,   n,   n,   n,   n,   n,   y,   dc,  n,   n,   dc,  dc,  dc,  dc, n,   n,   n,   n,   ID, ID,  y);

        $display("");
        $display("Proc has a value now, cache not ready for it though");
        delay( $urandom_range(0, 127) );
        //         mem  mem    mem     mem     mem  cac  cac  cac     cac     fsh  all  tar  lin  lne  req  res
        //         req  req    req     req     res  req  res  res     res          fsh  mat  dty  val  dne  dne
        //         val  typ    adr     dat     rdy  rdy  val  typ     dat                              
        set_inputs(y,   r,     32'dx,  32'dx,  n,   n,   n,   DCMEM,  32'dx,  n,   n,   n,   n,   n,   n,   n);

        $display("");
        $display("Transition to MT");
        @(negedge clk);
        //           mem  mem  cac  cac  tar  tar  req  res  cnt  wrt    dar  dar  idx  wrt  rd   mem cln  dty  val  fsh  st  nxt  inp
        //           req  res  req  res  en   wen  en   en   rst  dat    en   wen  sel  wrd  wrd  act set  set  set  dne      st  en
        //           rdy  val  val  rdy                           sel                   sel  sel                        
        test_outputs(n,   n,   n,   n,   y,   n,   n,   n,   y,   PROC,  n,   n,   IDX, OFF, OFF, dc, n,   n,   n,   n,   MT, R0,  n);

        $display("");
        $display("Transition to R0");
        @(negedge clk);
        //           mem  mem  cac  cac  tar  tar  req  res  cnt  wrt    dar  dar  idx  wrt     rd   mem cln  dty  val  fsh  st  nxt  inp
        //           req  res  req  res  en   wen  en   en   rst  dat    en   wen  sel  wrd     wrd  act set  set  set  dne      st  en
        //           rdy  val  val  rdy                           sel                   sel     sel                         
        test_outputs(n,   n,   n,   y,   y,   n,   n,   n,   n,   IMEM,  y,   n,   IDX, REFILL, OFF, dc, r,   n,   y,   n,   R0, R0,  n);


        delay( $urandom_range(0, 127) ); 
        
        $display("");
        $display("Wait for imem to be ready");
        @(negedge clk);
        //           mem  mem  cac  cac  tar  tar  req  res  cnt  wrt    dar  dar  idx  wrt     rd   mem cln  dty  val  fsh  st  nxt  inp
        //           req  res  req  res  en   wen  en   en   rst  dat    en   wen  sel  wrd     wrd  act set  set  set  dne      st  en
        //           rdy  val  val  rdy                           sel                   sel     sel                         
        test_outputs(n,   n,   n,   y,   y,   n,   n,   n,   n,   IMEM,  y,   n,   IDX, REFILL, OFF, dc, r,   n,   y,   n,   R0, R0,  n);

        $display("");
        $display("imem now ready to respond");
        delay( $urandom_range(0, 127) );
        //         mem  mem    mem     mem     mem  cac  cac  cac     cac     fsh  all  tar  lin  lne  req  res
        //         req  req    req     req     res  req  res  res     res          fsh  mat  dty  val  dne  dne
        //         val  typ    adr     dat     rdy  rdy  val  typ     dat                              
        set_inputs(y,   r,     32'dx,  32'dx,  n,   y,   n,   DCMEM,  32'dx,  n,   n,   n,   n,   n,   n,   n);


        $display("");
        $display("Still in R0, send req to imem");
        @(negedge clk);
        //           mem  mem  cac  cac  tar  tar  req  res  cnt  wrt    dar  dar  idx  wrt     rd   mem cln  dty  val  fsh  st  nxt  inp
        //           req  res  req  res  en   wen  en   en   rst  dat    en   wen  sel  wrd     wrd  act set  set  set  dne      st  en
        //           rdy  val  val  rdy                           sel                   sel     sel                         
        test_outputs(n,   n,   y,   y,   y,   n,   y,   n,   n,   IMEM,  y,   n,   IDX, REFILL, dc,  r,  n,   n,   y,   n,   R0, R0,  n);

        delay( $urandom_range(0, 127) );

        $display("");
        $display("Wait for imem to have response");
        @(negedge clk);
        //           mem  mem  cac  cac  tar  tar  req  res  cnt  wrt    dar  dar  idx  wrt     rd   mem cln  dty  val  fsh  st  nxt  inp
        //           req  res  req  res  en   wen  en   en   rst  dat    en   wen  sel  wrd     wrd  act set  set  set  dne      st  en
        //           rdy  val  val  rdy                           sel                   sel     sel                         
        test_outputs(n,   n,   y,   y,   y,   n,   y,   n,   n,   IMEM,  y,   n,   IDX, REFILL, dc,  r,  n,   n,   y,   n,   R0, R0,  n);

        $display("");
        $display("imem has response");
        delay( $urandom_range(0, 127) );
        //         mem  mem    mem     mem     mem  cac  cac  cac     cac     fsh  all  tar  lin  lne  req  res
        //         req  req    req     req     res  req  res  res     res          fsh  mat  dty  val  dne  dne
        //         val  typ    adr     dat     rdy  rdy  val  typ     dat                              
        set_inputs(y,   r,     32'dx,  32'dx,  n,   y,   y,   DCMEM,  32'dx,  n,   n,   n,   n,   n,   n,   n);

        @(negedge clk);
        //           mem  mem  cac  cac  tar  tar  req  res  cnt  wrt    dar  dar  idx  wrt     rd   mem cln  dty  val  fsh  st  nxt  inp
        //           req  res  req  res  en   wen  en   en   rst  dat    en   wen  sel  wrd     wrd  act set  set  set  dne      st  en
        //           rdy  val  val  rdy                           sel                   sel     sel                         
        test_outputs(n,   n,   y,   y,   y,   y,   y,   y,   n,   IMEM,  y,   y,   IDX, REFILL, dc,  r,  n,   n,   y,   n,   R0, R0,  n);

        $display("");
        $display("imem not ready but still has responses");
        delay( $urandom_range(0, 127) );
        //         mem  mem    mem     mem     mem  cac  cac  cac     cac     fsh  all  tar  lin  lne  req  res
        //         req  req    req     req     res  req  res  res     res          fsh  mat  dty  val  dne  dne
        //         val  typ    adr     dat     rdy  rdy  val  typ     dat                              
        set_inputs(y,   r,     32'dx,  32'dx,  n,   n,   y,   DCMEM,  32'dx,  n,   n,   n,   n,   n,   n,   n);

        @(negedge clk);
        //           mem  mem  cac  cac  tar  tar  req  res  cnt  wrt    dar  dar  idx  wrt     rd   mem cln  dty  val  fsh  st  nxt  inp
        //           req  res  req  res  en   wen  en   en   rst  dat    en   wen  sel  wrd     wrd  act set  set  set  dne      st  en
        //           rdy  val  val  rdy                           sel                   sel     sel                         
        test_outputs(n,   n,   n,   y,   y,   y,   n,   y,   n,   IMEM,  y,   y,   IDX, REFILL, dc,  r,  n,   n,   y,   n,   R0, R0,  n);

        $display("");
        $display("Counts are done, transition to MD, proc not ready to receive");
        delay( $urandom_range(0, 127) );
        //         mem  mem    mem     mem     mem  cac  cac  cac     cac     fsh  all  tar  lin  lne  req  res
        //         req  req    req     req     res  req  res  res     res          fsh  mat  dty  val  dne  dne
        //         val  typ    adr     dat     rdy  rdy  val  typ     dat                              
        set_inputs(y,   r,     32'dx,  32'dx,  n,   n,   n,   DCMEM,  32'dx,  n,   n,   n,   n,   n,   y,   y);

        @(negedge clk);
        //           mem  mem  cac  cac  tar  tar  req  res  cnt  wrt    dar  dar  idx  wrt     rd   mem cln  dty  val  fsh  st  nxt  inp
        //           req  res  req  res  en   wen  en   en   rst  dat    en   wen  sel  wrd     wrd  act set  set  set  dne      st  en
        //           rdy  val  val  rdy                           sel                   sel     sel                         
        test_outputs(n,   y,   n,   n,   n,   n,   n,   n,   y,   PROC,  y,   n,   IDX, OFF,    OFF, dc,  n,   n,   y,   n,   MD, MD,  n);

        $display("");
        $display("Proc ready to receive value");
        delay( $urandom_range(0, 127) );
        //         mem  mem    mem     mem     mem  cac  cac  cac     cac     fsh  all  tar  lin  lne  req  res
        //         req  req    req     req     res  req  res  res     res          fsh  mat  dty  val  dne  dne
        //         val  typ    adr     dat     rdy  rdy  val  typ     dat                              
        set_inputs(n,   r,     32'dx,  32'dx,  y,   n,   n,   DCMEM,  32'dx,  n,   n,   n,   n,   n,   y,   y);

        @(negedge clk);
        //           mem  mem  cac  cac  tar  tar  req  res  cnt  wrt    dar  dar  idx  wrt     rd   mem cln  dty  val  fsh   st  nxt  inp
        //           req  res  req  res  en   wen  en   en   rst  dat    en   wen  sel  wrd     wrd  act set  set  set  dne       st   en
        //           rdy  val  val  rdy                           sel                   sel     sel                         
        test_outputs(y,   n,   n,   n,   n,   n,   n,   n,   y,   dc,    n,   n,   dc,  dc,     dc,  dc,  n,   n,   n,   n,   ID, ID,  y);

        delay( $urandom_range(0, 127) );

        // --------------------------------------------------------------------
        // Unit Testing #2 Test Hit with Write
        // --------------------------------------------------------------------
        // Initalize all the signal inital values.
        
        $display("");
        $display("---------------------------------------");
        $display("Unit Test 2: Test Hit with Write");
        $display("---------------------------------------");

        reset = 1;
        @(negedge clk); 
        reset = 0;

        $display("");
        $display("Source not requesting");
        //         mem  mem    mem     mem     mem  cac  cac  cac     cac     fsh  all  tar  lin  lne  req  res
        //         req  req    req     req     res  req  res  res     res          fsh  mat  dty  val  dne  dne
        //         val  typ    adr     dat     rdy  rdy  val  typ     dat                              
        set_inputs(n,   w,     32'dx,  32'dx,  y,   n,   n,   DCMEM,  32'dx,  n,   n,   n,   n,   n,   n,   n);
        
        @(negedge clk);
        //           mem  mem  cac  cac  tar  tar  req  res  cnt  wrt    dar  dar  idx  wrt     rd   mem cln  dty  val  fsh   st  nxt  inp
        //           req  res  req  res  en   wen  en   en   rst  dat    en   wen  sel  wrd     wrd  act set  set  set  dne       st   en
        //           rdy  val  val  rdy                           sel                   sel     sel                         
        test_outputs(y,   n,   n,   n,   n,   n,   n,   n,   y,   dc,    n,   n,   dc,  dc,     dc,  dc,  n,   n,   n,   n,   ID, ID,  y);

        $display("");
        $display("Hit with source requesting a write, sink not ready to receive");
        delay( $urandom_range(0, 127) );
        //         mem  mem    mem     mem     mem  cac  cac  cac     cac     fsh  all  tar  lin  lne  req  res
        //         req  req    req     req     res  req  res  res     res          fsh  mat  dty  val  dne  dne
        //         val  typ    adr     dat     rdy  rdy  val  typ     dat                              
        set_inputs(y,   w,     32'dx,  32'dx,  n,   n,   n,   DCMEM,  32'dx,  n,   n,   y,   n,   y,   n,   n);
       
        @(negedge clk);
        //           mem  mem  cac  cac  tar  tar  req  res  cnt  wrt    dar  dar  idx  wrt     rd   mem cln  dty  val  fsh   st   nxt  inp
        //           req  res  req  res  en   wen  en   en   rst  dat    en   wen  sel  wrd     wrd  act set  set  set  dne        st   en
        //           rdy  val  val  rdy                           sel                   sel     sel                         
        test_outputs(n,   y,   n,   n,   y,   n,   n,   n,   y,   PROC,  y,   y,   IDX, OFF,    OFF,  dc,  n,   y,   n,   n,  MT,  MT,  n);

        $display("");
        $display("Still waiting for sink to be ready");
        delay( $urandom_range(0, 127) );

        @(negedge clk);
        //           mem  mem  cac  cac  tar  tar  req  res  cnt  wrt    dar  dar  idx  wrt     rd   mem cln  dty  val  fsh   st   nxt  inp
        //           req  res  req  res  en   wen  en   en   rst  dat    en   wen  sel  wrd     wrd  act set  set  set  dne        st   en
        //           rdy  val  val  rdy                           sel                   sel     sel                         
        test_outputs(n,   y,   n,   n,   y,   n,   n,   n,   y,   PROC,  y,   y,   IDX, OFF,    OFF,  dc,  n,   y,   n,   n,  MT,  MT,  n);

        $display("");
        $display("Sink now ready to receive value, source no longer requesting -> go to idle");
        delay( $urandom_range(0, 127) );
        //         mem  mem    mem     mem     mem  cac  cac  cac     cac     fsh  all  tar  lin  lne  req  res
        //         req  req    req     req     res  req  res  res     res          fsh  mat  dty  val  dne  dne
        //         val  typ    adr     dat     rdy  rdy  val  typ     dat                              
        set_inputs(n,   dc,    32'dx,  32'dx,  y,   n,   n,   DCMEM,  32'dx,  n,   n,   y,   n,   y,   n,   n);
       
        @(negedge clk);
        //           mem  mem  cac  cac  tar  tar  req  res  cnt  wrt    dar  dar  idx  wrt     rd   mem cln  dty  val  fsh   st   nxt  inp
        //           req  res  req  res  en   wen  en   en   rst  dat    en   wen  sel  wrd     wrd  act set  set  set  dne        st   en
        //           rdy  val  val  rdy                           sel                   sel     sel                         
        test_outputs(y,   n,   n,   n,   n,   n,   n,   n,   y,   dc,    n,   n,   dc,  dc,     dc,  dc,  n,   n,   n,   n,   ID,  ID,  y);

        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Testing #3 Dirty Line - Eviction on Reads
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.

        $display("");
        $display("---------------------------------------");
        $display("Unit Test 3: Eviction on Write");
        $display("---------------------------------------");

        reset = 1;
        @(negedge clk);
        reset = 0;

        $display("");
        $display("Wait for source to send value");
        //         mem  mem    mem     mem     mem  cac  cac  cac     cac     fsh  all  tar  lin  lne  req  res
        //         req  req    req     req     res  req  res  res     res          fsh  mat  dty  val  dne  dne
        //         val  typ    adr     dat     rdy  rdy  val  typ     dat                              
        set_inputs(n,   w,     32'dx,  32'dx,  n,   n,   n,   DCMEM,  32'dx,  n,   n,   y,   n,   y,   n,   n);

        @(negedge clk);
        //           mem  mem  cac  cac  tar  tar  req  res  cnt  wrt    dar  dar  idx  wrt     rd   mem cln  dty  val  fsh   st   nxt  inp
        //           req  res  req  res  en   wen  en   en   rst  dat    en   wen  sel  wrd     wrd  act set  set  set  dne        st   en
        //           rdy  val  val  rdy                           sel                   sel     sel                         
        test_outputs(y,   n,   n,   n,   n,   n,   n,   n,   y,   dc,    n,   n,   dc,  dc,     dc,  dc,  n,   n,   n,   n,   ID,  ID,  y);

        $display("");
        $display("Source has value and line is dirty -> go to MT");
        delay( $urandom_range(0, 127) );
        //         mem  mem    mem     mem     mem  cac  cac  cac     cac     fsh  all  tar  lin  lne  req  res
        //         req  req    req     req     res  req  res  res     res          fsh  mat  dty  val  dne  dne
        //         val  typ    adr     dat     rdy  rdy  val  typ     dat                              
        set_inputs(y,   w,     32'dx,  32'dx,  n,   n,   n,   DCMEM,  32'dx,  n,   n,   n,   y,   y,   n,   n);

        @(negedge clk);
        //           mem  mem  cac  cac  tar  tar  req  res  cnt  wrt    dar  dar  idx  wrt     rd   mem cln  dty  val  fsh   st   nxt  inp
        //           req  res  req  res  en   wen  en   en   rst  dat    en   wen  sel  wrd     wrd  act set  set  set  dne        st   en
        //           rdy  val  val  rdy                           sel                   sel     sel                         
        test_outputs(n,   n,   n,   n,   y,   n,   n,   n,   y,   PROC,  n,   n,   IDX, OFF,    OFF, dc,  n,   n,   n,   n,   MT,  E0,  n);
        
        $display("");
        $display("Now in Evict (E0), imem not ready to receive");
        @(negedge clk);
        //           mem  mem  cac  cac  tar  tar  req  res  cnt  wrt    dar  dar  idx  wrt    rd     mem  cln  dty  val  fsh   st   nxt  inp
        //           req  res  req  res  en   wen  en   en   rst  dat    en   wen  sel  wrd    wrd    act  set  set  set  dne        st   en
        //           rdy  val  val  rdy                           sel                   sel    sel                         
        test_outputs(n,   n,   n,   y,   n,   n,   n,   n,   n,   dc,    y,   n,   IDX, dc,    EVICT, w,   y,   n,   n,   n,   E0,  E0,  n);

        $display("");
        $display("Now in Evict (E0), imem is ready to receive");
        delay( $urandom_range(0, 127) );
        //         mem  mem    mem     mem     mem  cac  cac  cac     cac     fsh  all  tar  lin  lne  req  res
        //         req  req    req     req     res  req  res  res     res          fsh  mat  dty  val  dne  dne
        //         val  typ    adr     dat     rdy  rdy  val  typ     dat                              
        set_inputs(y,   w,     32'dx,  32'dx,  n,   y,   n,   WRITE,  32'dx,  n,   n,   n,   n,   y,   n,   n);

        @(negedge clk);
        //           mem  mem  cac  cac  tar  tar  req  res  cnt  wrt    dar  dar  idx  wrt    rd     mem  cln  dty  val  fsh   st   nxt  inp
        //           req  res  req  res  en   wen  en   en   rst  dat    en   wen  sel  wrd    wrd    act  set  set  set  dne        st   en
        //           rdy  val  val  rdy                           sel                   sel    sel                         
        test_outputs(n,   n,   y,   y,   n,   n,   y,   n,   n,   dc,    y,   n,   IDX, dc,    EVICT, w,   y,   n,   n,   n,   E0,  E0,  n);

        $display("");
        $display("Now in Evict (E0), imem is ready to respond");
        delay( $urandom_range(0, 127) );
        //         mem  mem    mem     mem     mem  cac  cac  cac     cac     fsh  all  tar  lin  lne  req  res
        //         req  req    req     req     res  req  res  res     res          fsh  mat  dty  val  dne  dne
        //         val  typ    adr     dat     rdy  rdy  val  typ     dat                              
        set_inputs(y,   w,     32'dx,  32'dx,  n,   y,   y,   WRITE,  32'dx,  n,   n,   n,   n,   y,   n,   n);

        @(negedge clk);
        //           mem  mem  cac  cac  tar  tar  req  res  cnt  wrt    dar  dar  idx  wrt    rd     mem  cln  dty  val  fsh   st   nxt  inp
        //           req  res  req  res  en   wen  en   en   rst  dat    en   wen  sel  wrd    wrd    act  set  set  set  dne        st   en
        //           rdy  val  val  rdy                           sel                   sel    sel                         
        test_outputs(n,   n,   y,   y,   n,   n,   y,   y,   n,   dc,    y,   n,   IDX, dc,    EVICT, w,   y,   n,   n,   n,   E0,  E0,  n);

        $display("");
        $display("Now in Evict (E0), imem no longer ready to receive, but still respond");
        delay( $urandom_range(0, 127) );
        //         mem  mem    mem     mem     mem  cac  cac  cac     cac     fsh  all  tar  lin  lne  req  res
        //         req  req    req     req     res  req  res  res     res          fsh  mat  dty  val  dne  dne
        //         val  typ    adr     dat     rdy  rdy  val  typ     dat                              
        set_inputs(y,   w,     32'dx,  32'dx,  n,   n,   y,   WRITE,  32'dx,  n,   n,   n,   n,   y,   n,   n);

        @(negedge clk);
        //           mem  mem  cac  cac  tar  tar  req  res  cnt  wrt    dar  dar  idx  wrt    rd     mem  cln  dty  val  fsh   st   nxt  inp
        //           req  res  req  res  en   wen  en   en   rst  dat    en   wen  sel  wrd    wrd    act  set  set  set  dne        st   en
        //           rdy  val  val  rdy                           sel                   sel    sel                         
        test_outputs(n,   n,   n,   y,   n,   n,   n,   y,   n,   dc,    y,   n,   IDX, dc,    EVICT, w,   y,   n,   n,   n,   E0,  E0,  n);

        $display("");
        $display("Both counters done -> transition to R0, imem not ready to receive");
        delay( $urandom_range(0, 127) );
        //         mem  mem    mem     mem     mem  cac  cac  cac     cac     fsh  all  tar  lin  lne  req  res
        //         req  req    req     req     res  req  res  res     res          fsh  mat  dty  val  dne  dne
        //         val  typ    adr     dat     rdy  rdy  val  typ     dat                              
        set_inputs(y,   w,     32'dx,  32'dx,  n,   n,   n,   WRITE,  32'dx,  n,   n,   n,   n,   y,   y,   y);

        @(posedge clk); // Reset counters back to 0
        //         mem  mem    mem     mem     mem  cac  cac  cac     cac     fsh  all  tar  lin  lne  req  res
        //         req  req    req     req     res  req  res  res     res          fsh  mat  dty  val  dne  dne
        //         val  typ    adr     dat     rdy  rdy  val  typ     dat                              
        set_inputs(y,   w,     32'dx,  32'dx,  n,   n,   n,   WRITE,  32'dx,  n,   n,   n,   n,   y,   n,   n);

        @(negedge clk);
        //           mem  mem  cac  cac  tar  tar  req  res  cnt  wrt    dar  dar  idx  wrt      rd     mem  cln  dty  val  fsh   st   nxt  inp
        //           req  res  req  res  en   wen  en   en   rst  dat    en   wen  sel  wrd      wrd    act  set  set  set  dne        st   en
        //           rdy  val  val  rdy                           sel                   sel      sel                         
        test_outputs(n,   n,   n,   y,   y,   n,   n,   n,   n,   IMEM,  y,   n,   IDX, REFILL,  dc,    r,   n,   n,   y,   n,   R0,   R0,  n);

        $display("");
        $display("Wait for imem to be ready for refill");
        delay( $urandom_range(0, 127) );
        @(negedge clk);
        //           mem  mem  cac  cac  tar  tar  req  res  cnt  wrt    dar  dar  idx  wrt      rd     mem  cln  dty  val  fsh   st   nxt  inp
        //           req  res  req  res  en   wen  en   en   rst  dat    en   wen  sel  wrd      wrd    act  set  set  set  dne        st   en
        //           rdy  val  val  rdy                           sel                   sel      sel                         
        test_outputs(n,   n,   n,   y,   y,   n,   n,   n,   n,   IMEM,  y,   n,   IDX, REFILL,  dc,    r,   n,   n,   y,   n,   R0,   R0,  n);

        $display("");
        $display("Counts done for refill -> go to MD, sink ready to receive and source ready to respond");
        delay( $urandom_range(0, 127) );
        //         mem  mem    mem     mem     mem  cac  cac  cac     cac     fsh  all  tar  lin  lne  req  res
        //         req  req    req     req     res  req  res  res     res          fsh  mat  dty  val  dne  dne
        //         val  typ    adr     dat     rdy  rdy  val  typ     dat                              
        set_inputs(y,   w,     32'dx,  32'dx,  y,   n,   n,   DCMEM,  32'dx,  n,   n,   n,   n,   y,   y,   y);

        @(negedge clk);
        //           mem  mem  cac  cac  tar  tar  req  res  cnt  wrt    dar  dar  idx  wrt      rd     mem  cln  dty  val  fsh   st   nxt  inp
        //           req  res  req  res  en   wen  en   en   rst  dat    en   wen  sel  wrd      wrd    act  set  set  set  dne        st   en
        //           rdy  val  val  rdy                           sel                   sel      sel                         
        test_outputs(y,   y,   n,   n,   n,   n,   n,   n,   y,   PROC,  y,   y,   IDX, OFF,     OFF,   dc,   n,   y,   y,   n,   MD,   MT,  y);
        
        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Testing #4 Flush
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.

        $display("");
        $display("---------------------------------------");
        $display("Unit Test 4: Flush from Idle (ID)");
        $display("---------------------------------------");

        reset = 1;
        @(negedge clk);
        reset = 0;

        $display("");
        $display("Wait in idle for flush signal");
        //         mem  mem    mem     mem     mem  cac  cac  cac     cac     fsh  all  tar  lin  lne  req  res
        //         req  req    req     req     res  req  res  res     res          fsh  mat  dty  val  dne  dne
        //         val  typ    adr     dat     rdy  rdy  val  typ     dat                              
        set_inputs(n,   w,     32'dx,  32'dx,  n,   n,   n,   DCMEM,  32'dx,  n,   n,   y,   n,   y,   n,   n);

        @(negedge clk);
        //           mem  mem  cac  cac  tar  tar  req  res  cnt  wrt    dar  dar  idx  wrt      rd     mem  cln  dty  val  fsh   st   nxt  inp
        //           req  res  req  res  en   wen  en   en   rst  dat    en   wen  sel  wrd      wrd    act  set  set  set  dne        st   en
        //           rdy  val  val  rdy                           sel                   sel      sel                         
        test_outputs(y,   n,   n,   n,   n,   n,   n,   n,   y,   dc,    n,   n,   dc,  dc,      dc,    dc,   n,   n,   n,   n,   ID,   ID,  y);

        $display("");
        $display("Flush signal goes high, so does memreq_val but flush should take precedence, imem not ready");
        delay( $urandom_range(0, 127) );
        //         mem  mem    mem     mem     mem  cac  cac  cac     cac     fsh  all  tar  lin  lne  req  res
        //         req  req    req     req     res  req  res  res     res          fsh  mat  dty  val  dne  dne
        //         val  typ    adr     dat     rdy  rdy  val  typ     dat                              
        set_inputs(y,   r,     32'dx,  32'dx,  n,   n,   n,   DCMEM,  32'dx,  y,   n,   y,   n,   y,   n,   n);

        @(negedge clk);
        //           mem  mem  cac  cac  tar  tar  req  res  cnt  wrt    dar  dar  idx    wrt      rd     mem  cln  dty  val  fsh   st   nxt  inp
        //           req  res  req  res  en   wen  en   en   rst  dat    en   wen  sel    wrd      wrd    act  set  set  set  dne        st   en
        //           rdy  val  val  rdy                           sel                     sel      sel                         
        test_outputs(n,   n,   n,   y,   n,   n,   n,   n,   n,   dc,    y,   n,   FLUSH, dc,      EVICT, w,   n,   n,   n,   n,   FL,   FL,  n);

        $display("");
        $display("imem not ready to receive, waiting in flush");
        delay( $urandom_range(0, 127) );

        @(negedge clk);
        //           mem  mem  cac  cac  tar  tar  req  res  cnt  wrt    dar  dar  idx    wrt      rd     mem  cln  dty  val  fsh   st   nxt  inp
        //           req  res  req  res  en   wen  en   en   rst  dat    en   wen  sel    wrd      wrd    act  set  set  set  dne        st   en
        //           rdy  val  val  rdy                           sel                     sel      sel                         
        test_outputs(n,   n,   n,   y,   n,   n,   n,   n,   n,   dc,    y,   n,   FLUSH, dc,      EVICT, w,   n,   n,   n,   n,   FL,   FL,  n);

        $display("");
        $display("imem ready to receive request, start evicting words");
        delay( $urandom_range(0, 127) );
        //         mem  mem    mem     mem     mem  cac  cac  cac     cac     fsh  all  tar  lin  lne  req  res
        //         req  req    req     req     res  req  res  res     res          fsh  mat  dty  val  dne  dne
        //         val  typ    adr     dat     rdy  rdy  val  typ     dat                              
        set_inputs(y,   r,     32'dx,  32'dx,  n,   y,   n,   DCMEM,  32'dx,  y,   n,   y,   n,   y,   n,   n);

        @(negedge clk);
        //           mem  mem  cac  cac  tar  tar  req  res  cnt  wrt    dar  dar  idx    wrt      rd     mem  cln  dty  val  fsh   st   nxt  inp
        //           req  res  req  res  en   wen  en   en   rst  dat    en   wen  sel    wrd      wrd    act  set  set  set  dne        st   en
        //           rdy  val  val  rdy                           sel                     sel      sel                         
        test_outputs(n,   n,   y,   y,   n,   n,   y,   n,   n,   dc,    y,   n,   FLUSH, dc,      EVICT, w,   n,   n,   n,   n,   FL,   FL,  n);

        $display("");
        $display("imem has responses, accept them even though doesn't matter since writing");
        delay( $urandom_range(0, 127) );
        //         mem  mem    mem     mem     mem  cac  cac  cac     cac     fsh  all  tar  lin  lne  req  res
        //         req  req    req     req     res  req  res  res     res          fsh  mat  dty  val  dne  dne
        //         val  typ    adr     dat     rdy  rdy  val  typ     dat                              
        set_inputs(y,   r,     32'dx,  32'dx,  n,   y,   y,   DCMEM,  32'dx,  y,   n,   y,   n,   y,   n,   n);

        @(negedge clk);
        //           mem  mem  cac  cac  tar  tar  req  res  cnt  wrt    dar  dar  idx    wrt      rd     mem  cln  dty  val  fsh   st   nxt  inp
        //           req  res  req  res  en   wen  en   en   rst  dat    en   wen  sel    wrd      wrd    act  set  set  set  dne        st   en
        //           rdy  val  val  rdy                           sel                     sel      sel                         
        test_outputs(n,   n,   y,   y,   n,   n,   y,   y,   n,   dc,    y,   n,   FLUSH, dc,      EVICT, w,   n,   n,   n,   n,   FL,   FL,  n);

        $display("");
        $display("imem req counter done, still wait for resp counter to be done");
        delay( $urandom_range(0, 127) );
        //         mem  mem    mem     mem     mem  cac  cac  cac     cac     fsh  all  tar  lin  lne  req  res
        //         req  req    req     req     res  req  res  res     res          fsh  mat  dty  val  dne  dne
        //         val  typ    adr     dat     rdy  rdy  val  typ     dat                              
        set_inputs(y,   r,     32'dx,  32'dx,  n,   y,   y,   WRITE,  32'dx,  y,   n,   y,   n,   y,   y,   n);

        @(negedge clk);
        //           mem  mem  cac  cac  tar  tar  req  res  cnt  wrt    dar  dar  idx    wrt      rd     mem  cln  dty  val  fsh   st   nxt  inp
        //           req  res  req  res  en   wen  en   en   rst  dat    en   wen  sel    wrd      wrd    act  set  set  set  dne        st   en
        //           rdy  val  val  rdy                           sel                     sel      sel                         
        test_outputs(n,   n,   n,   y,   n,   n,   n,   y,   n,   dc,    y,   n,   FLUSH, dc,      EVICT, w,   n,   n,   n,   n,   FL,   FL,  n);

        $display("");
        $display("imem req and resp counters done, set line to clean, select next line to evict");
        delay( $urandom_range(0, 127) );
        //         mem  mem    mem     mem     mem  cac  cac  cac     cac     fsh  all  tar  lin  lne  req  res
        //         req  req    req     req     res  req  res  res     res          fsh  mat  dty  val  dne  dne
        //         val  typ    adr     dat     rdy  rdy  val  typ     dat                              
        set_inputs(y,   r,     32'dx,  32'dx,  n,   y,   y,   WRITE,  32'dx,  y,   n,   y,   n,   y,   y,   y);

        @(negedge clk);
        //           mem  mem  cac  cac  tar  tar  req  res  cnt  wrt    dar  dar  idx    wrt      rd     mem  cln  dty  val  fsh   st   nxt  inp
        //           req  res  req  res  en   wen  en   en   rst  dat    en   wen  sel    wrd      wrd    act  set  set  set  dne        st   en
        //           rdy  val  val  rdy                           sel                     sel      sel                         
        test_outputs(n,   n,   n,   y,   n,   n,   n,   n,   y,   dc,    y,   n,   FLUSH, dc,      EVICT, w,   y,   n,   n,   n,    FL,   FL,  n);

        $display("");
        $display("Counters have reset, new index should have been chosen in dpath, start evicting new line");
        delay( $urandom_range(0, 127) );
        //         mem  mem    mem     mem     mem  cac  cac  cac     cac     fsh  all  tar  lin  lne  req  res
        //         req  req    req     req     res  req  res  res     res          fsh  mat  dty  val  dne  dne
        //         val  typ    adr     dat     rdy  rdy  val  typ     dat                              
        set_inputs(y,   r,     32'dx,  32'dx,  n,   y,   y,   WRITE,  32'dx,  y,   n,   y,   n,   y,   n,   n);

        @(negedge clk);
        //           mem  mem  cac  cac  tar  tar  req  res  cnt  wrt    dar  dar  idx    wrt      rd     mem  cln  dty  val  fsh   st   nxt  inp
        //           req  res  req  res  en   wen  en   en   rst  dat    en   wen  sel    wrd      wrd    act  set  set  set  dne        st   en
        //           rdy  val  val  rdy                           sel                     sel      sel                         
        test_outputs(n,   n,   y,   y,   n,   n,   y,   y,   n,   dc,    y,   n,   FLUSH, dc,      EVICT, w,   n,   n,   n,   n,    FL,   FL,  n);

        $display("");
        $display("Counters done for this line, set line to clean, all lines should be clean on the next clock cycle");
        delay( $urandom_range(0, 127) );
        //         mem  mem    mem     mem     mem  cac  cac  cac     cac     fsh  all  tar  lin  lne  req  res
        //         req  req    req     req     res  req  res  res     res          fsh  mat  dty  val  dne  dne
        //         val  typ    adr     dat     rdy  rdy  val  typ     dat                              
        set_inputs(y,   r,     32'dx,  32'dx,  n,   y,   y,   WRITE,  32'dx,  y,   n,   y,   n,   y,   y,   y);

        @(negedge clk);
        //           mem  mem  cac  cac  tar  tar  req  res  cnt  wrt    dar  dar  idx    wrt      rd     mem  cln  dty  val  fsh   st   nxt  inp
        //           req  res  req  res  en   wen  en   en   rst  dat    en   wen  sel    wrd      wrd    act  set  set  set  dne        st   en
        //           rdy  val  val  rdy                           sel                     sel      sel                         
        test_outputs(n,   n,   n,   y,   n,   n,   n,   n,   y,   dc,    y,   n,   FLUSH, dc,      EVICT, w,   y,   n,   n,   n,    FL,   FL,  n);

        $display("");
        $display("All flushed, wait for flush deassertion");
        delay( $urandom_range(0, 127) );
        //         mem  mem    mem     mem     mem  cac  cac  cac     cac     fsh  all  tar  lin  lne  req  res
        //         req  req    req     req     res  req  res  res     res          fsh  mat  dty  val  dne  dne
        //         val  typ    adr     dat     rdy  rdy  val  typ     dat                              
        set_inputs(n,   r,     32'dx,  32'dx,  n,   y,   y,   WRITE,  32'dx,  y,   y,   y,   n,   y,   n,   n);

        @(negedge clk);
        //           mem  mem  cac  cac  tar  tar  req  res  cnt  wrt    dar  dar  idx    wrt      rd     mem  cln  dty  val  fsh   st   nxt  inp
        //           req  res  req  res  en   wen  en   en   rst  dat    en   wen  sel    wrd      wrd    act  set  set  set  dne        st   en
        //           rdy  val  val  rdy                           sel                     sel      sel                         
        test_outputs(y,   n,   n,   n,   n,   n,   n,   n,   y,   dc,    n,   n,   dc,    dc,      dc,    dc,  n,   n,   n,   y,    FL,   FL,  y);

        $display("");
        $display("Flush deasserted, transition to ID");
        delay( $urandom_range(0, 127) );
        @(negedge clk);
        //         mem  mem    mem     mem     mem  cac  cac  cac     cac     fsh  all  tar  lin  lne  req  res
        //         req  req    req     req     res  req  res  res     res          fsh  mat  dty  val  dne  dne
        //         val  typ    adr     dat     rdy  rdy  val  typ     dat                              
        set_inputs(n,   r,     32'dx,  32'dx,  n,   y,   y,   WRITE,  32'dx,  n,   y,   n,   n,   y,   n,   n);

        @(negedge clk);
        //           mem  mem  cac  cac  tar  tar  req  res  cnt  wrt    dar  dar  idx    wrt      rd     mem  cln  dty  val  fsh   st   nxt  inp
        //           req  res  req  res  en   wen  en   en   rst  dat    en   wen  sel    wrd      wrd    act  set  set  set  dne        st   en
        //           rdy  val  val  rdy                           sel                     sel      sel                         
        test_outputs(y,   n,   n,   n,   n,   n,   n,   n,   y,   dc,    n,   n,   dc,    dc,      dc,    dc,  n,   n,   n,   n,    ID, ID,  y);
        
        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Testing #4 Flush
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.

        $display("");
        $display("---------------------------------------");
        $display("Unit Test 5: Flush from Idle (MT)");
        $display("---------------------------------------");

        reset = 1;
        @(negedge clk);
        reset = 0;

        $display("");
        $display("Go to MT");
        //         mem  mem    mem     mem     mem  cac  cac  cac     cac     fsh  all  tar  lin  lne  req  res
        //         req  req    req     req     res  req  res  res     res          fsh  mat  dty  val  dne  dne
        //         val  typ    adr     dat     rdy  rdy  val  typ     dat                              
        set_inputs(y,   r,     32'dx,  32'dx,  n,   n,   n,   DCMEM,  32'dx,  n,   n,   y,   n,   y,   n,   n);

        @(negedge clk);
        //           mem  mem  cac  cac  tar  tar  req  res  cnt  wrt    dar  dar  idx    wrt      rd     mem  cln  dty  val  fsh   st   nxt  inp
        //           req  res  req  res  en   wen  en   en   rst  dat    en   wen  sel    wrd      wrd    act  set  set  set  dne        st   en
        //           rdy  val  val  rdy                           sel                     sel      sel                         
        test_outputs(n,   y,   n,   n,   y,   n,   n,   n,   y,   PROC,  y,   n,   IDX,    OFF,     OFF,   dc,  n,   n,   n,   n,    MT,  MT,  n);

        $display("");
        $display("Flush signal goes high, so does memresp_rdy but flush should take precedence");
        delay( $urandom_range(0, 127) );
        //         mem  mem    mem     mem     mem  cac  cac  cac     cac     fsh  all  tar  lin  lne  req  res
        //         req  req    req     req     res  req  res  res     res          fsh  mat  dty  val  dne  dne
        //         val  typ    adr     dat     rdy  rdy  val  typ     dat                              
        set_inputs(y,   r,     32'dx,  32'dx,  y,   n,   n,   DCMEM,  32'dx,  y,   n,   y,   n,   y,   n,   n);

        @(negedge clk);
        //           mem  mem  cac  cac  tar  tar  req  res  cnt  wrt    dar  dar  idx     wrt     rd     mem  cln  dty  val  fsh   st   nxt  inp
        //           req  res  req  res  en   wen  en   en   rst  dat    en   wen  sel     wrd     wrd    act  set  set  set  dne        st   en
        //           rdy  val  val  rdy                           sel                      sel     sel                         
        test_outputs(n,   n,   n,   y,   n,   n,   n,   n,   n,   dc,    y,   n,   FLUSH,  dc,     EVICT, w,   n,   n,   n,   n,    FL,  FL,  n);

        $display("");
        $display("imem not ready to receive, waiting in flush");
        delay( $urandom_range(0, 127) );

        @(negedge clk);
        //           mem  mem  cac  cac  tar  tar  req  res  cnt  wrt    dar  dar  idx     wrt     rd     mem  cln  dty  val  fsh   st   nxt  inp
        //           req  res  req  res  en   wen  en   en   rst  dat    en   wen  sel     wrd     wrd    act  set  set  set  dne        st   en
        //           rdy  val  val  rdy                           sel                      sel     sel                         
        test_outputs(n,   n,   n,   y,   n,   n,   n,   n,   n,   dc,    y,   n,   FLUSH,  dc,     EVICT, w,   n,   n,   n,   n,    FL,  FL,  n);

        $display("");
        $display("imem ready to receive request, start evicting words");
        delay( $urandom_range(0, 127) );
        //         mem  mem    mem     mem     mem  cac  cac  cac     cac     fsh  all  tar  lin  lne  req  res
        //         req  req    req     req     res  req  res  res     res          fsh  mat  dty  val  dne  dne
        //         val  typ    adr     dat     rdy  rdy  val  typ     dat                              
        set_inputs(y,   r,     32'dx,  32'dx,  n,   y,   n,   WRITE,  32'dx,  y,   n,   y,   n,   y,   n,   n);

        @(negedge clk);
        //           mem  mem  cac  cac  tar  tar  req  res  cnt  wrt    dar  dar  idx     wrt     rd     mem  cln  dty  val  fsh   st   nxt  inp
        //           req  res  req  res  en   wen  en   en   rst  dat    en   wen  sel     wrd     wrd    act  set  set  set  dne        st   en
        //           rdy  val  val  rdy                           sel                      sel     sel                         
        test_outputs(n,   n,   y,   y,   n,   n,   y,   n,   n,   dc,    y,   n,   FLUSH,  dc,     EVICT, w,   n,   n,   n,   n,    FL,  FL,  n);

        $display("");
        $display("imem has responses, accept them even though doesn't matter since writing");
        delay( $urandom_range(0, 127) );
        //         mem  mem    mem     mem     mem  cac  cac  cac     cac     fsh  all  tar  lin  lne  req  res
        //         req  req    req     req     res  req  res  res     res          fsh  mat  dty  val  dne  dne
        //         val  typ    adr     dat     rdy  rdy  val  typ     dat                              
        set_inputs(y,   r,     32'dx,  32'dx,  n,   y,   y,   WRITE,  32'dx,  y,   n,   y,   n,   y,   n,   n);

        @(negedge clk);
        //           mem  mem  cac  cac  tar  tar  req  res  cnt  wrt    dar  dar  idx     wrt     rd     mem  cln  dty  val  fsh   st   nxt  inp
        //           req  res  req  res  en   wen  en   en   rst  dat    en   wen  sel     wrd     wrd    act  set  set  set  dne        st   en
        //           rdy  val  val  rdy                           sel                      sel     sel                         
        test_outputs(n,   n,   y,   y,   n,   n,   y,   y,   n,   dc,    y,   n,   FLUSH,  dc,     EVICT, w,   n,   n,   n,   n,    FL,  FL,  n);

        $display("");
        $display("imem req counter done, still wait for resp counter to be done");
        delay( $urandom_range(0, 127) );
        //         mem  mem    mem     mem     mem  cac  cac  cac     cac     fsh  all  tar  lin  lne  req  res
        //         req  req    req     req     res  req  res  res     res          fsh  mat  dty  val  dne  dne
        //         val  typ    adr     dat     rdy  rdy  val  typ     dat                              
        set_inputs(y,   r,     32'dx,  32'dx,  n,   y,   y,   WRITE,  32'dx,  y,   n,   y,   n,   y,   y,   n);

        @(negedge clk);
        //           mem  mem  cac  cac  tar  tar  req  res  cnt  wrt    dar  dar  idx     wrt     rd     mem  cln  dty  val  fsh   st   nxt  inp
        //           req  res  req  res  en   wen  en   en   rst  dat    en   wen  sel     wrd     wrd    act  set  set  set  dne        st   en
        //           rdy  val  val  rdy                           sel                      sel     sel                         
        test_outputs(n,   n,   n,   y,   n,   n,   n,   y,   n,   dc,    y,   n,   FLUSH,  dc,     EVICT, w,   n,   n,   n,   n,    FL,  FL,  n);

        $display("");
        $display("imem req and resp counters done, set line to clean, select next line to evict");
        delay( $urandom_range(0, 127) );
        //         mem  mem    mem     mem     mem  cac  cac  cac     cac     fsh  all  tar  lin  lne  req  res
        //         req  req    req     req     res  req  res  res     res          fsh  mat  dty  val  dne  dne
        //         val  typ    adr     dat     rdy  rdy  val  typ     dat                              
        set_inputs(y,   r,     32'dx,  32'dx,  n,   y,   y,   WRITE,  32'dx,  y,   n,   y,   n,   y,   y,   y);

        @(negedge clk);
        //           mem  mem  cac  cac  tar  tar  req  res  cnt  wrt    dar  dar  idx     wrt     rd     mem  cln  dty  val  fsh   st   nxt  inp
        //           req  res  req  res  en   wen  en   en   rst  dat    en   wen  sel     wrd     wrd    act  set  set  set  dne        st   en
        //           rdy  val  val  rdy                           sel                      sel     sel                         
        test_outputs(n,   n,   n,   y,   n,   n,   n,   n,   y,   dc,    y,   n,   FLUSH,  dc,     EVICT, w,   y,   n,   n,   n,    FL,  FL,  n);

        $display("");
        $display("Counters have reset, new index should have been chosen in dpath, start evicting new line");
        delay( $urandom_range(0, 127) );
        //         mem  mem    mem     mem     mem  cac  cac  cac     cac     fsh  all  tar  lin  lne  req  res
        //         req  req    req     req     res  req  res  res     res          fsh  mat  dty  val  dne  dne
        //         val  typ    adr     dat     rdy  rdy  val  typ     dat                              
        set_inputs(y,   r,     32'dx,  32'dx,  n,   y,   y,   WRITE,  32'dx,  y,   n,   y,   n,   y,   n,   n);

        @(negedge clk);
        //           mem  mem  cac  cac  tar  tar  req  res  cnt  wrt    dar  dar  idx     wrt     rd     mem  cln  dty  val  fsh   st   nxt  inp
        //           req  res  req  res  en   wen  en   en   rst  dat    en   wen  sel     wrd     wrd    act  set  set  set  dne        st   en
        //           rdy  val  val  rdy                           sel                      sel     sel                         
        test_outputs(n,   n,   y,   y,   n,   n,   y,   y,   n,   dc,    y,   n,   FLUSH,  dc,     EVICT, w,   n,   n,   n,   n,    FL,  FL,  n);

        $display("");
        $display("Counters done for this line, set line to clean, all lines should be clean on the next clock cycle");
        delay( $urandom_range(0, 127) );
        //         mem  mem    mem     mem     mem  cac  cac  cac     cac     fsh  all  tar  lin  lne  req  res
        //         req  req    req     req     res  req  res  res     res          fsh  mat  dty  val  dne  dne
        //         val  typ    adr     dat     rdy  rdy  val  typ     dat                              
        set_inputs(y,   r,     32'dx,  32'dx,  n,   y,   y,   WRITE,  32'dx,  y,   n,   y,   n,   y,   y,   y);

        @(negedge clk);
        //           mem  mem  cac  cac  tar  tar  req  res  cnt  wrt    dar  dar  idx    wrt      rd     mem  cln  dty  val  fsh   st   nxt  inp
        //           req  res  req  res  en   wen  en   en   rst  dat    en   wen  sel    wrd      wrd    act  set  set  set  dne        st   en
        //           rdy  val  val  rdy                           sel                     sel      sel                         
        test_outputs(n,   n,   n,   y,   n,   n,   n,   n,   y,   dc,    y,   n,   FLUSH, dc,      EVICT, w,   y,   n,   n,   n,    FL,   FL,  n);

        $display("");
        $display("All flushed, wait for flush deassertion");
        delay( $urandom_range(0, 127) );
        //         mem  mem    mem     mem     mem  cac  cac  cac     cac     fsh  all  tar  lin  lne  req  res
        //         req  req    req     req     res  req  res  res     res          fsh  mat  dty  val  dne  dne
        //         val  typ    adr     dat     rdy  rdy  val  typ     dat                              
        set_inputs(n,   r,     32'dx,  32'dx,  n,   y,   y,   WRITE,  32'dx,  y,   y,   y,   n,   y,   n,   n);

        @(negedge clk);
        //           mem  mem  cac  cac  tar  tar  req  res  cnt  wrt    dar  dar  idx    wrt      rd     mem  cln  dty  val  fsh   st   nxt  inp
        //           req  res  req  res  en   wen  en   en   rst  dat    en   wen  sel    wrd      wrd    act  set  set  set  dne        st   en
        //           rdy  val  val  rdy                           sel                     sel      sel                         
        test_outputs(y,   n,   n,   n,   n,   n,   n,   n,   y,   dc,    n,   n,   dc,    dc,      dc,    dc,  n,   n,   n,   y,    FL,   FL,  y);

        $display("");
        $display("Flush deasserted, transition to ID");
        delay( $urandom_range(0, 127) );
        @(negedge clk);
        //         mem  mem    mem     mem     mem  cac  cac  cac     cac     fsh  all  tar  lin  lne  req  res
        //         req  req    req     req     res  req  res  res     res          fsh  mat  dty  val  dne  dne
        //         val  typ    adr     dat     rdy  rdy  val  typ     dat                              
        set_inputs(n,   r,     32'dx,  32'dx,  n,   y,   y,   WRITE,  32'dx,  n,   y,   n,   n,   y,   n,   n);

        @(negedge clk);
        //           mem  mem  cac  cac  tar  tar  req  res  cnt  wrt    dar  dar  idx    wrt      rd     mem  cln  dty  val  fsh   st   nxt  inp
        //           req  res  req  res  en   wen  en   en   rst  dat    en   wen  sel    wrd      wrd    act  set  set  set  dne        st   en
        //           rdy  val  val  rdy                           sel                     sel      sel                         
        test_outputs(y,   n,   n,   n,   n,   n,   n,   n,   y,   dc,    n,   n,   dc,    dc,      dc,    dc,  n,   n,   n,   n,    ID, ID,  y);

        delay( $urandom_range(0, 127) );

        $display();
        $display("All tests passed!");
        $finish();

    end

    task delay( int delay_val );
      begin
          for( int i = 0; i < delay_val; i = i + 1 ) begin
              #1;
          end
      end
    endtask

    function void set_inputs
    (
        input logic t_memreq_val,
        input logic t_incoming_mem_type,
        input logic [31:0] t_memreq_msg_addr,
        input logic [31:0] t_memreq_msg_data,

        input logic t_memresp_rdy,

        input logic t_cache_req_rdy,

        input logic t_cache_resp_val,
        input logic [2:0] t_cache_resp_msg_type,
        input logic [31:0] t_cache_resp_msg_data,

        input logic t_flush,
        input logic t_all_flushed,

        input logic t_tarray_match,
        input logic t_line_dirty,
        input logic t_line_valid,

        input logic t_req_count_done,
        input logic t_resp_count_done,
    );
    begin
        assign memreq_val = t_memreq_val;
        assign incoming_mem_type = t_incoming_mem_type;
        assign memreq_msg.addr = t_memreq_msg_addr;
        assign memreq_msg.data = t_memreq_msg_data;

        assign memresp_rdy = t_memresp_rdy;

        assign cache_req_rdy = t_cache_req_rdy;

        assign cache_resp_val = t_cache_resp_val;
        assign cache_resp_msg.type_ = t_cache_resp_msg_type;
        assign cache_resp_msg.data = t_cache_resp_msg_data;

        assign flush = t_flush;
        assign all_flushed = t_all_flushed;

        assign tarray_match = t_tarray_match;
        assign line_dirty = t_line_dirty;
        assign line_valid = t_line_valid;

        assign req_count_done = t_req_count_done;
        assign resp_count_done = t_resp_count_done;
    end
    endfunction

    function void test_outputs
    (
        input logic t_memreq_rdy,

        input logic t_memresp_val,

        input logic t_cache_req_val,

        input logic t_cache_resp_rdy,

        input logic t_tarray_en,
        input logic t_tarray_wen,

        input logic t_req_count_en,
        input logic t_resp_count_en,
        input logic t_count_reset,

        input logic t_write_data_sel,
        input logic t_darray_en,
        input logic t_darray_wen,
        input logic t_index_sel,
        input logic t_write_word_sel,
        input logic t_read_word_sel,
        input logic t_mem_action,

        input logic t_clean_set,
        input logic t_dirty_set,
        input logic t_valid_set,

        input logic t_flush_done,

        input logic [2:0] t_state,
        input logic [2:0] t_nextState,

        input logic t_input_en
    );
    begin
        assert(memreq_rdy == t_memreq_rdy) begin
            $display("memreq_rdy is correct.  Expected: %h, Actual: %h", t_memreq_rdy,memreq_rdy); pass();
        end else begin
            $display("memreq_rdy is incorrect.  Expected: %h, Actual: %h", t_memreq_rdy,memreq_rdy); fail(); $finish();
        end
        
        assert(memresp_val == t_memresp_val) begin
            $display("memresp_val is correct.  Expected: %h, Actual: %h", t_memresp_val,memresp_val); pass();
        end else begin
            $display("memresp_val is incorrect.  Expected: %h, Actual: %h", t_memresp_val,memresp_val); fail(); $finish();
        end

        assert(cache_req_val == t_cache_req_val) begin
            $display("cache_req_val is correct.  Expected: %h, Actual: %h", t_cache_req_val,cache_req_val); pass();
        end else begin
            $display("cache_req_val is incorrect.  Expected: %h, Actual: %h", t_cache_req_val,cache_req_val); fail(); $finish();
        end

        assert(cache_resp_rdy == t_cache_resp_rdy) begin
            $display("cache_resp_rdy is correct.  Expected: %h, Actual: %h", t_cache_resp_rdy,cache_resp_rdy); pass();
        end else begin
            $display("cache_resp_rdy is incorrect.  Expected: %h, Actual: %h", t_cache_resp_rdy,cache_resp_rdy); fail(); $finish();
        end

        assert(tarray_en == t_tarray_en) begin
            $display("tarray_en is correct.  Expected: %h, Actual: %h", t_tarray_en,tarray_en); pass();
        end else begin
            $display("tarray_en is incorrect.  Expected: %h, Actual: %h", t_tarray_en,tarray_en); fail(); $finish();
        end

        assert(tarray_en == t_tarray_en) begin
            $display("tarray_en is correct.  Expected: %h, Actual: %h", t_tarray_en,tarray_en); pass();
        end else begin
            $display("tarray_en is incorrect.  Expected: %h, Actual: %h", t_tarray_en,tarray_en); fail(); $finish();
        end

        assert(tarray_wen == t_tarray_wen) begin
            $display("tarray_en is correct.  Expected: %h, Actual: %h", t_tarray_wen,tarray_wen); pass();
        end else begin
            $display("tarray_en is incorrect.  Expected: %h, Actual: %h", t_tarray_wen,tarray_wen); fail(); $finish();
        end

        assert(req_count_en == t_req_count_en) begin
            $display("req_count_en is correct.  Expected: %h, Actual: %h", t_req_count_en,req_count_en); pass();
        end else begin
            $display("req_count_en is incorrect.  Expected: %h, Actual: %h", t_req_count_en,req_count_en); fail(); $finish();
        end

        assert(resp_count_en == t_resp_count_en) begin
            $display("resp_count_en is correct.  Expected: %h, Actual: %h", t_resp_count_en,resp_count_en); pass();
        end else begin
            $display("resp_count_en is incorrect.  Expected: %h, Actual: %h", t_resp_count_en,resp_count_en); fail(); $finish();
        end

        assert(count_reset == t_count_reset) begin
            $display("count_reset is correct.  Expected: %h, Actual: %h", t_count_reset,count_reset); pass();
        end else begin
            $display("count_reset is incorrect.  Expected: %h, Actual: %h", t_count_reset,count_reset); fail(); $finish();
        end

        assert(write_data_sel == t_write_data_sel) begin
            $display("write_data_sel is correct.  Expected: %h, Actual: %h", t_write_data_sel,write_data_sel); pass();
        end else begin
            $display("write_data_sel is incorrect.  Expected: %h, Actual: %h", t_write_data_sel,write_data_sel); fail(); $finish();
        end

        assert(darray_en == t_darray_en) begin
            $display("darray_en is correct.  Expected: %h, Actual: %h", t_darray_en,darray_en); pass();
        end else begin
            $display("darray_en is incorrect.  Expected: %h, Actual: %h", t_darray_en,darray_en); fail(); $finish();
        end

        assert(darray_wen == t_darray_wen) begin
            $display("darray_wen is correct.  Expected: %h, Actual: %h", t_darray_wen,darray_wen); pass();
        end else begin
            $display("darray_wen is incorrect.  Expected: %h, Actual: %h", t_darray_wen,darray_wen); fail(); $finish();
        end

        assert(index_sel == t_index_sel) begin
            $display("index_sel is correct.  Expected: %h, Actual: %h", t_index_sel,index_sel); pass();
        end else begin
            $display("index_sel is incorrect.  Expected: %h, Actual: %h", t_index_sel,index_sel); fail(); $finish();
        end

        assert(write_word_sel == t_write_word_sel) begin
            $display("write_word_sel is correct.  Expected: %h, Actual: %h", t_write_word_sel,write_word_sel); pass();
        end else begin
            $display("write_word_sel is incorrect.  Expected: %h, Actual: %h", t_write_word_sel,write_word_sel); fail(); $finish();
        end

        assert(read_word_sel == t_read_word_sel) begin
            $display("read_word_sel is correct.  Expected: %h, Actual: %h", t_read_word_sel,read_word_sel); pass();
        end else begin
            $display("read_word_sel is incorrect.  Expected: %h, Actual: %h", t_read_word_sel,read_word_sel); fail(); $finish();
        end

        assert(mem_action == t_mem_action) begin
            $display("mem_action is correct.  Expected: %h, Actual: %h", t_mem_action,mem_action); pass();
        end else begin
            $display("mem_action is incorrect.  Expected: %h, Actual: %h", t_mem_action,mem_action); fail(); $finish();
        end

        assert(mem_action == t_mem_action) begin
            $display("mem_action is correct.  Expected: %h, Actual: %h", t_mem_action,mem_action); pass();
        end else begin
            $display("mem_action is incorrect.  Expected: %h, Actual: %h", t_mem_action,mem_action); fail(); $finish();
        end

        assert(clean_set == t_clean_set) begin
            $display("clean_set is correct.  Expected: %h, Actual: %h", t_clean_set,clean_set); pass();
        end else begin
            $display("clean_set is incorrect.  Expected: %h, Actual: %h", t_clean_set,clean_set); fail(); $finish();
        end

        assert(dirty_set == t_dirty_set) begin
            $display("dirty_set is correct.  Expected: %h, Actual: %h", t_dirty_set,dirty_set); pass();
        end else begin
            $display("dirty_set is incorrect.  Expected: %h, Actual: %h", t_dirty_set,dirty_set); fail(); $finish();
        end

        assert(valid_set == t_valid_set) begin
            $display("valid_set is correct.  Expected: %h, Actual: %h", t_valid_set,valid_set); pass();
        end else begin
            $display("valid_set is incorrect.  Expected: %h, Actual: %h", t_valid_set,valid_set); fail(); $finish();
        end

        assert(flush_done == t_flush_done) begin
            $display("flush_done is correct.  Expected: %h, Actual: %h", t_flush_done,flush_done); pass();
        end else begin
            $display("flush_done is incorrect.  Expected: %h, Actual: %h", t_flush_done,flush_done); fail(); $finish();
        end

        assert(state == t_state) begin
            $display("state is correct.  Expected: %h, Actual: %h", t_state,state); pass();
        end else begin
            $display("state is incorrect.  Expected: %h, Actual: %h", t_state,state); fail(); $finish();
        end

        assert(DUT.nextState == t_nextState) begin
            $display("nextState is correct.  Expected: %h, Actual: %h", t_nextState,DUT.nextState); pass();
        end else begin
            $display("nextState is incorrect.  Expected: %h, Actual: %h", t_nextState,DUT.nextState); fail(); $finish();
        end

        assert(input_en == t_input_en) begin
            $display("input_en is correct.  Expected: %h, Actual: %h", t_input_en,input_en); pass();
        end else begin
            $display("input_en is incorrect.  Expected: %h, Actual: %h", t_input_en,input_en); fail(); $finish();
        end
        
    end
    endfunction

endmodule
