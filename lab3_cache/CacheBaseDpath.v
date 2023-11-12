`include "vc/mem-msgs.v"

module lab3_cache_CacheBaseDpath
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
    output logic all_flushed,
    input logic flush_done,
    input logic get_next_flush_line,

    // Status signals (dpath -> ctrl)
    output logic tarray_match,
    output logic line_dirty,
    output logic line_valid,
    output logic incoming_mem_type,

    output logic refill_req_count_done,
    output logic refill_resp_count_done,
    output logic evict_req_count_done,
    output logic evict_resp_count_done,

    // Control signals (ctrl -> dpath)
    input logic input_en,
    input logic tarray_en,
    input logic tarray_wen,

    input logic refill_req_count_en,
    input logic refill_resp_count_en,
    input logic refill_count_reset,
    input logic evict_req_count_en,
    input logic evict_resp_count_en,
    input logic evict_count_reset,

    input logic write_data_sel,
    input logic darray_en,
    input logic darray_wen,
    input logic index_sel,
    input logic write_word_sel,
    input logic read_word_sel,
    input logic mem_action,

    input logic clean_set,
    input logic dirty_set,

    input logic valid_set,
    input logic [2:0] state
);

// FSM states
localparam ID = 3'd0; // Idle
localparam MT = 3'd1; // Check tag
localparam E0 = 3'd2; // Evict data
localparam R0 = 3'd3; // Refill data
localparam MD = 3'd4; // Data access (R/W)
localparam FL = 3'd5; // Flush

logic [31:0] address;
logic [31:0] proc_write_data;

// Decode incoming address from processor ---------------------------------------
logic [76:0] incoming_msg;
logic [20:0] incoming_tag;
logic [4:0] incoming_index;
logic [3:0] incoming_word_offset;

assign address = incoming_msg[65:34];
assign incoming_tag = address[31:11];
assign incoming_index = address[10:6];
assign incoming_word_offset = address[5:2];
assign incoming_mem_type = incoming_msg[74];
assign proc_write_data = incoming_msg[31:0];

// Inputs from proceessor ------------------------------------------
// assign address = memreq_msg.addr;
// assign proc_write_data = memreq_msg.data;

vc_EnResetReg#(77, 0) addr_reg
(
    .clk(clk),
    .reset(reset),
    .en(input_en),
    .d(memreq_msg),
    .q(incoming_msg)
);

// Tag array ---------------------------------------
logic [20:0] tag [31:0];

logic [20:0] imem_req_tag;
assign imem_req_tag = cache_req_msg.addr[31:11];

// -- Tag match and write logic
always_ff @(posedge clk) begin
    if (tarray_en && tarray_wen && cache_resp_val) tag[incoming_index] <= imem_req_tag;
end

assign tarray_match = ((incoming_tag == tag[incoming_index]) && tarray_en);

// Data array (indexed by line, word) ----------------------
logic [31:0] data [31:0][15:0];

logic [4:0] d_index;
logic [3:0] write_word_offset;
logic [31:0] write_data;

// -- Data array write logic
always_ff @(posedge clk) begin
    if (darray_en && darray_wen) data[d_index][write_word_offset] <= write_data;
end

// -- Select index source
logic [4:0] flush_index;

vc_Mux2#(5) index_mux
(
    .in0(incoming_index),
    .in1(flush_index),
    .sel(index_sel),
    .out(d_index)
);

// -- Select write word offset source

vc_Mux2#(4) write_data_word_mux
(
    .in0(incoming_word_offset),
    .in1(evict_resp_word[3:0]),
    .sel(write_word_sel),
    .out(write_word_offset)
);

logic [3:0] read_word_offset;

// -- Select read word offset source
vc_Mux2#(4) read_data_word_mux
(
    .in0(incoming_word_offset),
    .in1(evict_req_word[3:0]),
    .sel(read_word_sel),
    .out(read_word_offset)
);

logic [31:0] imem_resp_data;
assign imem_resp_data = cache_resp_msg.data;

// -- Select write data source
vc_Mux2#(32) write_data_source_mux
(
    .in0(proc_write_data),
    .in1(imem_resp_data),
    .sel(write_data_sel),
    .out(write_data)
);

// -- Select word output from array
logic [31:0] word_out_lower;
logic [31:0] word_out_upper;

vc_Mux8#(32) word_out_lower_eight_mux
(
    .in0(data[d_index][0]),
    .in1(data[d_index][1]),
    .in2(data[d_index][2]),
    .in3(data[d_index][3]),
    .in4(data[d_index][4]),
    .in5(data[d_index][5]),
    .in6(data[d_index][6]),
    .in7(data[d_index][7]),
    .sel(read_word_offset[2:0]),
    .out(word_out_lower)
);

vc_Mux8#(32) word_out_upper_eight_mux
(
    .in0(data[d_index][8]),
    .in1(data[d_index][9]),
    .in2(data[d_index][10]),
    .in3(data[d_index][11]),
    .in4(data[d_index][12]),
    .in5(data[d_index][13]),
    .in6(data[d_index][14]),
    .in7(data[d_index][15]),
    .sel(read_word_offset[2:0]),
    .out(word_out_upper)
);

logic [31:0] data_word_mux_out;

vc_Mux2#(32) word_out_final_mux
(
    .in0(word_out_lower),
    .in1(word_out_upper),
    .sel(read_word_offset[3]),
    .out(data_word_mux_out)
);

// -- darray_en gated data array output
logic [31:0] cache_data_out;

always_comb begin
    if (darray_en) cache_data_out = data_word_mux_out;
    else cache_data_out = 'hx;
end

// Refill counters ---------------------------------------

logic [4:0] refill_req_inc_out;
logic [4:0] refill_req_word;

vc_EnResetReg#(5, 0) refill_req_count_reg
(
    .clk(clk),
    .reset(refill_count_reset),
    .en(refill_req_count_en),
    .d(refill_req_inc_out),
    .q(refill_req_word)
);

assign refill_req_count_done = (refill_req_word == 5'd16);

vc_Incrementer#(5, 1) refill_req_incrementer
(
  .in(refill_req_word),
  .out(refill_req_inc_out)  
);

// ---

logic [4:0] refill_resp_inc_out;
logic [4:0] refill_resp_word;

vc_EnResetReg#(5, 0) refill_resp_count_reg
(
    .clk(clk),
    .reset(refill_count_reset),
    .en(refill_resp_count_en),
    .d(refill_resp_inc_out),
    .q(refill_resp_word)
);

assign refill_resp_count_done = (refill_resp_word == 5'd16);

vc_Incrementer#(5, 1) refill_resp_incrementer
(
  .in(refill_resp_word),
  .out(refill_resp_inc_out)  
);

// Evict counters ---------------------------------------

logic [4:0] evict_req_inc_out;
logic [4:0] evict_req_word;

vc_EnResetReg#(5, 0) evict_req_count_reg
(
    .clk(clk),
    .reset(evict_count_reset),
    .en(evict_req_count_en),
    .d(evict_req_inc_out),
    .q(evict_req_word)
);

assign evict_req_count_done = (evict_req_word == 5'd16);

vc_Incrementer#(5, 1) evict_req_incrementer
(
  .in(evict_req_word),
  .out(evict_req_inc_out)  
);

// ---

logic [4:0] evict_resp_inc_out;
logic [4:0] evict_resp_word;

vc_EnResetReg#(5, 0) evict_resp_count_reg
(
    .clk(clk),
    .reset(evict_count_reset),
    .en(evict_resp_count_en),
    .d(evict_resp_inc_out),
    .q(evict_resp_word)
);

assign evict_resp_count_done = (evict_resp_word == 5'd16);

vc_Incrementer#(5, 1) evict_resp_incrementer
(
  .in(evict_resp_word),
  .out(evict_resp_inc_out)  
);

// Dirty array ---------------------------------------------------
logic [31:0] dirty;

// -- Bit set and status signal logic
always_ff @(posedge clk) begin
    if (reset) dirty[31:0] <= 32'd0;
    else if (clean_set) dirty[d_index] <= 1'b0;
    else if (dirty_set) dirty[d_index] <= 1'b1;
end

assign line_dirty = (dirty[incoming_index] == 1'b1);

// Valid array ----------------------------------------------------
logic [31:0] valid;

// -- Bit set and status signal logic
always_ff @(posedge clk) begin
    if (reset) valid[31:0] <= 32'd0;
    else if (valid_set) valid[incoming_index] <= 1'b1;
end

assign line_valid = (valid[incoming_index] == 1'b1);

// Memory messages ---------------------------------------

logic [31:0] req_addr_imem;
always_comb begin
    if (!flush) begin
        if (state == E0) assign req_addr_imem = {tag[incoming_index], incoming_index, evict_req_word[3:0], address[1:0]};
        else assign req_addr_imem = {incoming_tag, incoming_index, evict_req_word[3:0], address[1:0]};
    end else begin
        assign req_addr_imem = {tag[flush_index], flush_index, evict_req_word[3:0], 2'b00};
    end
end

// imem msg
assign cache_req_msg.type_ = {2'b00, mem_action};
assign cache_req_msg.opaque = 8'b0;
assign cache_req_msg.addr = req_addr_imem;
assign cache_req_msg.len = 2'd0;
assign cache_req_msg.data = cache_data_out;

// Response to proc msg
assign memresp_msg.type_ = memreq_msg.type_;
assign memresp_msg.opaque = 8'b0;
assign memresp_msg.test = 2'd0;
assign memresp_msg.len = 2'd0;
assign memresp_msg.data = cache_data_out;

// Flush logic --------------------------------------------
assign all_flushed = (dirty == 32'd0);

// -- Select next flush line (1st line that is dirty)
always_comb begin
    if (dirty[0]) flush_index = 5'd0;
    else if (dirty[1]) flush_index = 5'd1;
    else if (dirty[2]) flush_index = 5'd2;
    else if (dirty[3]) flush_index = 5'd3;
    else if (dirty[4]) flush_index = 5'd4;
    else if (dirty[5]) flush_index = 5'd5;
    else if (dirty[6]) flush_index = 5'd6;
    else if (dirty[7]) flush_index = 5'd7;
    else if (dirty[8]) flush_index = 5'd8;
    else if (dirty[9]) flush_index = 5'd9;
    else if (dirty[10]) flush_index = 5'd10;
    else if (dirty[11]) flush_index = 5'd11;
    else if (dirty[12]) flush_index = 5'd12;
    else if (dirty[13]) flush_index = 5'd13;
    else if (dirty[14]) flush_index = 5'd14;
    else if (dirty[15]) flush_index = 5'd15;
    else if (dirty[16]) flush_index = 5'd16;
    else if (dirty[17]) flush_index = 5'd17;
    else if (dirty[18]) flush_index = 5'd18;
    else if (dirty[19]) flush_index = 5'd19;
    else if (dirty[20]) flush_index = 5'd20;
    else if (dirty[21]) flush_index = 5'd21;
    else if (dirty[22]) flush_index = 5'd22;
    else if (dirty[23]) flush_index = 5'd23;
    else if (dirty[24]) flush_index = 5'd24;
    else if (dirty[25]) flush_index = 5'd25;
    else if (dirty[26]) flush_index = 5'd26;
    else if (dirty[27]) flush_index = 5'd27;
    else if (dirty[28]) flush_index = 5'd28;
    else if (dirty[29]) flush_index = 5'd29;
    else if (dirty[30]) flush_index = 5'd30;
    else if (dirty[31]) flush_index = 5'd31;
    else flush_index = 5'hx;
end

endmodule
