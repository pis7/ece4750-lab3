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
    logic get_next_flush_line;

    // Status signals (dpath -> ctrl)
    logic tarray_match;
    logic line_dirty;
    logic line_valid;

    logic req_count_done;
    logic resp_count_done;

    // Control signals (ctrl -> dpath)
    logic input_en;
    logic tarray_en;
    logic tarray_wen;

    logic resp_count_en;
    logic req_count_en;
    logic count_reset;

    logic write_data_sel;
    logic darray_en;
    logic darray_wen;
    logic index_sel;
    logic write_word_sel;
    logic read_word_sel;
    logic [2:0] mem_action;

    logic clean_set;
    logic dirty_set;

    logic valid_set;

    lab3_cache_CacheBaseCtrl DUT
    (
        .*
    );

    // General logic
    localparam y = 1'b1;
    localparam n = 1'b0;
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
    localparam MT = 3'd0; // Check tag
    localparam E0 = 3'd1; // Evict data
    localparam R0 = 3'd2; // Refill data
    localparam MD = 3'd3; // Data access (R/W)
    localparam FL = 3'd4; // Flush

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
        reset = 1;
        @(negedge clk);
        reset = 0;
        memreq_msg.type_ = READ;
        memreq_val = n; // no value yet

        $display("");
        $display("Test Refill on Read Miss - Invalid Line");

        @(negedge clk); // Waiting for proc to send a val request
        assert(memreq_rdy == y) begin
            $display("memreq_rdy is correct.  Expected: %h, Actual: %h", y,memreq_rdy); pass();
        end else begin
            $display("memreq_rdy is incorrect.  Expected: %h, Actual: %h", y,memreq_rdy); fail(); $finish();
        end
        assert(DUT.state == MT) begin
            $display("state is correct.  Expected: %h, Actual: %h", MT,DUT.state); pass();
        end else begin
            $display("state is incorrect.  Expected: %h, Actual: %h", MT,DUT.state); fail(); $finish();
        end
        assert(DUT.nextState == MT) begin
            $display("nextState is correct.  Expected: %h, Actual: %h", MT,DUT.nextState); pass();
        end else begin
            $display("nextState is incorrect.  Expected: %h, Actual: %h", MT,DUT.nextState); fail(); $finish();
        end

        delay( $urandom_range(0, 127) ); 

        @(negedge clk); // Still waiting for proc to send a val request
        assert(memreq_rdy == y) begin
            $display("memreq_rdy is correct.  Expected: %h, Actual: %h", y,memreq_rdy); pass();
        end else begin
            $display("memreq_rdy is incorrect.  Expected: %h, Actual: %h", y,memreq_rdy); fail(); $finish();
        end
        assert(DUT.state == MT) begin
            $display("state is correct.  Expected: %h, Actual: %h", MT,DUT.state); pass();
        end else begin
            $display("state is incorrect.  Expected: %h, Actual: %h", MT,DUT.state); fail(); $finish();
        end
        assert(DUT.nextState == MT) begin
            $display("nextState is correct.  Expected: %h, Actual: %h", MT,DUT.nextState); pass();
        end else begin
            $display("nextState is incorrect.  Expected: %h, Actual: %h", MT,DUT.nextState); fail(); $finish();
        end

        delay( $urandom_range(0, 127) ); // wait for proc value for random amount of time
        memreq_val = y; // proc sends val request
        line_valid = n; // line not valid - trigger refill
        cache_req_rdy = n; // imem not ready to respond

        @(negedge clk); // State transistion occured, should be in R0 now
        assert(memreq_rdy == n) begin
            $display("memreq_rdy is correct.  Expected: %h, Actual: %h", n,memreq_rdy); pass();
        end else begin
            $display("memreq_rdy is incorrect.  Expected: %h, Actual: %h", n,memreq_rdy); fail(); $finish();
        end
        assert(DUT.hit == n) begin
            $display("hit is correct.  Expected: %h, Actual: %h", n,DUT.hit); pass();
        end else begin
            $display("hit is incorrect.  Expected: %h, Actual: %h", n,DUT.hit); fail(); $finish();
        end
        assert(DUT.state == R0) begin
            $display("state is correct.  Expected: %h, Actual: %h", R0,DUT.state); pass();
        end else begin
            $display("state is incorrect.  Expected: %h, Actual: %h", R0,DUT.state); fail(); $finish();
        end
        assert(DUT.nextState == R0) begin
            $display("nextState is correct.  Expected: %h, Actual: %h", R0,DUT.nextState); pass();
        end else begin
            $display("nextState is incorrect.  Expected: %h, Actual: %h", R0,DUT.nextState); fail(); $finish();
        end
        assert(DUT.cache_req_val == n) begin
            $display("cache_req_val is correct.  Expected: %h, Actual: %h", n,DUT.cache_req_val); pass();
        end else begin
            $display("cache_req_val is incorrect.  Expected: %h, Actual: %h", n,DUT.cache_req_val); fail(); $finish();
        end
        assert(DUT.cache_resp_rdy == y) begin
            $display("cache_resp_rdy is correct.  Expected: %h, Actual: %h", y,DUT.cache_resp_rdy); pass();
        end else begin
            $display("cache_resp_rdy is incorrect.  Expected: %h, Actual: %h", y,DUT.cache_resp_rdy); fail(); $finish();
        end
        assert(DUT.req_count_en == n) begin
            $display("req_count_en is correct.  Expected: %h, Actual: %h", n,DUT.req_count_en); pass();
        end else begin
            $display("req_count_en is incorrect.  Expected: %h, Actual: %h", n,DUT.req_count_en); fail(); $finish();
        end
        assert(DUT.resp_count_en == n) begin
            $display("resp_count_en is correct.  Expected: %h, Actual: %h", n,DUT.resp_count_en); pass();
        end else begin
            $display("resp_count_en is incorrect.  Expected: %h, Actual: %h", n,DUT.resp_count_en); fail(); $finish();
        end
        assert(DUT.tarray_wen == n) begin
            $display("tarray_wen is correct.  Expected: %h, Actual: %h", n,DUT.tarray_wen); pass();
        end else begin
            $display("tarray_wen is incorrect.  Expected: %h, Actual: %h", n,DUT.tarray_wen); fail(); $finish();
        end
        assert(DUT.darray_wen == n) begin
            $display("darray_wen is correct.  Expected: %h, Actual: %h", n,DUT.darray_wen); pass();
        end else begin
            $display("darray_wen is incorrect.  Expected: %h, Actual: %h", n,DUT.darray_wen); fail(); $finish();
        end
        assert(DUT.write_data_sel == IMEM) begin
            $display("write_data_sel is correct.  Expected: %h, Actual: %h", IMEM,DUT.write_data_sel); pass();
        end else begin
            $display("write_data_sel is incorrect.  Expected: %h, Actual: %h", IMEM,DUT.write_data_sel); fail(); $finish();
        end
        assert(DUT.write_word_sel == REFILL) begin
            $display("write_word_sel is correct.  Expected: %h, Actual: %h", REFILL,DUT.write_word_sel); pass();
        end else begin
            $display("write_word_sel is incorrect.  Expected: %h, Actual: %h", REFILL,DUT.write_word_sel); fail(); $finish();
        end
        assert(DUT.index_sel == IDX) begin
            $display("index_sel is correct.  Expected: %h, Actual: %h", IDX,DUT.index_sel); pass();
        end else begin
            $display("index_sel is incorrect.  Expected: %h, Actual: %h", IDX,DUT.index_sel); fail(); $finish();
        end

        delay( $urandom_range(0, 127) ); // wait for imem to be ready

        @(negedge clk); // should still be waiting in R0
        assert(memreq_rdy == n) begin
            $display("memreq_rdy is correct.  Expected: %h, Actual: %h", n,memreq_rdy); pass();
        end else begin
            $display("memreq_rdy is incorrect.  Expected: %h, Actual: %h", n,memreq_rdy); fail(); $finish();
        end
        assert(DUT.state == R0) begin
            $display("state is correct.  Expected: %h, Actual: %h", R0,DUT.state); pass();
        end else begin
            $display("state is incorrect.  Expected: %h, Actual: %h", R0,DUT.state); fail(); $finish();
        end
        assert(DUT.nextState == R0) begin
            $display("nextState is correct.  Expected: %h, Actual: %h", R0,DUT.nextState); pass();
        end else begin
            $display("nextState is incorrect.  Expected: %h, Actual: %h", R0,DUT.nextState); fail(); $finish();
        end
        assert(DUT.cache_req_val == n) begin
            $display("cache_req_val is correct.  Expected: %h, Actual: %h", n,DUT.cache_req_val); pass();
        end else begin
            $display("cache_req_val is incorrect.  Expected: %h, Actual: %h", n,DUT.cache_req_val); fail(); $finish();
        end
        assert(DUT.cache_resp_rdy == y) begin
            $display("cache_resp_rdy is correct.  Expected: %h, Actual: %h", y,DUT.cache_resp_rdy); pass();
        end else begin
            $display("cache_resp_rdy is incorrect.  Expected: %h, Actual: %h", y,DUT.cache_resp_rdy); fail(); $finish();
        end
        assert(DUT.req_count_en == n) begin
            $display("req_count_en is correct.  Expected: %h, Actual: %h", n,DUT.req_count_en); pass();
        end else begin
            $display("req_count_en is incorrect.  Expected: %h, Actual: %h", n,DUT.req_count_en); fail(); $finish();
        end
        assert(DUT.resp_count_en == n) begin
            $display("resp_count_en is correct.  Expected: %h, Actual: %h", n,DUT.resp_count_en); pass();
        end else begin
            $display("resp_count_en is incorrect.  Expected: %h, Actual: %h", n,DUT.resp_count_en); fail(); $finish();
        end
        assert(DUT.tarray_wen == n) begin
            $display("tarray_wen is correct.  Expected: %h, Actual: %h", n,DUT.tarray_wen); pass();
        end else begin
            $display("tarray_wen is incorrect.  Expected: %h, Actual: %h", n,DUT.tarray_wen); fail(); $finish();
        end
        assert(DUT.darray_wen == n) begin
            $display("darray_wen is correct.  Expected: %h, Actual: %h", n,DUT.darray_wen); pass();
        end else begin
            $display("darray_wen is incorrect.  Expected: %h, Actual: %h", n,DUT.darray_wen); fail(); $finish();
        end
        assert(DUT.write_data_sel == IMEM) begin
            $display("write_data_sel is correct.  Expected: %h, Actual: %h", IMEM,DUT.write_data_sel); pass();
        end else begin
            $display("write_data_sel is incorrect.  Expected: %h, Actual: %h", IMEM,DUT.write_data_sel); fail(); $finish();
        end
        assert(DUT.write_word_sel == REFILL) begin
            $display("write_word_sel is correct.  Expected: %h, Actual: %h", REFILL,DUT.write_word_sel); pass();
        end else begin
            $display("write_word_sel is incorrect.  Expected: %h, Actual: %h", REFILL,DUT.write_word_sel); fail(); $finish();
        end
        assert(DUT.index_sel == IDX) begin
            $display("index_sel is correct.  Expected: %h, Actual: %h", IDX,DUT.index_sel); pass();
        end else begin
            $display("index_sel is incorrect.  Expected: %h, Actual: %h", IDX,DUT.index_sel); fail(); $finish();
        end

        delay( $urandom_range(0, 127) ); // wait for imem to be ready
        cache_req_rdy = y; // imem now ready to respond

        @(negedge clk);
        assert(memreq_rdy == n) begin
            $display("memreq_rdy is correct.  Expected: %h, Actual: %h", n,memreq_rdy); pass();
        end else begin
            $display("memreq_rdy is incorrect.  Expected: %h, Actual: %h", n,memreq_rdy); fail(); $finish();
        end
        assert(DUT.state == R0) begin
            $display("state is correct.  Expected: %h, Actual: %h", R0,DUT.state); pass();
        end else begin
            $display("state is incorrect.  Expected: %h, Actual: %h", R0,DUT.state); fail(); $finish();
        end
        assert(DUT.nextState == R0) begin
            $display("nextState is correct.  Expected: %h, Actual: %h", R0,DUT.nextState); pass();
        end else begin
            $display("nextState is incorrect.  Expected: %h, Actual: %h", R0,DUT.nextState); fail(); $finish();
        end
        assert(DUT.cache_req_val == y) begin
            $display("cache_req_val is correct.  Expected: %h, Actual: %h", y,DUT.cache_req_val); pass();
        end else begin
            $display("cache_req_val is incorrect.  Expected: %h, Actual: %h", y,DUT.cache_req_val); fail(); $finish();
        end
        assert(DUT.cache_resp_rdy == y) begin
            $display("cache_resp_rdy is correct.  Expected: %h, Actual: %h", y,DUT.cache_resp_rdy); pass();
        end else begin
            $display("cache_resp_rdy is incorrect.  Expected: %h, Actual: %h", y,DUT.cache_resp_rdy); fail(); $finish();
        end
        assert(DUT.req_count_en == y) begin
            $display("req_count_en is correct.  Expected: %h, Actual: %h", y,DUT.req_count_en); pass();
        end else begin
            $display("req_count_en is incorrect.  Expected: %h, Actual: %h", y,DUT.req_count_en); fail(); $finish();
        end
        assert(DUT.resp_count_en == n) begin
            $display("resp_count_en is correct.  Expected: %h, Actual: %h", n,DUT.resp_count_en); pass();
        end else begin
            $display("resp_count_en is incorrect.  Expected: %h, Actual: %h", n,DUT.resp_count_en); fail(); $finish();
        end
        assert(DUT.tarray_wen == n) begin
            $display("tarray_wen is correct.  Expected: %h, Actual: %h", n,DUT.tarray_wen); pass();
        end else begin
            $display("tarray_wen is incorrect.  Expected: %h, Actual: %h", n,DUT.tarray_wen); fail(); $finish();
        end
        assert(DUT.darray_wen == n) begin
            $display("darray_wen is correct.  Expected: %h, Actual: %h", n,DUT.darray_wen); pass();
        end else begin
            $display("darray_wen is incorrect.  Expected: %h, Actual: %h", n,DUT.darray_wen); fail(); $finish();
        end
        assert(DUT.write_data_sel == IMEM) begin
            $display("write_data_sel is correct.  Expected: %h, Actual: %h", IMEM,DUT.write_data_sel); pass();
        end else begin
            $display("write_data_sel is incorrect.  Expected: %h, Actual: %h", IMEM,DUT.write_data_sel); fail(); $finish();
        end
        assert(DUT.write_word_sel == REFILL) begin
            $display("write_word_sel is correct.  Expected: %h, Actual: %h", REFILL,DUT.write_word_sel); pass();
        end else begin
            $display("write_word_sel is incorrect.  Expected: %h, Actual: %h", REFILL,DUT.write_word_sel); fail(); $finish();
        end
        assert(DUT.index_sel == IDX) begin
            $display("index_sel is correct.  Expected: %h, Actual: %h", IDX,DUT.index_sel); pass();
        end else begin
            $display("index_sel is incorrect.  Expected: %h, Actual: %h", IDX,DUT.index_sel); fail(); $finish();
        end

        delay( $urandom_range(0, 127) ); // wait for imem to have response

        @(negedge clk);
        assert(memreq_rdy == n) begin
            $display("memreq_rdy is correct.  Expected: %h, Actual: %h", n,memreq_rdy); pass();
        end else begin
            $display("memreq_rdy is incorrect.  Expected: %h, Actual: %h", n,memreq_rdy); fail(); $finish();
        end
        assert(DUT.state == R0) begin
            $display("state is correct.  Expected: %h, Actual: %h", R0,DUT.state); pass();
        end else begin
            $display("state is incorrect.  Expected: %h, Actual: %h", R0,DUT.state); fail(); $finish();
        end
        assert(DUT.nextState == R0) begin
            $display("nextState is correct.  Expected: %h, Actual: %h", R0,DUT.nextState); pass();
        end else begin
            $display("nextState is incorrect.  Expected: %h, Actual: %h", R0,DUT.nextState); fail(); $finish();
        end
        assert(DUT.cache_req_val == y) begin
            $display("cache_req_val is correct.  Expected: %h, Actual: %h", y,DUT.cache_req_val); pass();
        end else begin
            $display("cache_req_val is incorrect.  Expected: %h, Actual: %h", y,DUT.cache_req_val); fail(); $finish();
        end
        assert(DUT.cache_resp_rdy == y) begin
            $display("cache_resp_rdy is correct.  Expected: %h, Actual: %h", y,DUT.cache_resp_rdy); pass();
        end else begin
            $display("cache_resp_rdy is incorrect.  Expected: %h, Actual: %h", y,DUT.cache_resp_rdy); fail(); $finish();
        end
        assert(DUT.req_count_en == y) begin
            $display("req_count_en is correct.  Expected: %h, Actual: %h", y,DUT.req_count_en); pass();
        end else begin
            $display("req_count_en is incorrect.  Expected: %h, Actual: %h", y,DUT.req_count_en); fail(); $finish();
        end
        assert(DUT.resp_count_en == n) begin
            $display("resp_count_en is correct.  Expected: %h, Actual: %h", n,DUT.resp_count_en); pass();
        end else begin
            $display("resp_count_en is incorrect.  Expected: %h, Actual: %h", n,DUT.resp_count_en); fail(); $finish();
        end
        assert(DUT.tarray_wen == n) begin
            $display("tarray_wen is correct.  Expected: %h, Actual: %h", n,DUT.tarray_wen); pass();
        end else begin
            $display("tarray_wen is incorrect.  Expected: %h, Actual: %h", n,DUT.tarray_wen); fail(); $finish();
        end
        assert(DUT.darray_wen == n) begin
            $display("darray_wen is correct.  Expected: %h, Actual: %h", n,DUT.darray_wen); pass();
        end else begin
            $display("darray_wen is incorrect.  Expected: %h, Actual: %h", n,DUT.darray_wen); fail(); $finish();
        end
        assert(DUT.write_data_sel == IMEM) begin
            $display("write_data_sel is correct.  Expected: %h, Actual: %h", IMEM,DUT.write_data_sel); pass();
        end else begin
            $display("write_data_sel is incorrect.  Expected: %h, Actual: %h", IMEM,DUT.write_data_sel); fail(); $finish();
        end
        assert(DUT.write_word_sel == REFILL) begin
            $display("write_word_sel is correct.  Expected: %h, Actual: %h", REFILL,DUT.write_word_sel); pass();
        end else begin
            $display("write_word_sel is incorrect.  Expected: %h, Actual: %h", REFILL,DUT.write_word_sel); fail(); $finish();
        end
        assert(DUT.index_sel == IDX) begin
            $display("index_sel is correct.  Expected: %h, Actual: %h", IDX,DUT.index_sel); pass();
        end else begin
            $display("index_sel is incorrect.  Expected: %h, Actual: %h", IDX,DUT.index_sel); fail(); $finish();
        end

        delay( $urandom_range(0, 127) ); // wait for imem to have response
        cache_resp_val = y; // imem has response
        
        @(negedge clk);
        assert(memreq_rdy == n) begin
            $display("memreq_rdy is correct.  Expected: %h, Actual: %h", n,memreq_rdy); pass();
        end else begin
            $display("memreq_rdy is incorrect.  Expected: %h, Actual: %h", n,memreq_rdy); fail(); $finish();
        end
        assert(DUT.state == R0) begin
            $display("state is correct.  Expected: %h, Actual: %h", R0,DUT.state); pass();
        end else begin
            $display("state is incorrect.  Expected: %h, Actual: %h", R0,DUT.state); fail(); $finish();
        end
        assert(DUT.nextState == R0) begin
            $display("nextState is correct.  Expected: %h, Actual: %h", R0,DUT.nextState); pass();
        end else begin
            $display("nextState is incorrect.  Expected: %h, Actual: %h", R0,DUT.nextState); fail(); $finish();
        end
        assert(DUT.cache_req_val == y) begin
            $display("cache_req_val is correct.  Expected: %h, Actual: %h", y,DUT.cache_req_val); pass();
        end else begin
            $display("cache_req_val is incorrect.  Expected: %h, Actual: %h", y,DUT.cache_req_val); fail(); $finish();
        end
        assert(DUT.cache_resp_rdy == y) begin
            $display("cache_resp_rdy is correct.  Expected: %h, Actual: %h", y,DUT.cache_resp_rdy); pass();
        end else begin
            $display("cache_resp_rdy is incorrect.  Expected: %h, Actual: %h", y,DUT.cache_resp_rdy); fail(); $finish();
        end
        assert(DUT.req_count_en == y) begin
            $display("req_count_en is correct.  Expected: %h, Actual: %h", y,DUT.req_count_en); pass();
        end else begin
            $display("req_count_en is incorrect.  Expected: %h, Actual: %h", y,DUT.req_count_en); fail(); $finish();
        end
        assert(DUT.resp_count_en == y) begin
            $display("resp_count_en is correct.  Expected: %h, Actual: %h", y,DUT.resp_count_en); pass();
        end else begin
            $display("resp_count_en is incorrect.  Expected: %h, Actual: %h", y,DUT.resp_count_en); fail(); $finish();
        end
        assert(DUT.tarray_wen == y) begin
            $display("tarray_wen is correct.  Expected: %h, Actual: %h", y,DUT.tarray_wen); pass();
        end else begin
            $display("tarray_wen is incorrect.  Expected: %h, Actual: %h", y,DUT.tarray_wen); fail(); $finish();
        end
        assert(DUT.darray_wen == y) begin
            $display("darray_wen is correct.  Expected: %h, Actual: %h", y,DUT.darray_wen); pass();
        end else begin
            $display("darray_wen is incorrect.  Expected: %h, Actual: %h", y,DUT.darray_wen); fail(); $finish();
        end
        assert(DUT.write_data_sel == IMEM) begin
            $display("write_data_sel is correct.  Expected: %h, Actual: %h", IMEM,DUT.write_data_sel); pass();
        end else begin
            $display("write_data_sel is incorrect.  Expected: %h, Actual: %h", IMEM,DUT.write_data_sel); fail(); $finish();
        end
        assert(DUT.write_word_sel == REFILL) begin
            $display("write_word_sel is correct.  Expected: %h, Actual: %h", REFILL,DUT.write_word_sel); pass();
        end else begin
            $display("write_word_sel is incorrect.  Expected: %h, Actual: %h", REFILL,DUT.write_word_sel); fail(); $finish();
        end
        assert(DUT.index_sel == IDX) begin
            $display("index_sel is correct.  Expected: %h, Actual: %h", IDX,DUT.index_sel); pass();
        end else begin
            $display("index_sel is incorrect.  Expected: %h, Actual: %h", IDX,DUT.index_sel); fail(); $finish();
        end

        delay( $urandom_range(0, 127) ); // wait for imem to have response
        cache_req_rdy = n; // imem not ready but still has responses

        @(negedge clk);
        assert(memreq_rdy == n) begin
            $display("memreq_rdy is correct.  Expected: %h, Actual: %h", n,memreq_rdy); pass();
        end else begin
            $display("memreq_rdy is incorrect.  Expected: %h, Actual: %h", n,memreq_rdy); fail(); $finish();
        end
        assert(DUT.state == R0) begin
            $display("state is correct.  Expected: %h, Actual: %h", R0,DUT.state); pass();
        end else begin
            $display("state is incorrect.  Expected: %h, Actual: %h", R0,DUT.state); fail(); $finish();
        end
        assert(DUT.nextState == R0) begin
            $display("nextState is correct.  Expected: %h, Actual: %h", R0,DUT.nextState); pass();
        end else begin
            $display("nextState is incorrect.  Expected: %h, Actual: %h", R0,DUT.nextState); fail(); $finish();
        end
        assert(DUT.cache_req_val == n) begin
            $display("cache_req_val is correct.  Expected: %h, Actual: %h", n,DUT.cache_req_val); pass();
        end else begin
            $display("cache_req_val is incorrect.  Expected: %h, Actual: %h", n,DUT.cache_req_val); fail(); $finish();
        end
        assert(DUT.cache_resp_rdy == y) begin
            $display("cache_resp_rdy is correct.  Expected: %h, Actual: %h", y,DUT.cache_resp_rdy); pass();
        end else begin
            $display("cache_resp_rdy is incorrect.  Expected: %h, Actual: %h", y,DUT.cache_resp_rdy); fail(); $finish();
        end
        assert(DUT.req_count_en == n) begin
            $display("req_count_en is correct.  Expected: %h, Actual: %h", n,DUT.req_count_en); pass();
        end else begin
            $display("req_count_en is incorrect.  Expected: %h, Actual: %h", n,DUT.req_count_en); fail(); $finish();
        end
        assert(DUT.resp_count_en == y) begin
            $display("resp_count_en is correct.  Expected: %h, Actual: %h", y,DUT.resp_count_en); pass();
        end else begin
            $display("resp_count_en is incorrect.  Expected: %h, Actual: %h", y,DUT.resp_count_en); fail(); $finish();
        end
        assert(DUT.tarray_wen == y) begin
            $display("tarray_wen is correct.  Expected: %h, Actual: %h", y,DUT.tarray_wen); pass();
        end else begin
            $display("tarray_wen is incorrect.  Expected: %h, Actual: %h", y,DUT.tarray_wen); fail(); $finish();
        end
        assert(DUT.darray_wen == y) begin
            $display("darray_wen is correct.  Expected: %h, Actual: %h", y,DUT.darray_wen); pass();
        end else begin
            $display("darray_wen is incorrect.  Expected: %h, Actual: %h", y,DUT.darray_wen); fail(); $finish();
        end
        assert(DUT.write_data_sel == IMEM) begin
            $display("write_data_sel is correct.  Expected: %h, Actual: %h", IMEM,DUT.write_data_sel); pass();
        end else begin
            $display("write_data_sel is incorrect.  Expected: %h, Actual: %h", IMEM,DUT.write_data_sel); fail(); $finish();
        end
        assert(DUT.write_word_sel == REFILL) begin
            $display("write_word_sel is correct.  Expected: %h, Actual: %h", REFILL,DUT.write_word_sel); pass();
        end else begin
            $display("write_word_sel is incorrect.  Expected: %h, Actual: %h", REFILL,DUT.write_word_sel); fail(); $finish();
        end
        assert(DUT.index_sel == IDX) begin
            $display("index_sel is correct.  Expected: %h, Actual: %h", IDX,DUT.index_sel); pass();
        end else begin
            $display("index_sel is incorrect.  Expected: %h, Actual: %h", IDX,DUT.index_sel); fail(); $finish();
        end

        delay( $urandom_range(0, 127) ); // wait for imem to have response
        req_count_done = y; // refill done, wait for proc to be ready to receive, in MD
        resp_count_done = y;
        memresp_rdy = n;

        @(negedge clk);
        assert(memreq_rdy == n) begin
            $display("memreq_rdy is correct.  Expected: %h, Actual: %h", n,memreq_rdy); pass();
        end else begin
            $display("memreq_rdy is incorrect.  Expected: %h, Actual: %h", n,memreq_rdy); fail(); $finish();
        end
        assert(DUT.state == MD) begin
            $display("state is correct.  Expected: %h, Actual: %h", MD,DUT.state); pass();
        end else begin
            $display("state is incorrect.  Expected: %h, Actual: %h", MD,DUT.state); fail(); $finish();
        end
        assert(DUT.nextState == MD) begin
            $display("nextState is correct.  Expected: %h, Actual: %h", MD,DUT.nextState); pass();
        end else begin
            $display("nextState is incorrect.  Expected: %h, Actual: %h", MD,DUT.nextState); fail(); $finish();
        end
        assert(DUT.cache_req_val == n) begin
            $display("cache_req_val is correct.  Expected: %h, Actual: %h", n,DUT.cache_req_val); pass();
        end else begin
            $display("cache_req_val is incorrect.  Expected: %h, Actual: %h", n,DUT.cache_req_val); fail(); $finish();
        end
        assert(DUT.cache_resp_rdy == n) begin
            $display("cache_resp_rdy is correct.  Expected: %h, Actual: %h", n,DUT.cache_resp_rdy); pass();
        end else begin
            $display("cache_resp_rdy is incorrect.  Expected: %h, Actual: %h", n,DUT.cache_resp_rdy); fail(); $finish();
        end
        assert(DUT.req_count_en == n) begin
            $display("req_count_en is correct.  Expected: %h, Actual: %h", n,DUT.req_count_en); pass();
        end else begin
            $display("req_count_en is incorrect.  Expected: %h, Actual: %h", n,DUT.req_count_en); fail(); $finish();
        end
        assert(DUT.resp_count_en == n) begin
            $display("resp_count_en is correct.  Expected: %h, Actual: %h", n,DUT.resp_count_en); pass();
        end else begin
            $display("resp_count_en is incorrect.  Expected: %h, Actual: %h", n,DUT.resp_count_en); fail(); $finish();
        end
        assert(DUT.tarray_wen == n) begin
            $display("tarray_wen is correct.  Expected: %h, Actual: %h", n,DUT.tarray_wen); pass();
        end else begin
            $display("tarray_wen is incorrect.  Expected: %h, Actual: %h", n,DUT.tarray_wen); fail(); $finish();
        end
        assert(DUT.darray_wen == n) begin
            $display("darray_wen is correct.  Expected: %h, Actual: %h", n,DUT.darray_wen); pass();
        end else begin
            $display("darray_wen is incorrect.  Expected: %h, Actual: %h", n,DUT.darray_wen); fail(); $finish();
        end
        assert(DUT.valid_set == y) begin
            $display("valid_set is correct.  Expected: %h, Actual: %h", y,DUT.valid_set); pass();
        end else begin
            $display("valid_set is incorrect.  Expected: %h, Actual: %h", y,DUT.valid_set); fail(); $finish();
        end
        assert(DUT.write_data_sel == PROC) begin
            $display("write_data_sel is correct.  Expected: %h, Actual: %h", PROC,DUT.write_data_sel); pass();
        end else begin
            $display("write_data_sel is incorrect.  Expected: %h, Actual: %h", PROC,DUT.write_data_sel); fail(); $finish();
        end
        assert(DUT.write_word_sel == OFF) begin
            $display("write_word_sel is correct.  Expected: %h, Actual: %h", OFF,DUT.write_word_sel); pass();
        end else begin
            $display("write_word_sel is incorrect.  Expected: %h, Actual: %h", OFF,DUT.write_word_sel); fail(); $finish();
        end
        assert(DUT.index_sel == IDX) begin
            $display("index_sel is correct.  Expected: %h, Actual: %h", IDX,DUT.index_sel); pass();
        end else begin
            $display("index_sel is incorrect.  Expected: %h, Actual: %h", IDX,DUT.index_sel); fail(); $finish();
        end
        assert(DUT.read_word_sel == OFF) begin
            $display("read_word_sel is correct.  Expected: %h, Actual: %h", OFF,DUT.read_word_sel); pass();
        end else begin
            $display("read_word_sel is incorrect.  Expected: %h, Actual: %h", OFF,DUT.read_word_sel); fail(); $finish();
        end

        delay( $urandom_range(0, 127) ); // wait for proc to be ready to receive
        
        @(negedge clk);
        assert(memreq_rdy == n) begin
            $display("memreq_rdy is correct.  Expected: %h, Actual: %h", n,memreq_rdy); pass();
        end else begin
            $display("memreq_rdy is incorrect.  Expected: %h, Actual: %h", n,memreq_rdy); fail(); $finish();
        end
        assert(DUT.state == MD) begin
            $display("state is correct.  Expected: %h, Actual: %h", R0,DUT.state); pass();
        end else begin
            $display("state is incorrect.  Expected: %h, Actual: %h", R0,DUT.state); fail(); $finish();
        end
        assert(DUT.nextState == MD) begin
            $display("nextState is correct.  Expected: %h, Actual: %h", R0,DUT.nextState); pass();
        end else begin
            $display("nextState is incorrect.  Expected: %h, Actual: %h", R0,DUT.nextState); fail(); $finish();
        end
        assert(DUT.cache_req_val == n) begin
            $display("cache_req_val is correct.  Expected: %h, Actual: %h", n,DUT.cache_req_val); pass();
        end else begin
            $display("cache_req_val is incorrect.  Expected: %h, Actual: %h", n,DUT.cache_req_val); fail(); $finish();
        end
        assert(DUT.cache_resp_rdy == n) begin
            $display("cache_resp_rdy is correct.  Expected: %h, Actual: %h", n,DUT.cache_resp_rdy); pass();
        end else begin
            $display("cache_resp_rdy is incorrect.  Expected: %h, Actual: %h", n,DUT.cache_resp_rdy); fail(); $finish();
        end
        assert(DUT.req_count_en == n) begin
            $display("req_count_en is correct.  Expected: %h, Actual: %h", n,DUT.req_count_en); pass();
        end else begin
            $display("req_count_en is incorrect.  Expected: %h, Actual: %h", n,DUT.req_count_en); fail(); $finish();
        end
        assert(DUT.resp_count_en == n) begin
            $display("resp_count_en is correct.  Expected: %h, Actual: %h", n,DUT.resp_count_en); pass();
        end else begin
            $display("resp_count_en is incorrect.  Expected: %h, Actual: %h", n,DUT.resp_count_en); fail(); $finish();
        end
        assert(DUT.tarray_wen == n) begin
            $display("tarray_wen is correct.  Expected: %h, Actual: %h", n,DUT.tarray_wen); pass();
        end else begin
            $display("tarray_wen is incorrect.  Expected: %h, Actual: %h", n,DUT.tarray_wen); fail(); $finish();
        end
        assert(DUT.darray_wen == n) begin
            $display("darray_wen is correct.  Expected: %h, Actual: %h", n,DUT.darray_wen); pass();
        end else begin
            $display("darray_wen is incorrect.  Expected: %h, Actual: %h", n,DUT.darray_wen); fail(); $finish();
        end
        assert(DUT.write_data_sel == PROC) begin
            $display("write_data_sel is correct.  Expected: %h, Actual: %h", PROC,DUT.write_data_sel); pass();
        end else begin
            $display("write_data_sel is incorrect.  Expected: %h, Actual: %h", PROC,DUT.write_data_sel); fail(); $finish();
        end
        assert(DUT.write_word_sel == OFF) begin
            $display("write_word_sel is correct.  Expected: %h, Actual: %h", OFF,DUT.write_word_sel); pass();
        end else begin
            $display("write_word_sel is incorrect.  Expected: %h, Actual: %h", OFF,DUT.write_word_sel); fail(); $finish();
        end
        assert(DUT.index_sel == IDX) begin
            $display("index_sel is correct.  Expected: %h, Actual: %h", IDX,DUT.index_sel); pass();
        end else begin
            $display("index_sel is incorrect.  Expected: %h, Actual: %h", IDX,DUT.index_sel); fail(); $finish();
        end
        assert(DUT.read_word_sel == OFF) begin
            $display("read_word_sel is correct.  Expected: %h, Actual: %h", OFF,DUT.read_word_sel); pass();
        end else begin
            $display("read_word_sel is incorrect.  Expected: %h, Actual: %h", OFF,DUT.read_word_sel); fail(); $finish();
        end
        
        delay( $urandom_range(0, 127) );
        memresp_rdy = y; // imem ready to receive value
        memreq_val = n; // imem not ready to give value

        @(negedge clk); // should be in MT now
        assert(memreq_rdy == y) begin
            $display("memreq_rdy is correct.  Expected: %h, Actual: %h", y,memreq_rdy); pass();
        end else begin
            $display("memreq_rdy is incorrect.  Expected: %h, Actual: %h", y,memreq_rdy); fail(); $finish();
        end
        assert(DUT.state == MT) begin
            $display("state is correct.  Expected: %h, Actual: %h", MT,DUT.state); pass();
        end else begin
            $display("state is incorrect.  Expected: %h, Actual: %h", MT,DUT.state); fail(); $finish();
        end
        assert(DUT.nextState == MT) begin
            $display("nextState is correct.  Expected: %h, Actual: %h", MT,DUT.nextState); pass();
        end else begin
            $display("nextState is incorrect.  Expected: %h, Actual: %h", MT,DUT.nextState); fail(); $finish();
        end
        assert(DUT.cache_req_val == n) begin
            $display("cache_req_val is correct.  Expected: %h, Actual: %h", n,DUT.cache_req_val); pass();
        end else begin
            $display("cache_req_val is incorrect.  Expected: %h, Actual: %h", n,DUT.cache_req_val); fail(); $finish();
        end
        assert(DUT.cache_resp_rdy == n) begin
            $display("cache_resp_rdy is correct.  Expected: %h, Actual: %h", n,DUT.cache_resp_rdy); pass();
        end else begin
            $display("cache_resp_rdy is incorrect.  Expected: %h, Actual: %h", n,DUT.cache_resp_rdy); fail(); $finish();
        end
        assert(DUT.req_count_en == n) begin
            $display("req_count_en is correct.  Expected: %h, Actual: %h", n,DUT.req_count_en); pass();
        end else begin
            $display("req_count_en is incorrect.  Expected: %h, Actual: %h", n,DUT.req_count_en); fail(); $finish();
        end
        assert(DUT.resp_count_en == n) begin
            $display("resp_count_en is correct.  Expected: %h, Actual: %h", n,DUT.resp_count_en); pass();
        end else begin
            $display("resp_count_en is incorrect.  Expected: %h, Actual: %h", n,DUT.resp_count_en); fail(); $finish();
        end
        assert(DUT.tarray_wen == n) begin
            $display("tarray_wen is correct.  Expected: %h, Actual: %h", n,DUT.tarray_wen); pass();
        end else begin
            $display("tarray_wen is incorrect.  Expected: %h, Actual: %h", n,DUT.tarray_wen); fail(); $finish();
        end
        assert(DUT.darray_wen == n) begin
            $display("darray_wen is correct.  Expected: %h, Actual: %h", n,DUT.darray_wen); pass();
        end else begin
            $display("darray_wen is incorrect.  Expected: %h, Actual: %h", n,DUT.darray_wen); fail(); $finish();
        end

        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Testing #2 Test Hit with Write
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.
        reset = 1;
        @(negedge clk);
        reset = 0;
        memreq_msg.type_ = WRITE;
        memreq_val = n; // no value yet

        $display("");
        $display("Test Hit with Write");
        
        @(negedge clk); // Waiting for proc to send a val request
        assert(memreq_rdy == y) begin
            $display("memreq_rdy is correct.  Expected: %h, Actual: %h", y,memreq_rdy); pass();
        end else begin
            $display("memreq_rdy is incorrect.  Expected: %h, Actual: %h", y,memreq_rdy); fail(); $finish();
        end
        assert(DUT.state == MT) begin
            $display("state is correct.  Expected: %h, Actual: %h", MT,DUT.state); pass();
        end else begin
            $display("state is incorrect.  Expected: %h, Actual: %h", MT,DUT.state); fail(); $finish();
        end
        assert(DUT.nextState == MT) begin
            $display("nextState is correct.  Expected: %h, Actual: %h", MT,DUT.nextState); pass();
        end else begin
            $display("nextState is incorrect.  Expected: %h, Actual: %h", MT,DUT.nextState); fail(); $finish();
        end

        delay( $urandom_range(0, 127) );
        memreq_val = y; // value ready for cache
        memresp_val = n; // processor not ready to receive value;
        line_valid = y;
        tarray_match = y; // hit
        
        @(negedge clk); // Hit - still in MT
        assert(memreq_rdy == y) begin
            $display("memreq_rdy is correct.  Expected: %h, Actual: %h", y,memreq_rdy); pass();
        end else begin
            $display("memreq_rdy is incorrect.  Expected: %h, Actual: %h", y,memreq_rdy); fail(); $finish();
        end
        assert(DUT.hit == y) begin
            $display("hit is correct.  Expected: %h, Actual: %h", y,DUT.hit); pass();
        end else begin
            $display("hit is incorrect.  Expected: %h, Actual: %h", y,DUT.hit); fail(); $finish();
        end
        assert(DUT.state == MT) begin
            $display("state is correct.  Expected: %h, Actual: %h", MT,DUT.state); pass();
        end else begin
            $display("state is incorrect.  Expected: %h, Actual: %h", MT,DUT.state); fail(); $finish();
        end
        assert(DUT.nextState == MT) begin
            $display("nextState is correct.  Expected: %h, Actual: %h", MT,DUT.nextState); pass();
        end else begin
            $display("nextState is incorrect.  Expected: %h, Actual: %h", MT,DUT.nextState); fail(); $finish();
        end
        assert(DUT.cache_req_val == n) begin
            $display("cache_req_val is correct.  Expected: %h, Actual: %h", n,DUT.cache_req_val); pass();
        end else begin
            $display("cache_req_val is incorrect.  Expected: %h, Actual: %h", n,DUT.cache_req_val); fail(); $finish();
        end
        assert(DUT.cache_resp_rdy == n) begin
            $display("cache_resp_rdy is correct.  Expected: %h, Actual: %h", n,DUT.cache_resp_rdy); pass();
        end else begin
            $display("cache_resp_rdy is incorrect.  Expected: %h, Actual: %h", n,DUT.cache_resp_rdy); fail(); $finish();
        end
        assert(DUT.req_count_en == n) begin
            $display("req_count_en is correct.  Expected: %h, Actual: %h", n,DUT.req_count_en); pass();
        end else begin
            $display("req_count_en is incorrect.  Expected: %h, Actual: %h", n,DUT.req_count_en); fail(); $finish();
        end
        assert(DUT.resp_count_en == n) begin
            $display("resp_count_en is correct.  Expected: %h, Actual: %h", n,DUT.resp_count_en); pass();
        end else begin
            $display("resp_count_en is incorrect.  Expected: %h, Actual: %h", n,DUT.resp_count_en); fail(); $finish();
        end
        assert(DUT.tarray_wen == n) begin
            $display("tarray_wen is correct.  Expected: %h, Actual: %h", n,DUT.tarray_wen); pass();
        end else begin
            $display("tarray_wen is incorrect.  Expected: %h, Actual: %h", n,DUT.tarray_wen); fail(); $finish();
        end
        assert(DUT.darray_wen == y) begin
            $display("darray_wen is correct.  Expected: %h, Actual: %h", y,DUT.darray_wen); pass();
        end else begin
            $display("darray_wen is incorrect.  Expected: %h, Actual: %h", y,DUT.darray_wen); fail(); $finish();
        end
        assert(DUT.dirty_set == y) begin
            $display("dirty_set is correct.  Expected: %h, Actual: %h", y,DUT.dirty_set); pass();
        end else begin
            $display("dirty_set is incorrect.  Expected: %h, Actual: %h", y,DUT.dirty_set); fail(); $finish();
        end
        assert(DUT.write_data_sel == PROC) begin
            $display("write_data_sel is correct.  Expected: %h, Actual: %h", PROC,DUT.write_data_sel); pass();
        end else begin
            $display("write_data_sel is incorrect.  Expected: %h, Actual: %h", PROC,DUT.write_data_sel); fail(); $finish();
        end
        assert(DUT.write_word_sel == OFF) begin
            $display("write_word_sel is correct.  Expected: %h, Actual: %h", OFF,DUT.write_word_sel); pass();
        end else begin
            $display("write_word_sel is incorrect.  Expected: %h, Actual: %h", OFF,DUT.write_word_sel); fail(); $finish();
        end
        assert(DUT.index_sel == IDX) begin
            $display("index_sel is correct.  Expected: %h, Actual: %h", IDX,DUT.index_sel); pass();
        end else begin
            $display("index_sel is incorrect.  Expected: %h, Actual: %h", IDX,DUT.index_sel); fail(); $finish();
        end
        assert(DUT.read_word_sel == OFF) begin
            $display("read_word_sel is correct.  Expected: %h, Actual: %h", OFF,DUT.read_word_sel); pass();
        end else begin
            $display("read_word_sel is incorrect.  Expected: %h, Actual: %h", OFF,DUT.read_word_sel); fail(); $finish();
        end

        delay( $urandom_range(0, 127) );
        memreq_val = n;
        memresp_rdy = y; // proc ready to receive value

        @(negedge clk); // Proc received value, cache waiting for next request
        assert(memreq_rdy == y) begin
            $display("memreq_rdy is correct.  Expected: %h, Actual: %h", y,memreq_rdy); pass();
        end else begin
            $display("memreq_rdy is incorrect.  Expected: %h, Actual: %h", y,memreq_rdy); fail(); $finish();
        end
        assert(DUT.hit == n) begin
            $display("hit is correct.  Expected: %h, Actual: %h", n,DUT.hit); pass();
        end else begin
            $display("hit is incorrect.  Expected: %h, Actual: %h", n,DUT.hit); fail(); $finish();
        end
        assert(DUT.state == MT) begin
            $display("state is correct.  Expected: %h, Actual: %h", MT,DUT.state); pass();
        end else begin
            $display("state is incorrect.  Expected: %h, Actual: %h", MT,DUT.state); fail(); $finish();
        end
        assert(DUT.nextState == MT) begin
            $display("nextState is correct.  Expected: %h, Actual: %h", MT,DUT.nextState); pass();
        end else begin
            $display("nextState is incorrect.  Expected: %h, Actual: %h", MT,DUT.nextState); fail(); $finish();
        end
        assert(DUT.cache_req_val == n) begin
            $display("cache_req_val is correct.  Expected: %h, Actual: %h", n,DUT.cache_req_val); pass();
        end else begin
            $display("cache_req_val is incorrect.  Expected: %h, Actual: %h", n,DUT.cache_req_val); fail(); $finish();
        end
        assert(DUT.cache_resp_rdy == n) begin
            $display("cache_resp_rdy is correct.  Expected: %h, Actual: %h", n,DUT.cache_resp_rdy); pass();
        end else begin
            $display("cache_resp_rdy is incorrect.  Expected: %h, Actual: %h", n,DUT.cache_resp_rdy); fail(); $finish();
        end
        assert(DUT.req_count_en == n) begin
            $display("req_count_en is correct.  Expected: %h, Actual: %h", n,DUT.req_count_en); pass();
        end else begin
            $display("req_count_en is incorrect.  Expected: %h, Actual: %h", n,DUT.req_count_en); fail(); $finish();
        end
        assert(DUT.resp_count_en == n) begin
            $display("resp_count_en is correct.  Expected: %h, Actual: %h", n,DUT.resp_count_en); pass();
        end else begin
            $display("resp_count_en is incorrect.  Expected: %h, Actual: %h", n,DUT.resp_count_en); fail(); $finish();
        end
        assert(DUT.tarray_wen == n) begin
            $display("tarray_wen is correct.  Expected: %h, Actual: %h", n,DUT.tarray_wen); pass();
        end else begin
            $display("tarray_wen is incorrect.  Expected: %h, Actual: %h", n,DUT.tarray_wen); fail(); $finish();
        end
        assert(DUT.darray_wen == n) begin
            $display("darray_wen is correct.  Expected: %h, Actual: %h", n,DUT.darray_wen); pass();
        end else begin
            $display("darray_wen is incorrect.  Expected: %h, Actual: %h", n,DUT.darray_wen); fail(); $finish();
        end
        assert(DUT.dirty_set == n) begin
            $display("dirty_set is correct.  Expected: %h, Actual: %h", n,DUT.dirty_set); pass();
        end else begin
            $display("dirty_set is incorrect.  Expected: %h, Actual: %h", n,DUT.dirty_set); fail(); $finish();
        end
        assert(DUT.write_data_sel == PROC) begin
            $display("write_data_sel is correct.  Expected: %h, Actual: %h", PROC,DUT.write_data_sel); pass();
        end else begin
            $display("write_data_sel is incorrect.  Expected: %h, Actual: %h", PROC,DUT.write_data_sel); fail(); $finish();
        end
        assert(DUT.write_word_sel == OFF) begin
            $display("write_word_sel is correct.  Expected: %h, Actual: %h", OFF,DUT.write_word_sel); pass();
        end else begin
            $display("write_word_sel is incorrect.  Expected: %h, Actual: %h", OFF,DUT.write_word_sel); fail(); $finish();
        end
        assert(DUT.index_sel == IDX) begin
            $display("index_sel is correct.  Expected: %h, Actual: %h", IDX,DUT.index_sel); pass();
        end else begin
            $display("index_sel is incorrect.  Expected: %h, Actual: %h", IDX,DUT.index_sel); fail(); $finish();
        end
        assert(DUT.read_word_sel == OFF) begin
            $display("read_word_sel is correct.  Expected: %h, Actual: %h", OFF,DUT.read_word_sel); pass();
        end else begin
            $display("read_word_sel is incorrect.  Expected: %h, Actual: %h", OFF,DUT.read_word_sel); fail(); $finish();
        end

        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Testing #3 Dirty Line - Eviction
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.
        reset = 1;
        @(negedge clk);
        reset = 0;
        req_count_done = n;
        resp_count_done = n;
        memreq_msg.type_ = READ;
        memreq_val = n; // no value yet

        $display("");
        $display("Dirty Line - Eviction");

        @(negedge clk); // Waiting for proc to send a val request
        assert(memreq_rdy == y) begin
            $display("memreq_rdy is correct.  Expected: %h, Actual: %h", y,memreq_rdy); pass();
        end else begin
            $display("memreq_rdy is incorrect.  Expected: %h, Actual: %h", y,memreq_rdy); fail(); $finish();
        end
        assert(DUT.state == MT) begin
            $display("state is correct.  Expected: %h, Actual: %h", MT,DUT.state); pass();
        end else begin
            $display("state is incorrect.  Expected: %h, Actual: %h", MT,DUT.state); fail(); $finish();
        end
        assert(DUT.nextState == MT) begin
            $display("nextState is correct.  Expected: %h, Actual: %h", MT,DUT.nextState); pass();
        end else begin
            $display("nextState is incorrect.  Expected: %h, Actual: %h", MT,DUT.nextState); fail(); $finish();
        end

        delay( $urandom_range(0, 127) );
        line_valid = y;
        line_dirty = y;
        memreq_val = y; // proc gives value
        tarray_match = n; // miss
        cache_req_rdy = n; // imem not ready to receive request
        cache_resp_val = n; // imem doesn't have a reponse ready

        @(negedge clk); // State transistion occured, should be in E0 now
        assert(memreq_rdy == n) begin
            $display("memreq_rdy is correct.  Expected: %h, Actual: %h", n,memreq_rdy); pass();
        end else begin
            $display("memreq_rdy is incorrect.  Expected: %h, Actual: %h", n,memreq_rdy); fail(); $finish();
        end
        assert(DUT.hit == n) begin
            $display("hit is correct.  Expected: %h, Actual: %h", n,DUT.hit); pass();
        end else begin
            $display("hit is incorrect.  Expected: %h, Actual: %h", n,DUT.hit); fail(); $finish();
        end
        assert(DUT.state == E0) begin
            $display("state is correct.  Expected: %h, Actual: %h", E0,DUT.state); pass();
        end else begin
            $display("state is incorrect.  Expected: %h, Actual: %h", E0,DUT.state); fail(); $finish();
        end
        assert(DUT.nextState == E0) begin
            $display("nextState is correct.  Expected: %h, Actual: %h", E0,DUT.nextState); pass();
        end else begin
            $display("nextState is incorrect.  Expected: %h, Actual: %h", E0,DUT.nextState); fail(); $finish();
        end
        assert(DUT.cache_req_val == n) begin
            $display("cache_req_val is correct.  Expected: %h, Actual: %h", n,DUT.cache_req_val); pass();
        end else begin
            $display("cache_req_val is incorrect.  Expected: %h, Actual: %h", n,DUT.cache_req_val); fail(); $finish();
        end
        assert(DUT.cache_resp_rdy == y) begin
            $display("cache_resp_rdy is correct.  Expected: %h, Actual: %h", y,DUT.cache_resp_rdy); pass();
        end else begin
            $display("cache_resp_rdy is incorrect.  Expected: %h, Actual: %h", y,DUT.cache_resp_rdy); fail(); $finish();
        end
        assert(DUT.req_count_en == n) begin
            $display("req_count_en is correct.  Expected: %h, Actual: %h", n,DUT.req_count_en); pass();
        end else begin
            $display("req_count_en is incorrect.  Expected: %h, Actual: %h", n,DUT.req_count_en); fail(); $finish();
        end
        assert(DUT.resp_count_en == n) begin
            $display("resp_count_en is correct.  Expected: %h, Actual: %h", n,DUT.resp_count_en); pass();
        end else begin
            $display("resp_count_en is incorrect.  Expected: %h, Actual: %h", n,DUT.resp_count_en); fail(); $finish();
        end
        assert(DUT.tarray_wen == n) begin
            $display("tarray_wen is correct.  Expected: %h, Actual: %h", n,DUT.tarray_wen); pass();
        end else begin
            $display("tarray_wen is incorrect.  Expected: %h, Actual: %h", n,DUT.tarray_wen); fail(); $finish();
        end
        assert(DUT.darray_wen == n) begin
            $display("darray_wen is correct.  Expected: %h, Actual: %h", n,DUT.darray_wen); pass();
        end else begin
            $display("darray_wen is incorrect.  Expected: %h, Actual: %h", n,DUT.darray_wen); fail(); $finish();
        end

        delay( $urandom_range(0, 127) );
        cache_req_rdy = y; // imem ready to receive request
        cache_resp_val = n; // imem doesn't have a reponse ready

        @(negedge clk); // State transistion occured, should be in E0 now
        assert(memreq_rdy == n) begin
            $display("memreq_rdy is correct.  Expected: %h, Actual: %h", n,memreq_rdy); pass();
        end else begin
            $display("memreq_rdy is incorrect.  Expected: %h, Actual: %h", n,memreq_rdy); fail(); $finish();
        end
        assert(DUT.hit == n) begin
            $display("hit is correct.  Expected: %h, Actual: %h", n,DUT.hit); pass();
        end else begin
            $display("hit is incorrect.  Expected: %h, Actual: %h", n,DUT.hit); fail(); $finish();
        end
        assert(DUT.state == E0) begin
            $display("state is correct.  Expected: %h, Actual: %h", E0,DUT.state); pass();
        end else begin
            $display("state is incorrect.  Expected: %h, Actual: %h", E0,DUT.state); fail(); $finish();
        end
        assert(DUT.nextState == E0) begin
            $display("nextState is correct.  Expected: %h, Actual: %h", E0,DUT.nextState); pass();
        end else begin
            $display("nextState is incorrect.  Expected: %h, Actual: %h", E0,DUT.nextState); fail(); $finish();
        end
        assert(DUT.cache_req_val == y) begin
            $display("cache_req_val is correct.  Expected: %h, Actual: %h", y,DUT.cache_req_val); pass();
        end else begin
            $display("cache_req_val is incorrect.  Expected: %h, Actual: %h", y,DUT.cache_req_val); fail(); $finish();
        end
        assert(DUT.cache_resp_rdy == y) begin
            $display("cache_resp_rdy is correct.  Expected: %h, Actual: %h", y,DUT.cache_resp_rdy); pass();
        end else begin
            $display("cache_resp_rdy is incorrect.  Expected: %h, Actual: %h", y,DUT.cache_resp_rdy); fail(); $finish();
        end
        assert(DUT.req_count_en == y) begin
            $display("req_count_en is correct.  Expected: %h, Actual: %h", y,DUT.req_count_en); pass();
        end else begin
            $display("req_count_en is incorrect.  Expected: %h, Actual: %h", y,DUT.req_count_en); fail(); $finish();
        end
        assert(DUT.resp_count_en == n) begin
            $display("resp_count_en is correct.  Expected: %h, Actual: %h", n,DUT.resp_count_en); pass();
        end else begin
            $display("resp_count_en is incorrect.  Expected: %h, Actual: %h", n,DUT.resp_count_en); fail(); $finish();
        end
        assert(DUT.tarray_wen == n) begin
            $display("tarray_wen is correct.  Expected: %h, Actual: %h", n,DUT.tarray_wen); pass();
        end else begin
            $display("tarray_wen is incorrect.  Expected: %h, Actual: %h", n,DUT.tarray_wen); fail(); $finish();
        end
        assert(DUT.darray_wen == n) begin
            $display("darray_wen is correct.  Expected: %h, Actual: %h", n,DUT.darray_wen); pass();
        end else begin
            $display("darray_wen is incorrect.  Expected: %h, Actual: %h", n,DUT.darray_wen); fail(); $finish();
        end
        assert(DUT.index_sel == IDX) begin
            $display("index_sel is correct.  Expected: %h, Actual: %h", IDX,DUT.index_sel); pass();
        end else begin
            $display("index_sel is incorrect.  Expected: %h, Actual: %h", IDX,DUT.index_sel); fail(); $finish();
        end
        assert(DUT.read_word_sel == EVICT) begin
            $display("read_word_sel is correct.  Expected: %h, Actual: %h", EVICT,DUT.read_word_sel); pass();
        end else begin
            $display("read_word_sel is incorrect.  Expected: %h, Actual: %h", EVICT,DUT.read_word_sel); fail(); $finish();
        end

        delay( $urandom_range(0, 127) );
        cache_req_rdy = y; // imem ready to receive request
        cache_resp_val = y; // imem has a reponse ready

        @(negedge clk); // State transistion occured, should be in E0 now
        assert(memreq_rdy == n) begin
            $display("memreq_rdy is correct.  Expected: %h, Actual: %h", n,memreq_rdy); pass();
        end else begin
            $display("memreq_rdy is incorrect.  Expected: %h, Actual: %h", n,memreq_rdy); fail(); $finish();
        end
        assert(DUT.hit == n) begin
            $display("hit is correct.  Expected: %h, Actual: %h", n,DUT.hit); pass();
        end else begin
            $display("hit is incorrect.  Expected: %h, Actual: %h", n,DUT.hit); fail(); $finish();
        end
        assert(DUT.state == E0) begin
            $display("state is correct.  Expected: %h, Actual: %h", E0,DUT.state); pass();
        end else begin
            $display("state is incorrect.  Expected: %h, Actual: %h", E0,DUT.state); fail(); $finish();
        end
        assert(DUT.nextState == E0) begin
            $display("nextState is correct.  Expected: %h, Actual: %h", E0,DUT.nextState); pass();
        end else begin
            $display("nextState is incorrect.  Expected: %h, Actual: %h", E0,DUT.nextState); fail(); $finish();
        end
        assert(DUT.cache_req_val == y) begin
            $display("cache_req_val is correct.  Expected: %h, Actual: %h", y,DUT.cache_req_val); pass();
        end else begin
            $display("cache_req_val is incorrect.  Expected: %h, Actual: %h", y,DUT.cache_req_val); fail(); $finish();
        end
        assert(DUT.cache_resp_rdy == y) begin
            $display("cache_resp_rdy is correct.  Expected: %h, Actual: %h", y,DUT.cache_resp_rdy); pass();
        end else begin
            $display("cache_resp_rdy is incorrect.  Expected: %h, Actual: %h", y,DUT.cache_resp_rdy); fail(); $finish();
        end
        assert(DUT.req_count_en == y) begin
            $display("req_count_en is correct.  Expected: %h, Actual: %h", y,DUT.req_count_en); pass();
        end else begin
            $display("req_count_en is incorrect.  Expected: %h, Actual: %h", y,DUT.req_count_en); fail(); $finish();
        end
        assert(DUT.resp_count_en == y) begin
            $display("resp_count_en is correct.  Expected: %h, Actual: %h", y,DUT.resp_count_en); pass();
        end else begin
            $display("resp_count_en is incorrect.  Expected: %h, Actual: %h", y,DUT.resp_count_en); fail(); $finish();
        end
        assert(DUT.tarray_wen == n) begin
            $display("tarray_wen is correct.  Expected: %h, Actual: %h", n,DUT.tarray_wen); pass();
        end else begin
            $display("tarray_wen is incorrect.  Expected: %h, Actual: %h", n,DUT.tarray_wen); fail(); $finish();
        end
        assert(DUT.darray_wen == n) begin
            $display("darray_wen is correct.  Expected: %h, Actual: %h", n,DUT.darray_wen); pass();
        end else begin
            $display("darray_wen is incorrect.  Expected: %h, Actual: %h", n,DUT.darray_wen); fail(); $finish();
        end
        assert(DUT.index_sel == IDX) begin
            $display("index_sel is correct.  Expected: %h, Actual: %h", IDX,DUT.index_sel); pass();
        end else begin
            $display("index_sel is incorrect.  Expected: %h, Actual: %h", IDX,DUT.index_sel); fail(); $finish();
        end
        assert(DUT.read_word_sel == EVICT) begin
            $display("read_word_sel is correct.  Expected: %h, Actual: %h", EVICT,DUT.read_word_sel); pass();
        end else begin
            $display("read_word_sel is incorrect.  Expected: %h, Actual: %h", EVICT,DUT.read_word_sel); fail(); $finish();
        end

        // delay( $urandom_range(0, 127) );
        // req_count_done = y; // counts done
        // resp_count_done = y;
        // cache_req_rdy = n; // imem ready to receive request
        // cache_resp_val = n; // imem has a reponse ready

        // @(negedge clk); // State transistion occured, should be in R0 now
        // assert(memreq_rdy == n) begin
        //     $display("memreq_rdy is correct.  Expected: %h, Actual: %h", n,memreq_rdy); pass();
        // end else begin
        //     $display("memreq_rdy is incorrect.  Expected: %h, Actual: %h", n,memreq_rdy); fail(); $finish();
        // end
        // assert(DUT.hit == n) begin
        //     $display("hit is correct.  Expected: %h, Actual: %h", n,DUT.hit); pass();
        // end else begin
        //     $display("hit is incorrect.  Expected: %h, Actual: %h", n,DUT.hit); fail(); $finish();
        // end
        // assert(DUT.state == R0) begin
        //     $display("state is correct.  Expected: %h, Actual: %h", R0,DUT.state); pass();
        // end else begin
        //     $display("state is incorrect.  Expected: %h, Actual: %h", R0,DUT.state); fail(); $finish();
        // end
        // assert(DUT.nextState == R0) begin
        //     $display("nextState is correct.  Expected: %h, Actual: %h", R0,DUT.nextState); pass();
        // end else begin
        //     $display("nextState is incorrect.  Expected: %h, Actual: %h", R0,DUT.nextState); fail(); $finish();
        // end
        // assert(DUT.cache_req_val == y) begin
        //     $display("cache_req_val is correct.  Expected: %h, Actual: %h", y,DUT.cache_req_val); pass();
        // end else begin
        //     $display("cache_req_val is incorrect.  Expected: %h, Actual: %h", y,DUT.cache_req_val); fail(); $finish();
        // end
        // assert(DUT.cache_resp_rdy == y) begin
        //     $display("cache_resp_rdy is correct.  Expected: %h, Actual: %h", y,DUT.cache_resp_rdy); pass();
        // end else begin
        //     $display("cache_resp_rdy is incorrect.  Expected: %h, Actual: %h", y,DUT.cache_resp_rdy); fail(); $finish();
        // end
        // assert(DUT.req_count_en == y) begin
        //     $display("req_count_en is correct.  Expected: %h, Actual: %h", y,DUT.req_count_en); pass();
        // end else begin
        //     $display("req_count_en is incorrect.  Expected: %h, Actual: %h", y,DUT.req_count_en); fail(); $finish();
        // end
        // assert(DUT.resp_count_en == y) begin
        //     $display("resp_count_en is correct.  Expected: %h, Actual: %h", y,DUT.resp_count_en); pass();
        // end else begin
        //     $display("resp_count_en is incorrect.  Expected: %h, Actual: %h", y,DUT.resp_count_en); fail(); $finish();
        // end
        // assert(DUT.tarray_wen == n) begin
        //     $display("tarray_wen is correct.  Expected: %h, Actual: %h", n,DUT.tarray_wen); pass();
        // end else begin
        //     $display("tarray_wen is incorrect.  Expected: %h, Actual: %h", n,DUT.tarray_wen); fail(); $finish();
        // end
        // assert(DUT.darray_wen == n) begin
        //     $display("darray_wen is correct.  Expected: %h, Actual: %h", n,DUT.darray_wen); pass();
        // end else begin
        //     $display("darray_wen is incorrect.  Expected: %h, Actual: %h", n,DUT.darray_wen); fail(); $finish();
        // end
        // assert(DUT.index_sel == IDX) begin
        //     $display("index_sel is correct.  Expected: %h, Actual: %h", IDX,DUT.index_sel); pass();
        // end else begin
        //     $display("index_sel is incorrect.  Expected: %h, Actual: %h", IDX,DUT.index_sel); fail(); $finish();
        // end
        // assert(DUT.read_word_sel == EVICT) begin
        //     $display("read_word_sel is correct.  Expected: %h, Actual: %h", EVICT,DUT.read_word_sel); pass();
        // end else begin
        //     $display("read_word_sel is incorrect.  Expected: %h, Actual: %h", EVICT,DUT.read_word_sel); fail(); $finish();
        // end
        // assert(DUT.count_reset == y) begin
        //     $display("count_reset is correct.  Expected: %h, Actual: %h", y,DUT.count_reset); pass();
        // end else begin
        //     $display("count_reset is incorrect.  Expected: %h, Actual: %h", y,DUT.count_reset); fail(); $finish();
        // end
        
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

endmodule
