//      // verilator_coverage annotation
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
        
%000000 module top(  input logic clk, input logic linetrace );
        
 000004     logic                    reset;
        
            // imem: connection between proc and cache
 000005     logic                    memreq_val;
 000003     logic                    memreq_rdy;
%000000     mem_req_4B_t             memreq_msg;
        
 000004     logic                    memresp_val;
 000001     logic                    memresp_rdy;
%000000     mem_resp_4B_t            memresp_msg;
        
            //cache: connection between cache and imem
 000003     logic                    cache_req_val;
 000003     logic                    cache_req_rdy;
%000000     mem_req_4B_t             cache_req_msg;
        
 000003     logic                     cache_resp_val;
 000003     logic                     cache_resp_rdy;
%000000     mem_resp_4B_t             cache_resp_msg;
        
            // flush
%000000     logic flush;
%000000     logic all_flushed;
%000000     logic flush_done;
%000000     logic get_next_flush_line;
        
            // Status signals (dpath -> ctrl)
 000002     logic tarray_match;
 000001     logic line_dirty;
 000001     logic line_valid;
        
 000002     logic req_count_done;
 000002     logic resp_count_done;
        
            // Control signals (ctrl -> dpath)
 000003     logic input_en;
 000003     logic tarray_en;
 000002     logic tarray_wen;
        
 000003     logic resp_count_en;
 000003     logic req_count_en;
 000003     logic count_reset;
        
 000002     logic write_data_sel;
 000005     logic darray_en;
 000004     logic darray_wen;
%000000     logic index_sel;
 000002     logic write_word_sel;
 000001     logic read_word_sel;
%000000     logic [2:0] mem_action;
        
 000002     logic clean_set;
 000002     logic dirty_set;
        
 000002     logic valid_set;
        
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
        
 000001     initial begin
        
 000001         memreq_msg.type_ = DCMEM;
 000001         memreq_msg.opaque = 8'b0;
 000001         memreq_msg.addr = 32'dx;
 000001         memreq_msg.len = 2'd0;
 000001         memreq_msg.data = 32'dx;
        
                //--------------------------------------------------------------------
                // Unit Testing #1 Test Refill on Read Miss - Invalid Line
                //--------------------------------------------------------------------
                // Initalize all the signal inital values.
 000001         reset = 1;
 000001         @(negedge clk);
 000001         reset = 0;
 000001         memreq_msg.type_ = READ;
 000001         memreq_val = n; // no value yet
        
 000001         $display("");
 000001         $display("Test Refill on Read Miss - Invalid Line");
        
 000001         @(negedge clk); // Waiting for proc to send a val request
 000001         assert(memreq_rdy == y) begin
 000001             $display("memreq_rdy is correct.  Expected: %h, Actual: %h", y,memreq_rdy); pass();
 000001         end else begin
 000001             $display("memreq_rdy is incorrect.  Expected: %h, Actual: %h", y,memreq_rdy); fail(); $finish();
                end
 000001         assert(DUT.state == MT) begin
 000001             $display("state is correct.  Expected: %h, Actual: %h", MT,DUT.state); pass();
 000001         end else begin
 000001             $display("state is incorrect.  Expected: %h, Actual: %h", MT,DUT.state); fail(); $finish();
                end
 000001         assert(DUT.nextState == MT) begin
 000001             $display("nextState is correct.  Expected: %h, Actual: %h", MT,DUT.nextState); pass();
 000001         end else begin
 000001             $display("nextState is incorrect.  Expected: %h, Actual: %h", MT,DUT.nextState); fail(); $finish();
                end
        
 000001         delay( $urandom_range(0, 127) ); 
        
 000001         @(negedge clk); // Still waiting for proc to send a val request
 000001         assert(memreq_rdy == y) begin
 000001             $display("memreq_rdy is correct.  Expected: %h, Actual: %h", y,memreq_rdy); pass();
 000001         end else begin
 000001             $display("memreq_rdy is incorrect.  Expected: %h, Actual: %h", y,memreq_rdy); fail(); $finish();
                end
 000001         assert(DUT.state == MT) begin
 000001             $display("state is correct.  Expected: %h, Actual: %h", MT,DUT.state); pass();
 000001         end else begin
 000001             $display("state is incorrect.  Expected: %h, Actual: %h", MT,DUT.state); fail(); $finish();
                end
 000001         assert(DUT.nextState == MT) begin
 000001             $display("nextState is correct.  Expected: %h, Actual: %h", MT,DUT.nextState); pass();
 000001         end else begin
 000001             $display("nextState is incorrect.  Expected: %h, Actual: %h", MT,DUT.nextState); fail(); $finish();
                end
        
 000001         delay( $urandom_range(0, 127) ); // wait for proc value for random amount of time
 000001         memreq_val = y; // proc sends val request
 000001         line_valid = n; // line not valid - trigger refill
 000001         cache_req_rdy = n; // imem not ready to respond
        
 000001         @(negedge clk); // State transistion occured, should be in R0 now
 000001         assert(memreq_rdy == n) begin
 000001             $display("memreq_rdy is correct.  Expected: %h, Actual: %h", n,memreq_rdy); pass();
 000001         end else begin
 000001             $display("memreq_rdy is incorrect.  Expected: %h, Actual: %h", n,memreq_rdy); fail(); $finish();
                end
 000001         assert(DUT.hit == n) begin
 000001             $display("hit is correct.  Expected: %h, Actual: %h", n,DUT.hit); pass();
 000001         end else begin
 000001             $display("hit is incorrect.  Expected: %h, Actual: %h", n,DUT.hit); fail(); $finish();
                end
 000001         assert(DUT.state == R0) begin
 000001             $display("state is correct.  Expected: %h, Actual: %h", R0,DUT.state); pass();
 000001         end else begin
 000001             $display("state is incorrect.  Expected: %h, Actual: %h", R0,DUT.state); fail(); $finish();
                end
 000001         assert(DUT.nextState == R0) begin
 000001             $display("nextState is correct.  Expected: %h, Actual: %h", R0,DUT.nextState); pass();
 000001         end else begin
 000001             $display("nextState is incorrect.  Expected: %h, Actual: %h", R0,DUT.nextState); fail(); $finish();
                end
 000001         assert(DUT.cache_req_val == n) begin
 000001             $display("cache_req_val is correct.  Expected: %h, Actual: %h", n,DUT.cache_req_val); pass();
 000001         end else begin
 000001             $display("cache_req_val is incorrect.  Expected: %h, Actual: %h", n,DUT.cache_req_val); fail(); $finish();
                end
 000001         assert(DUT.cache_resp_rdy == y) begin
 000001             $display("cache_resp_rdy is correct.  Expected: %h, Actual: %h", y,DUT.cache_resp_rdy); pass();
 000001         end else begin
 000001             $display("cache_resp_rdy is incorrect.  Expected: %h, Actual: %h", y,DUT.cache_resp_rdy); fail(); $finish();
                end
 000001         assert(DUT.req_count_en == n) begin
 000001             $display("req_count_en is correct.  Expected: %h, Actual: %h", n,DUT.req_count_en); pass();
 000001         end else begin
 000001             $display("req_count_en is incorrect.  Expected: %h, Actual: %h", n,DUT.req_count_en); fail(); $finish();
                end
 000001         assert(DUT.resp_count_en == n) begin
 000001             $display("resp_count_en is correct.  Expected: %h, Actual: %h", n,DUT.resp_count_en); pass();
 000001         end else begin
 000001             $display("resp_count_en is incorrect.  Expected: %h, Actual: %h", n,DUT.resp_count_en); fail(); $finish();
                end
 000001         assert(DUT.tarray_wen == n) begin
 000001             $display("tarray_wen is correct.  Expected: %h, Actual: %h", n,DUT.tarray_wen); pass();
 000001         end else begin
 000001             $display("tarray_wen is incorrect.  Expected: %h, Actual: %h", n,DUT.tarray_wen); fail(); $finish();
                end
 000001         assert(DUT.darray_wen == n) begin
 000001             $display("darray_wen is correct.  Expected: %h, Actual: %h", n,DUT.darray_wen); pass();
 000001         end else begin
 000001             $display("darray_wen is incorrect.  Expected: %h, Actual: %h", n,DUT.darray_wen); fail(); $finish();
                end
 000001         assert(DUT.write_data_sel == IMEM) begin
 000001             $display("write_data_sel is correct.  Expected: %h, Actual: %h", IMEM,DUT.write_data_sel); pass();
 000001         end else begin
 000001             $display("write_data_sel is incorrect.  Expected: %h, Actual: %h", IMEM,DUT.write_data_sel); fail(); $finish();
                end
 000001         assert(DUT.write_word_sel == REFILL) begin
 000001             $display("write_word_sel is correct.  Expected: %h, Actual: %h", REFILL,DUT.write_word_sel); pass();
 000001         end else begin
 000001             $display("write_word_sel is incorrect.  Expected: %h, Actual: %h", REFILL,DUT.write_word_sel); fail(); $finish();
                end
 000001         assert(DUT.index_sel == IDX) begin
 000001             $display("index_sel is correct.  Expected: %h, Actual: %h", IDX,DUT.index_sel); pass();
 000001         end else begin
 000001             $display("index_sel is incorrect.  Expected: %h, Actual: %h", IDX,DUT.index_sel); fail(); $finish();
                end
        
 000001         delay( $urandom_range(0, 127) ); // wait for imem to be ready
        
 000001         @(negedge clk); // should still be waiting in R0
 000001         assert(memreq_rdy == n) begin
 000001             $display("memreq_rdy is correct.  Expected: %h, Actual: %h", n,memreq_rdy); pass();
 000001         end else begin
 000001             $display("memreq_rdy is incorrect.  Expected: %h, Actual: %h", n,memreq_rdy); fail(); $finish();
                end
 000001         assert(DUT.state == R0) begin
 000001             $display("state is correct.  Expected: %h, Actual: %h", R0,DUT.state); pass();
 000001         end else begin
 000001             $display("state is incorrect.  Expected: %h, Actual: %h", R0,DUT.state); fail(); $finish();
                end
 000001         assert(DUT.nextState == R0) begin
 000001             $display("nextState is correct.  Expected: %h, Actual: %h", R0,DUT.nextState); pass();
 000001         end else begin
 000001             $display("nextState is incorrect.  Expected: %h, Actual: %h", R0,DUT.nextState); fail(); $finish();
                end
 000001         assert(DUT.cache_req_val == n) begin
 000001             $display("cache_req_val is correct.  Expected: %h, Actual: %h", n,DUT.cache_req_val); pass();
 000001         end else begin
 000001             $display("cache_req_val is incorrect.  Expected: %h, Actual: %h", n,DUT.cache_req_val); fail(); $finish();
                end
 000001         assert(DUT.cache_resp_rdy == y) begin
 000001             $display("cache_resp_rdy is correct.  Expected: %h, Actual: %h", y,DUT.cache_resp_rdy); pass();
 000001         end else begin
 000001             $display("cache_resp_rdy is incorrect.  Expected: %h, Actual: %h", y,DUT.cache_resp_rdy); fail(); $finish();
                end
 000001         assert(DUT.req_count_en == n) begin
 000001             $display("req_count_en is correct.  Expected: %h, Actual: %h", n,DUT.req_count_en); pass();
 000001         end else begin
 000001             $display("req_count_en is incorrect.  Expected: %h, Actual: %h", n,DUT.req_count_en); fail(); $finish();
                end
 000001         assert(DUT.resp_count_en == n) begin
 000001             $display("resp_count_en is correct.  Expected: %h, Actual: %h", n,DUT.resp_count_en); pass();
 000001         end else begin
 000001             $display("resp_count_en is incorrect.  Expected: %h, Actual: %h", n,DUT.resp_count_en); fail(); $finish();
                end
 000001         assert(DUT.tarray_wen == n) begin
 000001             $display("tarray_wen is correct.  Expected: %h, Actual: %h", n,DUT.tarray_wen); pass();
 000001         end else begin
 000001             $display("tarray_wen is incorrect.  Expected: %h, Actual: %h", n,DUT.tarray_wen); fail(); $finish();
                end
 000001         assert(DUT.darray_wen == n) begin
 000001             $display("darray_wen is correct.  Expected: %h, Actual: %h", n,DUT.darray_wen); pass();
 000001         end else begin
 000001             $display("darray_wen is incorrect.  Expected: %h, Actual: %h", n,DUT.darray_wen); fail(); $finish();
                end
 000001         assert(DUT.write_data_sel == IMEM) begin
 000001             $display("write_data_sel is correct.  Expected: %h, Actual: %h", IMEM,DUT.write_data_sel); pass();
 000001         end else begin
 000001             $display("write_data_sel is incorrect.  Expected: %h, Actual: %h", IMEM,DUT.write_data_sel); fail(); $finish();
                end
 000001         assert(DUT.write_word_sel == REFILL) begin
 000001             $display("write_word_sel is correct.  Expected: %h, Actual: %h", REFILL,DUT.write_word_sel); pass();
 000001         end else begin
 000001             $display("write_word_sel is incorrect.  Expected: %h, Actual: %h", REFILL,DUT.write_word_sel); fail(); $finish();
                end
 000001         assert(DUT.index_sel == IDX) begin
 000001             $display("index_sel is correct.  Expected: %h, Actual: %h", IDX,DUT.index_sel); pass();
 000001         end else begin
 000001             $display("index_sel is incorrect.  Expected: %h, Actual: %h", IDX,DUT.index_sel); fail(); $finish();
                end
        
 000001         delay( $urandom_range(0, 127) ); // wait for imem to be ready
 000001         cache_req_rdy = y; // imem now ready to respond
        
 000001         @(negedge clk);
 000001         assert(memreq_rdy == n) begin
 000001             $display("memreq_rdy is correct.  Expected: %h, Actual: %h", n,memreq_rdy); pass();
 000001         end else begin
 000001             $display("memreq_rdy is incorrect.  Expected: %h, Actual: %h", n,memreq_rdy); fail(); $finish();
                end
 000001         assert(DUT.state == R0) begin
 000001             $display("state is correct.  Expected: %h, Actual: %h", R0,DUT.state); pass();
 000001         end else begin
 000001             $display("state is incorrect.  Expected: %h, Actual: %h", R0,DUT.state); fail(); $finish();
                end
 000001         assert(DUT.nextState == R0) begin
 000001             $display("nextState is correct.  Expected: %h, Actual: %h", R0,DUT.nextState); pass();
 000001         end else begin
 000001             $display("nextState is incorrect.  Expected: %h, Actual: %h", R0,DUT.nextState); fail(); $finish();
                end
 000001         assert(DUT.cache_req_val == y) begin
 000001             $display("cache_req_val is correct.  Expected: %h, Actual: %h", y,DUT.cache_req_val); pass();
 000001         end else begin
 000001             $display("cache_req_val is incorrect.  Expected: %h, Actual: %h", y,DUT.cache_req_val); fail(); $finish();
                end
 000001         assert(DUT.cache_resp_rdy == y) begin
 000001             $display("cache_resp_rdy is correct.  Expected: %h, Actual: %h", y,DUT.cache_resp_rdy); pass();
 000001         end else begin
 000001             $display("cache_resp_rdy is incorrect.  Expected: %h, Actual: %h", y,DUT.cache_resp_rdy); fail(); $finish();
                end
 000001         assert(DUT.req_count_en == y) begin
 000001             $display("req_count_en is correct.  Expected: %h, Actual: %h", y,DUT.req_count_en); pass();
 000001         end else begin
 000001             $display("req_count_en is incorrect.  Expected: %h, Actual: %h", y,DUT.req_count_en); fail(); $finish();
                end
 000001         assert(DUT.resp_count_en == n) begin
 000001             $display("resp_count_en is correct.  Expected: %h, Actual: %h", n,DUT.resp_count_en); pass();
 000001         end else begin
 000001             $display("resp_count_en is incorrect.  Expected: %h, Actual: %h", n,DUT.resp_count_en); fail(); $finish();
                end
 000001         assert(DUT.tarray_wen == n) begin
 000001             $display("tarray_wen is correct.  Expected: %h, Actual: %h", n,DUT.tarray_wen); pass();
 000001         end else begin
 000001             $display("tarray_wen is incorrect.  Expected: %h, Actual: %h", n,DUT.tarray_wen); fail(); $finish();
                end
 000001         assert(DUT.darray_wen == n) begin
 000001             $display("darray_wen is correct.  Expected: %h, Actual: %h", n,DUT.darray_wen); pass();
 000001         end else begin
 000001             $display("darray_wen is incorrect.  Expected: %h, Actual: %h", n,DUT.darray_wen); fail(); $finish();
                end
 000001         assert(DUT.write_data_sel == IMEM) begin
 000001             $display("write_data_sel is correct.  Expected: %h, Actual: %h", IMEM,DUT.write_data_sel); pass();
 000001         end else begin
 000001             $display("write_data_sel is incorrect.  Expected: %h, Actual: %h", IMEM,DUT.write_data_sel); fail(); $finish();
                end
 000001         assert(DUT.write_word_sel == REFILL) begin
 000001             $display("write_word_sel is correct.  Expected: %h, Actual: %h", REFILL,DUT.write_word_sel); pass();
 000001         end else begin
 000001             $display("write_word_sel is incorrect.  Expected: %h, Actual: %h", REFILL,DUT.write_word_sel); fail(); $finish();
                end
 000001         assert(DUT.index_sel == IDX) begin
 000001             $display("index_sel is correct.  Expected: %h, Actual: %h", IDX,DUT.index_sel); pass();
 000001         end else begin
 000001             $display("index_sel is incorrect.  Expected: %h, Actual: %h", IDX,DUT.index_sel); fail(); $finish();
                end
        
 000001         delay( $urandom_range(0, 127) ); // wait for imem to have response
        
 000001         @(negedge clk);
 000001         assert(memreq_rdy == n) begin
 000001             $display("memreq_rdy is correct.  Expected: %h, Actual: %h", n,memreq_rdy); pass();
 000001         end else begin
 000001             $display("memreq_rdy is incorrect.  Expected: %h, Actual: %h", n,memreq_rdy); fail(); $finish();
                end
 000001         assert(DUT.state == R0) begin
 000001             $display("state is correct.  Expected: %h, Actual: %h", R0,DUT.state); pass();
 000001         end else begin
 000001             $display("state is incorrect.  Expected: %h, Actual: %h", R0,DUT.state); fail(); $finish();
                end
 000001         assert(DUT.nextState == R0) begin
 000001             $display("nextState is correct.  Expected: %h, Actual: %h", R0,DUT.nextState); pass();
 000001         end else begin
 000001             $display("nextState is incorrect.  Expected: %h, Actual: %h", R0,DUT.nextState); fail(); $finish();
                end
 000001         assert(DUT.cache_req_val == y) begin
 000001             $display("cache_req_val is correct.  Expected: %h, Actual: %h", y,DUT.cache_req_val); pass();
 000001         end else begin
 000001             $display("cache_req_val is incorrect.  Expected: %h, Actual: %h", y,DUT.cache_req_val); fail(); $finish();
                end
 000001         assert(DUT.cache_resp_rdy == y) begin
 000001             $display("cache_resp_rdy is correct.  Expected: %h, Actual: %h", y,DUT.cache_resp_rdy); pass();
 000001         end else begin
 000001             $display("cache_resp_rdy is incorrect.  Expected: %h, Actual: %h", y,DUT.cache_resp_rdy); fail(); $finish();
                end
 000001         assert(DUT.req_count_en == y) begin
 000001             $display("req_count_en is correct.  Expected: %h, Actual: %h", y,DUT.req_count_en); pass();
 000001         end else begin
 000001             $display("req_count_en is incorrect.  Expected: %h, Actual: %h", y,DUT.req_count_en); fail(); $finish();
                end
 000001         assert(DUT.resp_count_en == n) begin
 000001             $display("resp_count_en is correct.  Expected: %h, Actual: %h", n,DUT.resp_count_en); pass();
 000001         end else begin
 000001             $display("resp_count_en is incorrect.  Expected: %h, Actual: %h", n,DUT.resp_count_en); fail(); $finish();
                end
 000001         assert(DUT.tarray_wen == n) begin
 000001             $display("tarray_wen is correct.  Expected: %h, Actual: %h", n,DUT.tarray_wen); pass();
 000001         end else begin
 000001             $display("tarray_wen is incorrect.  Expected: %h, Actual: %h", n,DUT.tarray_wen); fail(); $finish();
                end
 000001         assert(DUT.darray_wen == n) begin
 000001             $display("darray_wen is correct.  Expected: %h, Actual: %h", n,DUT.darray_wen); pass();
 000001         end else begin
 000001             $display("darray_wen is incorrect.  Expected: %h, Actual: %h", n,DUT.darray_wen); fail(); $finish();
                end
 000001         assert(DUT.write_data_sel == IMEM) begin
 000001             $display("write_data_sel is correct.  Expected: %h, Actual: %h", IMEM,DUT.write_data_sel); pass();
 000001         end else begin
 000001             $display("write_data_sel is incorrect.  Expected: %h, Actual: %h", IMEM,DUT.write_data_sel); fail(); $finish();
                end
 000001         assert(DUT.write_word_sel == REFILL) begin
 000001             $display("write_word_sel is correct.  Expected: %h, Actual: %h", REFILL,DUT.write_word_sel); pass();
 000001         end else begin
 000001             $display("write_word_sel is incorrect.  Expected: %h, Actual: %h", REFILL,DUT.write_word_sel); fail(); $finish();
                end
 000001         assert(DUT.index_sel == IDX) begin
 000001             $display("index_sel is correct.  Expected: %h, Actual: %h", IDX,DUT.index_sel); pass();
 000001         end else begin
 000001             $display("index_sel is incorrect.  Expected: %h, Actual: %h", IDX,DUT.index_sel); fail(); $finish();
                end
        
 000001         delay( $urandom_range(0, 127) ); // wait for imem to have response
 000001         cache_resp_val = y; // imem has response
                
 000001         @(negedge clk);
 000001         assert(memreq_rdy == n) begin
 000001             $display("memreq_rdy is correct.  Expected: %h, Actual: %h", n,memreq_rdy); pass();
 000001         end else begin
 000001             $display("memreq_rdy is incorrect.  Expected: %h, Actual: %h", n,memreq_rdy); fail(); $finish();
                end
 000001         assert(DUT.state == R0) begin
 000001             $display("state is correct.  Expected: %h, Actual: %h", R0,DUT.state); pass();
 000001         end else begin
 000001             $display("state is incorrect.  Expected: %h, Actual: %h", R0,DUT.state); fail(); $finish();
                end
 000001         assert(DUT.nextState == R0) begin
 000001             $display("nextState is correct.  Expected: %h, Actual: %h", R0,DUT.nextState); pass();
 000001         end else begin
 000001             $display("nextState is incorrect.  Expected: %h, Actual: %h", R0,DUT.nextState); fail(); $finish();
                end
 000001         assert(DUT.cache_req_val == y) begin
 000001             $display("cache_req_val is correct.  Expected: %h, Actual: %h", y,DUT.cache_req_val); pass();
 000001         end else begin
 000001             $display("cache_req_val is incorrect.  Expected: %h, Actual: %h", y,DUT.cache_req_val); fail(); $finish();
                end
 000001         assert(DUT.cache_resp_rdy == y) begin
 000001             $display("cache_resp_rdy is correct.  Expected: %h, Actual: %h", y,DUT.cache_resp_rdy); pass();
 000001         end else begin
 000001             $display("cache_resp_rdy is incorrect.  Expected: %h, Actual: %h", y,DUT.cache_resp_rdy); fail(); $finish();
                end
 000001         assert(DUT.req_count_en == y) begin
 000001             $display("req_count_en is correct.  Expected: %h, Actual: %h", y,DUT.req_count_en); pass();
 000001         end else begin
 000001             $display("req_count_en is incorrect.  Expected: %h, Actual: %h", y,DUT.req_count_en); fail(); $finish();
                end
 000001         assert(DUT.resp_count_en == y) begin
 000001             $display("resp_count_en is correct.  Expected: %h, Actual: %h", y,DUT.resp_count_en); pass();
 000001         end else begin
 000001             $display("resp_count_en is incorrect.  Expected: %h, Actual: %h", y,DUT.resp_count_en); fail(); $finish();
                end
 000001         assert(DUT.tarray_wen == y) begin
 000001             $display("tarray_wen is correct.  Expected: %h, Actual: %h", y,DUT.tarray_wen); pass();
 000001         end else begin
 000001             $display("tarray_wen is incorrect.  Expected: %h, Actual: %h", y,DUT.tarray_wen); fail(); $finish();
                end
 000001         assert(DUT.darray_wen == y) begin
 000001             $display("darray_wen is correct.  Expected: %h, Actual: %h", y,DUT.darray_wen); pass();
 000001         end else begin
 000001             $display("darray_wen is incorrect.  Expected: %h, Actual: %h", y,DUT.darray_wen); fail(); $finish();
                end
 000001         assert(DUT.write_data_sel == IMEM) begin
 000001             $display("write_data_sel is correct.  Expected: %h, Actual: %h", IMEM,DUT.write_data_sel); pass();
 000001         end else begin
 000001             $display("write_data_sel is incorrect.  Expected: %h, Actual: %h", IMEM,DUT.write_data_sel); fail(); $finish();
                end
 000001         assert(DUT.write_word_sel == REFILL) begin
 000001             $display("write_word_sel is correct.  Expected: %h, Actual: %h", REFILL,DUT.write_word_sel); pass();
 000001         end else begin
 000001             $display("write_word_sel is incorrect.  Expected: %h, Actual: %h", REFILL,DUT.write_word_sel); fail(); $finish();
                end
 000001         assert(DUT.index_sel == IDX) begin
 000001             $display("index_sel is correct.  Expected: %h, Actual: %h", IDX,DUT.index_sel); pass();
 000001         end else begin
 000001             $display("index_sel is incorrect.  Expected: %h, Actual: %h", IDX,DUT.index_sel); fail(); $finish();
                end
        
 000001         delay( $urandom_range(0, 127) ); // wait for imem to have response
 000001         cache_req_rdy = n; // imem not ready but still has responses
        
 000001         @(negedge clk);
 000001         assert(memreq_rdy == n) begin
 000001             $display("memreq_rdy is correct.  Expected: %h, Actual: %h", n,memreq_rdy); pass();
 000001         end else begin
 000001             $display("memreq_rdy is incorrect.  Expected: %h, Actual: %h", n,memreq_rdy); fail(); $finish();
                end
 000001         assert(DUT.state == R0) begin
 000001             $display("state is correct.  Expected: %h, Actual: %h", R0,DUT.state); pass();
 000001         end else begin
 000001             $display("state is incorrect.  Expected: %h, Actual: %h", R0,DUT.state); fail(); $finish();
                end
 000001         assert(DUT.nextState == R0) begin
 000001             $display("nextState is correct.  Expected: %h, Actual: %h", R0,DUT.nextState); pass();
 000001         end else begin
 000001             $display("nextState is incorrect.  Expected: %h, Actual: %h", R0,DUT.nextState); fail(); $finish();
                end
 000001         assert(DUT.cache_req_val == n) begin
 000001             $display("cache_req_val is correct.  Expected: %h, Actual: %h", n,DUT.cache_req_val); pass();
 000001         end else begin
 000001             $display("cache_req_val is incorrect.  Expected: %h, Actual: %h", n,DUT.cache_req_val); fail(); $finish();
                end
 000001         assert(DUT.cache_resp_rdy == y) begin
 000001             $display("cache_resp_rdy is correct.  Expected: %h, Actual: %h", y,DUT.cache_resp_rdy); pass();
 000001         end else begin
 000001             $display("cache_resp_rdy is incorrect.  Expected: %h, Actual: %h", y,DUT.cache_resp_rdy); fail(); $finish();
                end
 000001         assert(DUT.req_count_en == n) begin
 000001             $display("req_count_en is correct.  Expected: %h, Actual: %h", n,DUT.req_count_en); pass();
 000001         end else begin
 000001             $display("req_count_en is incorrect.  Expected: %h, Actual: %h", n,DUT.req_count_en); fail(); $finish();
                end
 000001         assert(DUT.resp_count_en == y) begin
 000001             $display("resp_count_en is correct.  Expected: %h, Actual: %h", y,DUT.resp_count_en); pass();
 000001         end else begin
 000001             $display("resp_count_en is incorrect.  Expected: %h, Actual: %h", y,DUT.resp_count_en); fail(); $finish();
                end
 000001         assert(DUT.tarray_wen == y) begin
 000001             $display("tarray_wen is correct.  Expected: %h, Actual: %h", y,DUT.tarray_wen); pass();
 000001         end else begin
 000001             $display("tarray_wen is incorrect.  Expected: %h, Actual: %h", y,DUT.tarray_wen); fail(); $finish();
                end
 000001         assert(DUT.darray_wen == y) begin
 000001             $display("darray_wen is correct.  Expected: %h, Actual: %h", y,DUT.darray_wen); pass();
 000001         end else begin
 000001             $display("darray_wen is incorrect.  Expected: %h, Actual: %h", y,DUT.darray_wen); fail(); $finish();
                end
 000001         assert(DUT.write_data_sel == IMEM) begin
 000001             $display("write_data_sel is correct.  Expected: %h, Actual: %h", IMEM,DUT.write_data_sel); pass();
 000001         end else begin
 000001             $display("write_data_sel is incorrect.  Expected: %h, Actual: %h", IMEM,DUT.write_data_sel); fail(); $finish();
                end
 000001         assert(DUT.write_word_sel == REFILL) begin
 000001             $display("write_word_sel is correct.  Expected: %h, Actual: %h", REFILL,DUT.write_word_sel); pass();
 000001         end else begin
 000001             $display("write_word_sel is incorrect.  Expected: %h, Actual: %h", REFILL,DUT.write_word_sel); fail(); $finish();
                end
 000001         assert(DUT.index_sel == IDX) begin
 000001             $display("index_sel is correct.  Expected: %h, Actual: %h", IDX,DUT.index_sel); pass();
 000001         end else begin
 000001             $display("index_sel is incorrect.  Expected: %h, Actual: %h", IDX,DUT.index_sel); fail(); $finish();
                end
        
 000001         delay( $urandom_range(0, 127) ); // wait for imem to have response
 000001         req_count_done = y; // refill done, wait for proc to be ready to receive, in MD
 000001         resp_count_done = y;
 000001         memresp_rdy = n;
        
 000001         @(negedge clk);
 000001         assert(memreq_rdy == n) begin
 000001             $display("memreq_rdy is correct.  Expected: %h, Actual: %h", n,memreq_rdy); pass();
 000001         end else begin
 000001             $display("memreq_rdy is incorrect.  Expected: %h, Actual: %h", n,memreq_rdy); fail(); $finish();
                end
 000001         assert(DUT.state == MD) begin
 000001             $display("state is correct.  Expected: %h, Actual: %h", MD,DUT.state); pass();
 000001         end else begin
 000001             $display("state is incorrect.  Expected: %h, Actual: %h", MD,DUT.state); fail(); $finish();
                end
 000001         assert(DUT.nextState == MD) begin
 000001             $display("nextState is correct.  Expected: %h, Actual: %h", MD,DUT.nextState); pass();
 000001         end else begin
 000001             $display("nextState is incorrect.  Expected: %h, Actual: %h", MD,DUT.nextState); fail(); $finish();
                end
 000001         assert(DUT.cache_req_val == n) begin
 000001             $display("cache_req_val is correct.  Expected: %h, Actual: %h", n,DUT.cache_req_val); pass();
 000001         end else begin
 000001             $display("cache_req_val is incorrect.  Expected: %h, Actual: %h", n,DUT.cache_req_val); fail(); $finish();
                end
 000001         assert(DUT.cache_resp_rdy == n) begin
 000001             $display("cache_resp_rdy is correct.  Expected: %h, Actual: %h", n,DUT.cache_resp_rdy); pass();
 000001         end else begin
 000001             $display("cache_resp_rdy is incorrect.  Expected: %h, Actual: %h", n,DUT.cache_resp_rdy); fail(); $finish();
                end
 000001         assert(DUT.req_count_en == n) begin
 000001             $display("req_count_en is correct.  Expected: %h, Actual: %h", n,DUT.req_count_en); pass();
 000001         end else begin
 000001             $display("req_count_en is incorrect.  Expected: %h, Actual: %h", n,DUT.req_count_en); fail(); $finish();
                end
 000001         assert(DUT.resp_count_en == n) begin
 000001             $display("resp_count_en is correct.  Expected: %h, Actual: %h", n,DUT.resp_count_en); pass();
 000001         end else begin
 000001             $display("resp_count_en is incorrect.  Expected: %h, Actual: %h", n,DUT.resp_count_en); fail(); $finish();
                end
 000001         assert(DUT.tarray_wen == n) begin
 000001             $display("tarray_wen is correct.  Expected: %h, Actual: %h", n,DUT.tarray_wen); pass();
 000001         end else begin
 000001             $display("tarray_wen is incorrect.  Expected: %h, Actual: %h", n,DUT.tarray_wen); fail(); $finish();
                end
 000001         assert(DUT.darray_wen == n) begin
 000001             $display("darray_wen is correct.  Expected: %h, Actual: %h", n,DUT.darray_wen); pass();
 000001         end else begin
 000001             $display("darray_wen is incorrect.  Expected: %h, Actual: %h", n,DUT.darray_wen); fail(); $finish();
                end
 000001         assert(DUT.valid_set == y) begin
 000001             $display("valid_set is correct.  Expected: %h, Actual: %h", y,DUT.valid_set); pass();
 000001         end else begin
 000001             $display("valid_set is incorrect.  Expected: %h, Actual: %h", y,DUT.valid_set); fail(); $finish();
                end
 000001         assert(DUT.write_data_sel == PROC) begin
 000001             $display("write_data_sel is correct.  Expected: %h, Actual: %h", PROC,DUT.write_data_sel); pass();
 000001         end else begin
 000001             $display("write_data_sel is incorrect.  Expected: %h, Actual: %h", PROC,DUT.write_data_sel); fail(); $finish();
                end
 000001         assert(DUT.write_word_sel == OFF) begin
 000001             $display("write_word_sel is correct.  Expected: %h, Actual: %h", OFF,DUT.write_word_sel); pass();
 000001         end else begin
 000001             $display("write_word_sel is incorrect.  Expected: %h, Actual: %h", OFF,DUT.write_word_sel); fail(); $finish();
                end
 000001         assert(DUT.index_sel == IDX) begin
 000001             $display("index_sel is correct.  Expected: %h, Actual: %h", IDX,DUT.index_sel); pass();
 000001         end else begin
 000001             $display("index_sel is incorrect.  Expected: %h, Actual: %h", IDX,DUT.index_sel); fail(); $finish();
                end
 000001         assert(DUT.read_word_sel == OFF) begin
 000001             $display("read_word_sel is correct.  Expected: %h, Actual: %h", OFF,DUT.read_word_sel); pass();
 000001         end else begin
 000001             $display("read_word_sel is incorrect.  Expected: %h, Actual: %h", OFF,DUT.read_word_sel); fail(); $finish();
                end
        
 000001         delay( $urandom_range(0, 127) ); // wait for proc to be ready to receive
                
 000001         @(negedge clk);
 000001         assert(memreq_rdy == n) begin
 000001             $display("memreq_rdy is correct.  Expected: %h, Actual: %h", n,memreq_rdy); pass();
 000001         end else begin
 000001             $display("memreq_rdy is incorrect.  Expected: %h, Actual: %h", n,memreq_rdy); fail(); $finish();
                end
 000001         assert(DUT.state == MD) begin
 000001             $display("state is correct.  Expected: %h, Actual: %h", R0,DUT.state); pass();
 000001         end else begin
 000001             $display("state is incorrect.  Expected: %h, Actual: %h", R0,DUT.state); fail(); $finish();
                end
 000001         assert(DUT.nextState == MD) begin
 000001             $display("nextState is correct.  Expected: %h, Actual: %h", R0,DUT.nextState); pass();
 000001         end else begin
 000001             $display("nextState is incorrect.  Expected: %h, Actual: %h", R0,DUT.nextState); fail(); $finish();
                end
 000001         assert(DUT.cache_req_val == n) begin
 000001             $display("cache_req_val is correct.  Expected: %h, Actual: %h", n,DUT.cache_req_val); pass();
 000001         end else begin
 000001             $display("cache_req_val is incorrect.  Expected: %h, Actual: %h", n,DUT.cache_req_val); fail(); $finish();
                end
 000001         assert(DUT.cache_resp_rdy == n) begin
 000001             $display("cache_resp_rdy is correct.  Expected: %h, Actual: %h", n,DUT.cache_resp_rdy); pass();
 000001         end else begin
 000001             $display("cache_resp_rdy is incorrect.  Expected: %h, Actual: %h", n,DUT.cache_resp_rdy); fail(); $finish();
                end
 000001         assert(DUT.req_count_en == n) begin
 000001             $display("req_count_en is correct.  Expected: %h, Actual: %h", n,DUT.req_count_en); pass();
 000001         end else begin
 000001             $display("req_count_en is incorrect.  Expected: %h, Actual: %h", n,DUT.req_count_en); fail(); $finish();
                end
 000001         assert(DUT.resp_count_en == n) begin
 000001             $display("resp_count_en is correct.  Expected: %h, Actual: %h", n,DUT.resp_count_en); pass();
 000001         end else begin
 000001             $display("resp_count_en is incorrect.  Expected: %h, Actual: %h", n,DUT.resp_count_en); fail(); $finish();
                end
 000001         assert(DUT.tarray_wen == n) begin
 000001             $display("tarray_wen is correct.  Expected: %h, Actual: %h", n,DUT.tarray_wen); pass();
 000001         end else begin
 000001             $display("tarray_wen is incorrect.  Expected: %h, Actual: %h", n,DUT.tarray_wen); fail(); $finish();
                end
 000001         assert(DUT.darray_wen == n) begin
 000001             $display("darray_wen is correct.  Expected: %h, Actual: %h", n,DUT.darray_wen); pass();
 000001         end else begin
 000001             $display("darray_wen is incorrect.  Expected: %h, Actual: %h", n,DUT.darray_wen); fail(); $finish();
                end
 000001         assert(DUT.write_data_sel == PROC) begin
 000001             $display("write_data_sel is correct.  Expected: %h, Actual: %h", PROC,DUT.write_data_sel); pass();
 000001         end else begin
 000001             $display("write_data_sel is incorrect.  Expected: %h, Actual: %h", PROC,DUT.write_data_sel); fail(); $finish();
                end
 000001         assert(DUT.write_word_sel == OFF) begin
 000001             $display("write_word_sel is correct.  Expected: %h, Actual: %h", OFF,DUT.write_word_sel); pass();
 000001         end else begin
 000001             $display("write_word_sel is incorrect.  Expected: %h, Actual: %h", OFF,DUT.write_word_sel); fail(); $finish();
                end
 000001         assert(DUT.index_sel == IDX) begin
 000001             $display("index_sel is correct.  Expected: %h, Actual: %h", IDX,DUT.index_sel); pass();
 000001         end else begin
 000001             $display("index_sel is incorrect.  Expected: %h, Actual: %h", IDX,DUT.index_sel); fail(); $finish();
                end
 000001         assert(DUT.read_word_sel == OFF) begin
 000001             $display("read_word_sel is correct.  Expected: %h, Actual: %h", OFF,DUT.read_word_sel); pass();
 000001         end else begin
 000001             $display("read_word_sel is incorrect.  Expected: %h, Actual: %h", OFF,DUT.read_word_sel); fail(); $finish();
                end
                
 000001         delay( $urandom_range(0, 127) );
 000001         memresp_rdy = y; // imem ready to receive value
 000001         memreq_val = n; // imem not ready to give value
        
 000001         @(negedge clk); // should be in MT now
 000001         assert(memreq_rdy == y) begin
 000001             $display("memreq_rdy is correct.  Expected: %h, Actual: %h", y,memreq_rdy); pass();
 000001         end else begin
 000001             $display("memreq_rdy is incorrect.  Expected: %h, Actual: %h", y,memreq_rdy); fail(); $finish();
                end
 000001         assert(DUT.state == MT) begin
 000001             $display("state is correct.  Expected: %h, Actual: %h", MT,DUT.state); pass();
 000001         end else begin
 000001             $display("state is incorrect.  Expected: %h, Actual: %h", MT,DUT.state); fail(); $finish();
                end
 000001         assert(DUT.nextState == MT) begin
 000001             $display("nextState is correct.  Expected: %h, Actual: %h", MT,DUT.nextState); pass();
 000001         end else begin
 000001             $display("nextState is incorrect.  Expected: %h, Actual: %h", MT,DUT.nextState); fail(); $finish();
                end
 000001         assert(DUT.cache_req_val == n) begin
 000001             $display("cache_req_val is correct.  Expected: %h, Actual: %h", n,DUT.cache_req_val); pass();
 000001         end else begin
 000001             $display("cache_req_val is incorrect.  Expected: %h, Actual: %h", n,DUT.cache_req_val); fail(); $finish();
                end
 000001         assert(DUT.cache_resp_rdy == n) begin
 000001             $display("cache_resp_rdy is correct.  Expected: %h, Actual: %h", n,DUT.cache_resp_rdy); pass();
 000001         end else begin
 000001             $display("cache_resp_rdy is incorrect.  Expected: %h, Actual: %h", n,DUT.cache_resp_rdy); fail(); $finish();
                end
 000001         assert(DUT.req_count_en == n) begin
 000001             $display("req_count_en is correct.  Expected: %h, Actual: %h", n,DUT.req_count_en); pass();
 000001         end else begin
 000001             $display("req_count_en is incorrect.  Expected: %h, Actual: %h", n,DUT.req_count_en); fail(); $finish();
                end
 000001         assert(DUT.resp_count_en == n) begin
 000001             $display("resp_count_en is correct.  Expected: %h, Actual: %h", n,DUT.resp_count_en); pass();
 000001         end else begin
 000001             $display("resp_count_en is incorrect.  Expected: %h, Actual: %h", n,DUT.resp_count_en); fail(); $finish();
                end
 000001         assert(DUT.tarray_wen == n) begin
 000001             $display("tarray_wen is correct.  Expected: %h, Actual: %h", n,DUT.tarray_wen); pass();
 000001         end else begin
 000001             $display("tarray_wen is incorrect.  Expected: %h, Actual: %h", n,DUT.tarray_wen); fail(); $finish();
                end
 000001         assert(DUT.darray_wen == n) begin
 000001             $display("darray_wen is correct.  Expected: %h, Actual: %h", n,DUT.darray_wen); pass();
 000001         end else begin
 000001             $display("darray_wen is incorrect.  Expected: %h, Actual: %h", n,DUT.darray_wen); fail(); $finish();
                end
        
 000001         delay( $urandom_range(0, 127) );
        
                //--------------------------------------------------------------------
                // Unit Testing #2 Test Hit with Write
                //--------------------------------------------------------------------
                // Initalize all the signal inital values.
 000001         reset = 1;
 000001         @(negedge clk);
 000001         reset = 0;
 000001         memreq_msg.type_ = WRITE;
 000001         memreq_val = n; // no value yet
        
 000001         $display("");
 000001         $display("Test Hit with Write");
                
 000001         @(negedge clk); // Waiting for proc to send a val request
 000001         assert(memreq_rdy == y) begin
 000001             $display("memreq_rdy is correct.  Expected: %h, Actual: %h", y,memreq_rdy); pass();
 000001         end else begin
 000001             $display("memreq_rdy is incorrect.  Expected: %h, Actual: %h", y,memreq_rdy); fail(); $finish();
                end
 000001         assert(DUT.state == MT) begin
 000001             $display("state is correct.  Expected: %h, Actual: %h", MT,DUT.state); pass();
 000001         end else begin
 000001             $display("state is incorrect.  Expected: %h, Actual: %h", MT,DUT.state); fail(); $finish();
                end
 000001         assert(DUT.nextState == MT) begin
 000001             $display("nextState is correct.  Expected: %h, Actual: %h", MT,DUT.nextState); pass();
 000001         end else begin
 000001             $display("nextState is incorrect.  Expected: %h, Actual: %h", MT,DUT.nextState); fail(); $finish();
                end
        
 000001         delay( $urandom_range(0, 127) );
 000001         memreq_val = y; // value ready for cache
 000001         memresp_val = n; // processor not ready to receive value;
 000001         line_valid = y;
 000001         tarray_match = y; // hit
                
 000001         @(negedge clk); // Hit - still in MT
 000001         assert(memreq_rdy == y) begin
 000001             $display("memreq_rdy is correct.  Expected: %h, Actual: %h", y,memreq_rdy); pass();
 000001         end else begin
 000001             $display("memreq_rdy is incorrect.  Expected: %h, Actual: %h", y,memreq_rdy); fail(); $finish();
                end
 000001         assert(DUT.hit == y) begin
 000001             $display("hit is correct.  Expected: %h, Actual: %h", y,DUT.hit); pass();
 000001         end else begin
 000001             $display("hit is incorrect.  Expected: %h, Actual: %h", y,DUT.hit); fail(); $finish();
                end
 000001         assert(DUT.state == MT) begin
 000001             $display("state is correct.  Expected: %h, Actual: %h", MT,DUT.state); pass();
 000001         end else begin
 000001             $display("state is incorrect.  Expected: %h, Actual: %h", MT,DUT.state); fail(); $finish();
                end
 000001         assert(DUT.nextState == MT) begin
 000001             $display("nextState is correct.  Expected: %h, Actual: %h", MT,DUT.nextState); pass();
 000001         end else begin
 000001             $display("nextState is incorrect.  Expected: %h, Actual: %h", MT,DUT.nextState); fail(); $finish();
                end
 000001         assert(DUT.cache_req_val == n) begin
 000001             $display("cache_req_val is correct.  Expected: %h, Actual: %h", n,DUT.cache_req_val); pass();
 000001         end else begin
 000001             $display("cache_req_val is incorrect.  Expected: %h, Actual: %h", n,DUT.cache_req_val); fail(); $finish();
                end
 000001         assert(DUT.cache_resp_rdy == n) begin
 000001             $display("cache_resp_rdy is correct.  Expected: %h, Actual: %h", n,DUT.cache_resp_rdy); pass();
 000001         end else begin
 000001             $display("cache_resp_rdy is incorrect.  Expected: %h, Actual: %h", n,DUT.cache_resp_rdy); fail(); $finish();
                end
 000001         assert(DUT.req_count_en == n) begin
 000001             $display("req_count_en is correct.  Expected: %h, Actual: %h", n,DUT.req_count_en); pass();
 000001         end else begin
 000001             $display("req_count_en is incorrect.  Expected: %h, Actual: %h", n,DUT.req_count_en); fail(); $finish();
                end
 000001         assert(DUT.resp_count_en == n) begin
 000001             $display("resp_count_en is correct.  Expected: %h, Actual: %h", n,DUT.resp_count_en); pass();
 000001         end else begin
 000001             $display("resp_count_en is incorrect.  Expected: %h, Actual: %h", n,DUT.resp_count_en); fail(); $finish();
                end
 000001         assert(DUT.tarray_wen == n) begin
 000001             $display("tarray_wen is correct.  Expected: %h, Actual: %h", n,DUT.tarray_wen); pass();
 000001         end else begin
 000001             $display("tarray_wen is incorrect.  Expected: %h, Actual: %h", n,DUT.tarray_wen); fail(); $finish();
                end
 000001         assert(DUT.darray_wen == y) begin
 000001             $display("darray_wen is correct.  Expected: %h, Actual: %h", y,DUT.darray_wen); pass();
 000001         end else begin
 000001             $display("darray_wen is incorrect.  Expected: %h, Actual: %h", y,DUT.darray_wen); fail(); $finish();
                end
 000001         assert(DUT.dirty_set == y) begin
 000001             $display("dirty_set is correct.  Expected: %h, Actual: %h", y,DUT.dirty_set); pass();
 000001         end else begin
 000001             $display("dirty_set is incorrect.  Expected: %h, Actual: %h", y,DUT.dirty_set); fail(); $finish();
                end
 000001         assert(DUT.write_data_sel == PROC) begin
 000001             $display("write_data_sel is correct.  Expected: %h, Actual: %h", PROC,DUT.write_data_sel); pass();
 000001         end else begin
 000001             $display("write_data_sel is incorrect.  Expected: %h, Actual: %h", PROC,DUT.write_data_sel); fail(); $finish();
                end
 000001         assert(DUT.write_word_sel == OFF) begin
 000001             $display("write_word_sel is correct.  Expected: %h, Actual: %h", OFF,DUT.write_word_sel); pass();
 000001         end else begin
 000001             $display("write_word_sel is incorrect.  Expected: %h, Actual: %h", OFF,DUT.write_word_sel); fail(); $finish();
                end
 000001         assert(DUT.index_sel == IDX) begin
 000001             $display("index_sel is correct.  Expected: %h, Actual: %h", IDX,DUT.index_sel); pass();
 000001         end else begin
 000001             $display("index_sel is incorrect.  Expected: %h, Actual: %h", IDX,DUT.index_sel); fail(); $finish();
                end
 000001         assert(DUT.read_word_sel == OFF) begin
 000001             $display("read_word_sel is correct.  Expected: %h, Actual: %h", OFF,DUT.read_word_sel); pass();
 000001         end else begin
 000001             $display("read_word_sel is incorrect.  Expected: %h, Actual: %h", OFF,DUT.read_word_sel); fail(); $finish();
                end
        
 000001         delay( $urandom_range(0, 127) );
 000001         memreq_val = n;
 000001         memresp_rdy = y; // proc ready to receive value
        
 000001         @(negedge clk); // Proc received value, cache waiting for next request
 000001         assert(memreq_rdy == y) begin
 000001             $display("memreq_rdy is correct.  Expected: %h, Actual: %h", y,memreq_rdy); pass();
 000001         end else begin
 000001             $display("memreq_rdy is incorrect.  Expected: %h, Actual: %h", y,memreq_rdy); fail(); $finish();
                end
 000001         assert(DUT.hit == n) begin
 000001             $display("hit is correct.  Expected: %h, Actual: %h", n,DUT.hit); pass();
 000001         end else begin
 000001             $display("hit is incorrect.  Expected: %h, Actual: %h", n,DUT.hit); fail(); $finish();
                end
 000001         assert(DUT.state == MT) begin
 000001             $display("state is correct.  Expected: %h, Actual: %h", MT,DUT.state); pass();
 000001         end else begin
 000001             $display("state is incorrect.  Expected: %h, Actual: %h", MT,DUT.state); fail(); $finish();
                end
 000001         assert(DUT.nextState == MT) begin
 000001             $display("nextState is correct.  Expected: %h, Actual: %h", MT,DUT.nextState); pass();
 000001         end else begin
 000001             $display("nextState is incorrect.  Expected: %h, Actual: %h", MT,DUT.nextState); fail(); $finish();
                end
 000001         assert(DUT.cache_req_val == n) begin
 000001             $display("cache_req_val is correct.  Expected: %h, Actual: %h", n,DUT.cache_req_val); pass();
 000001         end else begin
 000001             $display("cache_req_val is incorrect.  Expected: %h, Actual: %h", n,DUT.cache_req_val); fail(); $finish();
                end
 000001         assert(DUT.cache_resp_rdy == n) begin
 000001             $display("cache_resp_rdy is correct.  Expected: %h, Actual: %h", n,DUT.cache_resp_rdy); pass();
 000001         end else begin
 000001             $display("cache_resp_rdy is incorrect.  Expected: %h, Actual: %h", n,DUT.cache_resp_rdy); fail(); $finish();
                end
 000001         assert(DUT.req_count_en == n) begin
 000001             $display("req_count_en is correct.  Expected: %h, Actual: %h", n,DUT.req_count_en); pass();
 000001         end else begin
 000001             $display("req_count_en is incorrect.  Expected: %h, Actual: %h", n,DUT.req_count_en); fail(); $finish();
                end
 000001         assert(DUT.resp_count_en == n) begin
 000001             $display("resp_count_en is correct.  Expected: %h, Actual: %h", n,DUT.resp_count_en); pass();
 000001         end else begin
 000001             $display("resp_count_en is incorrect.  Expected: %h, Actual: %h", n,DUT.resp_count_en); fail(); $finish();
                end
 000001         assert(DUT.tarray_wen == n) begin
 000001             $display("tarray_wen is correct.  Expected: %h, Actual: %h", n,DUT.tarray_wen); pass();
 000001         end else begin
 000001             $display("tarray_wen is incorrect.  Expected: %h, Actual: %h", n,DUT.tarray_wen); fail(); $finish();
                end
 000001         assert(DUT.darray_wen == n) begin
 000001             $display("darray_wen is correct.  Expected: %h, Actual: %h", n,DUT.darray_wen); pass();
 000001         end else begin
 000001             $display("darray_wen is incorrect.  Expected: %h, Actual: %h", n,DUT.darray_wen); fail(); $finish();
                end
 000001         assert(DUT.dirty_set == n) begin
 000001             $display("dirty_set is correct.  Expected: %h, Actual: %h", n,DUT.dirty_set); pass();
 000001         end else begin
 000001             $display("dirty_set is incorrect.  Expected: %h, Actual: %h", n,DUT.dirty_set); fail(); $finish();
                end
 000001         assert(DUT.write_data_sel == PROC) begin
 000001             $display("write_data_sel is correct.  Expected: %h, Actual: %h", PROC,DUT.write_data_sel); pass();
 000001         end else begin
 000001             $display("write_data_sel is incorrect.  Expected: %h, Actual: %h", PROC,DUT.write_data_sel); fail(); $finish();
                end
 000001         assert(DUT.write_word_sel == OFF) begin
 000001             $display("write_word_sel is correct.  Expected: %h, Actual: %h", OFF,DUT.write_word_sel); pass();
 000001         end else begin
 000001             $display("write_word_sel is incorrect.  Expected: %h, Actual: %h", OFF,DUT.write_word_sel); fail(); $finish();
                end
 000001         assert(DUT.index_sel == IDX) begin
 000001             $display("index_sel is correct.  Expected: %h, Actual: %h", IDX,DUT.index_sel); pass();
 000001         end else begin
 000001             $display("index_sel is incorrect.  Expected: %h, Actual: %h", IDX,DUT.index_sel); fail(); $finish();
                end
 000001         assert(DUT.read_word_sel == OFF) begin
 000001             $display("read_word_sel is correct.  Expected: %h, Actual: %h", OFF,DUT.read_word_sel); pass();
 000001         end else begin
 000001             $display("read_word_sel is incorrect.  Expected: %h, Actual: %h", OFF,DUT.read_word_sel); fail(); $finish();
                end
        
 000001         delay( $urandom_range(0, 127) );
        
                //--------------------------------------------------------------------
                // Unit Testing #3 Dirty Line - Eviction
                //--------------------------------------------------------------------
                // Initalize all the signal inital values.
 000001         reset = 1;
 000001         @(negedge clk);
 000001         reset = 0;
 000001         req_count_done = n;
 000001         resp_count_done = n;
 000001         memreq_msg.type_ = READ;
 000001         memreq_val = n; // no value yet
        
 000001         $display("");
 000001         $display("Dirty Line - Eviction");
        
 000001         @(negedge clk); // Waiting for proc to send a val request
 000001         assert(memreq_rdy == y) begin
 000001             $display("memreq_rdy is correct.  Expected: %h, Actual: %h", y,memreq_rdy); pass();
 000001         end else begin
 000001             $display("memreq_rdy is incorrect.  Expected: %h, Actual: %h", y,memreq_rdy); fail(); $finish();
                end
 000001         assert(DUT.state == MT) begin
 000001             $display("state is correct.  Expected: %h, Actual: %h", MT,DUT.state); pass();
 000001         end else begin
 000001             $display("state is incorrect.  Expected: %h, Actual: %h", MT,DUT.state); fail(); $finish();
                end
 000001         assert(DUT.nextState == MT) begin
 000001             $display("nextState is correct.  Expected: %h, Actual: %h", MT,DUT.nextState); pass();
 000001         end else begin
 000001             $display("nextState is incorrect.  Expected: %h, Actual: %h", MT,DUT.nextState); fail(); $finish();
                end
        
 000001         delay( $urandom_range(0, 127) );
 000001         line_valid = y;
 000001         line_dirty = y;
 000001         memreq_val = y; // proc gives value
 000001         tarray_match = n; // miss
 000001         cache_req_rdy = n; // imem not ready to receive request
 000001         cache_resp_val = n; // imem doesn't have a reponse ready
        
 000001         @(negedge clk); // State transistion occured, should be in E0 now
 000001         assert(memreq_rdy == n) begin
 000001             $display("memreq_rdy is correct.  Expected: %h, Actual: %h", n,memreq_rdy); pass();
 000001         end else begin
 000001             $display("memreq_rdy is incorrect.  Expected: %h, Actual: %h", n,memreq_rdy); fail(); $finish();
                end
 000001         assert(DUT.hit == n) begin
 000001             $display("hit is correct.  Expected: %h, Actual: %h", n,DUT.hit); pass();
 000001         end else begin
 000001             $display("hit is incorrect.  Expected: %h, Actual: %h", n,DUT.hit); fail(); $finish();
                end
 000001         assert(DUT.state == E0) begin
 000001             $display("state is correct.  Expected: %h, Actual: %h", E0,DUT.state); pass();
 000001         end else begin
 000001             $display("state is incorrect.  Expected: %h, Actual: %h", E0,DUT.state); fail(); $finish();
                end
 000001         assert(DUT.nextState == E0) begin
 000001             $display("nextState is correct.  Expected: %h, Actual: %h", E0,DUT.nextState); pass();
 000001         end else begin
 000001             $display("nextState is incorrect.  Expected: %h, Actual: %h", E0,DUT.nextState); fail(); $finish();
                end
 000001         assert(DUT.cache_req_val == n) begin
 000001             $display("cache_req_val is correct.  Expected: %h, Actual: %h", n,DUT.cache_req_val); pass();
 000001         end else begin
 000001             $display("cache_req_val is incorrect.  Expected: %h, Actual: %h", n,DUT.cache_req_val); fail(); $finish();
                end
 000001         assert(DUT.cache_resp_rdy == y) begin
 000001             $display("cache_resp_rdy is correct.  Expected: %h, Actual: %h", y,DUT.cache_resp_rdy); pass();
 000001         end else begin
 000001             $display("cache_resp_rdy is incorrect.  Expected: %h, Actual: %h", y,DUT.cache_resp_rdy); fail(); $finish();
                end
 000001         assert(DUT.req_count_en == n) begin
 000001             $display("req_count_en is correct.  Expected: %h, Actual: %h", n,DUT.req_count_en); pass();
 000001         end else begin
 000001             $display("req_count_en is incorrect.  Expected: %h, Actual: %h", n,DUT.req_count_en); fail(); $finish();
                end
 000001         assert(DUT.resp_count_en == n) begin
 000001             $display("resp_count_en is correct.  Expected: %h, Actual: %h", n,DUT.resp_count_en); pass();
 000001         end else begin
 000001             $display("resp_count_en is incorrect.  Expected: %h, Actual: %h", n,DUT.resp_count_en); fail(); $finish();
                end
 000001         assert(DUT.tarray_wen == n) begin
 000001             $display("tarray_wen is correct.  Expected: %h, Actual: %h", n,DUT.tarray_wen); pass();
 000001         end else begin
 000001             $display("tarray_wen is incorrect.  Expected: %h, Actual: %h", n,DUT.tarray_wen); fail(); $finish();
                end
 000001         assert(DUT.darray_wen == n) begin
 000001             $display("darray_wen is correct.  Expected: %h, Actual: %h", n,DUT.darray_wen); pass();
 000001         end else begin
 000001             $display("darray_wen is incorrect.  Expected: %h, Actual: %h", n,DUT.darray_wen); fail(); $finish();
                end
        
 000001         delay( $urandom_range(0, 127) );
 000001         cache_req_rdy = y; // imem ready to receive request
 000001         cache_resp_val = n; // imem doesn't have a reponse ready
        
 000001         @(negedge clk); // State transistion occured, should be in E0 now
 000001         assert(memreq_rdy == n) begin
 000001             $display("memreq_rdy is correct.  Expected: %h, Actual: %h", n,memreq_rdy); pass();
 000001         end else begin
 000001             $display("memreq_rdy is incorrect.  Expected: %h, Actual: %h", n,memreq_rdy); fail(); $finish();
                end
 000001         assert(DUT.hit == n) begin
 000001             $display("hit is correct.  Expected: %h, Actual: %h", n,DUT.hit); pass();
 000001         end else begin
 000001             $display("hit is incorrect.  Expected: %h, Actual: %h", n,DUT.hit); fail(); $finish();
                end
 000001         assert(DUT.state == E0) begin
 000001             $display("state is correct.  Expected: %h, Actual: %h", E0,DUT.state); pass();
 000001         end else begin
 000001             $display("state is incorrect.  Expected: %h, Actual: %h", E0,DUT.state); fail(); $finish();
                end
 000001         assert(DUT.nextState == E0) begin
 000001             $display("nextState is correct.  Expected: %h, Actual: %h", E0,DUT.nextState); pass();
 000001         end else begin
 000001             $display("nextState is incorrect.  Expected: %h, Actual: %h", E0,DUT.nextState); fail(); $finish();
                end
 000001         assert(DUT.cache_req_val == y) begin
 000001             $display("cache_req_val is correct.  Expected: %h, Actual: %h", y,DUT.cache_req_val); pass();
 000001         end else begin
 000001             $display("cache_req_val is incorrect.  Expected: %h, Actual: %h", y,DUT.cache_req_val); fail(); $finish();
                end
 000001         assert(DUT.cache_resp_rdy == y) begin
 000001             $display("cache_resp_rdy is correct.  Expected: %h, Actual: %h", y,DUT.cache_resp_rdy); pass();
 000001         end else begin
 000001             $display("cache_resp_rdy is incorrect.  Expected: %h, Actual: %h", y,DUT.cache_resp_rdy); fail(); $finish();
                end
 000001         assert(DUT.req_count_en == y) begin
 000001             $display("req_count_en is correct.  Expected: %h, Actual: %h", y,DUT.req_count_en); pass();
 000001         end else begin
 000001             $display("req_count_en is incorrect.  Expected: %h, Actual: %h", y,DUT.req_count_en); fail(); $finish();
                end
 000001         assert(DUT.resp_count_en == n) begin
 000001             $display("resp_count_en is correct.  Expected: %h, Actual: %h", n,DUT.resp_count_en); pass();
 000001         end else begin
 000001             $display("resp_count_en is incorrect.  Expected: %h, Actual: %h", n,DUT.resp_count_en); fail(); $finish();
                end
 000001         assert(DUT.tarray_wen == n) begin
 000001             $display("tarray_wen is correct.  Expected: %h, Actual: %h", n,DUT.tarray_wen); pass();
 000001         end else begin
 000001             $display("tarray_wen is incorrect.  Expected: %h, Actual: %h", n,DUT.tarray_wen); fail(); $finish();
                end
 000001         assert(DUT.darray_wen == n) begin
 000001             $display("darray_wen is correct.  Expected: %h, Actual: %h", n,DUT.darray_wen); pass();
 000001         end else begin
 000001             $display("darray_wen is incorrect.  Expected: %h, Actual: %h", n,DUT.darray_wen); fail(); $finish();
                end
 000001         assert(DUT.index_sel == IDX) begin
 000001             $display("index_sel is correct.  Expected: %h, Actual: %h", IDX,DUT.index_sel); pass();
 000001         end else begin
 000001             $display("index_sel is incorrect.  Expected: %h, Actual: %h", IDX,DUT.index_sel); fail(); $finish();
                end
 000001         assert(DUT.read_word_sel == EVICT) begin
 000001             $display("read_word_sel is correct.  Expected: %h, Actual: %h", EVICT,DUT.read_word_sel); pass();
 000001         end else begin
 000001             $display("read_word_sel is incorrect.  Expected: %h, Actual: %h", EVICT,DUT.read_word_sel); fail(); $finish();
                end
        
 000001         delay( $urandom_range(0, 127) );
 000001         cache_req_rdy = y; // imem ready to receive request
 000001         cache_resp_val = y; // imem has a reponse ready
        
 000001         @(negedge clk); // State transistion occured, should be in E0 now
 000001         assert(memreq_rdy == n) begin
 000001             $display("memreq_rdy is correct.  Expected: %h, Actual: %h", n,memreq_rdy); pass();
 000001         end else begin
 000001             $display("memreq_rdy is incorrect.  Expected: %h, Actual: %h", n,memreq_rdy); fail(); $finish();
                end
 000001         assert(DUT.hit == n) begin
 000001             $display("hit is correct.  Expected: %h, Actual: %h", n,DUT.hit); pass();
 000001         end else begin
 000001             $display("hit is incorrect.  Expected: %h, Actual: %h", n,DUT.hit); fail(); $finish();
                end
 000001         assert(DUT.state == E0) begin
 000001             $display("state is correct.  Expected: %h, Actual: %h", E0,DUT.state); pass();
 000001         end else begin
 000001             $display("state is incorrect.  Expected: %h, Actual: %h", E0,DUT.state); fail(); $finish();
                end
 000001         assert(DUT.nextState == E0) begin
 000001             $display("nextState is correct.  Expected: %h, Actual: %h", E0,DUT.nextState); pass();
 000001         end else begin
 000001             $display("nextState is incorrect.  Expected: %h, Actual: %h", E0,DUT.nextState); fail(); $finish();
                end
 000001         assert(DUT.cache_req_val == y) begin
 000001             $display("cache_req_val is correct.  Expected: %h, Actual: %h", y,DUT.cache_req_val); pass();
 000001         end else begin
 000001             $display("cache_req_val is incorrect.  Expected: %h, Actual: %h", y,DUT.cache_req_val); fail(); $finish();
                end
 000001         assert(DUT.cache_resp_rdy == y) begin
 000001             $display("cache_resp_rdy is correct.  Expected: %h, Actual: %h", y,DUT.cache_resp_rdy); pass();
 000001         end else begin
 000001             $display("cache_resp_rdy is incorrect.  Expected: %h, Actual: %h", y,DUT.cache_resp_rdy); fail(); $finish();
                end
 000001         assert(DUT.req_count_en == y) begin
 000001             $display("req_count_en is correct.  Expected: %h, Actual: %h", y,DUT.req_count_en); pass();
 000001         end else begin
 000001             $display("req_count_en is incorrect.  Expected: %h, Actual: %h", y,DUT.req_count_en); fail(); $finish();
                end
 000001         assert(DUT.resp_count_en == y) begin
 000001             $display("resp_count_en is correct.  Expected: %h, Actual: %h", y,DUT.resp_count_en); pass();
 000001         end else begin
 000001             $display("resp_count_en is incorrect.  Expected: %h, Actual: %h", y,DUT.resp_count_en); fail(); $finish();
                end
 000001         assert(DUT.tarray_wen == n) begin
 000001             $display("tarray_wen is correct.  Expected: %h, Actual: %h", n,DUT.tarray_wen); pass();
 000001         end else begin
 000001             $display("tarray_wen is incorrect.  Expected: %h, Actual: %h", n,DUT.tarray_wen); fail(); $finish();
                end
 000001         assert(DUT.darray_wen == n) begin
 000001             $display("darray_wen is correct.  Expected: %h, Actual: %h", n,DUT.darray_wen); pass();
 000001         end else begin
 000001             $display("darray_wen is incorrect.  Expected: %h, Actual: %h", n,DUT.darray_wen); fail(); $finish();
                end
 000001         assert(DUT.index_sel == IDX) begin
 000001             $display("index_sel is correct.  Expected: %h, Actual: %h", IDX,DUT.index_sel); pass();
 000001         end else begin
 000001             $display("index_sel is incorrect.  Expected: %h, Actual: %h", IDX,DUT.index_sel); fail(); $finish();
                end
 000001         assert(DUT.read_word_sel == EVICT) begin
 000001             $display("read_word_sel is correct.  Expected: %h, Actual: %h", EVICT,DUT.read_word_sel); pass();
 000001         end else begin
 000001             $display("read_word_sel is incorrect.  Expected: %h, Actual: %h", EVICT,DUT.read_word_sel); fail(); $finish();
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
                
 000001         delay( $urandom_range(0, 127) );
        
 000001         $display();
 000001         $display("All tests passed!");
 000001         $finish();
        
            end
        
 000018     task delay( int delay_val );
 000018       begin
 000018           for( int i = 0; i < delay_val; i = i + 1 ) begin
 001126               #1;
                  end
              end
            endtask
        
        endmodule
        
