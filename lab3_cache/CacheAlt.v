//=========================================================================
// Cache Alt Design
//=========================================================================

`ifndef LAB3_CACHE_CACHE_ALT_V
`define LAB3_CACHE_CACHE_ALT_V

`include "vc/mem-msgs.v"
`include "vc/regs.v"
`include "CacheAltDpath.v"
`include "CacheAltCtrl.v"

module lab3_cache_CacheAlt
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
logic tarray0_match;
logic tarray1_match;
logic line_dirty;
logic line0_valid;
logic line1_valid;
logic mem_action;
logic all_flushed;
logic get_next_flush_line;

logic refill_req_count_done;
logic refill_resp_count_done;
logic evict_req_count_done;
logic evict_resp_count_done;

logic flush_way_sel;

// Control signals (ctrl -> dpath)
logic tarray_en;
logic tarray_wen;

logic refill_req_count_en;
logic refill_resp_count_en;
logic refill_count_reset;
logic evict_req_count_en;
logic evict_resp_count_en;
logic evict_count_reset;

logic write_data_sel;
logic darray_en;
logic darray_wen;
logic index_sel;
logic write_word_sel;
logic read_word_sel;
logic way_select;

logic clean_set;
logic dirty_set;

logic valid_set;

logic input_en;

lab3_cache_CacheAltCtrl ctrl
(
  .*
);

lab3_cache_CacheAltDpath dpath
(
  .*
);


endmodule


`endif /* LAB3_CACHE_CACHE_ALT_V */
