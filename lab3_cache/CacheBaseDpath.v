`include "vc/mem-msgs.v"
`include "vc/regs.v"
`include "vc/arithmetic.v"
`include "vc/muxes.v"

module lab3_cache_CacheBaseDpath
(
    input  logic                    clk,
    input  logic                    reset,


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
    output logic tarray_match,
    output logic line_dirty,
    output logic line_valid,
    output logic incoming_mem_type,

    output logic req_count_done,
    output logic resp_count_done,

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
// assign incoming_msg = memreq_msg;

// Tag array ---------------------------------------
logic [20:0] tag [31:0];

logic [20:0] mem_req_tag;
assign mem_req_tag = cache_req_msg.addr[31:11];

// -- Tag match and write logic
always_ff @(posedge clk) begin
    if(reset) begin
        tag[0] <= 21'd0;
        tag[1] <= 21'd0;
        tag[2] <= 21'd0;
        tag[3] <= 21'd0;
        tag[4] <= 21'd0;
        tag[5] <= 21'd0;
        tag[6] <= 21'd0;
        tag[7] <= 21'd0;
        tag[8] <= 21'd0;
        tag[9] <= 21'd0;
        tag[10] <= 21'd0;
        tag[11] <= 21'd0;
        tag[12] <= 21'd0;
        tag[13] <= 21'd0;
        tag[14] <= 21'd0;
        tag[15] <= 21'd0;
        tag[16] <= 21'd0;
        tag[17] <= 21'd0;
        tag[18] <= 21'd0;
        tag[19] <= 21'd0;
        tag[20] <= 21'd0;
        tag[21] <= 21'd0;
        tag[22] <= 21'd0;
        tag[23] <= 21'd0;
        tag[24] <= 21'd0;
        tag[25] <= 21'd0;
        tag[26] <= 21'd0;
        tag[27] <= 21'd0;
        tag[28] <= 21'd0;
        tag[29] <= 21'd0;
        tag[30] <= 21'd0;
        tag[31] <= 21'd0;
    end
    if (tarray_en && tarray_wen) tag[incoming_index] <= mem_req_tag;
end

assign tarray_match = ((incoming_tag == tag[incoming_index]));

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

logic [31:0] mem_resp_data;
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

logic [31:0] req_addr_mem;

always_comb begin
    if (!flush) begin
        if (state == E0) assign req_addr_mem = {tag[incoming_index], incoming_index, req_word[3:0], address[1:0]};
        else assign req_addr_mem = {incoming_tag, incoming_index, req_word[3:0], address[1:0]};
    end else begin
        assign req_addr_mem = {tag[flush_index], flush_index, req_word[3:0], 2'b00};
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
