//      // verilator_coverage annotation
        `include "vc/mem-msgs.v"
        
        module lab3_cache_CacheBaseCtrl
        (
 001159     input  logic                    clk,
 000004     input  logic                    reset,
        
        
            // imem: connection between proc and cache
 000005     input  logic                    memreq_val,
 000003     output logic                    memreq_rdy,
%000000     input  mem_req_4B_t             memreq_msg, 
        
 000004     output logic                    memresp_val,
 000001     input  logic                    memresp_rdy,
%000000     output mem_resp_4B_t            memresp_msg,
        
            //cache: connection between cache and imem
 000003     output  logic                    cache_req_val,
 000003     input   logic                    cache_req_rdy,
%000000     output  mem_req_4B_t             cache_req_msg,
         
 000003     input  logic                     cache_resp_val,
 000003     output logic                     cache_resp_rdy,
%000000     input  mem_resp_4B_t             cache_resp_msg,
        
            // flush
%000000     input logic flush,
%000000     input logic all_flushed,
%000000     output logic flush_done,
%000000     output logic get_next_flush_line,
        
            // Status signals (dpath -> ctrl)
 000002     input logic tarray_match,
 000001     input logic line_dirty,
 000001     input logic line_valid,
        
 000002     input logic req_count_done,
 000002     input logic resp_count_done,
        
            // Control signals (ctrl -> dpath)
 000003     output logic input_en,
 000003     output logic tarray_en,
 000002     output logic tarray_wen,
        
 000003     output logic resp_count_en,
 000003     output logic req_count_en,
 000003     output logic count_reset,
        
 000002     output logic write_data_sel,
 000005     output logic darray_en,
 000004     output logic darray_wen,
%000000     output logic index_sel,
 000002     output logic write_word_sel,
 000001     output logic read_word_sel,
%000000     output logic [2:0] mem_action,
        
 000002     output logic clean_set,
 000002     output logic dirty_set,
        
 000002     output logic valid_set
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
        
 000579 function void tab
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
            input logic [2:0] t_mem_action,
        
            input logic t_clean_set,
            input logic t_dirty_set,
            input logic t_valid_set,
        
            input logic t_flush_done,
            input logic t_get_next_flush_line,
            input logic t_input_en
        );
 000579 begin
 000579     assign memreq_rdy = t_memreq_rdy;
 000579     assign memresp_val = t_memresp_val;
 000579     assign cache_req_val = t_cache_req_val;
 000579     assign cache_resp_rdy = t_cache_resp_rdy;
 000579     assign tarray_en = t_tarray_en;
 000579     assign tarray_wen = t_tarray_wen;
 000579     assign req_count_en = t_req_count_en;
 000579     assign resp_count_en = t_resp_count_en;
 000579     assign count_reset = t_count_reset;
 000579     assign write_data_sel = t_write_data_sel;
 000579     assign darray_en = t_darray_en;
 000579     assign darray_wen = t_darray_wen;
 000579     assign index_sel = t_index_sel;
 000579     assign write_word_sel = t_write_word_sel;
 000579     assign read_word_sel = t_read_word_sel;
 000579     assign mem_action = t_mem_action;
 000579     assign clean_set = t_clean_set;
 000579     assign dirty_set = t_dirty_set;
 000579     assign valid_set = t_valid_set;
 000579     assign flush_done = t_flush_done;
 000579     assign get_next_flush_line = t_get_next_flush_line;
 000579     assign input_en = t_input_en;
        end
        endfunction
        
        // Combinational signals for states
        
 000002 logic hit;
 000002 logic hit_write;
 000002 logic req_write;
 000002 logic counts_done;
 000003 logic inc_req_not_done;
 000005 logic inc_resp_not_done;
%000000 logic int_flush_done;
 000002 logic int_not_flush_done;
        
        // State registers/logic
%000000 logic [2:0] state;
%000000 logic [2:0] nextState;
        
        // State register
 000579 always_ff @(posedge clk) begin
 000002     if (reset) state <= MT;
 000577     else state <= nextState;
        end
        
%000000 always_comb begin
        
%000000     assign req_write = (memreq_msg.type_ == WRITE);
%000000     assign hit = memreq_val && tarray_match && line_valid;
%000000     assign hit_write = hit && req_write;
%000000     assign counts_done = req_count_done && resp_count_done;
%000000     assign inc_req_not_done = cache_req_rdy && !req_count_done;
%000000     assign inc_resp_not_done = cache_resp_val && !resp_count_done;
%000000     assign int_flush_done = counts_done && all_flushed;
%000000     assign int_not_flush_done = counts_done && !all_flushed;
        
%000000     case(state)
 000204         MT: begin // Wait for request and check tag
        
 000144             if (memreq_val) begin // if request has been made to the cache
 000140                 if (tarray_match && line_valid) nextState = MT; // hit
 000002                 else if (line_dirty) nextState = E0; // if miss and line dirty - evict it
 000002                 else nextState = R0; // refill line if miss and line is clean
                    end
 000669             else if (!memreq_val && flush)  nextState = FL; // if no request has been made and flush is high
 000669             else nextState = MT; // no request has been made and no flush
        
                    //  memreq_rdy  memresp_val  cache_req_val  cache_resp_rdy  tarray_en  tarray_wen  req_count_en  resp_count_en  count_reset  write_data_sel  darray_en  darray_wen  index_sel  write_word_sel  read_word_sel  mem_action  clean_set  dirty_set  valid_set  flush_done  get_next_flush_line
 000204             tab(y,          hit,         n,             n,              y,         n,          n,            n,             y,           PROC,           hit,       hit_write,  IDX,       OFF,            OFF,           DCMEM,      n,         hit_write, n,         n,          n, hit || (!memreq_val && !flush));
                end
 000081         E0: begin // Evict data from memory if dirty
        
                    // Go to R0 if eviction of line is done and reset counter for refill
 000322             if (counts_done) nextState = R0;
 000322             else nextState = E0;
        
                    //  memreq_rdy  memresp_val  cache_req_val  cache_resp_rdy  tarray_en  tarray_wen  req_count_en      resp_count_en       count_reset  write_data_sel  darray_en  darray_wen  index_sel  write_word_sel  read_word_sel  mem_action  clean_set  dirty_set  valid_set  flush_done  get_next_flush_line
 000081             tab(n,          n,           cache_req_rdy, y,              n,         n,          inc_req_not_done, inc_resp_not_done,  counts_done, dc,             y,         n,          IDX,       dc,             EVICT,         WRITE,      n,         n,         n,         n,          n, n);
        
                end
 000224         R0: begin // Refill data from memory on miss
        
                    // Go to R0 if refill of line is done
 000002             if (counts_done) nextState = MD;
 000888             else nextState = R0;
        
                    //  memreq_rdy  memresp_val  cache_req_val  cache_resp_rdy  tarray_en  tarray_wen      req_count_en      resp_count_en       count_reset  write_data_sel  darray_en  darray_wen       index_sel  write_word_sel  read_word_sel  mem_action  clean_set  dirty_set  valid_set  flush_done  get_next_flush_line
 000224             tab(n,          n,           cache_req_rdy, y,              y,         cache_resp_val, inc_req_not_done, inc_resp_not_done,  counts_done, IMEM,           y,         cache_resp_val,  IDX,       REFILL,         dc,            READ,       y,         n,         y,         n,          n, n);
                    
                end
 000070         MD: begin // Perform data access and respond to proc if read
        
                    // Go to MT if proc was ready to receive data
 000001             if (memresp_rdy) nextState = MT;
 000279             else nextState = MD;
        
                    //  memreq_rdy  memresp_val  cache_req_val  cache_resp_rdy  tarray_en  tarray_wen  req_count_en  resp_count_en  count_reset  write_data_sel  darray_en  darray_wen  index_sel  write_word_sel  read_word_sel  mem_action  clean_set  dirty_set  valid_set  flush_done  get_next_flush_line
 000070             tab(n,          y,           n,             n,              n,         n,          n,            n,             y,           PROC,           y,         req_write,  IDX,       OFF,            OFF,           DCMEM,      n,         req_write, y,         n,          n, memresp_rdy);
                end
%000000         FL: begin // Flush all dirty lines
        
                    // If still more lines to flush after count done, reset counter and get next line to flush
                    // If no more lines to flush after count done, reset counter and go back to MT
%000000             if (int_flush_done) nextState = MT;
%000000             else nextState = FL;
        
                    //  memreq_rdy  memresp_val  cache_req_val  cache_resp_rdy  tarray_en  tarray_wen  req_count_en      resp_count_en   count_reset                              write_data_sel  darray_en  darray_wen  index_sel  write_word_sel  read_word_sel  mem_action  clean_set  dirty_set  valid_set  flush_done      get_next_flush_line
%000000             tab(n,          n,           cache_req_rdy, y,              n,         n,          inc_req_not_done, inc_resp_not_done, int_flush_done || int_not_flush_done, dc,             y,         n,          FLUSH,     dc,             EVICT,         WRITE,      n,         n,         n,         int_flush_done, int_not_flush_done, n);
                        
                end
%000000         default: begin
                    
%000000             nextState = MT;
        
                    //  memreq_rdy  memresp_val  cache_req_val  cache_resp_rdy  tarray_en  tarray_wen  req_count_en  resp_count_en  count_reset  write_data_sel  darray_en  darray_wen  index_sel  write_word_sel  read_word_sel  mem_action  clean_set  dirty_set  valid_set  flush_done  get_next_flush_line
%000000             tab(n,          n,           n,             n,              n,         n,          n,            n,             y,           dc,             n,         n,          dc,        dc,             dc,            DCMEM,      n,         n,         n,         n,          n, n);
                
                end
            endcase
        end
        
        endmodule
        
