//========================================================================
// utb_CacheAltCtrl
//========================================================================
// A basic Verilog unit test bench for the Cache Alt Datapath module

`default_nettype none
`timescale 1ps/1ps

`include "CacheAltDpath.v"
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
    logic tarray0_match;
    logic tarray1_match;
    logic line0_dirty;
    logic line1_dirty;
    logic line0_valid;
    logic line1_valid;
    logic incoming_mem_type;

    logic req_count_done;
    logic resp_count_done;
    logic flush_way_sel;

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
    logic way_select;

    logic clean_set;
    logic dirty_set;

    logic valid_set;
    logic [2:0] state;

    lab3_cache_CacheAltDpath DUT
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

    // FSM states
    localparam ID = 3'd0; // Idle
    localparam MT = 3'd1; // Check tag
    localparam E0 = 3'd2; // Evict data
    localparam R0 = 3'd3; // Refill data
    localparam MD = 3'd4; // Data access (R/W)
    localparam FL = 3'd5; // Flush

    // Mem action
    localparam READ = `VC_MEM_REQ_MSG_TYPE_READ;
    localparam WRITE = `VC_MEM_REQ_MSG_TYPE_WRITE;
    localparam DCMEM = 3'dx;

    initial begin
        //--------------------------------------------------------------------
        // Unit Test 1: Read Miss + Refill
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.

        $display("");
        $display("---------------------------------------");
        $display("Unit Test 1: Read Miss + Refill");
        $display("---------------------------------------");

        reset = 1;
        @(negedge clk);
        reset = 0;
        //         fsh  fsh  inp  tar  tar  req  res  cnt  wrt   dar  dar  idx  wrt  rd   mem  cln  dty  val  st  mem           mem     mem    cac    cac   way
        //              dne  en   en   wen  cnt  cnt  res  dat   en   wen  sel  wrd  wrd  act  set  set  set      adr           dat     typ    res    res   sel
        //                                  en   en        sel                  sel  sel                                                       dat    typ
        set_inputs(n,   n,   y,   y,   n,   n,   n,   y,   PROC, n,   n,   IDX, OFF, OFF, dc,  n,   n,   n,   MT, 32'hFFFFFFFF, 32'hx,  READ,  32'dx, 3'dx, 0);

        $display("");
        $display("Simulate read miss inputs in MT for way 0");
        @(negedge clk);
        //           ta0  ta1  ln0  ln1  ln0  ln1  inc  req  res  all  mem   mem    cac   cac           cac    d      wrt   rd    wrt    dt0    dt1    vl0    vl1    fsh   fsh
        //           mat  mat  dty  dty  val  val  mem  cnt  cnt  fsh  res   res    req   req           req    idx    wrd   wrd   dat                                idx   way
        //                                         typ  dne  dne       typ   dat    typ   adr           dat           off   off                                            sel
        test_outputs(n,   n,   n,   n,   n,   n,   r,   n,   n,   y,   3'dx, 32'dx, 3'dx, 32'hFFFFFFC3, 32'dx, 5'h1F, 4'hF, 4'hF, 32'dx, 32'd0, 32'd0, 32'd0, 32'd0, 5'dx, 1);

        delay( $urandom_range(0, 127) );

        $display("");
        $display("Refilling initialize");
        //         fsh  fsh  inp  tar  tar  req  res  cnt  wrt   dar  dar  idx  wrt     rd   mem  cln  dty  val  st  mem           mem     mem   cac           cac   way
        //              dne  en   en   wen  cnt  cnt  res  dat   en   wen  sel  wrd     wrd  act  set  set  set      adr           dat     typ   res           res   sel
        //                                  en   en        sel                  sel     sel                                                      dat           typ
        set_inputs(n,   n,   n,   y,   y,   y,   y,   n,   IMEM, y,   y,   IDX, REFILL, dc,  r,   n,   n,   y,   R0, 32'hFFFFFFFF, 32'hx,  READ, 32'hFFFFFFFF, READ, 0);

        @(negedge clk);
        //           ta0  ta1  ln0  ln1  ln0  ln1  inc  req  res  all  mem   mem    cac   cac           cac    d      wrt   rd    wrt           dt0    dt1    vl0           vl1    fsh   fsh
        //           mat  mat  dty  dty  val  val  mem  cnt  cnt  fsh  res   res    req   req           req    idx    wrd   wrd   dat                                              idx   way
        //                                         typ  dne  dne       typ   dat    typ   adr           dat           off   off                                                          sel
        test_outputs(y,   n,   n,   n,   y,   n,   r,   n,   n,   y,   3'dx, 32'dx, READ, 32'hFFFFFFC7, 32'dx, 5'h1F, 4'd1, 4'hF, 32'hFFFFFFFF, 32'd0, 32'd0, 32'h80000000, 32'd0, 5'dx, 1);

        $display("");
        $display("Refilling cycle 1");
        @(negedge clk); // One request has already been made
        //           ta0  ta1  ln0  ln1  ln0  ln1  inc  req  res  all  mem   mem    cac   cac           cac    d      wrt   rd    wrt           dt0    dt1    vl0           vl1    fsh   fsh
        //           mat  mat  dty  dty  val  val  mem  cnt  cnt  fsh  res   res    req   req           req    idx    wrd   wrd   dat                                              idx   way
        //                                         typ  dne  dne       typ   dat    typ   adr           dat           off   off                                                          sel
        test_outputs(y,   n,   n,   n,   y,   n,   r,   n,   n,   y,   3'dx, 32'dx, READ, 32'hFFFFFFCB, 32'dx, 5'h1F, 4'd2, 4'hF, 32'hFFFFFFFF, 32'd0, 32'd0, 32'h80000000, 32'd0, 5'dx, 1);

        $display("");
        $display("Refilling cycle 2");
        @(negedge clk); // One request has already been made
        //           ta0  ta1  ln0  ln1  ln0  ln1  inc  req  res  all  mem   mem    cac   cac           cac    d      wrt   rd    wrt           dt0    dt1    vl0           vl1    fsh   fsh
        //           mat  mat  dty  dty  val  val  mem  cnt  cnt  fsh  res   res    req   req           req    idx    wrd   wrd   dat                                              idx   way
        //                                         typ  dne  dne       typ   dat    typ   adr           dat           off   off                                                          sel
        test_outputs(y,   n,   n,   n,   y,   n,   r,   n,   n,   y,   3'dx, 32'dx, READ, 32'hFFFFFFCF, 32'dx, 5'h1F, 4'd3, 4'hF, 32'hFFFFFFFF, 32'd0, 32'd0, 32'h80000000, 32'd0, 5'dx, 1);

        @(negedge clk);

        $display("");
        $display("Disable counters, save state until reenabled");
        //         fsh  fsh  inp  tar  tar  req  res  cnt  wrt   dar  dar  idx  wrt     rd   mem  cln  dty  val  st  mem           mem     mem   cac           cac   way
        //              dne  en   en   wen  cnt  cnt  res  dat   en   wen  sel  wrd     wrd  act  set  set  set      adr           dat     typ   res           res   sel
        //                                  en   en        sel                  sel     sel                                                      dat           typ
        set_inputs(n,   n,   n,   y,   y,   n,   n,   n,   IMEM, y,   y,   IDX, REFILL, dc,  r,   n,   n,   y,   R0, 32'hFFFFFFFF, 32'hx,  READ, 32'hFFFFFFFF, READ, 0);

        delay( $urandom_range(0, 127) );

        //           ta0  ta1  ln0  ln1  ln0  ln1  inc  req  res  all  mem   mem    cac   cac           cac    d      wrt   rd    wrt           dt0    dt1    vl0           vl1    fsh   fsh
        //           mat  mat  dty  dty  val  val  mem  cnt  cnt  fsh  res   res    req   req           req    idx    wrd   wrd   dat                                              idx   way
        //                                         typ  dne  dne       typ   dat    typ   adr           dat           off   off                                                          sel
        test_outputs(y,   n,   n,   n,   y,   n,   r,   n,   n,   y,   3'dx, 32'dx, READ, 32'hFFFFFFD3, 32'dx, 5'h1F, 4'd4, 4'hF, 32'hFFFFFFFF, 32'd0, 32'd0, 32'h80000000, 32'd0, 5'dx, 1);

        @(negedge clk);

        $display("");
        $display("Reenable counters, cycle 4");
        //         fsh  fsh  inp  tar  tar  req  res  cnt  wrt   dar  dar  idx  wrt     rd   mem  cln  dty  val  st  mem           mem     mem    cac          cac   way
        //              dne  en   en   wen  cnt  cnt  res  dat   en   wen  sel  wrd     wrd  act  set  set  set      adr           dat     typ    res          res   sel
        //                                  en   en        sel                  sel     sel                                                       dat          typ
        set_inputs(n,   n,   n,   y,   y,   y,   y,   n,   IMEM, y,   y,   IDX, REFILL, dc,  r,   n,   n,   y,   R0, 32'hFFFFFFFF, 32'hx,  READ, 32'hFFFFFFFF, READ, 0);

        @(negedge clk);
        //           ta0  ta1  ln0  ln1  ln0  ln1  inc  req  res  all  mem   mem    cac   cac           cac    d      wrt   rd    wrt           dt0    dt1    vl0           vl1    fsh   fsh
        //           mat  mat  dty  dty  val  val  mem  cnt  cnt  fsh  res   res    req   req           req    idx    wrd   wrd   dat                                              idx   way
        //                                         typ  dne  dne       typ   dat    typ   adr           dat           off   off                                                    sel
        test_outputs(y,   n,   n,   n,   y,   n,   r,   n,   n,   y,   3'dx, 32'dx, READ, 32'hFFFFFFD7, 32'dx, 5'h1F, 4'd5, 4'hF, 32'hFFFFFFFF, 32'd0, 32'd0, 32'h80000000, 32'd0, 5'dx, 1);

        @(negedge clk); // cycle 5
        @(negedge clk); // cycle 6
        @(negedge clk); // cycle 7
        @(negedge clk); // cycle 8
        @(negedge clk); // cycle 9
        @(negedge clk); // cycle 10
        @(negedge clk); // cycle 11
        @(negedge clk); // cycle 12
        @(negedge clk); // cycle 13
        @(negedge clk); // cycle 14
        @(negedge clk); // cycle 15

        $display("");
        $display("Counters done, output value to memresp data");
        //           ta0  ta1  ln0  ln1  ln0  ln1  inc  req  res  all  mem   mem           cac   cac           cac           d      wrt   rd    wrt           dt0    dt1    vl0           vl1    fsh   fsh
        //           mat  mat  dty  dty  val  val  mem  cnt  cnt  fsh  res   res           req   req           req           idx    wrd   wrd   dat                                              idx   way
        //                                         typ  dne  dne       typ   dat           typ   adr           dat                  off   off                                                          sel
        test_outputs(y,   n,   n,   n,   y,   n,   r,   y,   y,   y,   READ, 32'hFFFFFFFF, READ, 32'hFFFFFFC3, 32'hFFFFFFFF, 5'h1F, 4'd0, 4'hF, 32'hFFFFFFFF, 32'd0, 32'd0, 32'h80000000, 32'd0, 5'dx, 1);

        delay( $urandom_range(0, 127) );

        $display("");
        $display("Output data in MD state");        
        //         fsh  fsh  inp  tar  tar  req  res  cnt  wrt   dar  dar  idx  wrt  rd   mem  cln  dty  val  st  mem           mem     mem   cac           cac   way
        //              dne  en   en   wen  cnt  cnt  res  dat   en   wen  sel  wrd  wrd  act  set  set  set      adr           dat     typ   res           res   sel
        //                                  en   en        sel                  sel  sel                                                      dat           typ
        set_inputs(n,   n,   y,   n,   n,   n,   n,   y,   PROC, y,   n,   IDX, OFF, OFF, dc,  n,   n,   y,   MD, 32'hFFFFFFFF, 32'hx,  READ, 32'hFFFFFFFF, READ, 0);

        @(negedge clk);
        //           ta0  ta1  ln0  ln1  ln0  ln1  inc  req  res  all  mem   mem           cac   cac           cac           d      wrt   rd    wrt    dt0    dt1    vl0           vl1    fsh   fsh
        //           mat  mat  dty  dty  val  val  mem  cnt  cnt  fsh  res   res           req   req           req           idx    wrd   wrd   dat                                       idx   way
        //                                         typ  dne  dne       typ   dat           typ   adr           dat                  off   off                                                   sel
        test_outputs(y,   n,   n,   n,   y,   n,   r,   n,   n,   y,   READ, 32'hFFFFFFFF, READ, 32'hFFFFFFC3, 32'hFFFFFFFF, 5'h1F, 4'hF, 4'hF, 32'd0, 32'd0, 32'd0, 32'h80000000, 32'd0, 5'dx, 1);

        delay( $urandom_range(0, 127) );





        @(negedge clk);
        //         fsh  fsh  inp  tar  tar  req  res  cnt  wrt   dar  dar  idx  wrt  rd   mem  cln  dty  val  st  mem           mem     mem    cac    cac   way
        //              dne  en   en   wen  cnt  cnt  res  dat   en   wen  sel  wrd  wrd  act  set  set  set      adr           dat     typ    res    res   sel
        //                                  en   en        sel                  sel  sel                                                       dat    typ
        set_inputs(n,   n,   y,   y,   n,   n,   n,   y,   PROC, n,   n,   IDX, OFF, OFF, dc,  n,   n,   n,   MT, 32'h000016A0, 32'hx,  READ,  32'dx, 3'dx, 1);

        $display("");
        $display("Simulate read miss inputs in MT for way 1");
        @(negedge clk);
        //           ta0  ta1  ln0  ln1  ln0  ln1  inc  req  res  all  mem   mem    cac   cac           cac    d      wrt   rd    wrt    dt0    dt1    vl0           vl1    fsh   fsh
        //           mat  mat  dty  dty  val  val  mem  cnt  cnt  fsh  res   res    req   req           req    idx    wrd   wrd   dat                                       idx   way
        //                                         typ  dne  dne       typ   dat    typ   adr           dat           off   off                                                   sel
        test_outputs(n,   n,   n,   n,   n,   n,   r,   n,   n,   y,   3'dx, 32'dx, 3'dx, 32'h00001680, 32'dx, 5'h1A, 4'h8, 4'h8, 32'dx, 32'd0, 32'd0, 32'h80000000, 32'd0, 5'dx, 1);

        delay( $urandom_range(0, 127) );

        $display("");
        $display("Refilling initialize");
        //         fsh  fsh  inp  tar  tar  req  res  cnt  wrt   dar  dar  idx  wrt     rd   mem  cln  dty  val  st  mem           mem     mem   cac           cac   way
        //              dne  en   en   wen  cnt  cnt  res  dat   en   wen  sel  wrd     wrd  act  set  set  set      adr           dat     typ   res           res   sel
        //                                  en   en        sel                  sel     sel                                                      dat           typ
        set_inputs(n,   n,   n,   y,   y,   y,   y,   n,   IMEM, y,   y,   IDX, REFILL, dc,  r,   n,   n,   y,   R0, 32'h000016A0, 32'hx,  READ, 32'hFFFFFFFF, READ, 1);

        @(negedge clk);
        //           ta0  ta1  ln0  ln1  ln0  ln1  inc  req  res  all  mem   mem    cac   cac           cac    d      wrt   rd    wrt           dt0    dt1    vl0           vl1           fsh   fsh
        //           mat  mat  dty  dty  val  val  mem  cnt  cnt  fsh  res   res    req   req           req    idx    wrd   wrd   dat                                                     idx   way
        //                                         typ  dne  dne       typ   dat    typ   adr           dat           off   off                                                                 sel
        test_outputs(n,   y,   n,   n,   n,   y,   r,   n,   n,   y,   3'dx, 32'dx, READ, 32'h00001684, 32'dx, 5'h1A, 4'h1, 4'h8, 32'hFFFFFFFF, 32'd0, 32'd0, 32'h80000000, 32'h04000000, 5'dx, 1);

        $display("");
        $display("Refilling cycle 1");
        @(negedge clk); // One request has already been made
        //           ta0  ta1  ln0  ln1  ln0  ln1  inc  req  res  all  mem   mem    cac   cac           cac    d      wrt   rd    wrt           dt0    dt1    vl0           vl1           fsh   fsh
        //           mat  mat  dty  dty  val  val  mem  cnt  cnt  fsh  res   res    req   req           req    idx    wrd   wrd   dat                                                     idx   way
        //                                         typ  dne  dne       typ   dat    typ   adr           dat           off   off                                                                 sel
        test_outputs(n,   y,   n,   n,   n,   y,   r,   n,   n,   y,   3'dx, 32'dx, READ, 32'h00001688, 32'dx, 5'h1A, 4'd2, 4'h8, 32'hFFFFFFFF, 32'd0, 32'd0, 32'h80000000, 32'h04000000, 5'dx, 1);

        $display("");
        $display("Refilling cycle 2");
        @(negedge clk); // One request has already been made
        //           ta0  ta1  ln0  ln1  ln0  ln1  inc  req  res  all  mem   mem    cac   cac           cac    d      wrt   rd    wrt           dt0    dt1    vl0           vl1           fsh   fsh
        //           mat  mat  dty  dty  val  val  mem  cnt  cnt  fsh  res   res    req   req           req    idx    wrd   wrd   dat                                                     idx   way
        //                                         typ  dne  dne       typ   dat    typ   adr           dat           off   off                                                                 sel
        test_outputs(n,   y,   n,   n,   n,   y,   r,   n,   n,   y,   3'dx, 32'dx, READ, 32'h0000168C, 32'dx, 5'h1A, 4'd3, 4'h8, 32'hFFFFFFFF, 32'd0, 32'd0, 32'h80000000, 32'h04000000, 5'dx, 1);

        @(negedge clk);

        $display("");
        $display("Disable counters, save state until reenabled");
        //         fsh  fsh  inp  tar  tar  req  res  cnt  wrt   dar  dar  idx  wrt     rd   mem  cln  dty  val  st  mem           mem     mem   cac           cac   way
        //              dne  en   en   wen  cnt  cnt  res  dat   en   wen  sel  wrd     wrd  act  set  set  set      adr           dat     typ   res           res   sel
        //                                  en   en        sel                  sel     sel                                                      dat           typ
        set_inputs(n,   n,   n,   y,   y,   n,   n,   n,   IMEM, y,   y,   IDX, REFILL, dc,  r,   n,   n,   y,   R0, 32'h000016A0, 32'hx,  READ, 32'hFFFFFFFF, READ, 1);

        delay( $urandom_range(0, 127) );

        //           ta0  ta1  ln0  ln1  ln0  ln1  inc  req  res  all  mem   mem    cac   cac           cac    d      wrt   rd    wrt           dt0    dt1    vl0           vl1           fsh   fsh
        //           mat  mat  dty  dty  val  val  mem  cnt  cnt  fsh  res   res    req   req           req    idx    wrd   wrd   dat                                                     idx   way
        //                                         typ  dne  dne       typ   dat    typ   adr           dat           off   off                                                                 sel
        test_outputs(n,   y,   n,   n,   n,   y,   r,   n,   n,   y,   3'dx, 32'dx, READ, 32'h00001690, 32'dx, 5'h1A, 4'd4, 4'h8, 32'hFFFFFFFF, 32'd0, 32'd0, 32'h80000000, 32'h04000000, 5'dx, 1);

        @(negedge clk);

        $display("");
        $display("Reenable counters, cycle 4");
        //         fsh  fsh  inp  tar  tar  req  res  cnt  wrt   dar  dar  idx  wrt     rd   mem  cln  dty  val  st  mem           mem     mem    cac          cac   way
        //              dne  en   en   wen  cnt  cnt  res  dat   en   wen  sel  wrd     wrd  act  set  set  set      adr           dat     typ    res          res   sel
        //                                  en   en        sel                  sel     sel                                                       dat          typ
        set_inputs(n,   n,   n,   y,   y,   y,   y,   n,   IMEM, y,   y,   IDX, REFILL, dc,  r,   n,   n,   y,   R0, 32'h000016A0, 32'hx,  READ, 32'hFFFFFFFF, READ, 1);

        @(negedge clk);
        //           ta0  ta1  ln0  ln1  ln0  ln1  inc  req  res  all  mem   mem    cac   cac           cac    d      wrt   rd    wrt           dt0    dt1    vl0           vl1           fsh   fsh
        //           mat  mat  dty  dty  val  val  mem  cnt  cnt  fsh  res   res    req   req           req    idx    wrd   wrd   dat                                                     idx   way
        //                                         typ  dne  dne       typ   dat    typ   adr           dat           off   off                                                                 sel
        test_outputs(n,   y,   n,   n,   n,   y,   r,   n,   n,   y,   3'dx, 32'dx, READ, 32'h00001694, 32'dx, 5'h1A, 4'd5, 4'h8, 32'hFFFFFFFF, 32'd0, 32'd0, 32'h80000000, 32'h04000000, 5'dx, 1);

        @(negedge clk); // cycle 5
        @(negedge clk); // cycle 6
        @(negedge clk); // cycle 7
        @(negedge clk); // cycle 8
        @(negedge clk); // cycle 9
        @(negedge clk); // cycle 10
        @(negedge clk); // cycle 11
        @(negedge clk); // cycle 12
        @(negedge clk); // cycle 13
        @(negedge clk); // cycle 14
        @(negedge clk); // cycle 15

        $display("");
        $display("Counters done, output value to memresp data");
        //           ta0  ta1  ln0  ln1  ln0  ln1  inc  req  res  all  mem   mem           cac   cac           cac           d      wrt   rd    wrt           dt0    dt1    vl0           vl1           fsh   fsh
        //           mat  mat  dty  dty  val  val  mem  cnt  cnt  fsh  res   res           req   req           req           idx    wrd   wrd   dat                                                     idx   way
        //                                         typ  dne  dne       typ   dat           typ   adr           dat                  off   off                                                                 sel
        test_outputs(n,   y,   n,   n,   n,   y,   r,   y,   y,   y,   READ, 32'hFFFFFFFF, READ, 32'h00001680, 32'hFFFFFFFF, 5'h1A, 4'd0, 4'h8, 32'hFFFFFFFF, 32'd0, 32'd0, 32'h80000000, 32'h04000000, 5'dx, 1);

        delay( $urandom_range(0, 127) );

        $display("");
        $display("Output data in MD state");        
        //         fsh  fsh  inp  tar  tar  req  res  cnt  wrt   dar  dar  idx  wrt  rd   mem  cln  dty  val  st  mem           mem     mem   cac           cac   way
        //              dne  en   en   wen  cnt  cnt  res  dat   en   wen  sel  wrd  wrd  act  set  set  set      adr           dat     typ   res           res   sel
        //                                  en   en        sel                  sel  sel                                                      dat           typ
        set_inputs(n,   n,   y,   n,   n,   n,   n,   y,   PROC, y,   n,   IDX, OFF, OFF, dc,  n,   n,   y,   MD, 32'h000016A0, 32'hx,  READ, 32'hFFFFFFFF, READ, 1);

        @(negedge clk);
        //           ta0  ta1  ln0  ln1  ln0  ln1  inc  req  res  all  mem   mem           cac   cac           cac           d      wrt   rd    wrt    dt0    dt1    vl0           vl1           fsh   fsh
        //           mat  mat  dty  dty  val  val  mem  cnt  cnt  fsh  res   res           req   req           req           idx    wrd   wrd   dat                                              idx   way
        //                                         typ  dne  dne       typ   dat           typ   adr           dat                  off   off                                                          sel
        test_outputs(n,   y,   n,   n,   n,   y,   r,   n,   n,   y,   READ, 32'hFFFFFFFF, READ, 32'h00001680, 32'hFFFFFFFF, 5'h1A, 4'h8, 4'h8, 32'd0, 32'd0, 32'd0, 32'h80000000, 32'h04000000, 5'dx, 1);

        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Test 2: Write Hit
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.

        $display("");
        $display("---------------------------------------");
        $display("Unit Test 2: Write Hit");
        $display("---------------------------------------");

        @(negedge clk);
        //         fsh  fsh  inp  tar  tar  req  res  cnt  wrt   dar  dar  idx  wrt  rd   mem  cln  dty  val  st  mem           mem     mem    cac    cac   way
        //              dne  en   en   wen  cnt  cnt  res  dat   en   wen  sel  wrd  wrd  act  set  set  set      adr           dat     typ    res    res   sel
        //                                  en   en        sel                  sel  sel                                                       dat    typ
        set_inputs(n,   n,   y,   y,   n,   n,   n,   y,   PROC, y,   y,   IDX, OFF, OFF, dc,  n,   n,   n,   ID, 32'hFFFFFFFF, 32'd0,  WRITE, 32'dx, 3'dx, 0);
        @(negedge clk);
        //         fsh  fsh  inp  tar  tar  req  res  cnt  wrt   dar  dar  idx  wrt  rd   mem  cln  dty  val  st  mem           mem     mem    cac    cac   way
        //              dne  en   en   wen  cnt  cnt  res  dat   en   wen  sel  wrd  wrd  act  set  set  set      adr           dat     typ    res    res   sel
        //                                  en   en        sel                  sel  sel                                                       dat    typ
        set_inputs(n,   n,   y,   y,   n,   n,   n,   y,   PROC, y,   y,   IDX, OFF, OFF, dc,  n,   y,   n,   MT, 32'hFFFFFFFF, 32'd0,  WRITE, 32'dx, 3'dx, 0);


        $display("");
        $display("Write hit in MT in way 0");
        @(negedge clk);
        //           ta0  ta1  ln0  ln1  ln0  ln1  inc  req  res  all  mem    mem    cac   cac           cac    d      wrt   rd    wrt    dt0           dt1    vl0           vl1           fsh    fsh
        //           mat  mat  dty  dty  val  val  mem  cnt  cnt  fsh  res    res    req   req           req    idx    wrd   wrd   dat                                                     idx    way
        //                                         typ  dne  dne       typ    dat    typ   adr           dat           off   off                                                                  sel
        test_outputs(y,   n,   y,   n,   y,   n,   w,   n,   n,   n,   WRITE, 32'dx, 3'dx, 32'hFFFFFFC3, 32'dx, 5'h1F, 4'hF, 4'hF, 32'd0, 32'h80000000, 32'd0, 32'h80000000, 32'h04000000, 5'h1F, 0);

        delay( $urandom_range(0, 127) );

        @(negedge clk);
        //         fsh  fsh  inp  tar  tar  req  res  cnt  wrt   dar  dar  idx  wrt  rd   mem  cln  dty  val  st  mem           mem     mem    cac    cac   way
        //              dne  en   en   wen  cnt  cnt  res  dat   en   wen  sel  wrd  wrd  act  set  set  set      adr           dat     typ    res    res   sel
        //                                  en   en        sel                  sel  sel                                                       dat    typ
        set_inputs(n,   n,   y,   y,   n,   n,   n,   y,   PROC, y,   y,   IDX, OFF, OFF, dc,  n,   n,   n,   ID, 32'h000016A0, 32'd0,  WRITE, 32'dx, 3'dx, 1);
        @(negedge clk);
        //         fsh  fsh  inp  tar  tar  req  res  cnt  wrt   dar  dar  idx  wrt  rd   mem  cln  dty  val  st  mem           mem     mem    cac    cac   way
        //              dne  en   en   wen  cnt  cnt  res  dat   en   wen  sel  wrd  wrd  act  set  set  set      adr           dat     typ    res    res   sel
        //                                  en   en        sel                  sel  sel                                                       dat    typ
        set_inputs(n,   n,   y,   y,   n,   n,   n,   y,   PROC, y,   y,   IDX, OFF, OFF, dc,  n,   y,   n,   MT, 32'h000016A0, 32'd0,  WRITE, 32'dx, 3'dx, 1);


        $display("");
        $display("Write hit in MT in way 1");
        @(negedge clk);
        //           ta0  ta1  ln0  ln1  ln0  ln1  inc  req  res  all  mem    mem    cac   cac           cac    d      wrt   rd    wrt    dt0           dt1           vl0           vl1           fsh    fsh
        //           mat  mat  dty  dty  val  val  mem  cnt  cnt  fsh  res    res    req   req           req    idx    wrd   wrd   dat                                                            idx    way
        //                                         typ  dne  dne       typ    dat    typ   adr           dat           off   off                                                                         sel
        test_outputs(n,   y,   n,   y,   n,   y,   w,   n,   n,   n,   WRITE, 32'dx, 3'dx, 32'h00001680, 32'dx, 5'h1A, 4'h8, 4'h8, 32'd0, 32'h80000000, 32'h04000000, 32'h80000000, 32'h04000000, 5'h1F, 0);

        //--------------------------------------------------------------------
        // Unit Test 3: Write Miss + Evict
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.

        $display("");
        $display("---------------------------------------");
        $display("Unit Test 3: Write Miss + Evict");
        $display("---------------------------------------");

        @(negedge clk);
        //         fsh  fsh  inp  tar  tar  req  res  cnt  wrt   dar  dar  idx  wrt  rd   mem  cln  dty  val  st  mem           mem            mem    cac    cac   way
        //              dne  en   en   wen  cnt  cnt  res  dat   en   wen  sel  wrd  wrd  act  set  set  set      adr           dat            typ    res    res   sel
        //                                  en   en        sel                  sel  sel                                                              dat    typ
        set_inputs(n,   n,   y,   y,   n,   n,   n,   y,   PROC, y,   n,   IDX, OFF, OFF, dc,  n,   n,   n,   MT, 32'h0FFFFFFF, 32'hFFFFFFFF,  WRITE, 32'dx, 3'dx, 0);

        $display("");
        $display("Write miss in MT - line0 is dirty");
        @(negedge clk);
        //           ta0  ta1  ln0  ln1  ln0  ln1  inc  req  res  all  mem    mem    cac   cac           cac    d      wrt   rd    wrt           dt0           dt1           vl0           vl1           fsh    fsh
        //           mat  mat  dty  dty  val  val  mem  cnt  cnt  fsh  res    res    req   req           req    idx    wrd   wrd   dat                                                                   idx    way
        //                                         typ  dne  dne       typ    dat    typ   adr           dat           off   off                                                                                sel
        test_outputs(n,   n,   y,   n,   y,   n,   w,   n,   n,   n,   WRITE, 32'dx, 3'dx, 32'h0FFFFFC3, 32'dx, 5'h1F, 4'hF, 4'hF, 32'hFFFFFFFF, 32'h80000000, 32'h04000000, 32'h80000000, 32'h04000000, 5'h1F, 0);

        @(negedge clk);
        //         fsh  fsh  inp  tar  tar  req  res  cnt  wrt   dar  dar  idx  wrt  rd     mem  cln  dty  val  st  mem           mem            mem    cac    cac   way
        //              dne  en   en   wen  cnt  cnt  res  dat   en   wen  sel  wrd  wrd    act  set  set  set      adr           dat            typ    res    res   sel
        //                                  en   en        sel                  sel  sel                                                                dat    typ
        set_inputs(n,   n,   n,   n,   n,   n,   n,   n,   PROC, y,   n,   IDX, OFF, EVICT, w,   y,   n,   n,   E0, 32'h0FFFFFFF, 32'hFFFFFFFF,  WRITE, 32'dx, 3'dx, 0);

        $display("");
        $display("Evict initialized - wait for mem ready");
        @(negedge clk);
        //           ta0  ta1  ln0  ln1  ln0  ln1  inc  req  res  all  mem    mem           cac    cac           cac           d      wrt   rd    wrt           dt0           dt1           vl0           vl1           fsh    fsh
        //           mat  mat  dty  dty  val  val  mem  cnt  cnt  fsh  res    res           req    req           req           idx    wrd   wrd   dat                                                                   idx    way
        //                                         typ  dne  dne       typ    dat           typ    adr           dat                  off   off                                                                                sel
        test_outputs(n,   n,   n,   n,   y,   n,   w,   n,   n,   n,   WRITE, 32'hFFFFFFFF, WRITE, 32'hFFFFFFC3, 32'hFFFFFFFF, 5'h1F, 4'hF, 4'd0, 32'hFFFFFFFF, 32'h00000000, 32'h04000000, 32'h80000000, 32'h04000000, 5'h1A, 1);

        delay( $urandom_range(0, 127) );

        @(negedge clk);
        //         fsh  fsh  inp  tar  tar  req  res  cnt  wrt   dar  dar  idx  wrt  rd     mem  cln  dty  val  st  mem           mem            mem    cac    cac   way
        //              dne  en   en   wen  cnt  cnt  res  dat   en   wen  sel  wrd  wrd    act  set  set  set      adr           dat            typ    res    res   sel
        //                                  en   en        sel                  sel  sel                                                                dat    typ
        set_inputs(n,   n,   n,   n,   n,   y,   y,   n,   PROC, y,   n,   IDX, OFF, EVICT, w,   y,   n,   n,   E0, 32'h0FFFFFFF, 32'hFFFFFFFF,  WRITE, 32'dx, 3'dx, 0);

        $display("");
        $display("Mem ready to receive and respond");
        @(negedge clk);
        //           ta0  ta1  ln0  ln1  ln0  ln1  inc  req  res  all  mem    mem           cac    cac           cac           d      wrt   rd    wrt           dt0           dt1           vl0           vl1           fsh    fsh
        //           mat  mat  dty  dty  val  val  mem  cnt  cnt  fsh  res    res           req    req           req           idx    wrd   wrd   dat                                                                   idx    way
        //                                         typ  dne  dne       typ    dat           typ    adr           dat                  off   off                                                                                sel
        test_outputs(n,   n,   n,   n,   y,   n,   w,   n,   n,   n,   WRITE, 32'hFFFFFFFF, WRITE, 32'hFFFFFFC7, 32'hFFFFFFFF, 5'h1F, 4'hF, 4'd1, 32'hFFFFFFFF, 32'h00000000, 32'h04000000, 32'h80000000, 32'h04000000, 5'h1A, 1);

        $display("");
        $display("Evict cycle 1");
        @(negedge clk);
        //           ta0  ta1  ln0  ln1  ln0  ln1  inc  req  res  all  mem    mem           cac    cac           cac           d      wrt   rd    wrt           dt0           dt1           vl0           vl1           fsh    fsh
        //           mat  mat  dty  dty  val  val  mem  cnt  cnt  fsh  res    res           req    req           req           idx    wrd   wrd   dat                                                                   idx    way
        //                                         typ  dne  dne       typ    dat           typ    adr           dat                  off   off                                                                                sel
        test_outputs(n,   n,   n,   n,   y,   n,   w,   n,   n,   n,   WRITE, 32'hFFFFFFFF, WRITE, 32'hFFFFFFCB, 32'hFFFFFFFF, 5'h1F, 4'hF, 4'd2, 32'hFFFFFFFF, 32'h00000000, 32'h04000000, 32'h80000000, 32'h04000000, 5'h1A, 1);

        @(negedge clk); // cycle 2
        @(negedge clk); // cycle 3
        @(negedge clk); // cycle 4
        @(negedge clk); // cycle 5
        @(negedge clk); // cycle 6
        @(negedge clk); // cycle 7
        @(negedge clk); // cycle 8
        @(negedge clk); // cycle 9
        @(negedge clk); // cycle 10
        @(negedge clk); // cycle 11
        @(negedge clk); // cycle 12
        @(negedge clk); // cycle 13

        $display("");
        $display("Evict cycle 14");
        //           ta0  ta1  ln0  ln1  ln0  ln1  inc  req  res  all  mem    mem           cac    cac           cac           d      wrt   rd     wrt           dt0           dt1           vl0           vl1           fsh    fsh
        //           mat  mat  dty  dty  val  val  mem  cnt  cnt  fsh  res    res           req    req           req           idx    wrd   wrd    dat                                                                   idx    way
        //                                         typ  dne  dne       typ    dat           typ    adr           dat                  off   off                                                                                 sel
        test_outputs(n,   n,   n,   n,   y,   n,   w,   n,   n,   n,   WRITE, 32'hFFFFFFFF, WRITE, 32'hFFFFFFFB, 32'hFFFFFFFF, 5'h1F, 4'hF, 4'd14, 32'hFFFFFFFF, 32'h00000000, 32'h04000000, 32'h80000000, 32'h04000000, 5'h1A, 1);

        @(negedge clk);
        $display("");
        $display("Evict cycle 15");
        //           ta0  ta1  ln0  ln1  ln0  ln1  inc  req  res  all  mem    mem           cac    cac           cac           d      wrt   rd     wrt           dt0           dt1           vl0           vl1           fsh    fsh
        //           mat  mat  dty  dty  val  val  mem  cnt  cnt  fsh  res    res           req    req           req           idx    wrd   wrd    dat                                                                   idx    way
        //                                         typ  dne  dne       typ    dat           typ    adr           dat                  off   off                                                                                 sel
        test_outputs(n,   n,   n,   n,   y,   n,   w,   n,   n,   n,   WRITE, 32'h00000000, WRITE, 32'hFFFFFFFF, 32'h00000000, 5'h1F, 4'hF, 4'd15, 32'hFFFFFFFF, 32'h00000000, 32'h04000000, 32'h80000000, 32'h04000000, 5'h1A, 1);




        delay( $urandom_range(0, 127) );
        @(negedge clk);
        //         fsh  fsh  inp  tar  tar  req  res  cnt  wrt   dar  dar  idx  wrt  rd   mem  cln  dty  val  st  mem           mem            mem    cac    cac   way
        //              dne  en   en   wen  cnt  cnt  res  dat   en   wen  sel  wrd  wrd  act  set  set  set      adr           dat            typ    res    res   sel
        //                                  en   en        sel                  sel  sel                                                              dat    typ
        set_inputs(n,   n,   y,   y,   n,   n,   n,   y,   PROC, y,   n,   IDX, OFF, OFF, dc,  n,   n,   n,   MT, 32'h000116A0, 32'hFFFFFFFF,  WRITE, 32'dx, 3'dx, 1);

        $display("");
        $display("Write miss in MT - line1 is dirty");
        @(negedge clk);
        //           ta0  ta1  ln0  ln1  ln0  ln1  inc  req  res  all  mem    mem    cac   cac           cac    d      wrt   rd    wrt           dt0           dt1           vl0           vl1           fsh    fsh
        //           mat  mat  dty  dty  val  val  mem  cnt  cnt  fsh  res    res    req   req           req    idx    wrd   wrd   dat                                                                   idx    way
        //                                         typ  dne  dne       typ    dat    typ   adr           dat           off   off                                                                                sel
        test_outputs(n,   n,   n,   y,   n,   y,   w,   n,   n,   n,   WRITE, 32'dx, 3'dx, 32'h00011680, 32'dx, 5'h1A, 4'h8, 4'h8, 32'hFFFFFFFF, 32'h00000000, 32'h04000000, 32'h80000000, 32'h04000000, 5'h1A, 1);

        @(negedge clk);
        //         fsh  fsh  inp  tar  tar  req  res  cnt  wrt   dar  dar  idx  wrt  rd     mem  cln  dty  val  st  mem           mem            mem    cac    cac   way
        //              dne  en   en   wen  cnt  cnt  res  dat   en   wen  sel  wrd  wrd    act  set  set  set      adr           dat            typ    res    res   sel
        //                                  en   en        sel                  sel  sel                                                                dat    typ
        set_inputs(n,   n,   n,   n,   n,   n,   n,   n,   PROC, y,   n,   IDX, OFF, EVICT, w,   y,   n,   n,   E0, 32'h000116A0, 32'hFFFFFFFF,  WRITE, 32'dx, 3'dx, 1);

        $display("");
        $display("Evict initialized - wait for mem ready");
        @(negedge clk);
        //           ta0  ta1  ln0  ln1  ln0  ln1  inc  req  res  all  mem    mem           cac    cac           cac           d      wrt   rd    wrt           dt0           dt1           vl0           vl1           fsh    fsh
        //           mat  mat  dty  dty  val  val  mem  cnt  cnt  fsh  res    res           req    req           req           idx    wrd   wrd   dat                                                                   idx    way
        //                                         typ  dne  dne       typ    dat           typ    adr           dat                  off   off                                                                                sel
        test_outputs(n,   n,   n,   n,   n,   y,   w,   n,   n,   y,   WRITE, 32'hFFFFFFFF, WRITE, 32'h00001680, 32'hFFFFFFFF, 5'h1A, 4'h8, 4'd0, 32'hFFFFFFFF, 32'h00000000, 32'h00000000, 32'h80000000, 32'h04000000, 5'h00, 1);

        delay( $urandom_range(0, 127) );

        @(negedge clk);
        //         fsh  fsh  inp  tar  tar  req  res  cnt  wrt   dar  dar  idx  wrt  rd     mem  cln  dty  val  st  mem           mem            mem    cac    cac   way
        //              dne  en   en   wen  cnt  cnt  res  dat   en   wen  sel  wrd  wrd    act  set  set  set      adr           dat            typ    res    res   sel
        //                                  en   en        sel                  sel  sel                                                                dat    typ
        set_inputs(n,   n,   n,   n,   n,   y,   y,   n,   PROC, y,   n,   IDX, OFF, EVICT, w,   y,   n,   n,   E0, 32'h0FFFFFFF, 32'hFFFFFFFF,  WRITE, 32'dx, 3'dx, 1);

        $display("");
        $display("Mem ready to receive and respond");
        @(negedge clk);
        //           ta0  ta1  ln0  ln1  ln0  ln1  inc  req  res  all  mem    mem           cac    cac           cac           d      wrt   rd    wrt           dt0           dt1           vl0           vl1           fsh    fsh
        //           mat  mat  dty  dty  val  val  mem  cnt  cnt  fsh  res    res           req    req           req           idx    wrd   wrd   dat                                                                   idx    way
        //                                         typ  dne  dne       typ    dat           typ    adr           dat                  off   off                                                                                sel
        test_outputs(n,   n,   n,   n,   n,   y,   w,   n,   n,   y,   WRITE, 32'hFFFFFFFF, WRITE, 32'h00001684, 32'hFFFFFFFF, 5'h1A, 4'h8, 4'd1, 32'hFFFFFFFF, 32'h00000000, 32'h00000000, 32'h80000000, 32'h04000000, 5'h00, 1);

        $display("");
        $display("Evict cycle 1");
        @(negedge clk);
        //           ta0  ta1  ln0  ln1  ln0  ln1  inc  req  res  all  mem    mem           cac    cac           cac           d      wrt   rd    wrt           dt0           dt1           vl0           vl1           fsh    fsh
        //           mat  mat  dty  dty  val  val  mem  cnt  cnt  fsh  res    res           req    req           req           idx    wrd   wrd   dat                                                                   idx    way
        //                                         typ  dne  dne       typ    dat           typ    adr           dat                  off   off                                                                                sel
        test_outputs(n,   n,   n,   n,   n,   y,   w,   n,   n,   y,   WRITE, 32'hFFFFFFFF, WRITE, 32'h00001688, 32'hFFFFFFFF, 5'h1A, 4'h8, 4'd2, 32'hFFFFFFFF, 32'h00000000, 32'h00000000, 32'h80000000, 32'h04000000, 5'h00, 1);

        @(negedge clk); // cycle 2
        @(negedge clk); // cycle 3
        @(negedge clk); // cycle 4
        @(negedge clk); // cycle 5
        @(negedge clk); // cycle 6
        @(negedge clk); // cycle 7
        @(negedge clk); // cycle 8
        @(negedge clk); // cycle 9
        @(negedge clk); // cycle 10
        @(negedge clk); // cycle 11
        @(negedge clk); // cycle 12
        @(negedge clk); // cycle 13

        $display("");
        $display("Evict cycle 14");
        //           ta0  ta1  ln0  ln1  ln0  ln1  inc  req  res  all  mem    mem           cac    cac           cac           d      wrt   rd     wrt           dt0           dt1           vl0           vl1           fsh    fsh
        //           mat  mat  dty  dty  val  val  mem  cnt  cnt  fsh  res    res           req    req           req           idx    wrd   wrd    dat                                                                   idx    way
        //                                         typ  dne  dne       typ    dat           typ    adr           dat                  off   off                                                                                 sel
        test_outputs(n,   n,   n,   n,   n,   y,   w,   n,   n,   y,   WRITE, 32'hFFFFFFFF, WRITE, 32'h000016B8, 32'hFFFFFFFF, 5'h1A, 4'h8, 4'd14, 32'hFFFFFFFF, 32'h00000000, 32'h00000000, 32'h80000000, 32'h04000000, 5'h00, 1);

        @(negedge clk);
        $display("");
        $display("Evict cycle 15");
        //           ta0  ta1  ln0  ln1  ln0  ln1  inc  req  res  all  mem    mem           cac    cac           cac           d      wrt   rd     wrt           dt0           dt1           vl0           vl1           fsh    fsh
        //           mat  mat  dty  dty  val  val  mem  cnt  cnt  fsh  res    res           req    req           req           idx    wrd   wrd    dat                                                                   idx    way
        //                                         typ  dne  dne       typ    dat           typ    adr           dat                  off   off                                                                                 sel
        test_outputs(n,   n,   n,   n,   n,   y,   w,   n,   n,   y,   WRITE, 32'hFFFFFFFF, WRITE, 32'h000016BC, 32'hFFFFFFFF, 5'h1A, 4'h8, 4'd15, 32'hFFFFFFFF, 32'h00000000, 32'h00000000, 32'h80000000, 32'h04000000, 5'h00, 1);

        //--------------------------------------------------------------------
        // Unit Test 4: Flush
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.

        $display("");
        $display("---------------------------------------");
        $display("Unit Test 4: Flush");
        $display("---------------------------------------");

        reset = 1;
        @(negedge clk);
        reset = 0;

        $display("");
        $display("Fill dirty and valid arrays for flush");
        for (int i = 0; i <= 6'd32; i += 1) begin
            @(negedge clk);
            //         fsh  fsh  inp  tar  tar  req  res  cnt  wrt   dar  dar  idx  wrt  rd   mem  cln  dty  val  st  mem                    mem     mem    cac    cac   way
            //              dne  en   en   wen  cnt  cnt  res  dat   en   wen  sel  wrd  wrd  act  set  set  set      adr                    dat     typ    res    res   sel
            //                                  en   en        sel                  sel  sel                                                                dat    typ
            set_inputs(n,   n,   y,   y,   n,   n,   n,   y,   PROC, n,   n,   IDX, OFF, OFF, dc,  n,   y,   y,   MT, {21'd0, i[4:0], 6'd0}, 32'hx,  READ,  32'dx, 3'd0, 0);
            
            @(negedge clk);
            //         fsh  fsh  inp  tar  tar  req  res  cnt  wrt   dar  dar  idx  wrt  rd   mem  cln  dty  val  st  mem                    mem     mem    cac    cac   way
            //              dne  en   en   wen  cnt  cnt  res  dat   en   wen  sel  wrd  wrd  act  set  set  set      adr                    dat     typ    res    res   sel
            //                                  en   en        sel                  sel  sel                                                                dat    typ
            set_inputs(n,   n,   y,   y,   n,   n,   n,   y,   PROC, n,   n,   IDX, OFF, OFF, dc,  n,   y,   y,   MT, {21'd0, i[4:0], 6'd0}, 32'hx,  READ,  32'dx, 3'd0, 1);
        end

        $display("");
        $display("Confirm dirty");
        @(negedge clk);
        //           ta0  ta1  ln0  ln1  ln0  ln1  inc  req  res  all  mem   mem    cac    cac   cac    d     wrt   rd    wrt    dt0           dt1           vl0           vl1           fsh    fsh
        //           mat  mat  dty  dty  val  val  mem  cnt  cnt  fsh  res   res    req    req   req    idx   wrd   wrd   dat                                                            idx    way
        //                                         typ  dne  dne       typ   dat    typ    adr   dat          off   off                                                                         sel
        test_outputs(y,   y,   y,   y,   y,   y,   r,   n,   n,   n,   3'dx, 32'dx, 3'dx, 32'd0, 32'dx, 5'd0, 4'd0, 4'd0, 32'd0, 32'hFFFFFFFF, 32'hFFFFFFFF, 32'hFFFFFFFF, 32'hFFFFFFFF, 5'd0,  0);

        delay( $urandom_range(0, 127) );

        $display("");
        $display("Flush signal obtained - flush");
        @(negedge clk);
        //         fsh  fsh  inp  tar  tar  req  res  cnt  wrt   dar  dar  idx    wrt  rd     mem  cln  dty  val  st  mem     mem     mem    cac    cac   way
        //              dne  en   en   wen  cnt  cnt  res  dat   en   wen  sel    wrd  wrd    act  set  set  set      adr     dat     typ    res    res   sel
        //                                  en   en        sel                    sel  sel                                                   dat    typ
        set_inputs(y,   n,   n,   n,   n,   y,   y,   n,   PROC, n,   n,   FLUSH, OFF, EVICT, w,   n,   n,   n,   FL, 32'd0,  32'hx,  READ,  32'dx, 3'd0, 0);

        @(negedge clk);
        //           ta0  ta1  ln0  ln1  ln0  ln1  inc  req  res  all  mem   mem    cac    cac    cac    d      wrt   rd    wrt    dt0           dt1           vl0           vl1           fsh    fsh
        //           mat  mat  dty  dty  val  val  mem  cnt  cnt  fsh  res   res    req    req    req    idx    wrd   wrd   dat                                                            idx    way
        //                                         typ  dne  dne       typ   dat    typ    adr    dat           off   off                                                                         sel
        test_outputs(y,   y,   y,   y,   y,   y,   r,   n,   n,   n,   3'dx, 32'dx, WRITE, 32'd4, 32'dx, 5'd0,  4'd0, 4'd1, 32'd0, 32'hFFFFFFFF, 32'hFFFFFFFF, 32'hFFFFFFFF, 32'hFFFFFFFF, 5'd0,  0);

        $display("");
        $display("Flush cycle 2");
        @(negedge clk);
        //           ta0  ta1  ln0  ln1  ln0  ln1  inc  req  res  all  mem   mem    cac    cac    cac    d      wrt   rd    wrt    dt0           dt1           vl0           vl1           fsh    fsh
        //           mat  mat  dty  dty  val  val  mem  cnt  cnt  fsh  res   res    req    req    req    idx    wrd   wrd   dat                                                            idx    way
        //                                         typ  dne  dne       typ   dat    typ    adr    dat           off   off                                                                         sel
        test_outputs(y,   y,   y,   y,   y,   y,   r,   n,   n,   n,   3'dx, 32'dx, WRITE, 32'd8, 32'dx, 5'd0,  4'd0, 4'd2, 32'd0, 32'hFFFFFFFF, 32'hFFFFFFFF, 32'hFFFFFFFF, 32'hFFFFFFFF, 5'd0,  0);

        for (int i = 0; i <= 5'd13; i += 1) @(negedge clk);

        $display("");
        $display("Flush done");
        //           ta0  ta1  ln0  ln1  ln0  ln1  inc  req  res  all  mem   mem    cac    cac    cac    d      wrt   rd    wrt    dt0           dt1           vl0           vl1           fsh    fsh
        //           mat  mat  dty  dty  val  val  mem  cnt  cnt  fsh  res   res    req    req    req    idx    wrd   wrd   dat                                                            idx    way
        //                                         typ  dne  dne       typ   dat    typ    adr    dat           off   off                                                                         sel
        test_outputs(y,   y,   y,   y,   y,   y,   r,   y,   y,   n,   3'dx, 32'dx, WRITE, 32'd0, 32'dx, 5'd0,  4'd0, 4'd0, 32'd0, 32'hFFFFFFFF, 32'hFFFFFFFF, 32'hFFFFFFFF, 32'hFFFFFFFF, 5'd0,  0);
        //         fsh  fsh  inp  tar  tar  req  res  cnt  wrt   dar  dar  idx    wrt  rd     mem  cln  dty  val  st  mem     mem     mem    cac    cac   way
        //              dne  en   en   wen  cnt  cnt  res  dat   en   wen  sel    wrd  wrd    act  set  set  set      adr     dat     typ    res    res   sel
        //                                  en   en        sel                    sel  sel                                                   dat    typ
        set_inputs(y,   n,   n,   n,   n,   y,   y,   y,   PROC, n,   n,   FLUSH, OFF, EVICT, w,   y,   n,   n,   FL, 32'd0,  32'hx,  READ,  32'dx, 3'd0, 0);

        $display("");
        $display("First line flushed - flush next line");
        @(negedge clk);
        //         fsh  fsh  inp  tar  tar  req  res  cnt  wrt   dar  dar  idx    wrt  rd     mem  cln  dty  val  st  mem     mem     mem    cac    cac   way
        //              dne  en   en   wen  cnt  cnt  res  dat   en   wen  sel    wrd  wrd    act  set  set  set      adr     dat     typ    res    res   sel
        //                                  en   en        sel                    sel  sel                                                   dat    typ
        set_inputs(y,   n,   n,   n,   n,   y,   y,   n,   PROC, n,   n,   FLUSH, OFF, EVICT, w,   n,   n,   n,   FL, 32'd0,  32'hx,  READ,  32'dx, 3'd0, 0);


        @(negedge clk);
        //           ta0  ta1  ln0  ln1  ln0  ln1  inc  req  res  all  mem   mem    cac    cac      cac    d      wrt   rd    wrt    dt0           dt1           vl0           vl1           fsh    fsh
        //           mat  mat  dty  dty  val  val  mem  cnt  cnt  fsh  res   res    req    req      req    idx    wrd   wrd   dat                                                            idx    way
        //                                         typ  dne  dne       typ   dat    typ    adr      dat           off   off                                                                         sel
        test_outputs(y,   y,   n,   y,   y,   y,   r,   n,   n,   n,   3'dx, 32'dx, WRITE, 32'd68,  32'dx, 5'd1,  4'd0, 4'd1, 32'd0, 32'hFFFFFFFE, 32'hFFFFFFFF, 32'hFFFFFFFF, 32'hFFFFFFFF, 5'd1,  0);

        @(negedge clk);
        //           ta0  ta1  ln0  ln1  ln0  ln1  inc  req  res  all  mem   mem    cac    cac     cac    d      wrt   rd    wrt    dt0           dt1           vl0           vl1           fsh    fsh
        //           mat  mat  dty  dty  val  val  mem  cnt  cnt  fsh  res   res    req    req     req    idx    wrd   wrd   dat                                                            idx    way
        //                                         typ  dne  dne       typ   dat    typ    adr     dat           off   off                                                                         sel
        test_outputs(y,   y,   n,   y,   y,   y,   r,   n,   n,   n,   3'dx, 32'dx, WRITE, 32'd72, 32'dx, 5'd1,  4'd0, 4'd2, 32'd0, 32'hFFFFFFFE, 32'hFFFFFFFF, 32'hFFFFFFFF, 32'hFFFFFFFF, 5'd1,  0);

        for (int i = 0; i <= 5'd13; i += 1) @(negedge clk);

        //           ta0  ta1  ln0  ln1  ln0  ln1  inc  req  res  all  mem   mem    cac    cac    cac    d      wrt   rd    wrt    dt0           dt1           vl0           vl1           fsh    fsh
        //           mat  mat  dty  dty  val  val  mem  cnt  cnt  fsh  res   res    req    req    req    idx    wrd   wrd   dat                                                            idx    way
        //                                         typ  dne  dne       typ   dat    typ    adr    dat           off   off                                                                         sel
        test_outputs(y,   y,   n,   y,   y,   y,   r,   y,   y,   n,   3'dx, 32'dx, WRITE, 32'd64, 32'dx, 5'd1, 4'd0, 4'd0, 32'd0, 32'hFFFFFFFE, 32'hFFFFFFFF, 32'hFFFFFFFF, 32'hFFFFFFFF, 5'd1,  0);

        $display("");
        $display("Flush all lines");
        for (int i = 0; i < 7'd64; i += 1) begin

            //         fsh  fsh  inp  tar  tar  req  res  cnt  wrt   dar  dar  idx    wrt  rd     mem  cln  dty  val  st  mem     mem     mem    cac    cac   way
            //              dne  en   en   wen  cnt  cnt  res  dat   en   wen  sel    wrd  wrd    act  set  set  set      adr     dat     typ    res    res   sel
            //                                  en   en        sel                    sel  sel                                                   dat    typ
            set_inputs(y,   n,   n,   n,   n,   y,   y,   y,   PROC, n,   n,   FLUSH, OFF, EVICT, w,   y,   n,   n,   FL, 32'd0,  32'hx,  READ,  32'dx, 3'd0, flush_way_sel);

            @(negedge clk);
            //         fsh  fsh  inp  tar  tar  req  res  cnt  wrt   dar  dar  idx    wrt  rd     mem  cln  dty  val  st  mem     mem     mem    cac    cac   way
            //              dne  en   en   wen  cnt  cnt  res  dat   en   wen  sel    wrd  wrd    act  set  set  set      adr     dat     typ    res    res   sel
            //                                  en   en        sel                    sel  sel                                                   dat    typ
            set_inputs(y,   n,   n,   n,   n,   y,   y,   n,   PROC, n,   n,   FLUSH, OFF, EVICT, w,   n,   n,   n,   FL, 32'd0,  32'hx,  READ,  32'dx, 3'd0, flush_way_sel);

            for (int j = 0; j <= 5'd15; j += 1) @(negedge clk);

        end

        //         fsh  fsh  inp  tar  tar  req  res  cnt  wrt   dar  dar  idx    wrt  rd     mem  cln  dty  val  st  mem     mem     mem    cac    cac   way
        //              dne  en   en   wen  cnt  cnt  res  dat   en   wen  sel    wrd  wrd    act  set  set  set      adr     dat     typ    res    res   sel
        //                                  en   en        sel                    sel  sel                                                   dat    typ
        set_inputs(n,   y,   n,   n,   n,   n,   n,   y,   PROC, n,   n,   PROC,  OFF, OFF,   w,   y,   n,   n,   ID, 32'd0,  32'hx,  READ,  32'dx, 3'd0, 0);
        //           ta0  ta1  ln0  ln1  ln0  ln1  inc  req  res  all  mem   mem    cac    cac    cac    d      wrt   rd    wrt    dt0    dt1    vl0           vl1           fsh    fsh
        //           mat  mat  dty  dty  val  val  mem  cnt  cnt  fsh  res   res    req    req    req    idx    wrd   wrd   dat                                              idx    way
        //                                         typ  dne  dne       typ   dat    typ    adr    dat           off   off                                                           sel
        test_outputs(y,   y,   n,   n,   y,   y,   r,   y,   y,   y,   3'dx, 32'dx, WRITE, 32'd0, 32'dx, 5'd0,  4'd0, 4'd0, 32'd0, 32'd0, 32'd0, 32'hFFFFFFFF, 32'hFFFFFFFF, 5'd0,  1);
        
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
        input logic t_flush,
        input logic t_flush_done,
        input logic t_input_en,
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
        input logic [2:0] t_state,
        input logic [31:0] t_mem_addr,
        input logic [31:0] t_mem_data,
        input logic [2:0] t_mem_type,
        input logic [31:0] t_cache_data,
        input logic [2:0] t_cache_type,
        input logic t_way_select
    );
    begin
        assign flush = t_flush;
        assign flush_done = t_flush_done;
        assign input_en = t_input_en;
        assign tarray_en = t_tarray_en;
        assign tarray_wen = t_tarray_wen;
        assign req_count_en = t_req_count_en;
        assign resp_count_en = t_resp_count_en;
        assign count_reset = t_count_reset;
        assign write_data_sel = t_write_data_sel;
        assign darray_en = t_darray_en;
        assign darray_wen = t_darray_wen;
        assign index_sel = t_index_sel;
        assign write_word_sel = t_write_word_sel;
        assign read_word_sel = t_read_word_sel;
        assign mem_action = t_mem_action;
        assign clean_set = t_clean_set;
        assign dirty_set = t_dirty_set;
        assign valid_set = t_valid_set;
        assign state = t_state;
        memreq_msg.addr = t_mem_addr;
        memreq_msg.data = t_mem_data;
        memreq_msg.type_ = t_mem_type;
        cache_resp_msg.data = t_cache_data;
        cache_resp_msg.type_ = t_cache_type;
        assign way_select = t_way_select;
    end
    endfunction

    function void test_outputs
    (
        input logic t_tarray0_match,
        input logic t_tarray1_match,
        input logic t_line0_dirty,
        input logic t_line1_dirty,
        input logic t_line0_valid,
        input logic t_line1_valid,
        input logic t_incoming_mem_type,
        input logic t_req_count_done,
        input logic t_resp_count_done,
        input logic t_all_flushed,
        input logic [2:0] t_memresp_msg_type_,
        input logic [31:0] t_memresp_msg_data,
        input logic [2:0] t_cache_req_msg_type_,
        input logic [31:0] t_cache_req_msg_addr,
        input logic [31:0] t_cache_req_msg_data,
        input logic [4:0] t_d_index,
        input logic [3:0] t_write_word_offset,
        input logic [3:0] t_read_word_offset,
        input logic [31:0] t_write_data,
        input logic [31:0] t_dirty0,
        input logic [31:0] t_dirty1,
        input logic [31:0] t_valid0,
        input logic [31:0] t_valid1,
        input logic [4:0] t_flush_index,
        input logic t_flush_way_sel
    );
    begin

        assert(tarray0_match == t_tarray0_match) begin
            $display("tarray0_match is correct.  Expected: %h, Actual: %h", t_tarray0_match,tarray0_match); pass();
        end else begin
            $display("tarray0_match is incorrect.  Expected: %h, Actual: %h", t_tarray0_match,tarray0_match); fail(); $finish();
        end

        assert(tarray1_match == t_tarray1_match) begin
            $display("tarray1_match is correct.  Expected: %h, Actual: %h", t_tarray1_match,tarray1_match); pass();
        end else begin
            $display("tarray1_match is incorrect.  Expected: %h, Actual: %h", t_tarray1_match,tarray1_match); fail(); $finish();
        end

        assert(line0_dirty == t_line0_dirty) begin
            $display("line0_dirty is correct.  Expected: %h, Actual: %h", t_line0_dirty,line0_dirty); pass();
        end else begin
            $display("line0_dirty is incorrect.  Expected: %h, Actual: %h", t_line0_dirty,line0_dirty); fail(); $finish();
        end

        assert(line1_dirty == t_line1_dirty) begin
            $display("line1_dirty is correct.  Expected: %h, Actual: %h", t_line1_dirty,line1_dirty); pass();
        end else begin
            $display("line1_dirty is incorrect.  Expected: %h, Actual: %h", t_line1_dirty,line1_dirty); fail(); $finish();
        end

        assert(line0_valid == t_line0_valid) begin
            $display("line0_valid is correct.  Expected: %h, Actual: %h", t_line0_valid,line0_valid); pass();
        end else begin
            $display("line0_valid is incorrect.  Expected: %h, Actual: %h", t_line0_valid,line0_valid); fail(); $finish();
        end

        assert(line1_valid == t_line1_valid) begin
            $display("line1_valid is correct.  Expected: %h, Actual: %h", t_line1_valid,line1_valid); pass();
        end else begin
            $display("line1_valid is incorrect.  Expected: %h, Actual: %h", t_line1_valid,line1_valid); fail(); $finish();
        end

        assert(incoming_mem_type == t_incoming_mem_type) begin
            $display("incoming_mem_type is correct.  Expected: %h, Actual: %h", t_incoming_mem_type,incoming_mem_type); pass();
        end else begin
            $display("incoming_mem_type is incorrect.  Expected: %h, Actual: %h", t_incoming_mem_type,incoming_mem_type); fail(); $finish();
        end

        assert(req_count_done == t_req_count_done) begin
            $display("req_count_done is correct.  Expected: %h, Actual: %h", t_req_count_done,req_count_done); pass();
        end else begin
            $display("req_count_done is incorrect.  Expected: %h, Actual: %h", t_req_count_done,req_count_done); fail(); $finish();
        end

        assert(resp_count_done == t_resp_count_done) begin
            $display("resp_count_done is correct.  Expected: %h, Actual: %h", t_resp_count_done,resp_count_done); pass();
        end else begin
            $display("resp_count_done is incorrect.  Expected: %h, Actual: %h", t_resp_count_done,resp_count_done); fail(); $finish();
        end
        
        assert(all_flushed == t_all_flushed) begin
            $display("all_flushed is correct.  Expected: %h, Actual: %h", t_all_flushed,all_flushed); pass();
        end else begin
            $display("all_flushed is incorrect.  Expected: %h, Actual: %h", t_all_flushed,all_flushed); fail(); $finish();
        end

        assert(memresp_msg.type_ == t_memresp_msg_type_) begin
            $display("memresp_msg.type_ is correct.  Expected: %h, Actual: %h",  t_memresp_msg_type_,memresp_msg.type_); pass();
        end else begin
            $display("memresp_msg.type_ is incorrect.  Expected: %h, Actual: %h",  t_memresp_msg_type_,memresp_msg.type_); fail(); $finish();
        end

        assert(memresp_msg.data == t_memresp_msg_data) begin
            $display("memresp_msg.data is correct.  Expected: %h, Actual: %h",  t_memresp_msg_data,memresp_msg.data); pass();
        end else begin
            $display("memresp_msg.data is incorrect.  Expected: %h, Actual: %h",  t_memresp_msg_data,memresp_msg.data); fail(); $finish();
        end

        assert(cache_req_msg.type_ == t_cache_req_msg_type_) begin
            $display("cache_req_msg.type_ is correct.  Expected: %h, Actual: %h",  t_cache_req_msg_type_,cache_req_msg.type_); pass();
        end else begin
            $display("cache_req_msg.type_ is incorrect.  Expected: %h, Actual: %h",  t_cache_req_msg_type_,cache_req_msg.type_); fail(); $finish();
        end

        assert(cache_req_msg.addr == t_cache_req_msg_addr) begin
            $display("cache_req_msg.addr is correct.  Expected: %h, Actual: %h",  t_cache_req_msg_addr,cache_req_msg.addr); pass();
        end else begin
            $display("cache_req_msg.addr is incorrect.  Expected: %h, Actual: %h",  t_cache_req_msg_addr,cache_req_msg.addr); fail(); $finish();
        end

        assert(cache_req_msg.data == t_cache_req_msg_data) begin
            $display("cache_req_msg.data is correct.  Expected: %h, Actual: %h",  t_cache_req_msg_data,cache_req_msg.data); pass();
        end else begin
            $display("cache_req_msg.data is incorrect.  Expected: %h, Actual: %h",  t_cache_req_msg_data,cache_req_msg.data); fail(); $finish();
        end

        assert(DUT.d_index == t_d_index) begin
            $display("DUT.d_index is correct.  Expected: %h, Actual: %h",  t_d_index,DUT.d_index); pass();
        end else begin
            $display("DUT.d_index is incorrect.  Expected: %h, Actual: %h",  t_d_index,DUT.d_index); fail(); $finish();
        end

        assert(DUT.write_word_offset == t_write_word_offset) begin
            $display("DUT.write_word_offset is correct.  Expected: %h, Actual: %h",  t_write_word_offset,DUT.write_word_offset); pass();
        end else begin
            $display("DUT.write_word_offset is incorrect.  Expected: %h, Actual: %h",  t_write_word_offset,DUT.write_word_offset); fail(); $finish();
        end

        assert(DUT.read_word_offset == t_read_word_offset) begin
            $display("DUT.read_word_offset is correct.  Expected: %h, Actual: %h",  t_read_word_offset,DUT.read_word_offset); pass();
        end else begin
            $display("DUT.read_word_offset is incorrect.  Expected: %h, Actual: %h",  t_read_word_offset,DUT.read_word_offset); fail(); $finish();
        end

        assert(DUT.write_data == t_write_data) begin
            $display("DUT.write_data is correct.  Expected: %h, Actual: %h",  t_write_data,DUT.write_data); pass();
        end else begin
            $display("DUT.write_data is incorrect.  Expected: %h, Actual: %h",  t_write_data,DUT.write_data); fail(); $finish();
        end

        assert(DUT.dirty0 == t_dirty0) begin
            $display("DUT.dirty0 is correct.  Expected: %h, Actual: %h",  t_dirty0,DUT.dirty0); pass();
        end else begin
            $display("DUT.dirty0 is incorrect.  Expected: %h, Actual: %h",  t_dirty0,DUT.dirty0); fail(); $finish();
        end

        assert(DUT.dirty1 == t_dirty1) begin
            $display("DUT.dirty1 is correct.  Expected: %h, Actual: %h",  t_dirty1,DUT.dirty1); pass();
        end else begin
            $display("DUT.dirty1 is incorrect.  Expected: %h, Actual: %h",  t_dirty1,DUT.dirty1); fail(); $finish();
        end

        assert(DUT.valid0 == t_valid0) begin
            $display("DUT.valid0 is correct.  Expected: %h, Actual: %h",  t_valid0,DUT.valid0); pass();
        end else begin
            $display("DUT.valid0 is incorrect.  Expected: %h, Actual: %h",  t_valid0,DUT.valid0); fail(); $finish();
        end

        assert(DUT.valid1 == t_valid1) begin
            $display("DUT.valid1 is correct.  Expected: %h, Actual: %h",  t_valid1,DUT.valid1); pass();
        end else begin
            $display("DUT.valid1 is incorrect.  Expected: %h, Actual: %h",  t_valid1,DUT.valid1); fail(); $finish();
        end

        assert(DUT.flush_index == t_flush_index) begin
            $display("DUT.flush_index is correct.  Expected: %h, Actual: %h",  t_flush_index,DUT.flush_index); pass();
        end else begin
            $display("DUT.flush_index is incorrect.  Expected: %h, Actual: %h",  t_flush_index,DUT.flush_index); fail(); $finish();
        end

        assert(flush_way_sel == t_flush_way_sel) begin
            $display("flush_way_sel is correct.  Expected: %h, Actual: %h",  t_flush_way_sel,flush_way_sel); pass();
        end else begin
            $display("flush_way_sel is incorrect.  Expected: %h, Actual: %h",  t_flush_way_sel,flush_way_sel); fail(); $finish();
        end

    end
    endfunction


endmodule
