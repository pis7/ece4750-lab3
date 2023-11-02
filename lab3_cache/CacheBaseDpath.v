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
    input logic                     flush,
    output logic all_flushed,
    input logic                    flush_done,
    input logic get_next_flush_line,

    // Status signals (dpath -> ctrl)
    output logic tarray_match,
    output logic line_dirty,
    output logic line_valid,

    output logic count_done,

    // Control signals (ctrl -> dpath)
    input logic tarray_en,
    input logic tarray_wen,
    input logic tag_sel,

    input logic count_en,
    input logic count_reset,

    input logic write_data_sel,
    input logic darray_en,
    input logic darray_wen,
    input logic index_sel,
    input logic word_en_sel,
    input logic mem_action,

    input logic clean_set,
    input logic dirty_set,

    input logic valid_set
);

logic [31:0] address;
logic [31:0] proc_write_data;

// Decode incoming address from processor ---------------------------------------
logic [20:0] incoming_tag = address[31:11];
logic [4:0] incoming_index = address[10:6];
logic [3:0] incoming_word_offset = address[5:2];

// Input registers ------------------------------------------
vc_ResetReg#(32, 32'd0) input_addr
(
    .clk    (clk),
    .reset  (reset),
    .d      (memreq_msg.address),
    .q      (address)
);

vc_ResetReg#(32, 32'd0) input_data
(
    .clk    (clk),
    .reset  (reset),
    .d      (memreq_msg.data),
    .q      (proc_write_data)
);

// Tag array ---------------------------------------
logic [24:0] tag [31:0];

// -- Tag match and write logic
if (tarray_en) assign tarray_match = (incoming_tag == tag[incoming_index]);
if (tarray_wen && cache_resp_val) assign tag[incoming_index] = cache_resp_msg.addr[24:0];

// Data array (indexed by line, word) ----------------------
logic [31:0] data [31:0][15:0];

logic [4:0] d_index;
logic [3:0] d_word;
logic [31:0] d_data;

// -- Data array write logic
if (darray_en && darray_wen) assign data[d_index][d_word] = d_data;

// -- Select index source
logic [4:0] flush_index;

vc_Mux2#(5) index_mux
(
    .in0(incoming_index),
    .in1(flush_index),
    .sel(index_sel),
    .out(d_index)
);

// -- Select word offset source
logic [3:0] inc_word;

vc_Mux2#(4) write_data_word_mux
(
    .in0(incoming_word_offset),
    .in1(inc_word),
    .sel(word_en_sel),
    .out(d_word)
);

// -- Select write data source
vc_Mux2#(32) write_data_source_mux
(
    .in0(proc_write_data),
    .in1(cache_resp_msg.data),
    .sel(write_data_sel),
    .out(d_data)
);

// -- Select word output from array

logic [31:0] word_out_lower;
logic [31:0] word_out_upper;

vc_Mux8#(32) word_out_lower_eight_mux
(
    .in0(data[0]),
    .in1(data[1]),
    .in2(data[2]),
    .in3(data[3]),
    .in4(data[4]),
    .in5(data[5]),
    .in6(data[6]),
    .in7(data[7]),
    .sel(incoming_word_offset[2:0]),
    .out(word_out_lower)
);

vc_mux8#(32) word_out_upper_eight_mux
(
    .in0(data[8]),
    .in1(data[9]),
    .in2(data[10]),
    .in3(data[11]),
    .in4(data[12]),
    .in5(data[13]),
    .in6(data[14]),
    .in7(data[15]),
    .sel(incoming_word_offset[2:0]),
    .out(word_out_upper)
);

logic [31:0] cache_data_out;

vc_mux2#(32) word_out_final_mux
(
    .in0(word_out_lower),
    .in1(word_out_upper),
    .sel(incoming_word_offset[3]),
    .out(cache_data_out)
);

// Refill/eviction counter ---------------------------------------

logic [3:0] inc_out;

vc_EnResetReg#(4, 0) count_reg
(
    .clk(clk),
    .reset(count_reset),
    .en(count_en),
    .d(inc_out),
    .q(inc_word)
);

assign count_done = (inc_out == 4'd15);

vc_Incrementer#(4, 1) word_incrementer
(
  .in(inc_word),
  .out(inc_out)  
);

// Dirty array ---------------------------------------------------
logic [31:0] dirty;

// -- Bit set and status signal logic
if(clean_set) assign dirty[incoming_index] = 1'b0;
if(dirty_set) assign dirty[incoming_index] = 1'b1;
if(reset) assign dirty[31:0] = 32'd0;
assign line_dirty = (dirty[incoming_index] == 1'b1);

// Valid array ----------------------------------------------------
logic [31:0] valid;

// -- Bit set and status signal logic
if (valid_set) assign valid[incoming_index] = 1'b1;
if (reset) assign valid[31:0] = 32'd0;
assign line_valid = (valid[incoming_index] == 1'b1);

// Memory messages ---------------------------------------

// imem msg
assign cache_req_msg.type_ = mem_action;
assign cache_req_msg.opaque = 8'b0;
assign cache_req_msg.addr = {incoming_tag, incoming_index, inc_word, memreq_msg.data[1:0]};
assign cache_req_msg.len = 2'd0;
assign cache_req_msg.data = cache_data_out;

// Response to proc msg
assign memresp_msg.type_ = memreq_msg.type_;
assign memresp_msg.opaque = 8'b0;
assign memresp_msg.addr = memreq_msg.addr;
assign memresp_msg.len = 2'd0;
assign memresp_msg.data = cache_data_out;

// Flush logic --------------------------------------------
assign all_flushed = (dirty == 31'd0);

if (dirty[0] && get_next_flush_line) assign flush_index = 5'd0;
else if (dirty[1] && get_next_flush_line) assign flush_index = 5'd1;
else if (dirty[2] && get_next_flush_line) assign flush_index = 5'd2;
else if (dirty[3] && get_next_flush_line) assign flush_index = 5'd3;
else if (dirty[4] && get_next_flush_line) assign flush_index = 5'd4;
else if (dirty[5] && get_next_flush_line) assign flush_index = 5'd5;
else if (dirty[6] && get_next_flush_line) assign flush_index = 5'd6;
else if (dirty[7] && get_next_flush_line) assign flush_index = 5'd7;
else if (dirty[8] && get_next_flush_line) assign flush_index = 5'd8;
else if (dirty[9] && get_next_flush_line) assign flush_index = 5'd9;
else if (dirty[10] && get_next_flush_line) assign flush_index = 5'd10;
else if (dirty[11] && get_next_flush_line) assign flush_index = 5'd11;
else if (dirty[12] && get_next_flush_line) assign flush_index = 5'd12;
else if (dirty[13] && get_next_flush_line) assign flush_index = 5'd13;
else if (dirty[14] && get_next_flush_line) assign flush_index = 5'd14;
else if (dirty[15] && get_next_flush_line) assign flush_index = 5'd15;
else if (dirty[16] && get_next_flush_line) assign flush_index = 5'd16;
else if (dirty[17] && get_next_flush_line) assign flush_index = 5'd17;
else if (dirty[18] && get_next_flush_line) assign flush_index = 5'd18;
else if (dirty[19] && get_next_flush_line) assign flush_index = 5'd19;
else if (dirty[20] && get_next_flush_line) assign flush_index = 5'd20;
else if (dirty[21] && get_next_flush_line) assign flush_index = 5'd21;
else if (dirty[22] && get_next_flush_line) assign flush_index = 5'd22;
else if (dirty[23] && get_next_flush_line) assign flush_index = 5'd23;
else if (dirty[24] && get_next_flush_line) assign flush_index = 5'd24;
else if (dirty[25] && get_next_flush_line) assign flush_index = 5'd25;
else if (dirty[26] && get_next_flush_line) assign flush_index = 5'd26;
else if (dirty[27] && get_next_flush_line) assign flush_index = 5'd27;
else if (dirty[28] && get_next_flush_line) assign flush_index = 5'd28;
else if (dirty[29] && get_next_flush_line) assign flush_index = 5'd29;
else if (dirty[30] && get_next_flush_line) assign flush_index = 5'd30;
else if (dirty[31] && get_next_flush_line) assign flush_index = 5'd31;
else assign flush_index = 5'd0;

endmodule
