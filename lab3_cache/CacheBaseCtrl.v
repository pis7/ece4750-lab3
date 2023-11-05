

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
    input logic flush,
    input logic all_flushed,
    output logic flush_done,
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
    output logic write_word_sel,
    output logic read_word_sel,
    output logic [2:0] mem_action,

    output logic clean_set,
    output logic dirty_set,

    output logic valid_set
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

// Signal set function

function void tab
(
    input logic t_memreq_rdy,
    input logic t_memresp_val,
    input logic t_cache_req_val,
    input logic t_cache_resp_rdy,

    input logic t_tarray_en,
    input logic t_tarray_wen,

    input logic t_count_en,
    input logic t_count_reset,

    input logic t_write_data_sel,
    input logic t_darray_en,
    input logic t_darray_wen,
    input logic t_index_sel,
    input logic t_write_word_sel,
    input logic t_read_word_sel,
    input logic [2:0] t_mem_action,

    input logic t_clean_set,
    input logic t_dirty_set,
    input logic t_valid_set,

    input logic t_flush_done,
    input logic t_get_next_flush_line,

    input logic t_reset_response
);
begin
    assign memreq_rdy = t_memreq_rdy;
    assign memresp_val = t_memresp_val;
    assign cache_req_val = t_cache_req_val;
    assign cache_resp_rdy = t_cache_resp_rdy;
    assign tarray_en = t_tarray_en;
    assign tarray_wen = t_tarray_wen;
    assign count_en = t_count_en;
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
    assign flush_done = t_flush_done;
    assign get_next_flush_line = t_get_next_flush_line;
    assign reset_response = t_reset_response;
end
endfunction

// Combinational signals for states

logic hit;
logic hit_write;
logic imem_req;
logic rdy_to_inc;
logic req_write;
logic int_flush_done;
logic int_not_flush_done;

always_comb begin
    assign req_write = (memreq_msg.type_ == WRITE);
    assign hit = memreq_val && tarray_match && line_valid;
    assign hit_write = hit && req_write;
    assign imem_req = cache_req_rdy && !received_response;
    assign rdy_to_inc = received_response && cache_req_rdy;
    assign int_flush_done = count_done && all_flushed;
    assign int_not_flush_done = count_done && !all_flushed;
end

// Memory response ff

logic received_response;
logic reset_response;

always_ff @(posedge clk) begin
    if (reset) received_response <= 1'b0;
    else if (cache_resp_val) received_response <= 1'b1;
    else if (reset_response) received_response <= 1'b0;
end

// State registers/logic
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

            if (memreq_val) begin // if request has been made to the cache
                if (tarray_match && line_valid) nextState = MT; // hit
                else if (line_dirty) nextState = E0; // if miss and line dirty - evict it
                else nextState = R0; // refill line if miss and line is clean
            end
            else if (!memreq_val && flush)  nextState = FL; // if no request has been made and flush is high
            else nextState = MT; // no request has been made and no flush

            //  memreq_rdy  memresp_val  cache_req_val  cache_resp_rdy  tarray_en  tarray_wen  count_en  count_reset  write_data_sel  darray_en  darray_wen  index_sel  write_word_sel  read_word_sel  mem_action  clean_set  dirty_set  valid_set  flush_done  get_next_flush_line  reset_response
            tab(y,          hit,         n,             n,              y,         n,          n,        y,           PROC,           hit,       hit_write,  IDX,       OFF,            OFF,           DCMEM,      n,         hit_write, n,         n,          n,                   y);
        end
        E0: begin // Evict data from memory if dirty

            // Go to R0 if eviction of line is done and reset counter for refill
            if (count_done) nextState = R0;
            else nextState = E0;

            //  memreq_rdy  memresp_val  cache_req_val  cache_resp_rdy  tarray_en  tarray_wen  count_en    count_reset  write_data_sel  darray_en  darray_wen  index_sel  write_word_sel  read_word_sel  mem_action  clean_set  dirty_set  valid_set  flush_done  get_next_flush_line  reset_response
            tab(n,          n,           imem_req,      y,              n,         n,          rdy_to_inc, n,           dc,             y,         n,          IDX,       dc,             EVICT,         WRITE,      n,         n,         n,         n,          n,                   rdy_to_inc);

        end
        R0: begin // Refill data from memory on miss

            // Go to R0 if refill of line is done
            if (count_done) nextState = MD;
            else nextState = R0;

            //  memreq_rdy  memresp_val  cache_req_val  cache_resp_rdy  tarray_en  tarray_wen      count_en    count_reset  write_data_sel  darray_en  darray_wen       index_sel  write_word_sel  read_word_sel  mem_action  clean_set  dirty_set  valid_set  flush_done  get_next_flush_line  reset_response
            tab(n,          n,           cache_req_rdy, y,              y,         cache_resp_val, rdy_to_inc, n,           IMEM,           y,         cache_resp_val,  IDX,       REFILL,         OFF,           READ,       y,         n,         y,         n,          n,                   rdy_to_inc);
            
        end
        MD: begin // Perform data access and respond to proc if read

            // Go to MT if proc was ready to receive data
            if (memresp_rdy) nextState = MT;
            else nextState = MD;

            //  memreq_rdy  memresp_val  cache_req_val  cache_resp_rdy  tarray_en  tarray_wen  count_en  count_reset  write_data_sel  darray_en  darray_wen  index_sel  write_word_sel  read_word_sel  mem_action  clean_set  dirty_set  valid_set  flush_done  get_next_flush_line  reset_response
            tab(n,          y,           n,             n,              n,         n,          n,        y,           PROC,           y,         req_write,  IDX,       OFF,            OFF,           DCMEM,      n,         req_write, y,         n,          n,                   y);
        end
        FL: begin // Flush all dirty lines

            // If still more lines to flush after count done, reset counter and get next line to flush
            // If no more lines to flush after count done, reset counter and go back to MT
            if (int_flush_done) nextState = MT;
            else nextState = FL;

            //  memreq_rdy  memresp_val  cache_req_val  cache_resp_rdy  tarray_en  tarray_wen  count_en    count_reset                           write_data_sel  darray_en  darray_wen  index_sel  write_word_sel  read_word_sel  mem_action  clean_set  dirty_set  valid_set  flush_done      get_next_flush_line  reset_response
            tab(n,          n,           imem_req,      y,              n,         n,          rdy_to_inc, int_flush_done || int_not_flush_done, dc,             y,         n,          FLUSH,     dc,             EVICT,         WRITE,      n,         n,         n,         int_flush_done, int_not_flush_done,  rdy_to_inc);
                
        end
        default: begin
            
            nextState = MT;

            //  memreq_rdy  memresp_val  cache_req_val  cache_resp_rdy  tarray_en  tarray_wen  count_en  count_reset  write_data_sel  darray_en  darray_wen  index_sel  write_word_sel  read_word_sel  mem_action  clean_set  dirty_set  valid_set  flush_done  get_next_flush_line  reset_response
            tab(n,          n,           n,             n,              n,         n,          n,        y,           dc,             n,         n,          dc,        dc,             dc,            DCMEM,      n,         n,         n,         n,          n,                   y);
        
        end
    endcase
end

endmodule
