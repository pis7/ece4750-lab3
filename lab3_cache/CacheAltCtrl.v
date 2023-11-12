`include "vc/mem-msgs.v"

module lab3_cache_CacheAltCtrl
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
    input logic tarray0_match,
    input logic tarray1_match,
    input logic line_dirty,
    input logic line0_valid,
    input logic line1_valid,

    input logic refill_req_count_done,
    input logic refill_resp_count_done,
    input logic evict_req_count_done,
    input logic evict_resp_count_done,

    input logic flush_way_sel,

    // Control signals (ctrl -> dpath)
    output logic input_en,
    output logic tarray_en,
    output logic tarray_wen,

    output logic refill_req_count_en,
    output logic refill_resp_count_en,
    output logic refill_count_reset,
    output logic evict_req_count_en,
    output logic evict_resp_count_en,
    output logic evict_count_reset,

    output logic write_data_sel,
    output logic darray_en,
    output logic darray_wen,
    output logic index_sel,
    output logic write_word_sel,
    output logic read_word_sel,
    output logic mem_action,
    output logic way_select,

    output logic clean_set,
    output logic dirty_set,

    output logic valid_set
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

// Signal set function

function void tab
(
    input logic t_memreq_rdy,
    input logic t_memresp_val,
    input logic t_cache_req_val,
    input logic t_cache_resp_rdy,

    input logic t_tarray_en,
    input logic t_tarray_wen,

    input logic t_refill_req_count_en,
    input logic t_refill_resp_count_en,
    input logic t_refill_count_reset,
    input logic t_evict_req_count_en,
    input logic t_evict_resp_count_en,
    input logic t_evict_count_reset,

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
    input logic t_get_next_flush_line,
    input logic t_input_en
);
begin
    assign memreq_rdy = t_memreq_rdy;
    assign memresp_val = t_memresp_val;
    assign cache_req_val = t_cache_req_val;
    assign cache_resp_rdy = t_cache_resp_rdy;
    assign tarray_en = t_tarray_en;
    assign tarray_wen = t_tarray_wen;
    assign refill_req_count_en = t_refill_req_count_en;
    assign refill_resp_count_en = t_refill_resp_count_en;
    assign refill_count_reset = t_refill_count_reset;
    assign evict_req_count_en = t_evict_req_count_en;
    assign evict_resp_count_en = t_evict_resp_count_en;
    assign evict_count_reset = t_evict_count_reset;
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
    assign input_en = t_input_en;
end
endfunction

// Combinational signals for states

logic hit;
logic hit_write;
logic req_write;
logic refill_counts_done;
logic evict_counts_done;
logic inc_refill_req_not_done;
logic inc_refill_resp_not_done;
logic inc_evict_req_not_done;
logic inc_evict_resp_not_done;
logic int_flush_done;
logic int_not_flush_done;

// State registers/logic
logic [2:0] state;
logic [2:0] nextState;

// LRU bit
logic lru;
logic set_way0;
logic set_way1;

// State + LRU registers
always_ff @(posedge clk) begin
    if (reset) state <= ID;
    else state <= nextState;

    if (set_way0) lru <= 1'b0;
    else if (set_way1) lru <= 1'b1;
    else lru <= 1'dx;
end

always_comb begin
    if (reset) nextState = ID;
    assign req_write = (memreq_msg.type_ == WRITE);
    assign hit = (tarray0_match && line0_valid) || (tarray1_match && line1_valid);
    assign hit_write = hit && req_write;
    assign refill_counts_done = refill_req_count_done && refill_resp_count_done;
    assign evict_counts_done = evict_req_count_done && evict_resp_count_done;
    assign inc_refill_req_not_done = cache_req_rdy && !refill_req_count_done;
    assign inc_refill_resp_not_done = cache_resp_val && !refill_resp_count_done;
    assign inc_evict_req_not_done = cache_req_rdy && !evict_req_count_done;
    assign inc_evict_resp_not_done = cache_resp_val && !evict_resp_count_done;
    assign int_flush_done = refill_counts_done && all_flushed;
    assign int_not_flush_done = refill_counts_done && !all_flushed;

    case(state)
        ID: begin // Wait for request from source

            if (flush) nextState = FL; // If no request made to cache and flush asserted -> go to flush (FL)
            else if (memreq_val) nextState = MT; // If request made to cache -> go to tag check (MT)
            else nextState = ID;

            set_way0 = 1'b0;
            set_way1 = 1'b0;
            way_select = 1'dx;

            //  mem  mem   cache  cache  tarray  tarray  refill    refill    refill  evic      evict     evict  write  darray  darray  index  write  read  mem     clean  dirty  valid  flush  get_next_
            //  req  resp  req    resp   en      wen     req       resp      count   req       resp      count  data   en      wen     sel    word   word  action  set    set    set    done   flush_line
            //  rdy  val   val    rdy                    count_en  count_en  reset   count_en  count_en  reset  sel                           sel    sel
            tab(y,   n,    n,     n,     n,      n,      n,        n,        y,      n,        n,        y,     dc,    n,      n,      dc,    dc,    dc,   dc,   n,     n,      n,    n,     n, y);
        end
        MT: begin // Check tag after request has been made to cache, return value upon hit
            if (flush) nextState = FL; // If flush asserted -> go to flush (FL)
            else if (hit) begin
                if (memresp_rdy && !memreq_val) nextState = ID; // Hit, sink ready to receive value, and source not requesting value -> go back to idle (ID)
                else nextState = MT; // Hit, sink ready to receive value and source requesting value or source not ready to receive -> stay in tag check (MT)

                // Need to set LRU bit since transaction done - set other way to LRU since the one that hit was used most recently
                if (tarray0_match) begin
                    set_way0 = 1'b0;
                    set_way1 = 1'b1;
                    way_select = 1'b0;
                end
                else begin // guarenteed to be tarray1_match since hit already determined
                    set_way0 = 1'b1;
                    set_way1 = 1'b0;
                    way_select = 1'b1;
                end

            end else begin
                if(line_dirty) nextState = E0; // If miss and line is dirty -> go to evict (E0)
                else nextState = R0; // If miss and line is clean -> go to refill (R0)

                set_way0 = 1'b0;
                set_way1 = 1'b0;
                way_select = lru;
            end

            //  mem                   mem   cache  cache  tarray  tarray  refill    refill    refill  evicy     evict     evict  write  darray  darray      index  write  read  mem     clean  dirty      valid  flush  get_next_
            //  req                   resp  req    resp   en      wen     req       resp      count   req       resp      count  data   en      wen         sel    word   word  action  set    set        set    done   flush_line
            //  rdy                   val   val    rdy                    count_en  count_en  reset   count_en  count_en  reset  sel                               sel    sel
            tab(memresp_rdy && hit,   hit,  n,     n,     y,      n,      n,        n,        y,      n,        n,        y,     PROC,  hit,    hit_write,  IDX,   OFF,   OFF,  dc,     n,     hit_write, n,     n,     n, memresp_rdy && hit);
        end
        E0: begin // Evict data from memory if dirty

            // Go to R0 if eviction of line is done and reset counter for refill
            if (evict_counts_done) nextState = R0;
            else nextState = E0;

            set_way0 = 1'b0;
            set_way1 = 1'b0;
            way_select = lru;

            //  mem  mem   cache          cache  tarray  tarray  refill    refill    refill  evict                   evict                     evict              write  darray  darray      index  write  read   mem     clean  dirty  valid  flush  get_next_
            //  req  resp  req            resp   en      wen     req       resp      count   req                     resp                      count              data   en      wen         sel    word   word   action  set    set    set    done   flush_line
            //  rdy  val   val            rdy                    count_en  count_en  reset   count_en                count_en                  reset              sel                               sel    sel
            tab(n,   n,    cache_req_rdy, y,     n,      n,      n,        n,        y,      inc_evict_req_not_done, inc_evict_resp_not_done,  evict_counts_done, dc,    y,      n,          IDX,   dc,    EVICT, w,      y,     n,     n,     n,     n, n);

        end
        R0: begin // Refill data from memory on miss

            // Go to R0 if refill of line is done
            if (refill_counts_done) nextState = MD;
            else nextState = R0;

            set_way0 = 1'b0;
            set_way1 = 1'b0;
            way_select = lru;

            //  mem  mem   cache          cache  tarray  tarray          refill                   refill                     refill              evict     evict     evict  write  darray  darray           index  write    read  mem     clean  dirty  valid  flush  get_next_
            //  req  resp  req            resp   en      wen             req                      resp                       count               req       resp      count  data   en      wen              sel    word     word  action  set    set    set    done   flush_line
            //  rdy  val   val            rdy                            count_en                 count_en                   reset               count_en  count_en  reset  sel                                    sel      sel
            tab(n,   n,    cache_req_rdy, y,     y,      cache_resp_val, inc_refill_req_not_done, inc_refill_resp_not_done,  refill_counts_done, n,        n,        y,     IMEM,  y,      cache_resp_val,  IDX,   REFILL,  dc,   r,      n,     n,     y,     n,     n, n);
            
        end
        MD: begin // Perform data access and respond to proc if read

            // Go to MT if proc was ready to receive data
            if (memresp_rdy && !memreq_val) nextState = ID;
            else if (memresp_rdy && memreq_val) nextState = MT;
            else nextState = MD;

            // Need to set LRU bit since transaction done - swap LRU bit since least recently used one that we evicted/refilled is now the most recently used one
            if (memresp_rdy) begin
                if (lru == 1'b0) begin
                    set_way0 = 1'b0;
                    set_way1 = 1'b1;
                end else begin
                    set_way0 = 1'b1;
                    set_way1 = 1'b0;
                end
            end else begin
                set_way0 = 1'b0;
                set_way1 = 1'b0;
            end

            way_select = lru;

            //  mem            mem   cache  cache  tarray  tarray  refill    refill    refill  evict     evict     evict  write  darray  darray      index  write  read  mem     clean  dirty      valid  flush  get_next_
            //  req            resp  req    resp   en      wen     req       resp      count   req       resp      count  data   en      wen         sel    word   word  action  set    set        set    done   flush_line
            //  rdy            val   val    rdy                    count_en  count_en  reset   count_en  count_en  reset  sel                               sel    sel
            tab(memresp_rdy,   y,    n,     n,     n,      n,      n,        n,        y,      n,        n,        y,     PROC,  y,      req_write,  IDX,   OFF,   OFF,  dc,     n,     req_write, y,     n,      n, memresp_rdy);
        end
        FL: begin // Flush all dirty lines

            // If still more lines to flush after count done, reset counter and get next line to flush
            // If no more lines to flush after count done, reset counter and go back to MT
            if (all_flushed) nextState = ID;
            else nextState = FL;

            set_way0 = 1'b0;
            set_way1 = 1'b0;

            way_select = flush_way_sel;

            // NOTE: only set line to clean AFTER line is flushed

            //  mem  mem   cache          cache  tarray  tarray   refill                   refill                     refill              evict     evict     evict  write  darray  darray  index  write    read    mem     clean               dirty  valid  flush        get_next_
            //  req  resp  req            resp   en      wen      req                      resp                       count               req       resp      count  data   en      wen     sel    word     word    action  set                 set    set    done         flush_line
            //  rdy  val   val            rdy                     count_en                 count_en                   reset               count_en  count_en  reset  sel                           sel      sel
            tab(n,   n,    cache_req_rdy, y,     n,      n,       inc_refill_req_not_done, inc_refill_resp_not_done,  refill_counts_done, n,        n,        y,     dc,    y,      n,      FLUSH, dc,      EVICT,  w,      int_not_flush_done, n,     n,     all_flushed, int_not_flush_done, n);
               
        end
        default: begin
            
            nextState = ID;

            set_way0 = 1'b0;
            set_way1 = 1'b0;

            way_select = 1'dx;

            //  mem  mem   cache  cache  tarray  tarray  refill    refill    refill  evict     evict     evict  write  darray  darray  index  write  read  mem     clean  dirty  valid  flush  get_next_
            //  req  resp  req    resp   en      wen     req       resp      count   req       resp      count  data   en      wen     sel    word   word  action  set    set    set    done   flush_line
            //  rdy  val   val    rdy                    count_en  count_en  reset   count_en  count_en  reset  sel                                  sel   sel
            tab(n,   n,    n,     n,     n,      n,      n,        n,        y,      n,        n,        y,     dc,    n,      n,      dc,    dc,    dc,   dc,     n,     n,     n,     n,     n, n);
        
        end
    endcase
end

endmodule
