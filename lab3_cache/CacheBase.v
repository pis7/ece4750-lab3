//=========================================================================
// Cache Base Design
//=========================================================================

`ifndef LAB3_CACHE_CACHE_BASE_V
`define LAB3_CACHE_CACHE_BASE_V

`include "vc/mem-msgs.v"
`include "vc/regs.v"
`include "CacheBaseDpath.v"
`include "CacheBaseCtrl.v"

module lab3_cache_CacheBase
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
  output logic                    flush_done
);

// Status signals (dpath -> ctrl)
logic tarray_match;
logic line_dirty;
logic line_valid;
logic mem_action;
logic all_flushed;
logic get_next_flush_line;

logic count_done;

// Control signals (ctrl -> dpath)
logic tarray_en;
logic tarray_wen;
logic tag_sel;

logic count_en;
logic count_reset;

logic write_data_sel;
logic darray_en;
logic darray_wen;
logic index_sel;
logic word_en_sel;

logic clean_set;
logic dirty_set;

logic valid_set;

lab3_cache_CacheBaseCtrl ctrl
(
  // .clk(clk),
  // .reset(reset),

  // .memreq_val(mem_req_val),
  // .memreq_rdy(memreq_rdy),
  // .memreq_msg(memreq_msg),

  // .memresp_val(memresp_val),
  // .memresp_rdy(memresp_rdy),
  // .memresp_msg(memresp_msg),

  // .cache_req_val(cache_req_val),
  // .cache_req_rdy(cache_req_rdy),
  // .cache_req_msg(cache_req_msg),

  // .cache_resp_val(cache_resp_val),
  // .cache_resp_rdy(cache_resp_rdy),
  // .cache_resp_msg(cache_resp_msg),

  // .flush(flush),
  // .flush_done(flush_done),

  // .tarray_match(tarray_match)
  .*
);

lab3_cache_CacheBaseDpath dpath
(
  .*
);


endmodule


`endif /* LAB3_CACHE_CACHE_BASE_V */
