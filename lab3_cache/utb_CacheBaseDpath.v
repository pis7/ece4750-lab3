//========================================================================
// utb_CacheBaseCtrl
//========================================================================
// A basic Verilog unit test bench for the Cache Base Control module

`default_nettype none
`timescale 1ps/1ps

`include "CacheBaseDpath.v"
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
    logic incoming_mem_type;

    logic req_count_done;
    logic resp_count_done;

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

    lab3_cache_CacheBaseDpath DUT
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
        // Unit Testing #1 Test Refill on Read Miss - Invalid Line
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.

        $display("");
        $display("---------------------------------------");
        $display("Unit Test 1: Read Miss");
        $display("---------------------------------------");

        reset = 1;
        @(negedge clk);
        reset = 0;
        //         fsh  fsh  inp  tar  tar  req  res  cnt  wrt   dar  dar  idx  wrt  rd   mem  cln  dty  val  st  mem           mem     mem    cac    cac
        //              dne  en   en   wen  cnt  cnt  res  dat   en   wen  sel  wrd  wrd  act  set  set  set      adr           dat     typ    res    res
        //                                  en   en        sel                  sel  sel                                                       dat    typ
        set_inputs(n,   n,   y,   y,   n,   n,   n,   y,   PROC, n,   n,   IDX, OFF, OFF, dc,  n,   n,   n,   MT, 32'hFFFFFFFF, 32'hx,  READ,  32'dx, 3'dx);

        $display("");
        $display("Simulate read miss inputs in MT");
        @(negedge clk);
        //           tar  lin  lin  inc  req  res  all  mem   mem    cac   cac           cac    d      wrt   rd    wrt    dty    val    fsh
        //           mat  dty  val  mem  cnt  cnt  fsh  res   res    req   req           req    idx    wrd   wrd   dat                  idx
        //                          typ  dne  dne       typ   dat    typ   adr           dat           off   off
        test_outputs(n,   n,   n,   r,   n,   n,   y,   3'dx, 32'dx, 3'dx, 32'hFFFFFFC3, 32'dx, 5'h1F, 4'hF, 4'hF, 32'dx, 32'd0, 32'd0, 5'dx);

        delay( $urandom_range(0, 127) );

        $display("");
        $display("Refilling initialize");
        //         fsh  fsh  inp  tar  tar  req  res  cnt  wrt   dar  dar  idx  wrt     rd   mem  cln  dty  val  st  mem           mem     mem   cac           cac
        //              dne  en   en   wen  cnt  cnt  res  dat   en   wen  sel  wrd     wrd  act  set  set  set      addr          dat     typ   res           res
        //                                  en   en        sel                  sel     sel                                                      dat           typ
        set_inputs(n,   n,   n,   y,   y,   y,   y,   n,   IMEM, y,   y,   IDX, REFILL, dc,  r,   n,   n,   y,   R0, 32'hFFFFFFFF, 32'hx,  READ, 32'hFFFFFFFF, READ);

        @(negedge clk);
        //           tar  lin  lin  inc  req  res  all  mem   mem    cac   cac           cac    d      wrt   rd    wrt           dty    val           fsh
        //           mat  dty  val  mem  cnt  cnt  fsh  res   res    req   req           req    idx    wrd   wrd   dat                                idx
        //                          typ  dne  dne       typ   dat    typ   adr           dat           off   off
        test_outputs(y,   n,   y,   r,   n,   n,   y,   3'dx, 32'dx, READ, 32'hFFFFFFC7, 32'dx, 5'h1F, 4'd1, 4'hF, 32'hFFFFFFFF, 32'd0, 32'h80000000, 5'dx);

        $display("");
        $display("Refilling cycle 1");
        @(negedge clk); // One request has already been made
        //           tar  lin  lin  inc  req  res  all  mem   mem    cac   cac           cac    d      wrt   rd    wrt           dty    val           fsh
        //           mat  dty  val  mem  cnt  cnt  fsh  res   res    req   req           req    idx    wrd   wrd   dat                                idx
        //                          typ  dne  dne       typ   dat    typ   adr           dat           off   off
        test_outputs(y,   n,   y,   r,   n,   n,   y,   3'dx, 32'dx, READ, 32'hFFFFFFCB, 32'dx, 5'h1F, 4'd2, 4'hF, 32'hFFFFFFFF, 32'd0, 32'h80000000, 5'dx);

        $display("");
        $display("Refilling cycle 2");
        @(negedge clk); // One request has already been made
        //           tar  lin  lin  inc  req  res  all  mem   mem    cac   cac           cac    d      wrt   rd    wrt           dty    val           fsh
        //           mat  dty  val  mem  cnt  cnt  fsh  res   res    req   req           req    idx    wrd   wrd   dat                                idx
        //                          typ  dne  dne       typ   dat    typ   adr           dat           off   off
        test_outputs(y,   n,   y,   r,   n,   n,   y,   3'dx, 32'dx, READ, 32'hFFFFFFCF, 32'dx, 5'h1F, 4'd3, 4'hF, 32'hFFFFFFFF, 32'd0, 32'h80000000, 5'dx);

        @(negedge clk);

        $display("");
        $display("Disable counters, save state until reenabled");
        //         fsh  fsh  inp  tar  tar  req  res  cnt  wrt   dar  dar  idx  wrt     rd   mem  cln  dty  val  st  mem           mem     mem   cac           cac
        //              dne  en   en   wen  cnt  cnt  res  dat   en   wen  sel  wrd     wrd  act  set  set  set      addr          dat     typ   res           res
        //                                  en   en        sel                  sel     sel                                                      dat           typ
        set_inputs(n,   n,   n,   y,   y,   n,   n,   n,   IMEM, y,   y,   IDX, REFILL, dc,  r,   n,   n,   y,   R0, 32'hFFFFFFFF, 32'hx,  READ, 32'hFFFFFFFF, READ);

        delay( $urandom_range(0, 127) );

        //           tar  lin  lin  inc  req  res  all  mem   mem    cac   cac           cac    d      wrt   rd    wrt           dty    val           fsh
        //           mat  dty  val  mem  cnt  cnt  fsh  res   res    req   req           req    idx    wrd   wrd   dat                                idx
        //                          typ  dne  dne       typ   dat    typ   adr           dat           off   off
        test_outputs(y,   n,   y,   r,   n,   n,   y,   3'dx, 32'dx, READ, 32'hFFFFFFD3, 32'dx, 5'h1F, 4'd4, 4'hF, 32'hFFFFFFFF, 32'd0, 32'h80000000, 5'dx);

        @(negedge clk);

        $display("");
        $display("Reenable counters, cycle 4");
        //         fsh  fsh  inp  tar  tar  req  res  cnt  wrt   dar  dar  idx  wrt     rd   mem  cln  dty  val  st  mem           mem     mem   cac           cac
        //              dne  en   en   wen  cnt  cnt  res  dat   en   wen  sel  wrd     wrd  act  set  set  set      addr          dat     typ   res           res
        //                                  en   en        sel                  sel     sel                                                      dat           typ
        set_inputs(n,   n,   n,   y,   y,   y,   y,   n,   IMEM, y,   y,   IDX, REFILL, dc,  r,   n,   n,   y,   R0, 32'hFFFFFFFF, 32'hx,  READ, 32'hFFFFFFFF, READ);

        @(negedge clk);
        //           tar  lin  lin  inc  req  res  all  mem   mem    cac   cac           cac    d      wrt   rd    wrt           dty    val           fsh
        //           mat  dty  val  mem  cnt  cnt  fsh  res   res    req   req           req    idx    wrd   wrd   dat                                idx
        //                          typ  dne  dne       typ   dat    typ   adr           dat           off   off
        test_outputs(y,   n,   y,   r,   n,   n,   y,   3'dx, 32'dx, READ, 32'hFFFFFFD7, 32'dx, 5'h1F, 4'd5, 4'hF, 32'hFFFFFFFF, 32'd0, 32'h80000000, 5'dx);

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
        //           tar  lin  lin  inc  req  res  all  mem   mem           cac   cac           cac           d      wrt   rd    wrt           dty    val           fsh
        //           mat  dty  val  mem  cnt  cnt  fsh  res   res           req   req           req           idx    wrd   wrd   dat                                idx
        //                          typ  dne  dne       typ   dat           typ   adr           dat                  off   off
        test_outputs(y,   n,   y,   r,   y,   y,   y,   READ, 32'hFFFFFFFF, READ, 32'hFFFFFFC3, 32'hFFFFFFFF, 5'h1F, 4'd0, 4'hF, 32'hFFFFFFFF, 32'd0, 32'h80000000, 5'dx);

        delay( $urandom_range(0, 127) );

        $display("");
        $display("Output data in MD state");        
        //         fsh  fsh  inp  tar  tar  req  res  cnt  wrt   dar  dar  idx  wrt     rd   mem  cln  dty  val  st  mem           mem     mem   cac           cac
        //              dne  en   en   wen  cnt  cnt  res  dat   en   wen  sel  wrd     wrd  act  set  set  set      addr          dat     typ   res           res
        //                                  en   en        sel                  sel     sel                                                      dat           typ
        set_inputs(n,   n,   y,   n,   n,   n,   n,   y,   PROC, y,   n,   IDX, OFF,    OFF, dc,  n,   n,   y,   MD, 32'hFFFFFFFF, 32'hx,  READ, 32'hFFFFFFFF, READ);

        @(negedge clk);
        //           tar  lin  lin  inc  req  res  all  mem   mem           cac   cac           cac           d      wrt   rd    wrt    dty    val           fsh
        //           mat  dty  val  mem  cnt  cnt  fsh  res   res           req   req           req           idx    wrd   wrd   dat                         idx
        //                          typ  dne  dne       typ   dat           typ   adr           dat                  off   off
        test_outputs(y,   n,   y,   r,   n,   n,   y,   READ, 32'hFFFFFFFF, READ, 32'hFFFFFFC3, 32'hFFFFFFFF, 5'h1F, 4'hF, 4'hF, 32'd0, 32'd0, 32'h80000000, 5'dx);

        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Testing #1 Test Refill on Read Miss - Invalid Line
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.

        $display("");
        $display("---------------------------------------");
        $display("Unit Test 2: Write Hit");
        $display("---------------------------------------");

        reset = 1;
        @(negedge clk);
        reset = 0;
        //         fsh  fsh  inp  tar  tar  req  res  cnt  wrt   dar  dar  idx  wrt  rd   mem  cln  dty  val  st  mem           mem            mem    cac    cac
        //              dne  en   en   wen  cnt  cnt  res  dat   en   wen  sel  wrd  wrd  act  set  set  set      adr           dat            typ    res    res
        //                                  en   en        sel                  sel  sel                                                              dat    typ
        set_inputs(n,   n,   y,   y,   n,   n,   n,   y,   PROC, y,   y,   IDX, OFF, OFF, dc,  n,   y,   n,   MT, 32'hFFFFFFFF, 32'hFFFFFFFF,  WRITE, 32'dx, 3'dx);

        $display("");
        $display("Write hit in MT");
        @(negedge clk);
        //           tar  lin  lin  inc  req  res  all  mem   mem    cac   cac           cac    d      wrt   rd    wrt    dty    val    fsh
        //           mat  dty  val  mem  cnt  cnt  fsh  res   res    req   req           req    idx    wrd   wrd   dat                  idx
        //                          typ  dne  dne       typ   dat    typ   adr           dat           off   off
        test_outputs(n,   n,   n,   r,   n,   n,   y,   3'dx, 32'dx, 3'dx, 32'hFFFFFFC3, 32'dx, 5'h1F, 4'hF, 4'hF, 32'dx, 32'd0, 32'd0, 5'dx);

        delay( $urandom_range(0, 127) );


        
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
        input logic [2:0] t_cache_type
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
    end
    endfunction

    function void test_outputs
    (
        input logic t_tarray_match,
        input logic t_line_dirty,
        input logic t_line_valid,
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
        input logic [31:0] t_dirty,
        input logic [31:0] t_valid,
        input logic [4:0] t_flush_index
    );
    begin

        assert(tarray_match == t_tarray_match) begin
            $display("tarray_match is correct.  Expected: %h, Actual: %h", t_tarray_match,tarray_match); pass();
        end else begin
            $display("tarray_match is incorrect.  Expected: %h, Actual: %h", t_tarray_match,tarray_match); fail(); $finish();
        end

        assert(line_dirty == t_line_dirty) begin
            $display("line_dirty is correct.  Expected: %h, Actual: %h", t_line_dirty,line_dirty); pass();
        end else begin
            $display("line_dirty is incorrect.  Expected: %h, Actual: %h", t_line_dirty,line_dirty); fail(); $finish();
        end

        assert(line_valid == t_line_valid) begin
            $display("line_valid is correct.  Expected: %h, Actual: %h", t_line_valid,line_valid); pass();
        end else begin
            $display("line_valid is incorrect.  Expected: %h, Actual: %h", t_line_valid,line_valid); fail(); $finish();
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

        assert(DUT.dirty == t_dirty) begin
            $display("DUT.dirty is correct.  Expected: %h, Actual: %h",  t_dirty,DUT.dirty); pass();
        end else begin
            $display("DUT.dirty is incorrect.  Expected: %h, Actual: %h",  t_dirty,DUT.dirty); fail(); $finish();
        end

        assert(DUT.valid == t_valid) begin
            $display("DUT.valid is correct.  Expected: %h, Actual: %h",  t_valid,DUT.valid); pass();
        end else begin
            $display("DUT.valid is incorrect.  Expected: %h, Actual: %h",  t_valid,DUT.valid); fail(); $finish();
        end

        assert(DUT.flush_index == t_flush_index) begin
            $display("DUT.flush_index is correct.  Expected: %h, Actual: %h",  t_flush_index,DUT.flush_index); pass();
        end else begin
            $display("DUT.flush_index is incorrect.  Expected: %h, Actual: %h",  t_flush_index,DUT.flush_index); fail(); $finish();
        end

    end
    endfunction


endmodule
