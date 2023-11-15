//=========================================================================
// Cache Base Design
//=========================================================================

`ifndef LAB3_CACHE_CACHE_BASE_V
`define LAB3_CACHE_CACHE_BASE_V

`include "vc/mem-msgs.v"
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
logic incoming_mem_type;

logic req_count_done;
logic resp_count_done;

// Control signals (ctrl -> dpath)
logic tarray_en;
logic tarray_wen;

logic req_count_en;
logic resp_count_en;
logic count_reset;

logic write_data_sel;
logic darray_en;
logic darray_wen;
logic index_sel;
logic write_word_sel;
logic read_word_sel;

logic clean_set;
logic dirty_set;

logic valid_set;

logic input_en;
logic [2:0] state;

lab3_cache_CacheBaseCtrl ctrl
(
  .*
);

lab3_cache_CacheBaseDpath dpath
(
  .*
);


endmodule


`endif /* LAB3_CACHE_CACHE_BASE_V */
