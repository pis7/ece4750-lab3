

module lab3_cache_CacheBaseCtrl
(
    input  logic                    clk,
    input  logic                    reset,


    // imem: connection between proc and cache
    input  logic                    memreq_val,
    output logic                    memreq_rdy,
    input  mem_req_4B_t             memreq_msg, 

    output logic                    memresp_val,
    input  logic                    memresp_rdy,
    output mem_resp_4B_t            memresp_msg,

    //cache: connection between cache and imem
    output  logic                    cache_req_val,
    input   logic                    cache_req_rdy,
    output  mem_req_4B_t             cache_req_msg,
 
    input  logic                     cache_resp_val,
    output logic                     cache_resp_rdy,
    input  mem_resp_4B_t             cache_resp_msg,

    // flush
    input logic                     flush,
    input logic all_flushed,
    output logic                    flush_done,
    output logic get_next_flush_line,

    // Status signals (dpath -> ctrl)
    input logic tarray_match,
    input logic line_dirty,
    input logic line_valid,

    input logic count_done,

    // Control signals (ctrl -> dpath)
    output logic tarray_en,
    output logic tarray_wen,

    output logic count_en,
    output logic count_reset,

    output logic write_data_sel,
    output logic darray_en,
    output logic darray_wen,
    output logic index_sel,
    output logic word_en_sel,
    output logic [2:0] mem_action,

    output logic clean_set,
    output logic dirty_set,

    output logic valid_set
);

// Data array word select
localparam OFF = 1'd0;
localparam REFILL = 1'd1;

// Data array index select;
localparam IDX = 1'd0;
localparam FLUSH = 1'd1;

// Write tag and data source select
localparam PROC = 1'd0;
localparam IMEM = 1'd1;

// imem action
localparam READ = `VC_MEM_REQ_MSG_TYPE_READ;
localparam WRITE = `VC_MEM_REQ_MSG_TYPE_WRITE;

// FSM states
localparam MT = 3'd0; // Check tag
localparam E0 = 3'd1; // Evict data
localparam R0 = 3'd2; // Refill data
localparam MD = 3'd3; // Data access (R/W)
localparam FL = 3'd4; // Flush

logic [2:0] state;
logic [2:0] nextState;

// State register
always_ff @(posedge clk) begin
    if (reset) state <= MT;
    else state <= nextState;
end

always_comb begin
    case(state)
        MT: begin // Wait for request and check tag
            // Ready to receive new req from proc if it is ready to respond, read data out upon read hit
            memreq_rdy = 1'b1;
            if (memreq_val && tarray_match && line_valid) memresp_val = 1'b1;
            else memresp_val = 1'b0;

            // Not requesting from imem
            cache_req_val = 1'b0;
            cache_resp_rdy = 1'b0;
            mem_action = READ;

            // Not flushing
            flush_done = 1'b0;

            // Read from tag array, do not write
            tarray_en = 1'b1;
            tarray_wen = 1'b0;

            // Access data, write to array word if write hit and set line to dirty, read from array word if read hit
            if (memreq_val && tarray_match && line_valid && memreq_msg.type_ == WRITE) begin
                darray_en = 1'b1;
                darray_wen = 1'b1;
                dirty_set = 1'b1;
            end else if (memreq_val && tarray_match && line_valid && memreq_msg.type_ == READ) begin
                darray_en = 1'b1;
                darray_wen = 1'b0;
                dirty_set = 1'b0;
            end else begin
                darray_en = 1'b0;
                darray_wen = 1'b0;
                dirty_set = 1'b0;
            end
            word_en_sel = OFF;
            clean_set = 1'b0;
            index_sel = IDX;
            write_data_sel = PROC;
            valid_set = 1'b0;

            // Disable counter, reset
            count_en = 1'b0;
            count_reset = 1'b1;

            get_next_flush_line = 1'b0;

            // Go to MD if cache req and tag match, go to R0 if no match and clean, go to E0 if no match and dirty
            // Flush if cache waiting for proc req but flush req received
            if (!memreq_val && flush) nextState = FL;
            else if ((!tarray_match && !line_dirty) || !line_valid) nextState = R0;
            else if (!tarray_match && line_dirty) nextState = E0;
            else nextState = MT;
        end
        E0: begin // Evict data from memory if dirty
            // Not ready to receive new req from proc
            memreq_rdy = 1'b0;
            memresp_val = 1'b0;

            // Writing to imem
            cache_req_val = 1'b1; // request to imem
            cache_resp_rdy = 1'b1; // no response needed but keep enabled
            mem_action = WRITE; // write

            // Not flushing
            flush_done = 1'b0;

            // No tag access
            tarray_en = 1'b0;
            tarray_wen = 1'b0;

            // Read data, do not write
            darray_en = 1'b1;
            darray_wen = 1'b0;
            word_en_sel = OFF; // don't care since not writing
            clean_set = 1'b0;
            dirty_set = 1'b0;
            index_sel = IDX;
            write_data_sel = PROC;
            valid_set = 1'b0;

            get_next_flush_line = 1'b0;

            // Enable counter if memory has a result from the request
            if (!cache_resp_val) count_en = 1'b0; // do not enable counter update if memory doesn't have a response
            else count_en = 1'b1; // enable increment to counter if memory response ready

            // Go to R0 if eviction of line is done and reset counter for refill
            if (count_done) begin
                count_reset = 1'b1;
                nextState = R0;
            end
            else begin
                nextState = E0;
                count_reset = 1'b0;
            end
        end
        R0: begin // Refill data from memory on miss
            // Not ready to receive new req from proc
            memreq_rdy = 1'b0;
            memresp_val = 1'b0;

            // Read from imem
            cache_req_val = 1'b1; // request to imem
            cache_resp_rdy = 1'b1; // ready to receive from imem
            mem_action = READ; // read

            // Not flushing
            flush_done = 1'b0;

            // Write new tags
            tarray_en = 1'b1;
            tarray_wen = 1'b1;

            // Write data, select word from count, set line to clean, set line to valid
            darray_en = 1'b1;
            word_en_sel = REFILL;
            clean_set = 1'b1;
            dirty_set = 1'b0;
            index_sel = IDX;
            write_data_sel = IMEM;
            valid_set = 1'b1;

            // Do not reset counter
            count_reset = 1'b0;

            get_next_flush_line = 1'b0;

            // Enable counter if memory has a result from the request
            if (!cache_resp_val) begin
                count_en = 1'b0; // do not enable counter update if memory doesn't have a response
                darray_wen = 1'b0;
            end
            else begin
                count_en = 1'b1; // enable increment to counter if memory response ready
                darray_wen = 1'b1;
            end

            // Go to R0 if refill of line is done
            if (count_done) nextState = MD;
            else nextState = R0;
        end
        MD: begin // Perform data access and respond to proc if read
            // Not ready to receive new req from proc, output value ready
            memreq_rdy = 1'b0;
            memresp_val = 1'b1;

            // No imem access
            cache_req_val = 1'b0;
            cache_resp_rdy = 1'b0;
            mem_action = READ;

            // Not flushing
            flush_done = 1'b0;

            // No tag array access
            tarray_en = 1'b0;
            tarray_wen = 1'b0;
            
            // Disable counter, reset
            count_en = 1'b0;
            count_reset = 1'b1;

            // Write to specific data word if type write and set line to dirty, read otherwise
            darray_en = 1'b1;
            if (memreq_msg.type_ == `VC_MEM_REQ_MSG_TYPE_READ) begin
                darray_wen = 1'b0;
                dirty_set = 1'b1;
            end
            else begin
                darray_wen = 1'b1;
                dirty_set = 1'b0;
            end
            word_en_sel = OFF;
            clean_set = 1'b0;
            index_sel = IDX;
            write_data_sel = PROC;
            valid_set = 1'b0;

            get_next_flush_line = 1'b0;

            // Go to MT if proc was ready to receive data
            if (memresp_rdy && !flush) nextState = MT;
            else if (memresp_rdy && flush) nextState = FL;
            else nextState = MD;
        end
        FL: begin // Flush all dirty lines
            // Not ready to receive new req from proc
            memreq_rdy = 1'b0;
            memresp_val = 1'b0;

            // Writing to imem
            cache_req_val = 1'b1; // request to imem
            cache_resp_rdy = 1'b1; // no response needed but keep enabled
            mem_action = WRITE; // write

            // No tag access
            tarray_en = 1'b0;
            tarray_wen = 1'b0;

            // Read data, do not write, use flush index to select line to flush
            darray_en = 1'b1;
            darray_wen = 1'b0;
            word_en_sel = OFF; // don't care since not writing
            clean_set = 1'b0;
            dirty_set = 1'b0;
            index_sel = FLUSH;
            write_data_sel = PROC;
            valid_set = 1'b0;

            // Enable counter if memory has a result from the request
            if (!cache_resp_val) count_en = 1'b0; // do not enable counter update if memory doesn't have a response
            else count_en = 1'b1; // enable increment to counter if memory response ready

            // If still more lines to flush after count done, reset counter and get next line to flush
            // If no more lines to flush after count done, reset counter and go back to MT
            if (count_done && !all_flushed) begin
                count_reset = 1'b1;
                get_next_flush_line = 1'b1;
                flush_done = 1'b0;
                nextState = FL;
            end else if (count_done && all_flushed) begin
                count_reset = 1'b1;
                get_next_flush_line = 1'b0;
                flush_done = 1'b1;
                nextState = MT;
            end
            else begin
                count_reset = 1'b0;
                get_next_flush_line = 1'b0;
                flush_done = 1'b0;
                nextState = FL;
            end
                
        end
        default: begin
            memreq_rdy = 1'b0;
            memresp_val = 1'b0;
            cache_req_val = 1'b0;
            cache_resp_rdy = 1'b0;
            mem_action = READ;
            flush_done = 1'b0;
            tarray_en = 1'b0;
            tarray_wen = 1'b0;
            darray_en = 1'b0;
            darray_wen = 1'b0;
            word_en_sel = OFF;
            clean_set = 1'b0;
            dirty_set = 1'b0;
            index_sel = IDX;
            write_data_sel = PROC;
            valid_set = 1'b0;
            count_en = 1'b0;
            count_reset = 1'b1;
            get_next_flush_line = 1'b0;
            nextState = MT;
        end
    endcase
end

endmodule
