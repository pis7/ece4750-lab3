`include "vc/mem-msgs.v"
`include "vc/regs.v"
`include "vc/arithmetic.v"
`include "vc/muxes.v"

module lab3_cache_CacheAltDpath
(
    input  logic                    clk,
    input  logic                    reset,

    // NOTE: msg's do not show up on coverage report due to inability to set all bits in a meaningful way

    // imem: connection between proc and cache
    input  mem_req_4B_t             memreq_msg,

    output mem_resp_4B_t            memresp_msg,

    //cache: connection between cache and imem
    output  mem_req_4B_t             cache_req_msg,

    input  mem_resp_4B_t             cache_resp_msg,

    // flush
    input logic flush,
    output logic all_flushed,
    input logic flush_done,

    // Status signals (dpath -> ctrl)
    output logic tarray0_match,
    output logic tarray1_match,
    output logic line0_dirty,
    output logic line1_dirty,
    output logic line0_valid,
    output logic line1_valid,
    output logic incoming_mem_type,

    output logic req_count_done,
    output logic resp_count_done,

    output logic flush_way_sel,

    // Control signals (ctrl -> dpath)
    input logic input_en,
    input logic tarray_en,
    input logic tarray_wen,

    input logic req_count_en,
    input logic resp_count_en,
    input logic count_reset,

    input logic write_data_sel,
    input logic darray_en,
    input logic darray_wen,
    input logic index_sel,
    input logic write_word_sel,
    input logic read_word_sel,
    input logic mem_action,
    input logic way_select,

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

vc_EnResetReg#(77, 0) mem_msg_reg
(
    .clk(clk),
    .reset(reset),
    .en(input_en),
    .d(memreq_msg),
    .q(incoming_msg)
);

// Tag arrays ---------------------------------------
logic [20:0] tag0 [31:0];
logic [20:0] tag1 [31:0];

logic [20:0] mem_req_tag;
assign mem_req_tag = cache_req_msg.addr[31:11];

// -- Tag match and write logic
always_ff @(posedge clk) begin
    if(reset) begin
        tag0[0] <= 21'd0;
        tag0[1] <= 21'd0;
        tag0[2] <= 21'd0;
        tag0[3] <= 21'd0;
        tag0[4] <= 21'd0;
        tag0[5] <= 21'd0;
        tag0[6] <= 21'd0;
        tag0[7] <= 21'd0;
        tag0[8] <= 21'd0;
        tag0[9] <= 21'd0;
        tag0[10] <= 21'd0;
        tag0[11] <= 21'd0;
        tag0[12] <= 21'd0;
        tag0[13] <= 21'd0;
        tag0[14] <= 21'd0;
        tag0[15] <= 21'd0;
        tag0[16] <= 21'd0;
        tag0[17] <= 21'd0;
        tag0[18] <= 21'd0;
        tag0[19] <= 21'd0;
        tag0[20] <= 21'd0;
        tag0[21] <= 21'd0;
        tag0[22] <= 21'd0;
        tag0[23] <= 21'd0;
        tag0[24] <= 21'd0;
        tag0[25] <= 21'd0;
        tag0[26] <= 21'd0;
        tag0[27] <= 21'd0;
        tag0[28] <= 21'd0;
        tag0[29] <= 21'd0;
        tag0[30] <= 21'd0;
        tag0[31] <= 21'd0;
        tag1[0] <= 21'd0;
        tag1[1] <= 21'd0;
        tag1[2] <= 21'd0;
        tag1[3] <= 21'd0;
        tag1[4] <= 21'd0;
        tag1[5] <= 21'd0;
        tag1[6] <= 21'd0;
        tag1[7] <= 21'd0;
        tag1[8] <= 21'd0;
        tag1[9] <= 21'd0;
        tag1[10] <= 21'd0;
        tag1[11] <= 21'd0;
        tag1[12] <= 21'd0;
        tag1[13] <= 21'd0;
        tag1[14] <= 21'd0;
        tag1[15] <= 21'd0;
        tag1[16] <= 21'd0;
        tag1[17] <= 21'd0;
        tag1[18] <= 21'd0;
        tag1[19] <= 21'd0;
        tag1[20] <= 21'd0;
        tag1[21] <= 21'd0;
        tag1[22] <= 21'd0;
        tag1[23] <= 21'd0;
        tag1[24] <= 21'd0;
        tag1[25] <= 21'd0;
        tag1[26] <= 21'd0;
        tag1[27] <= 21'd0;
        tag1[28] <= 21'd0;
        tag1[29] <= 21'd0;
        tag1[30] <= 21'd0;
        tag1[31] <= 21'd0;
    end
    else if (!way_select) begin
        if (tarray_en && tarray_wen) tag0[incoming_index] <= mem_req_tag;
    end else begin
        if (tarray_en && tarray_wen) tag1[incoming_index] <= mem_req_tag;
    end
end

assign tarray0_match = (incoming_tag == tag0[incoming_index]);
assign tarray1_match = (incoming_tag == tag1[incoming_index]);

// Data array (indexed by line, word) ----------------------
logic [31:0] data0 [31:0][15:0];
logic [31:0] data1 [31:0][15:0];

logic [4:0] d_index;
logic [3:0] write_word_offset;
logic [31:0] write_data;

// -- Data array write logic
always_ff @(posedge clk) begin
    if (!way_select) begin
        if (darray_en && darray_wen) data0[d_index][write_word_offset] <= write_data;
    end else begin
        if (darray_en && darray_wen) data1[d_index][write_word_offset] <= write_data;
    end
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
    .in1(resp_word[3:0]),
    .sel(write_word_sel),
    .out(write_word_offset)
);

logic [3:0] read_word_offset;

// -- Select read word offset source
vc_Mux2#(4) read_data_word_mux
(
    .in0(incoming_word_offset),
    .in1(req_word[3:0]),
    .sel(read_word_sel),
    .out(read_word_offset)
);

logic [31:0] mem_resp_data; // Manually checked to make sure all bits flip, verilator doesn't pick it up for some reason
assign mem_resp_data = cache_resp_msg.data;

// -- Select write data source
vc_Mux2#(32) write_data_source_mux
(
    .in0(proc_write_data),
    .in1(mem_resp_data),
    .sel(write_data_sel),
    .out(write_data)
);

// -- Select word output from array
logic [31:0] word0_out_lower;
logic [31:0] word0_out_upper;

vc_Mux8#(32) word0_out_lower_eight_mux
(
    .in0(data0[d_index][0]),
    .in1(data0[d_index][1]),
    .in2(data0[d_index][2]),
    .in3(data0[d_index][3]),
    .in4(data0[d_index][4]),
    .in5(data0[d_index][5]),
    .in6(data0[d_index][6]),
    .in7(data0[d_index][7]),
    .sel(read_word_offset[2:0]),
    .out(word0_out_lower)
);

vc_Mux8#(32) word0_out_upper_eight_mux
(
    .in0(data0[d_index][8]),
    .in1(data0[d_index][9]),
    .in2(data0[d_index][10]),
    .in3(data0[d_index][11]),
    .in4(data0[d_index][12]),
    .in5(data0[d_index][13]),
    .in6(data0[d_index][14]),
    .in7(data0[d_index][15]),
    .sel(read_word_offset[2:0]),
    .out(word0_out_upper)
);

logic [31:0] data0_word_mux_out;

vc_Mux2#(32) word0_out_final_mux
(
    .in0(word0_out_lower),
    .in1(word0_out_upper),
    .sel(read_word_offset[3]),
    .out(data0_word_mux_out)
);

logic [31:0] word1_out_lower;
logic [31:0] word1_out_upper;

vc_Mux8#(32) word1_out_lower_eight_mux
(
    .in0(data1[d_index][0]),
    .in1(data1[d_index][1]),
    .in2(data1[d_index][2]),
    .in3(data1[d_index][3]),
    .in4(data1[d_index][4]),
    .in5(data1[d_index][5]),
    .in6(data1[d_index][6]),
    .in7(data1[d_index][7]),
    .sel(read_word_offset[2:0]),
    .out(word1_out_lower)
);

vc_Mux8#(32) word1_out_upper_eight_mux
(
    .in0(data1[d_index][8]),
    .in1(data1[d_index][9]),
    .in2(data1[d_index][10]),
    .in3(data1[d_index][11]),
    .in4(data1[d_index][12]),
    .in5(data1[d_index][13]),
    .in6(data1[d_index][14]),
    .in7(data1[d_index][15]),
    .sel(read_word_offset[2:0]),
    .out(word1_out_upper)
);

logic [31:0] data1_word_mux_out;

vc_Mux2#(32) word_out_final_mux
(
    .in0(word1_out_lower),
    .in1(word1_out_upper),
    .sel(read_word_offset[3]),
    .out(data1_word_mux_out)
);

logic [31:0] way_data_out;

vc_Mux2#(32) way_out_select
(
    .in0(data0_word_mux_out),
    .in1(data1_word_mux_out),
    .sel(way_select),
    .out(way_data_out)
);

// -- darray_en gated data array output
logic [31:0] cache_data_out;

always_comb begin
    if (darray_en) cache_data_out = way_data_out;
    else cache_data_out = 'hx;
end

// Memory access counters ---------------------------------------

logic [4:0] req_inc_out;
logic [4:0] req_word;

vc_EnResetReg#(5, 0) req_count_reg
(
    .clk(clk),
    .reset(count_reset),
    .en(req_count_en),
    .d(req_inc_out),
    .q(req_word)
);

assign req_count_done = (req_word == 5'd16);

vc_Incrementer#(5, 1) req_incrementer
(
  .in(req_word),
  .out(req_inc_out)  
);

// ---

logic [4:0] resp_inc_out;
logic [4:0] resp_word;

vc_EnResetReg#(5, 0) resp_count_reg
(
    .clk(clk),
    .reset(count_reset),
    .en(resp_count_en),
    .d(resp_inc_out),
    .q(resp_word)
);

assign resp_count_done = (resp_word == 5'd16);

vc_Incrementer#(5, 1) resp_incrementer
(
  .in(resp_word),
  .out(resp_inc_out)  
);

// Dirty arrays ---------------------------------------------------
logic [31:0] dirty0;
logic [31:0] dirty1;

// -- Bit set and status signal logic
always_ff @(posedge clk) begin
    if (reset) begin
        dirty0[31:0] <= 32'd0;
        dirty1[31:0] <= 32'd0;
    end
    if (!way_select) begin
        if (clean_set) dirty0[d_index] <= 1'b0;
        else if (dirty_set) dirty0[d_index] <= 1'b1;
    end else begin
        if (clean_set) dirty1[d_index] <= 1'b0;
        else if (dirty_set) dirty1[d_index] <= 1'b1;
    end
end

assign line0_dirty = (dirty0[incoming_index] == 1'b1);

assign line1_dirty = (dirty1[incoming_index] == 1'b1);

// Valid arrays ----------------------------------------------------
logic [31:0] valid0;
logic [31:0] valid1;

// -- Bit set and status signal logic
always_ff @(posedge clk) begin
    if (reset) begin
        valid0[31:0] <= 32'd0;
        valid1[31:0] <= 32'd0;
    end
    else if (!way_select && valid_set) valid0[incoming_index] <= 1'b1;
    else if (way_select && valid_set) valid1[incoming_index] <= 1'b1;
end

assign line0_valid = (valid0[incoming_index] == 1'b1);

assign line1_valid = (valid1[incoming_index] == 1'b1);

// Memory messages ---------------------------------------

logic [31:0] req_addr_mem;

always_comb begin
    if (!flush) begin
        if (state == E0 && !way_select) assign req_addr_mem = {tag0[incoming_index], incoming_index, req_word[3:0], address[1:0]};
        else if (state == E0 && way_select) assign req_addr_mem = {tag1[incoming_index], incoming_index, req_word[3:0], address[1:0]};
        else assign req_addr_mem = {incoming_tag, incoming_index, req_word[3:0], address[1:0]};
    end else begin
        if (!way_select) assign req_addr_mem = {tag0[flush_index], flush_index, req_word[3:0], 2'b00};
        else assign req_addr_mem = {tag1[flush_index], flush_index, req_word[3:0], 2'b00};
    end
end

// imem msg
assign cache_req_msg.type_ = {2'b00, mem_action};
assign cache_req_msg.opaque = 8'b0;
assign cache_req_msg.addr = req_addr_mem;
assign cache_req_msg.len = 2'd0;
assign cache_req_msg.data = cache_data_out;

// Response to proc msg
assign memresp_msg.type_ = memreq_msg.type_;
assign memresp_msg.opaque = 8'b0;
assign memresp_msg.test = 2'd0;
assign memresp_msg.len = 2'd0;
assign memresp_msg.data = cache_data_out;

// Flush logic --------------------------------------------
logic all0_flushed;
assign all0_flushed = (dirty0 == 32'd0);

logic all1_flushed;
assign all1_flushed = (dirty1 == 32'd0);

assign all_flushed = all0_flushed && all1_flushed;

assign flush_way_sel = all0_flushed;

logic [4:0] flush0_index;
logic [4:0] flush1_index;

// -- Select next flush line (1st line that is dirty)
always_comb begin
    if (dirty0[0]) flush0_index = 5'd0;
    else if (dirty0[1]) flush0_index = 5'd1;
    else if (dirty0[2]) flush0_index = 5'd2;
    else if (dirty0[3]) flush0_index = 5'd3;
    else if (dirty0[4]) flush0_index = 5'd4;
    else if (dirty0[5]) flush0_index = 5'd5;
    else if (dirty0[6]) flush0_index = 5'd6;
    else if (dirty0[7]) flush0_index = 5'd7;
    else if (dirty0[8]) flush0_index = 5'd8;
    else if (dirty0[9]) flush0_index = 5'd9;
    else if (dirty0[10]) flush0_index = 5'd10;
    else if (dirty0[11]) flush0_index = 5'd11;
    else if (dirty0[12]) flush0_index = 5'd12;
    else if (dirty0[13]) flush0_index = 5'd13;
    else if (dirty0[14]) flush0_index = 5'd14;
    else if (dirty0[15]) flush0_index = 5'd15;
    else if (dirty0[16]) flush0_index = 5'd16;
    else if (dirty0[17]) flush0_index = 5'd17;
    else if (dirty0[18]) flush0_index = 5'd18;
    else if (dirty0[19]) flush0_index = 5'd19;
    else if (dirty0[20]) flush0_index = 5'd20;
    else if (dirty0[21]) flush0_index = 5'd21;
    else if (dirty0[22]) flush0_index = 5'd22;
    else if (dirty0[23]) flush0_index = 5'd23;
    else if (dirty0[24]) flush0_index = 5'd24;
    else if (dirty0[25]) flush0_index = 5'd25;
    else if (dirty0[26]) flush0_index = 5'd26;
    else if (dirty0[27]) flush0_index = 5'd27;
    else if (dirty0[28]) flush0_index = 5'd28;
    else if (dirty0[29]) flush0_index = 5'd29;
    else if (dirty0[30]) flush0_index = 5'd30;
    else if (dirty0[31]) flush0_index = 5'd31;
    else flush0_index = 5'hx;

    if (dirty1[0]) flush1_index = 5'd0;
    else if (dirty1[1]) flush1_index = 5'd1;
    else if (dirty1[2]) flush1_index = 5'd2;
    else if (dirty1[3]) flush1_index = 5'd3;
    else if (dirty1[4]) flush1_index = 5'd4;
    else if (dirty1[5]) flush1_index = 5'd5;
    else if (dirty1[6]) flush1_index = 5'd6;
    else if (dirty1[7]) flush1_index = 5'd7;
    else if (dirty1[8]) flush1_index = 5'd8;
    else if (dirty1[9]) flush1_index = 5'd9;
    else if (dirty1[10]) flush1_index = 5'd10;
    else if (dirty1[11]) flush1_index = 5'd11;
    else if (dirty1[12]) flush1_index = 5'd12;
    else if (dirty1[13]) flush1_index = 5'd13;
    else if (dirty1[14]) flush1_index = 5'd14;
    else if (dirty1[15]) flush1_index = 5'd15;
    else if (dirty1[16]) flush1_index = 5'd16;
    else if (dirty1[17]) flush1_index = 5'd17;
    else if (dirty1[18]) flush1_index = 5'd18;
    else if (dirty1[19]) flush1_index = 5'd19;
    else if (dirty1[20]) flush1_index = 5'd20;
    else if (dirty1[21]) flush1_index = 5'd21;
    else if (dirty1[22]) flush1_index = 5'd22;
    else if (dirty1[23]) flush1_index = 5'd23;
    else if (dirty1[24]) flush1_index = 5'd24;
    else if (dirty1[25]) flush1_index = 5'd25;
    else if (dirty1[26]) flush1_index = 5'd26;
    else if (dirty1[27]) flush1_index = 5'd27;
    else if (dirty1[28]) flush1_index = 5'd28;
    else if (dirty1[29]) flush1_index = 5'd29;
    else if (dirty1[30]) flush1_index = 5'd30;
    else if (dirty1[31]) flush1_index = 5'd31;
    else flush1_index = 5'hx;
end

vc_Mux2#(5) dirty_mux
(
    .in0(flush0_index),
    .in1(flush1_index),
    .sel(flush_way_sel),
    .out(flush_index)
);

endmodule
