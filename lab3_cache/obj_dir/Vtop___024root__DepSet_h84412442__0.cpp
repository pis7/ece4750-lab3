// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

void Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
void Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();

VlCoroutine Vtop___024root___eval_initial__TOP__0__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__0__0\n"); );
    // Init
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__0__t_flush;
    __Vtask_top__DOT__set_inputs__0__t_flush = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__0__t_flush_done;
    __Vtask_top__DOT__set_inputs__0__t_flush_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__0__t_input_en;
    __Vtask_top__DOT__set_inputs__0__t_input_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__0__t_tarray_en;
    __Vtask_top__DOT__set_inputs__0__t_tarray_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__0__t_tarray_wen;
    __Vtask_top__DOT__set_inputs__0__t_tarray_wen = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__0__t_req_count_en;
    __Vtask_top__DOT__set_inputs__0__t_req_count_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__0__t_resp_count_en;
    __Vtask_top__DOT__set_inputs__0__t_resp_count_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__0__t_count_reset;
    __Vtask_top__DOT__set_inputs__0__t_count_reset = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__0__t_write_data_sel;
    __Vtask_top__DOT__set_inputs__0__t_write_data_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__0__t_darray_en;
    __Vtask_top__DOT__set_inputs__0__t_darray_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__0__t_darray_wen;
    __Vtask_top__DOT__set_inputs__0__t_darray_wen = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__0__t_index_sel;
    __Vtask_top__DOT__set_inputs__0__t_index_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__0__t_write_word_sel;
    __Vtask_top__DOT__set_inputs__0__t_write_word_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__0__t_read_word_sel;
    __Vtask_top__DOT__set_inputs__0__t_read_word_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__0__t_mem_action;
    __Vtask_top__DOT__set_inputs__0__t_mem_action = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__0__t_clean_set;
    __Vtask_top__DOT__set_inputs__0__t_clean_set = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__0__t_dirty_set;
    __Vtask_top__DOT__set_inputs__0__t_dirty_set = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__0__t_valid_set;
    __Vtask_top__DOT__set_inputs__0__t_valid_set = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__0__t_state;
    __Vtask_top__DOT__set_inputs__0__t_state = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__0__t_mem_addr;
    __Vtask_top__DOT__set_inputs__0__t_mem_addr = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__0__t_mem_data;
    __Vtask_top__DOT__set_inputs__0__t_mem_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__0__t_mem_type;
    __Vtask_top__DOT__set_inputs__0__t_mem_type = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__0__t_cache_data;
    __Vtask_top__DOT__set_inputs__0__t_cache_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__0__t_cache_type;
    __Vtask_top__DOT__set_inputs__0__t_cache_type = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__0__t_way_select;
    __Vtask_top__DOT__set_inputs__0__t_way_select = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1__t_tarray0_match;
    __Vtask_top__DOT__test_outputs__1__t_tarray0_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1__t_tarray1_match;
    __Vtask_top__DOT__test_outputs__1__t_tarray1_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1__t_line0_dirty;
    __Vtask_top__DOT__test_outputs__1__t_line0_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1__t_line1_dirty;
    __Vtask_top__DOT__test_outputs__1__t_line1_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1__t_line0_valid;
    __Vtask_top__DOT__test_outputs__1__t_line0_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1__t_line1_valid;
    __Vtask_top__DOT__test_outputs__1__t_line1_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1__t_incoming_mem_type;
    __Vtask_top__DOT__test_outputs__1__t_incoming_mem_type = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1__t_req_count_done;
    __Vtask_top__DOT__test_outputs__1__t_req_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1__t_resp_count_done;
    __Vtask_top__DOT__test_outputs__1__t_resp_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1__t_all_flushed;
    __Vtask_top__DOT__test_outputs__1__t_all_flushed = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__1__t_memresp_msg_type_;
    __Vtask_top__DOT__test_outputs__1__t_memresp_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1__t_memresp_msg_data;
    __Vtask_top__DOT__test_outputs__1__t_memresp_msg_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__1__t_cache_req_msg_type_;
    __Vtask_top__DOT__test_outputs__1__t_cache_req_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1__t_cache_req_msg_addr;
    __Vtask_top__DOT__test_outputs__1__t_cache_req_msg_addr = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1__t_cache_req_msg_data;
    __Vtask_top__DOT__test_outputs__1__t_cache_req_msg_data = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__1__t_d_index;
    __Vtask_top__DOT__test_outputs__1__t_d_index = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__1__t_write_word_offset;
    __Vtask_top__DOT__test_outputs__1__t_write_word_offset = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__1__t_read_word_offset;
    __Vtask_top__DOT__test_outputs__1__t_read_word_offset = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1__t_write_data;
    __Vtask_top__DOT__test_outputs__1__t_write_data = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1__t_dirty0;
    __Vtask_top__DOT__test_outputs__1__t_dirty0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1__t_dirty1;
    __Vtask_top__DOT__test_outputs__1__t_dirty1 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1__t_valid0;
    __Vtask_top__DOT__test_outputs__1__t_valid0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1__t_valid1;
    __Vtask_top__DOT__test_outputs__1__t_valid1 = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__1__t_flush_index;
    __Vtask_top__DOT__test_outputs__1__t_flush_index = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1__t_flush_way_sel;
    __Vtask_top__DOT__test_outputs__1__t_flush_way_sel = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__52__delay_val;
    __Vtask_top__DOT__delay__52__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__52__unnamedblk6__DOT__i;
    __Vtask_top__DOT__delay__52__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__53__t_flush;
    __Vtask_top__DOT__set_inputs__53__t_flush = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__53__t_flush_done;
    __Vtask_top__DOT__set_inputs__53__t_flush_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__53__t_input_en;
    __Vtask_top__DOT__set_inputs__53__t_input_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__53__t_tarray_en;
    __Vtask_top__DOT__set_inputs__53__t_tarray_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__53__t_tarray_wen;
    __Vtask_top__DOT__set_inputs__53__t_tarray_wen = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__53__t_req_count_en;
    __Vtask_top__DOT__set_inputs__53__t_req_count_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__53__t_resp_count_en;
    __Vtask_top__DOT__set_inputs__53__t_resp_count_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__53__t_count_reset;
    __Vtask_top__DOT__set_inputs__53__t_count_reset = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__53__t_write_data_sel;
    __Vtask_top__DOT__set_inputs__53__t_write_data_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__53__t_darray_en;
    __Vtask_top__DOT__set_inputs__53__t_darray_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__53__t_darray_wen;
    __Vtask_top__DOT__set_inputs__53__t_darray_wen = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__53__t_index_sel;
    __Vtask_top__DOT__set_inputs__53__t_index_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__53__t_write_word_sel;
    __Vtask_top__DOT__set_inputs__53__t_write_word_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__53__t_read_word_sel;
    __Vtask_top__DOT__set_inputs__53__t_read_word_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__53__t_mem_action;
    __Vtask_top__DOT__set_inputs__53__t_mem_action = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__53__t_clean_set;
    __Vtask_top__DOT__set_inputs__53__t_clean_set = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__53__t_dirty_set;
    __Vtask_top__DOT__set_inputs__53__t_dirty_set = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__53__t_valid_set;
    __Vtask_top__DOT__set_inputs__53__t_valid_set = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__53__t_state;
    __Vtask_top__DOT__set_inputs__53__t_state = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__53__t_mem_addr;
    __Vtask_top__DOT__set_inputs__53__t_mem_addr = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__53__t_mem_data;
    __Vtask_top__DOT__set_inputs__53__t_mem_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__53__t_mem_type;
    __Vtask_top__DOT__set_inputs__53__t_mem_type = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__53__t_cache_data;
    __Vtask_top__DOT__set_inputs__53__t_cache_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__53__t_cache_type;
    __Vtask_top__DOT__set_inputs__53__t_cache_type = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__53__t_way_select;
    __Vtask_top__DOT__set_inputs__53__t_way_select = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__54__t_tarray0_match;
    __Vtask_top__DOT__test_outputs__54__t_tarray0_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__54__t_tarray1_match;
    __Vtask_top__DOT__test_outputs__54__t_tarray1_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__54__t_line0_dirty;
    __Vtask_top__DOT__test_outputs__54__t_line0_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__54__t_line1_dirty;
    __Vtask_top__DOT__test_outputs__54__t_line1_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__54__t_line0_valid;
    __Vtask_top__DOT__test_outputs__54__t_line0_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__54__t_line1_valid;
    __Vtask_top__DOT__test_outputs__54__t_line1_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__54__t_incoming_mem_type;
    __Vtask_top__DOT__test_outputs__54__t_incoming_mem_type = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__54__t_req_count_done;
    __Vtask_top__DOT__test_outputs__54__t_req_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__54__t_resp_count_done;
    __Vtask_top__DOT__test_outputs__54__t_resp_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__54__t_all_flushed;
    __Vtask_top__DOT__test_outputs__54__t_all_flushed = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__54__t_memresp_msg_type_;
    __Vtask_top__DOT__test_outputs__54__t_memresp_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__54__t_memresp_msg_data;
    __Vtask_top__DOT__test_outputs__54__t_memresp_msg_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__54__t_cache_req_msg_type_;
    __Vtask_top__DOT__test_outputs__54__t_cache_req_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__54__t_cache_req_msg_addr;
    __Vtask_top__DOT__test_outputs__54__t_cache_req_msg_addr = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__54__t_cache_req_msg_data;
    __Vtask_top__DOT__test_outputs__54__t_cache_req_msg_data = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__54__t_d_index;
    __Vtask_top__DOT__test_outputs__54__t_d_index = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__54__t_write_word_offset;
    __Vtask_top__DOT__test_outputs__54__t_write_word_offset = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__54__t_read_word_offset;
    __Vtask_top__DOT__test_outputs__54__t_read_word_offset = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__54__t_write_data;
    __Vtask_top__DOT__test_outputs__54__t_write_data = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__54__t_dirty0;
    __Vtask_top__DOT__test_outputs__54__t_dirty0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__54__t_dirty1;
    __Vtask_top__DOT__test_outputs__54__t_dirty1 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__54__t_valid0;
    __Vtask_top__DOT__test_outputs__54__t_valid0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__54__t_valid1;
    __Vtask_top__DOT__test_outputs__54__t_valid1 = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__54__t_flush_index;
    __Vtask_top__DOT__test_outputs__54__t_flush_index = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__54__t_flush_way_sel;
    __Vtask_top__DOT__test_outputs__54__t_flush_way_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__105__t_tarray0_match;
    __Vtask_top__DOT__test_outputs__105__t_tarray0_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__105__t_tarray1_match;
    __Vtask_top__DOT__test_outputs__105__t_tarray1_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__105__t_line0_dirty;
    __Vtask_top__DOT__test_outputs__105__t_line0_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__105__t_line1_dirty;
    __Vtask_top__DOT__test_outputs__105__t_line1_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__105__t_line0_valid;
    __Vtask_top__DOT__test_outputs__105__t_line0_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__105__t_line1_valid;
    __Vtask_top__DOT__test_outputs__105__t_line1_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__105__t_incoming_mem_type;
    __Vtask_top__DOT__test_outputs__105__t_incoming_mem_type = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__105__t_req_count_done;
    __Vtask_top__DOT__test_outputs__105__t_req_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__105__t_resp_count_done;
    __Vtask_top__DOT__test_outputs__105__t_resp_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__105__t_all_flushed;
    __Vtask_top__DOT__test_outputs__105__t_all_flushed = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__105__t_memresp_msg_type_;
    __Vtask_top__DOT__test_outputs__105__t_memresp_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__105__t_memresp_msg_data;
    __Vtask_top__DOT__test_outputs__105__t_memresp_msg_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__105__t_cache_req_msg_type_;
    __Vtask_top__DOT__test_outputs__105__t_cache_req_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__105__t_cache_req_msg_addr;
    __Vtask_top__DOT__test_outputs__105__t_cache_req_msg_addr = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__105__t_cache_req_msg_data;
    __Vtask_top__DOT__test_outputs__105__t_cache_req_msg_data = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__105__t_d_index;
    __Vtask_top__DOT__test_outputs__105__t_d_index = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__105__t_write_word_offset;
    __Vtask_top__DOT__test_outputs__105__t_write_word_offset = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__105__t_read_word_offset;
    __Vtask_top__DOT__test_outputs__105__t_read_word_offset = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__105__t_write_data;
    __Vtask_top__DOT__test_outputs__105__t_write_data = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__105__t_dirty0;
    __Vtask_top__DOT__test_outputs__105__t_dirty0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__105__t_dirty1;
    __Vtask_top__DOT__test_outputs__105__t_dirty1 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__105__t_valid0;
    __Vtask_top__DOT__test_outputs__105__t_valid0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__105__t_valid1;
    __Vtask_top__DOT__test_outputs__105__t_valid1 = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__105__t_flush_index;
    __Vtask_top__DOT__test_outputs__105__t_flush_index = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__105__t_flush_way_sel;
    __Vtask_top__DOT__test_outputs__105__t_flush_way_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__156__t_tarray0_match;
    __Vtask_top__DOT__test_outputs__156__t_tarray0_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__156__t_tarray1_match;
    __Vtask_top__DOT__test_outputs__156__t_tarray1_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__156__t_line0_dirty;
    __Vtask_top__DOT__test_outputs__156__t_line0_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__156__t_line1_dirty;
    __Vtask_top__DOT__test_outputs__156__t_line1_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__156__t_line0_valid;
    __Vtask_top__DOT__test_outputs__156__t_line0_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__156__t_line1_valid;
    __Vtask_top__DOT__test_outputs__156__t_line1_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__156__t_incoming_mem_type;
    __Vtask_top__DOT__test_outputs__156__t_incoming_mem_type = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__156__t_req_count_done;
    __Vtask_top__DOT__test_outputs__156__t_req_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__156__t_resp_count_done;
    __Vtask_top__DOT__test_outputs__156__t_resp_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__156__t_all_flushed;
    __Vtask_top__DOT__test_outputs__156__t_all_flushed = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__156__t_memresp_msg_type_;
    __Vtask_top__DOT__test_outputs__156__t_memresp_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__156__t_memresp_msg_data;
    __Vtask_top__DOT__test_outputs__156__t_memresp_msg_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__156__t_cache_req_msg_type_;
    __Vtask_top__DOT__test_outputs__156__t_cache_req_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__156__t_cache_req_msg_addr;
    __Vtask_top__DOT__test_outputs__156__t_cache_req_msg_addr = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__156__t_cache_req_msg_data;
    __Vtask_top__DOT__test_outputs__156__t_cache_req_msg_data = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__156__t_d_index;
    __Vtask_top__DOT__test_outputs__156__t_d_index = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__156__t_write_word_offset;
    __Vtask_top__DOT__test_outputs__156__t_write_word_offset = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__156__t_read_word_offset;
    __Vtask_top__DOT__test_outputs__156__t_read_word_offset = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__156__t_write_data;
    __Vtask_top__DOT__test_outputs__156__t_write_data = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__156__t_dirty0;
    __Vtask_top__DOT__test_outputs__156__t_dirty0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__156__t_dirty1;
    __Vtask_top__DOT__test_outputs__156__t_dirty1 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__156__t_valid0;
    __Vtask_top__DOT__test_outputs__156__t_valid0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__156__t_valid1;
    __Vtask_top__DOT__test_outputs__156__t_valid1 = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__156__t_flush_index;
    __Vtask_top__DOT__test_outputs__156__t_flush_index = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__156__t_flush_way_sel;
    __Vtask_top__DOT__test_outputs__156__t_flush_way_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__207__t_flush;
    __Vtask_top__DOT__set_inputs__207__t_flush = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__207__t_flush_done;
    __Vtask_top__DOT__set_inputs__207__t_flush_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__207__t_input_en;
    __Vtask_top__DOT__set_inputs__207__t_input_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__207__t_tarray_en;
    __Vtask_top__DOT__set_inputs__207__t_tarray_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__207__t_tarray_wen;
    __Vtask_top__DOT__set_inputs__207__t_tarray_wen = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__207__t_req_count_en;
    __Vtask_top__DOT__set_inputs__207__t_req_count_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__207__t_resp_count_en;
    __Vtask_top__DOT__set_inputs__207__t_resp_count_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__207__t_count_reset;
    __Vtask_top__DOT__set_inputs__207__t_count_reset = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__207__t_write_data_sel;
    __Vtask_top__DOT__set_inputs__207__t_write_data_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__207__t_darray_en;
    __Vtask_top__DOT__set_inputs__207__t_darray_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__207__t_darray_wen;
    __Vtask_top__DOT__set_inputs__207__t_darray_wen = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__207__t_index_sel;
    __Vtask_top__DOT__set_inputs__207__t_index_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__207__t_write_word_sel;
    __Vtask_top__DOT__set_inputs__207__t_write_word_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__207__t_read_word_sel;
    __Vtask_top__DOT__set_inputs__207__t_read_word_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__207__t_mem_action;
    __Vtask_top__DOT__set_inputs__207__t_mem_action = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__207__t_clean_set;
    __Vtask_top__DOT__set_inputs__207__t_clean_set = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__207__t_dirty_set;
    __Vtask_top__DOT__set_inputs__207__t_dirty_set = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__207__t_valid_set;
    __Vtask_top__DOT__set_inputs__207__t_valid_set = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__207__t_state;
    __Vtask_top__DOT__set_inputs__207__t_state = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__207__t_mem_addr;
    __Vtask_top__DOT__set_inputs__207__t_mem_addr = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__207__t_mem_data;
    __Vtask_top__DOT__set_inputs__207__t_mem_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__207__t_mem_type;
    __Vtask_top__DOT__set_inputs__207__t_mem_type = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__207__t_cache_data;
    __Vtask_top__DOT__set_inputs__207__t_cache_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__207__t_cache_type;
    __Vtask_top__DOT__set_inputs__207__t_cache_type = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__207__t_way_select;
    __Vtask_top__DOT__set_inputs__207__t_way_select = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__208__delay_val;
    __Vtask_top__DOT__delay__208__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__208__unnamedblk6__DOT__i;
    __Vtask_top__DOT__delay__208__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__209__t_tarray0_match;
    __Vtask_top__DOT__test_outputs__209__t_tarray0_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__209__t_tarray1_match;
    __Vtask_top__DOT__test_outputs__209__t_tarray1_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__209__t_line0_dirty;
    __Vtask_top__DOT__test_outputs__209__t_line0_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__209__t_line1_dirty;
    __Vtask_top__DOT__test_outputs__209__t_line1_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__209__t_line0_valid;
    __Vtask_top__DOT__test_outputs__209__t_line0_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__209__t_line1_valid;
    __Vtask_top__DOT__test_outputs__209__t_line1_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__209__t_incoming_mem_type;
    __Vtask_top__DOT__test_outputs__209__t_incoming_mem_type = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__209__t_req_count_done;
    __Vtask_top__DOT__test_outputs__209__t_req_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__209__t_resp_count_done;
    __Vtask_top__DOT__test_outputs__209__t_resp_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__209__t_all_flushed;
    __Vtask_top__DOT__test_outputs__209__t_all_flushed = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__209__t_memresp_msg_type_;
    __Vtask_top__DOT__test_outputs__209__t_memresp_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__209__t_memresp_msg_data;
    __Vtask_top__DOT__test_outputs__209__t_memresp_msg_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__209__t_cache_req_msg_type_;
    __Vtask_top__DOT__test_outputs__209__t_cache_req_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__209__t_cache_req_msg_addr;
    __Vtask_top__DOT__test_outputs__209__t_cache_req_msg_addr = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__209__t_cache_req_msg_data;
    __Vtask_top__DOT__test_outputs__209__t_cache_req_msg_data = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__209__t_d_index;
    __Vtask_top__DOT__test_outputs__209__t_d_index = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__209__t_write_word_offset;
    __Vtask_top__DOT__test_outputs__209__t_write_word_offset = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__209__t_read_word_offset;
    __Vtask_top__DOT__test_outputs__209__t_read_word_offset = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__209__t_write_data;
    __Vtask_top__DOT__test_outputs__209__t_write_data = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__209__t_dirty0;
    __Vtask_top__DOT__test_outputs__209__t_dirty0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__209__t_dirty1;
    __Vtask_top__DOT__test_outputs__209__t_dirty1 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__209__t_valid0;
    __Vtask_top__DOT__test_outputs__209__t_valid0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__209__t_valid1;
    __Vtask_top__DOT__test_outputs__209__t_valid1 = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__209__t_flush_index;
    __Vtask_top__DOT__test_outputs__209__t_flush_index = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__209__t_flush_way_sel;
    __Vtask_top__DOT__test_outputs__209__t_flush_way_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__260__t_flush;
    __Vtask_top__DOT__set_inputs__260__t_flush = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__260__t_flush_done;
    __Vtask_top__DOT__set_inputs__260__t_flush_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__260__t_input_en;
    __Vtask_top__DOT__set_inputs__260__t_input_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__260__t_tarray_en;
    __Vtask_top__DOT__set_inputs__260__t_tarray_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__260__t_tarray_wen;
    __Vtask_top__DOT__set_inputs__260__t_tarray_wen = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__260__t_req_count_en;
    __Vtask_top__DOT__set_inputs__260__t_req_count_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__260__t_resp_count_en;
    __Vtask_top__DOT__set_inputs__260__t_resp_count_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__260__t_count_reset;
    __Vtask_top__DOT__set_inputs__260__t_count_reset = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__260__t_write_data_sel;
    __Vtask_top__DOT__set_inputs__260__t_write_data_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__260__t_darray_en;
    __Vtask_top__DOT__set_inputs__260__t_darray_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__260__t_darray_wen;
    __Vtask_top__DOT__set_inputs__260__t_darray_wen = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__260__t_index_sel;
    __Vtask_top__DOT__set_inputs__260__t_index_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__260__t_write_word_sel;
    __Vtask_top__DOT__set_inputs__260__t_write_word_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__260__t_read_word_sel;
    __Vtask_top__DOT__set_inputs__260__t_read_word_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__260__t_mem_action;
    __Vtask_top__DOT__set_inputs__260__t_mem_action = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__260__t_clean_set;
    __Vtask_top__DOT__set_inputs__260__t_clean_set = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__260__t_dirty_set;
    __Vtask_top__DOT__set_inputs__260__t_dirty_set = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__260__t_valid_set;
    __Vtask_top__DOT__set_inputs__260__t_valid_set = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__260__t_state;
    __Vtask_top__DOT__set_inputs__260__t_state = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__260__t_mem_addr;
    __Vtask_top__DOT__set_inputs__260__t_mem_addr = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__260__t_mem_data;
    __Vtask_top__DOT__set_inputs__260__t_mem_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__260__t_mem_type;
    __Vtask_top__DOT__set_inputs__260__t_mem_type = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__260__t_cache_data;
    __Vtask_top__DOT__set_inputs__260__t_cache_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__260__t_cache_type;
    __Vtask_top__DOT__set_inputs__260__t_cache_type = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__260__t_way_select;
    __Vtask_top__DOT__set_inputs__260__t_way_select = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__261__t_tarray0_match;
    __Vtask_top__DOT__test_outputs__261__t_tarray0_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__261__t_tarray1_match;
    __Vtask_top__DOT__test_outputs__261__t_tarray1_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__261__t_line0_dirty;
    __Vtask_top__DOT__test_outputs__261__t_line0_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__261__t_line1_dirty;
    __Vtask_top__DOT__test_outputs__261__t_line1_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__261__t_line0_valid;
    __Vtask_top__DOT__test_outputs__261__t_line0_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__261__t_line1_valid;
    __Vtask_top__DOT__test_outputs__261__t_line1_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__261__t_incoming_mem_type;
    __Vtask_top__DOT__test_outputs__261__t_incoming_mem_type = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__261__t_req_count_done;
    __Vtask_top__DOT__test_outputs__261__t_req_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__261__t_resp_count_done;
    __Vtask_top__DOT__test_outputs__261__t_resp_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__261__t_all_flushed;
    __Vtask_top__DOT__test_outputs__261__t_all_flushed = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__261__t_memresp_msg_type_;
    __Vtask_top__DOT__test_outputs__261__t_memresp_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__261__t_memresp_msg_data;
    __Vtask_top__DOT__test_outputs__261__t_memresp_msg_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__261__t_cache_req_msg_type_;
    __Vtask_top__DOT__test_outputs__261__t_cache_req_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__261__t_cache_req_msg_addr;
    __Vtask_top__DOT__test_outputs__261__t_cache_req_msg_addr = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__261__t_cache_req_msg_data;
    __Vtask_top__DOT__test_outputs__261__t_cache_req_msg_data = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__261__t_d_index;
    __Vtask_top__DOT__test_outputs__261__t_d_index = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__261__t_write_word_offset;
    __Vtask_top__DOT__test_outputs__261__t_write_word_offset = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__261__t_read_word_offset;
    __Vtask_top__DOT__test_outputs__261__t_read_word_offset = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__261__t_write_data;
    __Vtask_top__DOT__test_outputs__261__t_write_data = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__261__t_dirty0;
    __Vtask_top__DOT__test_outputs__261__t_dirty0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__261__t_dirty1;
    __Vtask_top__DOT__test_outputs__261__t_dirty1 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__261__t_valid0;
    __Vtask_top__DOT__test_outputs__261__t_valid0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__261__t_valid1;
    __Vtask_top__DOT__test_outputs__261__t_valid1 = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__261__t_flush_index;
    __Vtask_top__DOT__test_outputs__261__t_flush_index = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__261__t_flush_way_sel;
    __Vtask_top__DOT__test_outputs__261__t_flush_way_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__312__t_tarray0_match;
    __Vtask_top__DOT__test_outputs__312__t_tarray0_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__312__t_tarray1_match;
    __Vtask_top__DOT__test_outputs__312__t_tarray1_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__312__t_line0_dirty;
    __Vtask_top__DOT__test_outputs__312__t_line0_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__312__t_line1_dirty;
    __Vtask_top__DOT__test_outputs__312__t_line1_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__312__t_line0_valid;
    __Vtask_top__DOT__test_outputs__312__t_line0_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__312__t_line1_valid;
    __Vtask_top__DOT__test_outputs__312__t_line1_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__312__t_incoming_mem_type;
    __Vtask_top__DOT__test_outputs__312__t_incoming_mem_type = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__312__t_req_count_done;
    __Vtask_top__DOT__test_outputs__312__t_req_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__312__t_resp_count_done;
    __Vtask_top__DOT__test_outputs__312__t_resp_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__312__t_all_flushed;
    __Vtask_top__DOT__test_outputs__312__t_all_flushed = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__312__t_memresp_msg_type_;
    __Vtask_top__DOT__test_outputs__312__t_memresp_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__312__t_memresp_msg_data;
    __Vtask_top__DOT__test_outputs__312__t_memresp_msg_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__312__t_cache_req_msg_type_;
    __Vtask_top__DOT__test_outputs__312__t_cache_req_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__312__t_cache_req_msg_addr;
    __Vtask_top__DOT__test_outputs__312__t_cache_req_msg_addr = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__312__t_cache_req_msg_data;
    __Vtask_top__DOT__test_outputs__312__t_cache_req_msg_data = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__312__t_d_index;
    __Vtask_top__DOT__test_outputs__312__t_d_index = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__312__t_write_word_offset;
    __Vtask_top__DOT__test_outputs__312__t_write_word_offset = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__312__t_read_word_offset;
    __Vtask_top__DOT__test_outputs__312__t_read_word_offset = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__312__t_write_data;
    __Vtask_top__DOT__test_outputs__312__t_write_data = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__312__t_dirty0;
    __Vtask_top__DOT__test_outputs__312__t_dirty0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__312__t_dirty1;
    __Vtask_top__DOT__test_outputs__312__t_dirty1 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__312__t_valid0;
    __Vtask_top__DOT__test_outputs__312__t_valid0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__312__t_valid1;
    __Vtask_top__DOT__test_outputs__312__t_valid1 = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__312__t_flush_index;
    __Vtask_top__DOT__test_outputs__312__t_flush_index = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__312__t_flush_way_sel;
    __Vtask_top__DOT__test_outputs__312__t_flush_way_sel = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__363__delay_val;
    __Vtask_top__DOT__delay__363__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__363__unnamedblk6__DOT__i;
    __Vtask_top__DOT__delay__363__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__364__t_flush;
    __Vtask_top__DOT__set_inputs__364__t_flush = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__364__t_flush_done;
    __Vtask_top__DOT__set_inputs__364__t_flush_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__364__t_input_en;
    __Vtask_top__DOT__set_inputs__364__t_input_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__364__t_tarray_en;
    __Vtask_top__DOT__set_inputs__364__t_tarray_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__364__t_tarray_wen;
    __Vtask_top__DOT__set_inputs__364__t_tarray_wen = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__364__t_req_count_en;
    __Vtask_top__DOT__set_inputs__364__t_req_count_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__364__t_resp_count_en;
    __Vtask_top__DOT__set_inputs__364__t_resp_count_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__364__t_count_reset;
    __Vtask_top__DOT__set_inputs__364__t_count_reset = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__364__t_write_data_sel;
    __Vtask_top__DOT__set_inputs__364__t_write_data_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__364__t_darray_en;
    __Vtask_top__DOT__set_inputs__364__t_darray_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__364__t_darray_wen;
    __Vtask_top__DOT__set_inputs__364__t_darray_wen = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__364__t_index_sel;
    __Vtask_top__DOT__set_inputs__364__t_index_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__364__t_write_word_sel;
    __Vtask_top__DOT__set_inputs__364__t_write_word_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__364__t_read_word_sel;
    __Vtask_top__DOT__set_inputs__364__t_read_word_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__364__t_mem_action;
    __Vtask_top__DOT__set_inputs__364__t_mem_action = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__364__t_clean_set;
    __Vtask_top__DOT__set_inputs__364__t_clean_set = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__364__t_dirty_set;
    __Vtask_top__DOT__set_inputs__364__t_dirty_set = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__364__t_valid_set;
    __Vtask_top__DOT__set_inputs__364__t_valid_set = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__364__t_state;
    __Vtask_top__DOT__set_inputs__364__t_state = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__364__t_mem_addr;
    __Vtask_top__DOT__set_inputs__364__t_mem_addr = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__364__t_mem_data;
    __Vtask_top__DOT__set_inputs__364__t_mem_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__364__t_mem_type;
    __Vtask_top__DOT__set_inputs__364__t_mem_type = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__364__t_cache_data;
    __Vtask_top__DOT__set_inputs__364__t_cache_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__364__t_cache_type;
    __Vtask_top__DOT__set_inputs__364__t_cache_type = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__364__t_way_select;
    __Vtask_top__DOT__set_inputs__364__t_way_select = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__365__t_tarray0_match;
    __Vtask_top__DOT__test_outputs__365__t_tarray0_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__365__t_tarray1_match;
    __Vtask_top__DOT__test_outputs__365__t_tarray1_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__365__t_line0_dirty;
    __Vtask_top__DOT__test_outputs__365__t_line0_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__365__t_line1_dirty;
    __Vtask_top__DOT__test_outputs__365__t_line1_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__365__t_line0_valid;
    __Vtask_top__DOT__test_outputs__365__t_line0_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__365__t_line1_valid;
    __Vtask_top__DOT__test_outputs__365__t_line1_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__365__t_incoming_mem_type;
    __Vtask_top__DOT__test_outputs__365__t_incoming_mem_type = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__365__t_req_count_done;
    __Vtask_top__DOT__test_outputs__365__t_req_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__365__t_resp_count_done;
    __Vtask_top__DOT__test_outputs__365__t_resp_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__365__t_all_flushed;
    __Vtask_top__DOT__test_outputs__365__t_all_flushed = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__365__t_memresp_msg_type_;
    __Vtask_top__DOT__test_outputs__365__t_memresp_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__365__t_memresp_msg_data;
    __Vtask_top__DOT__test_outputs__365__t_memresp_msg_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__365__t_cache_req_msg_type_;
    __Vtask_top__DOT__test_outputs__365__t_cache_req_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__365__t_cache_req_msg_addr;
    __Vtask_top__DOT__test_outputs__365__t_cache_req_msg_addr = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__365__t_cache_req_msg_data;
    __Vtask_top__DOT__test_outputs__365__t_cache_req_msg_data = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__365__t_d_index;
    __Vtask_top__DOT__test_outputs__365__t_d_index = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__365__t_write_word_offset;
    __Vtask_top__DOT__test_outputs__365__t_write_word_offset = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__365__t_read_word_offset;
    __Vtask_top__DOT__test_outputs__365__t_read_word_offset = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__365__t_write_data;
    __Vtask_top__DOT__test_outputs__365__t_write_data = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__365__t_dirty0;
    __Vtask_top__DOT__test_outputs__365__t_dirty0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__365__t_dirty1;
    __Vtask_top__DOT__test_outputs__365__t_dirty1 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__365__t_valid0;
    __Vtask_top__DOT__test_outputs__365__t_valid0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__365__t_valid1;
    __Vtask_top__DOT__test_outputs__365__t_valid1 = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__365__t_flush_index;
    __Vtask_top__DOT__test_outputs__365__t_flush_index = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__365__t_flush_way_sel;
    __Vtask_top__DOT__test_outputs__365__t_flush_way_sel = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__416__delay_val;
    __Vtask_top__DOT__delay__416__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__416__unnamedblk6__DOT__i;
    __Vtask_top__DOT__delay__416__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__417__t_flush;
    __Vtask_top__DOT__set_inputs__417__t_flush = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__417__t_flush_done;
    __Vtask_top__DOT__set_inputs__417__t_flush_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__417__t_input_en;
    __Vtask_top__DOT__set_inputs__417__t_input_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__417__t_tarray_en;
    __Vtask_top__DOT__set_inputs__417__t_tarray_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__417__t_tarray_wen;
    __Vtask_top__DOT__set_inputs__417__t_tarray_wen = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__417__t_req_count_en;
    __Vtask_top__DOT__set_inputs__417__t_req_count_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__417__t_resp_count_en;
    __Vtask_top__DOT__set_inputs__417__t_resp_count_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__417__t_count_reset;
    __Vtask_top__DOT__set_inputs__417__t_count_reset = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__417__t_write_data_sel;
    __Vtask_top__DOT__set_inputs__417__t_write_data_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__417__t_darray_en;
    __Vtask_top__DOT__set_inputs__417__t_darray_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__417__t_darray_wen;
    __Vtask_top__DOT__set_inputs__417__t_darray_wen = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__417__t_index_sel;
    __Vtask_top__DOT__set_inputs__417__t_index_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__417__t_write_word_sel;
    __Vtask_top__DOT__set_inputs__417__t_write_word_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__417__t_read_word_sel;
    __Vtask_top__DOT__set_inputs__417__t_read_word_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__417__t_mem_action;
    __Vtask_top__DOT__set_inputs__417__t_mem_action = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__417__t_clean_set;
    __Vtask_top__DOT__set_inputs__417__t_clean_set = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__417__t_dirty_set;
    __Vtask_top__DOT__set_inputs__417__t_dirty_set = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__417__t_valid_set;
    __Vtask_top__DOT__set_inputs__417__t_valid_set = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__417__t_state;
    __Vtask_top__DOT__set_inputs__417__t_state = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__417__t_mem_addr;
    __Vtask_top__DOT__set_inputs__417__t_mem_addr = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__417__t_mem_data;
    __Vtask_top__DOT__set_inputs__417__t_mem_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__417__t_mem_type;
    __Vtask_top__DOT__set_inputs__417__t_mem_type = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__417__t_cache_data;
    __Vtask_top__DOT__set_inputs__417__t_cache_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__417__t_cache_type;
    __Vtask_top__DOT__set_inputs__417__t_cache_type = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__417__t_way_select;
    __Vtask_top__DOT__set_inputs__417__t_way_select = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__418__t_tarray0_match;
    __Vtask_top__DOT__test_outputs__418__t_tarray0_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__418__t_tarray1_match;
    __Vtask_top__DOT__test_outputs__418__t_tarray1_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__418__t_line0_dirty;
    __Vtask_top__DOT__test_outputs__418__t_line0_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__418__t_line1_dirty;
    __Vtask_top__DOT__test_outputs__418__t_line1_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__418__t_line0_valid;
    __Vtask_top__DOT__test_outputs__418__t_line0_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__418__t_line1_valid;
    __Vtask_top__DOT__test_outputs__418__t_line1_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__418__t_incoming_mem_type;
    __Vtask_top__DOT__test_outputs__418__t_incoming_mem_type = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__418__t_req_count_done;
    __Vtask_top__DOT__test_outputs__418__t_req_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__418__t_resp_count_done;
    __Vtask_top__DOT__test_outputs__418__t_resp_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__418__t_all_flushed;
    __Vtask_top__DOT__test_outputs__418__t_all_flushed = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__418__t_memresp_msg_type_;
    __Vtask_top__DOT__test_outputs__418__t_memresp_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__418__t_memresp_msg_data;
    __Vtask_top__DOT__test_outputs__418__t_memresp_msg_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__418__t_cache_req_msg_type_;
    __Vtask_top__DOT__test_outputs__418__t_cache_req_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__418__t_cache_req_msg_addr;
    __Vtask_top__DOT__test_outputs__418__t_cache_req_msg_addr = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__418__t_cache_req_msg_data;
    __Vtask_top__DOT__test_outputs__418__t_cache_req_msg_data = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__418__t_d_index;
    __Vtask_top__DOT__test_outputs__418__t_d_index = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__418__t_write_word_offset;
    __Vtask_top__DOT__test_outputs__418__t_write_word_offset = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__418__t_read_word_offset;
    __Vtask_top__DOT__test_outputs__418__t_read_word_offset = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__418__t_write_data;
    __Vtask_top__DOT__test_outputs__418__t_write_data = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__418__t_dirty0;
    __Vtask_top__DOT__test_outputs__418__t_dirty0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__418__t_dirty1;
    __Vtask_top__DOT__test_outputs__418__t_dirty1 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__418__t_valid0;
    __Vtask_top__DOT__test_outputs__418__t_valid0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__418__t_valid1;
    __Vtask_top__DOT__test_outputs__418__t_valid1 = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__418__t_flush_index;
    __Vtask_top__DOT__test_outputs__418__t_flush_index = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__418__t_flush_way_sel;
    __Vtask_top__DOT__test_outputs__418__t_flush_way_sel = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__469__delay_val;
    __Vtask_top__DOT__delay__469__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__469__unnamedblk6__DOT__i;
    __Vtask_top__DOT__delay__469__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__470__t_flush;
    __Vtask_top__DOT__set_inputs__470__t_flush = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__470__t_flush_done;
    __Vtask_top__DOT__set_inputs__470__t_flush_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__470__t_input_en;
    __Vtask_top__DOT__set_inputs__470__t_input_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__470__t_tarray_en;
    __Vtask_top__DOT__set_inputs__470__t_tarray_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__470__t_tarray_wen;
    __Vtask_top__DOT__set_inputs__470__t_tarray_wen = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__470__t_req_count_en;
    __Vtask_top__DOT__set_inputs__470__t_req_count_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__470__t_resp_count_en;
    __Vtask_top__DOT__set_inputs__470__t_resp_count_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__470__t_count_reset;
    __Vtask_top__DOT__set_inputs__470__t_count_reset = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__470__t_write_data_sel;
    __Vtask_top__DOT__set_inputs__470__t_write_data_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__470__t_darray_en;
    __Vtask_top__DOT__set_inputs__470__t_darray_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__470__t_darray_wen;
    __Vtask_top__DOT__set_inputs__470__t_darray_wen = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__470__t_index_sel;
    __Vtask_top__DOT__set_inputs__470__t_index_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__470__t_write_word_sel;
    __Vtask_top__DOT__set_inputs__470__t_write_word_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__470__t_read_word_sel;
    __Vtask_top__DOT__set_inputs__470__t_read_word_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__470__t_mem_action;
    __Vtask_top__DOT__set_inputs__470__t_mem_action = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__470__t_clean_set;
    __Vtask_top__DOT__set_inputs__470__t_clean_set = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__470__t_dirty_set;
    __Vtask_top__DOT__set_inputs__470__t_dirty_set = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__470__t_valid_set;
    __Vtask_top__DOT__set_inputs__470__t_valid_set = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__470__t_state;
    __Vtask_top__DOT__set_inputs__470__t_state = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__470__t_mem_addr;
    __Vtask_top__DOT__set_inputs__470__t_mem_addr = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__470__t_mem_data;
    __Vtask_top__DOT__set_inputs__470__t_mem_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__470__t_mem_type;
    __Vtask_top__DOT__set_inputs__470__t_mem_type = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__470__t_cache_data;
    __Vtask_top__DOT__set_inputs__470__t_cache_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__470__t_cache_type;
    __Vtask_top__DOT__set_inputs__470__t_cache_type = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__470__t_way_select;
    __Vtask_top__DOT__set_inputs__470__t_way_select = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__471__t_tarray0_match;
    __Vtask_top__DOT__test_outputs__471__t_tarray0_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__471__t_tarray1_match;
    __Vtask_top__DOT__test_outputs__471__t_tarray1_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__471__t_line0_dirty;
    __Vtask_top__DOT__test_outputs__471__t_line0_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__471__t_line1_dirty;
    __Vtask_top__DOT__test_outputs__471__t_line1_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__471__t_line0_valid;
    __Vtask_top__DOT__test_outputs__471__t_line0_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__471__t_line1_valid;
    __Vtask_top__DOT__test_outputs__471__t_line1_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__471__t_incoming_mem_type;
    __Vtask_top__DOT__test_outputs__471__t_incoming_mem_type = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__471__t_req_count_done;
    __Vtask_top__DOT__test_outputs__471__t_req_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__471__t_resp_count_done;
    __Vtask_top__DOT__test_outputs__471__t_resp_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__471__t_all_flushed;
    __Vtask_top__DOT__test_outputs__471__t_all_flushed = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__471__t_memresp_msg_type_;
    __Vtask_top__DOT__test_outputs__471__t_memresp_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__471__t_memresp_msg_data;
    __Vtask_top__DOT__test_outputs__471__t_memresp_msg_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__471__t_cache_req_msg_type_;
    __Vtask_top__DOT__test_outputs__471__t_cache_req_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__471__t_cache_req_msg_addr;
    __Vtask_top__DOT__test_outputs__471__t_cache_req_msg_addr = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__471__t_cache_req_msg_data;
    __Vtask_top__DOT__test_outputs__471__t_cache_req_msg_data = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__471__t_d_index;
    __Vtask_top__DOT__test_outputs__471__t_d_index = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__471__t_write_word_offset;
    __Vtask_top__DOT__test_outputs__471__t_write_word_offset = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__471__t_read_word_offset;
    __Vtask_top__DOT__test_outputs__471__t_read_word_offset = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__471__t_write_data;
    __Vtask_top__DOT__test_outputs__471__t_write_data = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__471__t_dirty0;
    __Vtask_top__DOT__test_outputs__471__t_dirty0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__471__t_dirty1;
    __Vtask_top__DOT__test_outputs__471__t_dirty1 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__471__t_valid0;
    __Vtask_top__DOT__test_outputs__471__t_valid0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__471__t_valid1;
    __Vtask_top__DOT__test_outputs__471__t_valid1 = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__471__t_flush_index;
    __Vtask_top__DOT__test_outputs__471__t_flush_index = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__471__t_flush_way_sel;
    __Vtask_top__DOT__test_outputs__471__t_flush_way_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__522__t_tarray0_match;
    __Vtask_top__DOT__test_outputs__522__t_tarray0_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__522__t_tarray1_match;
    __Vtask_top__DOT__test_outputs__522__t_tarray1_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__522__t_line0_dirty;
    __Vtask_top__DOT__test_outputs__522__t_line0_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__522__t_line1_dirty;
    __Vtask_top__DOT__test_outputs__522__t_line1_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__522__t_line0_valid;
    __Vtask_top__DOT__test_outputs__522__t_line0_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__522__t_line1_valid;
    __Vtask_top__DOT__test_outputs__522__t_line1_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__522__t_incoming_mem_type;
    __Vtask_top__DOT__test_outputs__522__t_incoming_mem_type = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__522__t_req_count_done;
    __Vtask_top__DOT__test_outputs__522__t_req_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__522__t_resp_count_done;
    __Vtask_top__DOT__test_outputs__522__t_resp_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__522__t_all_flushed;
    __Vtask_top__DOT__test_outputs__522__t_all_flushed = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__522__t_memresp_msg_type_;
    __Vtask_top__DOT__test_outputs__522__t_memresp_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__522__t_memresp_msg_data;
    __Vtask_top__DOT__test_outputs__522__t_memresp_msg_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__522__t_cache_req_msg_type_;
    __Vtask_top__DOT__test_outputs__522__t_cache_req_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__522__t_cache_req_msg_addr;
    __Vtask_top__DOT__test_outputs__522__t_cache_req_msg_addr = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__522__t_cache_req_msg_data;
    __Vtask_top__DOT__test_outputs__522__t_cache_req_msg_data = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__522__t_d_index;
    __Vtask_top__DOT__test_outputs__522__t_d_index = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__522__t_write_word_offset;
    __Vtask_top__DOT__test_outputs__522__t_write_word_offset = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__522__t_read_word_offset;
    __Vtask_top__DOT__test_outputs__522__t_read_word_offset = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__522__t_write_data;
    __Vtask_top__DOT__test_outputs__522__t_write_data = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__522__t_dirty0;
    __Vtask_top__DOT__test_outputs__522__t_dirty0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__522__t_dirty1;
    __Vtask_top__DOT__test_outputs__522__t_dirty1 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__522__t_valid0;
    __Vtask_top__DOT__test_outputs__522__t_valid0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__522__t_valid1;
    __Vtask_top__DOT__test_outputs__522__t_valid1 = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__522__t_flush_index;
    __Vtask_top__DOT__test_outputs__522__t_flush_index = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__522__t_flush_way_sel;
    __Vtask_top__DOT__test_outputs__522__t_flush_way_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__573__t_tarray0_match;
    __Vtask_top__DOT__test_outputs__573__t_tarray0_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__573__t_tarray1_match;
    __Vtask_top__DOT__test_outputs__573__t_tarray1_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__573__t_line0_dirty;
    __Vtask_top__DOT__test_outputs__573__t_line0_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__573__t_line1_dirty;
    __Vtask_top__DOT__test_outputs__573__t_line1_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__573__t_line0_valid;
    __Vtask_top__DOT__test_outputs__573__t_line0_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__573__t_line1_valid;
    __Vtask_top__DOT__test_outputs__573__t_line1_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__573__t_incoming_mem_type;
    __Vtask_top__DOT__test_outputs__573__t_incoming_mem_type = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__573__t_req_count_done;
    __Vtask_top__DOT__test_outputs__573__t_req_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__573__t_resp_count_done;
    __Vtask_top__DOT__test_outputs__573__t_resp_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__573__t_all_flushed;
    __Vtask_top__DOT__test_outputs__573__t_all_flushed = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__573__t_memresp_msg_type_;
    __Vtask_top__DOT__test_outputs__573__t_memresp_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__573__t_memresp_msg_data;
    __Vtask_top__DOT__test_outputs__573__t_memresp_msg_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__573__t_cache_req_msg_type_;
    __Vtask_top__DOT__test_outputs__573__t_cache_req_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__573__t_cache_req_msg_addr;
    __Vtask_top__DOT__test_outputs__573__t_cache_req_msg_addr = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__573__t_cache_req_msg_data;
    __Vtask_top__DOT__test_outputs__573__t_cache_req_msg_data = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__573__t_d_index;
    __Vtask_top__DOT__test_outputs__573__t_d_index = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__573__t_write_word_offset;
    __Vtask_top__DOT__test_outputs__573__t_write_word_offset = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__573__t_read_word_offset;
    __Vtask_top__DOT__test_outputs__573__t_read_word_offset = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__573__t_write_data;
    __Vtask_top__DOT__test_outputs__573__t_write_data = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__573__t_dirty0;
    __Vtask_top__DOT__test_outputs__573__t_dirty0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__573__t_dirty1;
    __Vtask_top__DOT__test_outputs__573__t_dirty1 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__573__t_valid0;
    __Vtask_top__DOT__test_outputs__573__t_valid0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__573__t_valid1;
    __Vtask_top__DOT__test_outputs__573__t_valid1 = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__573__t_flush_index;
    __Vtask_top__DOT__test_outputs__573__t_flush_index = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__573__t_flush_way_sel;
    __Vtask_top__DOT__test_outputs__573__t_flush_way_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__624__t_flush;
    __Vtask_top__DOT__set_inputs__624__t_flush = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__624__t_flush_done;
    __Vtask_top__DOT__set_inputs__624__t_flush_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__624__t_input_en;
    __Vtask_top__DOT__set_inputs__624__t_input_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__624__t_tarray_en;
    __Vtask_top__DOT__set_inputs__624__t_tarray_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__624__t_tarray_wen;
    __Vtask_top__DOT__set_inputs__624__t_tarray_wen = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__624__t_req_count_en;
    __Vtask_top__DOT__set_inputs__624__t_req_count_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__624__t_resp_count_en;
    __Vtask_top__DOT__set_inputs__624__t_resp_count_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__624__t_count_reset;
    __Vtask_top__DOT__set_inputs__624__t_count_reset = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__624__t_write_data_sel;
    __Vtask_top__DOT__set_inputs__624__t_write_data_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__624__t_darray_en;
    __Vtask_top__DOT__set_inputs__624__t_darray_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__624__t_darray_wen;
    __Vtask_top__DOT__set_inputs__624__t_darray_wen = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__624__t_index_sel;
    __Vtask_top__DOT__set_inputs__624__t_index_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__624__t_write_word_sel;
    __Vtask_top__DOT__set_inputs__624__t_write_word_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__624__t_read_word_sel;
    __Vtask_top__DOT__set_inputs__624__t_read_word_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__624__t_mem_action;
    __Vtask_top__DOT__set_inputs__624__t_mem_action = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__624__t_clean_set;
    __Vtask_top__DOT__set_inputs__624__t_clean_set = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__624__t_dirty_set;
    __Vtask_top__DOT__set_inputs__624__t_dirty_set = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__624__t_valid_set;
    __Vtask_top__DOT__set_inputs__624__t_valid_set = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__624__t_state;
    __Vtask_top__DOT__set_inputs__624__t_state = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__624__t_mem_addr;
    __Vtask_top__DOT__set_inputs__624__t_mem_addr = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__624__t_mem_data;
    __Vtask_top__DOT__set_inputs__624__t_mem_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__624__t_mem_type;
    __Vtask_top__DOT__set_inputs__624__t_mem_type = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__624__t_cache_data;
    __Vtask_top__DOT__set_inputs__624__t_cache_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__624__t_cache_type;
    __Vtask_top__DOT__set_inputs__624__t_cache_type = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__624__t_way_select;
    __Vtask_top__DOT__set_inputs__624__t_way_select = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__625__delay_val;
    __Vtask_top__DOT__delay__625__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__625__unnamedblk6__DOT__i;
    __Vtask_top__DOT__delay__625__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__626__t_tarray0_match;
    __Vtask_top__DOT__test_outputs__626__t_tarray0_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__626__t_tarray1_match;
    __Vtask_top__DOT__test_outputs__626__t_tarray1_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__626__t_line0_dirty;
    __Vtask_top__DOT__test_outputs__626__t_line0_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__626__t_line1_dirty;
    __Vtask_top__DOT__test_outputs__626__t_line1_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__626__t_line0_valid;
    __Vtask_top__DOT__test_outputs__626__t_line0_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__626__t_line1_valid;
    __Vtask_top__DOT__test_outputs__626__t_line1_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__626__t_incoming_mem_type;
    __Vtask_top__DOT__test_outputs__626__t_incoming_mem_type = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__626__t_req_count_done;
    __Vtask_top__DOT__test_outputs__626__t_req_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__626__t_resp_count_done;
    __Vtask_top__DOT__test_outputs__626__t_resp_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__626__t_all_flushed;
    __Vtask_top__DOT__test_outputs__626__t_all_flushed = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__626__t_memresp_msg_type_;
    __Vtask_top__DOT__test_outputs__626__t_memresp_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__626__t_memresp_msg_data;
    __Vtask_top__DOT__test_outputs__626__t_memresp_msg_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__626__t_cache_req_msg_type_;
    __Vtask_top__DOT__test_outputs__626__t_cache_req_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__626__t_cache_req_msg_addr;
    __Vtask_top__DOT__test_outputs__626__t_cache_req_msg_addr = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__626__t_cache_req_msg_data;
    __Vtask_top__DOT__test_outputs__626__t_cache_req_msg_data = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__626__t_d_index;
    __Vtask_top__DOT__test_outputs__626__t_d_index = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__626__t_write_word_offset;
    __Vtask_top__DOT__test_outputs__626__t_write_word_offset = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__626__t_read_word_offset;
    __Vtask_top__DOT__test_outputs__626__t_read_word_offset = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__626__t_write_data;
    __Vtask_top__DOT__test_outputs__626__t_write_data = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__626__t_dirty0;
    __Vtask_top__DOT__test_outputs__626__t_dirty0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__626__t_dirty1;
    __Vtask_top__DOT__test_outputs__626__t_dirty1 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__626__t_valid0;
    __Vtask_top__DOT__test_outputs__626__t_valid0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__626__t_valid1;
    __Vtask_top__DOT__test_outputs__626__t_valid1 = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__626__t_flush_index;
    __Vtask_top__DOT__test_outputs__626__t_flush_index = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__626__t_flush_way_sel;
    __Vtask_top__DOT__test_outputs__626__t_flush_way_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__677__t_flush;
    __Vtask_top__DOT__set_inputs__677__t_flush = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__677__t_flush_done;
    __Vtask_top__DOT__set_inputs__677__t_flush_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__677__t_input_en;
    __Vtask_top__DOT__set_inputs__677__t_input_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__677__t_tarray_en;
    __Vtask_top__DOT__set_inputs__677__t_tarray_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__677__t_tarray_wen;
    __Vtask_top__DOT__set_inputs__677__t_tarray_wen = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__677__t_req_count_en;
    __Vtask_top__DOT__set_inputs__677__t_req_count_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__677__t_resp_count_en;
    __Vtask_top__DOT__set_inputs__677__t_resp_count_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__677__t_count_reset;
    __Vtask_top__DOT__set_inputs__677__t_count_reset = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__677__t_write_data_sel;
    __Vtask_top__DOT__set_inputs__677__t_write_data_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__677__t_darray_en;
    __Vtask_top__DOT__set_inputs__677__t_darray_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__677__t_darray_wen;
    __Vtask_top__DOT__set_inputs__677__t_darray_wen = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__677__t_index_sel;
    __Vtask_top__DOT__set_inputs__677__t_index_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__677__t_write_word_sel;
    __Vtask_top__DOT__set_inputs__677__t_write_word_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__677__t_read_word_sel;
    __Vtask_top__DOT__set_inputs__677__t_read_word_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__677__t_mem_action;
    __Vtask_top__DOT__set_inputs__677__t_mem_action = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__677__t_clean_set;
    __Vtask_top__DOT__set_inputs__677__t_clean_set = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__677__t_dirty_set;
    __Vtask_top__DOT__set_inputs__677__t_dirty_set = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__677__t_valid_set;
    __Vtask_top__DOT__set_inputs__677__t_valid_set = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__677__t_state;
    __Vtask_top__DOT__set_inputs__677__t_state = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__677__t_mem_addr;
    __Vtask_top__DOT__set_inputs__677__t_mem_addr = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__677__t_mem_data;
    __Vtask_top__DOT__set_inputs__677__t_mem_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__677__t_mem_type;
    __Vtask_top__DOT__set_inputs__677__t_mem_type = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__677__t_cache_data;
    __Vtask_top__DOT__set_inputs__677__t_cache_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__677__t_cache_type;
    __Vtask_top__DOT__set_inputs__677__t_cache_type = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__677__t_way_select;
    __Vtask_top__DOT__set_inputs__677__t_way_select = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__678__t_tarray0_match;
    __Vtask_top__DOT__test_outputs__678__t_tarray0_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__678__t_tarray1_match;
    __Vtask_top__DOT__test_outputs__678__t_tarray1_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__678__t_line0_dirty;
    __Vtask_top__DOT__test_outputs__678__t_line0_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__678__t_line1_dirty;
    __Vtask_top__DOT__test_outputs__678__t_line1_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__678__t_line0_valid;
    __Vtask_top__DOT__test_outputs__678__t_line0_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__678__t_line1_valid;
    __Vtask_top__DOT__test_outputs__678__t_line1_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__678__t_incoming_mem_type;
    __Vtask_top__DOT__test_outputs__678__t_incoming_mem_type = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__678__t_req_count_done;
    __Vtask_top__DOT__test_outputs__678__t_req_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__678__t_resp_count_done;
    __Vtask_top__DOT__test_outputs__678__t_resp_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__678__t_all_flushed;
    __Vtask_top__DOT__test_outputs__678__t_all_flushed = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__678__t_memresp_msg_type_;
    __Vtask_top__DOT__test_outputs__678__t_memresp_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__678__t_memresp_msg_data;
    __Vtask_top__DOT__test_outputs__678__t_memresp_msg_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__678__t_cache_req_msg_type_;
    __Vtask_top__DOT__test_outputs__678__t_cache_req_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__678__t_cache_req_msg_addr;
    __Vtask_top__DOT__test_outputs__678__t_cache_req_msg_addr = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__678__t_cache_req_msg_data;
    __Vtask_top__DOT__test_outputs__678__t_cache_req_msg_data = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__678__t_d_index;
    __Vtask_top__DOT__test_outputs__678__t_d_index = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__678__t_write_word_offset;
    __Vtask_top__DOT__test_outputs__678__t_write_word_offset = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__678__t_read_word_offset;
    __Vtask_top__DOT__test_outputs__678__t_read_word_offset = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__678__t_write_data;
    __Vtask_top__DOT__test_outputs__678__t_write_data = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__678__t_dirty0;
    __Vtask_top__DOT__test_outputs__678__t_dirty0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__678__t_dirty1;
    __Vtask_top__DOT__test_outputs__678__t_dirty1 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__678__t_valid0;
    __Vtask_top__DOT__test_outputs__678__t_valid0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__678__t_valid1;
    __Vtask_top__DOT__test_outputs__678__t_valid1 = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__678__t_flush_index;
    __Vtask_top__DOT__test_outputs__678__t_flush_index = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__678__t_flush_way_sel;
    __Vtask_top__DOT__test_outputs__678__t_flush_way_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__729__t_tarray0_match;
    __Vtask_top__DOT__test_outputs__729__t_tarray0_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__729__t_tarray1_match;
    __Vtask_top__DOT__test_outputs__729__t_tarray1_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__729__t_line0_dirty;
    __Vtask_top__DOT__test_outputs__729__t_line0_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__729__t_line1_dirty;
    __Vtask_top__DOT__test_outputs__729__t_line1_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__729__t_line0_valid;
    __Vtask_top__DOT__test_outputs__729__t_line0_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__729__t_line1_valid;
    __Vtask_top__DOT__test_outputs__729__t_line1_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__729__t_incoming_mem_type;
    __Vtask_top__DOT__test_outputs__729__t_incoming_mem_type = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__729__t_req_count_done;
    __Vtask_top__DOT__test_outputs__729__t_req_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__729__t_resp_count_done;
    __Vtask_top__DOT__test_outputs__729__t_resp_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__729__t_all_flushed;
    __Vtask_top__DOT__test_outputs__729__t_all_flushed = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__729__t_memresp_msg_type_;
    __Vtask_top__DOT__test_outputs__729__t_memresp_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__729__t_memresp_msg_data;
    __Vtask_top__DOT__test_outputs__729__t_memresp_msg_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__729__t_cache_req_msg_type_;
    __Vtask_top__DOT__test_outputs__729__t_cache_req_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__729__t_cache_req_msg_addr;
    __Vtask_top__DOT__test_outputs__729__t_cache_req_msg_addr = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__729__t_cache_req_msg_data;
    __Vtask_top__DOT__test_outputs__729__t_cache_req_msg_data = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__729__t_d_index;
    __Vtask_top__DOT__test_outputs__729__t_d_index = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__729__t_write_word_offset;
    __Vtask_top__DOT__test_outputs__729__t_write_word_offset = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__729__t_read_word_offset;
    __Vtask_top__DOT__test_outputs__729__t_read_word_offset = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__729__t_write_data;
    __Vtask_top__DOT__test_outputs__729__t_write_data = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__729__t_dirty0;
    __Vtask_top__DOT__test_outputs__729__t_dirty0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__729__t_dirty1;
    __Vtask_top__DOT__test_outputs__729__t_dirty1 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__729__t_valid0;
    __Vtask_top__DOT__test_outputs__729__t_valid0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__729__t_valid1;
    __Vtask_top__DOT__test_outputs__729__t_valid1 = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__729__t_flush_index;
    __Vtask_top__DOT__test_outputs__729__t_flush_index = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__729__t_flush_way_sel;
    __Vtask_top__DOT__test_outputs__729__t_flush_way_sel = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__780__delay_val;
    __Vtask_top__DOT__delay__780__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__780__unnamedblk6__DOT__i;
    __Vtask_top__DOT__delay__780__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__781__t_flush;
    __Vtask_top__DOT__set_inputs__781__t_flush = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__781__t_flush_done;
    __Vtask_top__DOT__set_inputs__781__t_flush_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__781__t_input_en;
    __Vtask_top__DOT__set_inputs__781__t_input_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__781__t_tarray_en;
    __Vtask_top__DOT__set_inputs__781__t_tarray_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__781__t_tarray_wen;
    __Vtask_top__DOT__set_inputs__781__t_tarray_wen = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__781__t_req_count_en;
    __Vtask_top__DOT__set_inputs__781__t_req_count_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__781__t_resp_count_en;
    __Vtask_top__DOT__set_inputs__781__t_resp_count_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__781__t_count_reset;
    __Vtask_top__DOT__set_inputs__781__t_count_reset = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__781__t_write_data_sel;
    __Vtask_top__DOT__set_inputs__781__t_write_data_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__781__t_darray_en;
    __Vtask_top__DOT__set_inputs__781__t_darray_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__781__t_darray_wen;
    __Vtask_top__DOT__set_inputs__781__t_darray_wen = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__781__t_index_sel;
    __Vtask_top__DOT__set_inputs__781__t_index_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__781__t_write_word_sel;
    __Vtask_top__DOT__set_inputs__781__t_write_word_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__781__t_read_word_sel;
    __Vtask_top__DOT__set_inputs__781__t_read_word_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__781__t_mem_action;
    __Vtask_top__DOT__set_inputs__781__t_mem_action = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__781__t_clean_set;
    __Vtask_top__DOT__set_inputs__781__t_clean_set = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__781__t_dirty_set;
    __Vtask_top__DOT__set_inputs__781__t_dirty_set = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__781__t_valid_set;
    __Vtask_top__DOT__set_inputs__781__t_valid_set = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__781__t_state;
    __Vtask_top__DOT__set_inputs__781__t_state = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__781__t_mem_addr;
    __Vtask_top__DOT__set_inputs__781__t_mem_addr = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__781__t_mem_data;
    __Vtask_top__DOT__set_inputs__781__t_mem_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__781__t_mem_type;
    __Vtask_top__DOT__set_inputs__781__t_mem_type = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__781__t_cache_data;
    __Vtask_top__DOT__set_inputs__781__t_cache_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__781__t_cache_type;
    __Vtask_top__DOT__set_inputs__781__t_cache_type = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__781__t_way_select;
    __Vtask_top__DOT__set_inputs__781__t_way_select = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__782__t_tarray0_match;
    __Vtask_top__DOT__test_outputs__782__t_tarray0_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__782__t_tarray1_match;
    __Vtask_top__DOT__test_outputs__782__t_tarray1_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__782__t_line0_dirty;
    __Vtask_top__DOT__test_outputs__782__t_line0_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__782__t_line1_dirty;
    __Vtask_top__DOT__test_outputs__782__t_line1_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__782__t_line0_valid;
    __Vtask_top__DOT__test_outputs__782__t_line0_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__782__t_line1_valid;
    __Vtask_top__DOT__test_outputs__782__t_line1_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__782__t_incoming_mem_type;
    __Vtask_top__DOT__test_outputs__782__t_incoming_mem_type = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__782__t_req_count_done;
    __Vtask_top__DOT__test_outputs__782__t_req_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__782__t_resp_count_done;
    __Vtask_top__DOT__test_outputs__782__t_resp_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__782__t_all_flushed;
    __Vtask_top__DOT__test_outputs__782__t_all_flushed = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__782__t_memresp_msg_type_;
    __Vtask_top__DOT__test_outputs__782__t_memresp_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__782__t_memresp_msg_data;
    __Vtask_top__DOT__test_outputs__782__t_memresp_msg_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__782__t_cache_req_msg_type_;
    __Vtask_top__DOT__test_outputs__782__t_cache_req_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__782__t_cache_req_msg_addr;
    __Vtask_top__DOT__test_outputs__782__t_cache_req_msg_addr = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__782__t_cache_req_msg_data;
    __Vtask_top__DOT__test_outputs__782__t_cache_req_msg_data = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__782__t_d_index;
    __Vtask_top__DOT__test_outputs__782__t_d_index = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__782__t_write_word_offset;
    __Vtask_top__DOT__test_outputs__782__t_write_word_offset = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__782__t_read_word_offset;
    __Vtask_top__DOT__test_outputs__782__t_read_word_offset = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__782__t_write_data;
    __Vtask_top__DOT__test_outputs__782__t_write_data = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__782__t_dirty0;
    __Vtask_top__DOT__test_outputs__782__t_dirty0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__782__t_dirty1;
    __Vtask_top__DOT__test_outputs__782__t_dirty1 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__782__t_valid0;
    __Vtask_top__DOT__test_outputs__782__t_valid0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__782__t_valid1;
    __Vtask_top__DOT__test_outputs__782__t_valid1 = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__782__t_flush_index;
    __Vtask_top__DOT__test_outputs__782__t_flush_index = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__782__t_flush_way_sel;
    __Vtask_top__DOT__test_outputs__782__t_flush_way_sel = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__833__delay_val;
    __Vtask_top__DOT__delay__833__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__833__unnamedblk6__DOT__i;
    __Vtask_top__DOT__delay__833__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__834__t_flush;
    __Vtask_top__DOT__set_inputs__834__t_flush = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__834__t_flush_done;
    __Vtask_top__DOT__set_inputs__834__t_flush_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__834__t_input_en;
    __Vtask_top__DOT__set_inputs__834__t_input_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__834__t_tarray_en;
    __Vtask_top__DOT__set_inputs__834__t_tarray_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__834__t_tarray_wen;
    __Vtask_top__DOT__set_inputs__834__t_tarray_wen = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__834__t_req_count_en;
    __Vtask_top__DOT__set_inputs__834__t_req_count_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__834__t_resp_count_en;
    __Vtask_top__DOT__set_inputs__834__t_resp_count_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__834__t_count_reset;
    __Vtask_top__DOT__set_inputs__834__t_count_reset = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__834__t_write_data_sel;
    __Vtask_top__DOT__set_inputs__834__t_write_data_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__834__t_darray_en;
    __Vtask_top__DOT__set_inputs__834__t_darray_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__834__t_darray_wen;
    __Vtask_top__DOT__set_inputs__834__t_darray_wen = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__834__t_index_sel;
    __Vtask_top__DOT__set_inputs__834__t_index_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__834__t_write_word_sel;
    __Vtask_top__DOT__set_inputs__834__t_write_word_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__834__t_read_word_sel;
    __Vtask_top__DOT__set_inputs__834__t_read_word_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__834__t_mem_action;
    __Vtask_top__DOT__set_inputs__834__t_mem_action = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__834__t_clean_set;
    __Vtask_top__DOT__set_inputs__834__t_clean_set = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__834__t_dirty_set;
    __Vtask_top__DOT__set_inputs__834__t_dirty_set = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__834__t_valid_set;
    __Vtask_top__DOT__set_inputs__834__t_valid_set = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__834__t_state;
    __Vtask_top__DOT__set_inputs__834__t_state = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__834__t_mem_addr;
    __Vtask_top__DOT__set_inputs__834__t_mem_addr = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__834__t_mem_data;
    __Vtask_top__DOT__set_inputs__834__t_mem_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__834__t_mem_type;
    __Vtask_top__DOT__set_inputs__834__t_mem_type = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__834__t_cache_data;
    __Vtask_top__DOT__set_inputs__834__t_cache_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__834__t_cache_type;
    __Vtask_top__DOT__set_inputs__834__t_cache_type = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__834__t_way_select;
    __Vtask_top__DOT__set_inputs__834__t_way_select = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__835__t_flush;
    __Vtask_top__DOT__set_inputs__835__t_flush = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__835__t_flush_done;
    __Vtask_top__DOT__set_inputs__835__t_flush_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__835__t_input_en;
    __Vtask_top__DOT__set_inputs__835__t_input_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__835__t_tarray_en;
    __Vtask_top__DOT__set_inputs__835__t_tarray_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__835__t_tarray_wen;
    __Vtask_top__DOT__set_inputs__835__t_tarray_wen = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__835__t_req_count_en;
    __Vtask_top__DOT__set_inputs__835__t_req_count_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__835__t_resp_count_en;
    __Vtask_top__DOT__set_inputs__835__t_resp_count_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__835__t_count_reset;
    __Vtask_top__DOT__set_inputs__835__t_count_reset = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__835__t_write_data_sel;
    __Vtask_top__DOT__set_inputs__835__t_write_data_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__835__t_darray_en;
    __Vtask_top__DOT__set_inputs__835__t_darray_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__835__t_darray_wen;
    __Vtask_top__DOT__set_inputs__835__t_darray_wen = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__835__t_index_sel;
    __Vtask_top__DOT__set_inputs__835__t_index_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__835__t_write_word_sel;
    __Vtask_top__DOT__set_inputs__835__t_write_word_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__835__t_read_word_sel;
    __Vtask_top__DOT__set_inputs__835__t_read_word_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__835__t_mem_action;
    __Vtask_top__DOT__set_inputs__835__t_mem_action = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__835__t_clean_set;
    __Vtask_top__DOT__set_inputs__835__t_clean_set = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__835__t_dirty_set;
    __Vtask_top__DOT__set_inputs__835__t_dirty_set = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__835__t_valid_set;
    __Vtask_top__DOT__set_inputs__835__t_valid_set = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__835__t_state;
    __Vtask_top__DOT__set_inputs__835__t_state = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__835__t_mem_addr;
    __Vtask_top__DOT__set_inputs__835__t_mem_addr = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__835__t_mem_data;
    __Vtask_top__DOT__set_inputs__835__t_mem_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__835__t_mem_type;
    __Vtask_top__DOT__set_inputs__835__t_mem_type = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__835__t_cache_data;
    __Vtask_top__DOT__set_inputs__835__t_cache_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__835__t_cache_type;
    __Vtask_top__DOT__set_inputs__835__t_cache_type = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__835__t_way_select;
    __Vtask_top__DOT__set_inputs__835__t_way_select = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__836__t_tarray0_match;
    __Vtask_top__DOT__test_outputs__836__t_tarray0_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__836__t_tarray1_match;
    __Vtask_top__DOT__test_outputs__836__t_tarray1_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__836__t_line0_dirty;
    __Vtask_top__DOT__test_outputs__836__t_line0_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__836__t_line1_dirty;
    __Vtask_top__DOT__test_outputs__836__t_line1_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__836__t_line0_valid;
    __Vtask_top__DOT__test_outputs__836__t_line0_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__836__t_line1_valid;
    __Vtask_top__DOT__test_outputs__836__t_line1_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__836__t_incoming_mem_type;
    __Vtask_top__DOT__test_outputs__836__t_incoming_mem_type = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__836__t_req_count_done;
    __Vtask_top__DOT__test_outputs__836__t_req_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__836__t_resp_count_done;
    __Vtask_top__DOT__test_outputs__836__t_resp_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__836__t_all_flushed;
    __Vtask_top__DOT__test_outputs__836__t_all_flushed = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__836__t_memresp_msg_type_;
    __Vtask_top__DOT__test_outputs__836__t_memresp_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__836__t_memresp_msg_data;
    __Vtask_top__DOT__test_outputs__836__t_memresp_msg_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__836__t_cache_req_msg_type_;
    __Vtask_top__DOT__test_outputs__836__t_cache_req_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__836__t_cache_req_msg_addr;
    __Vtask_top__DOT__test_outputs__836__t_cache_req_msg_addr = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__836__t_cache_req_msg_data;
    __Vtask_top__DOT__test_outputs__836__t_cache_req_msg_data = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__836__t_d_index;
    __Vtask_top__DOT__test_outputs__836__t_d_index = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__836__t_write_word_offset;
    __Vtask_top__DOT__test_outputs__836__t_write_word_offset = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__836__t_read_word_offset;
    __Vtask_top__DOT__test_outputs__836__t_read_word_offset = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__836__t_write_data;
    __Vtask_top__DOT__test_outputs__836__t_write_data = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__836__t_dirty0;
    __Vtask_top__DOT__test_outputs__836__t_dirty0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__836__t_dirty1;
    __Vtask_top__DOT__test_outputs__836__t_dirty1 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__836__t_valid0;
    __Vtask_top__DOT__test_outputs__836__t_valid0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__836__t_valid1;
    __Vtask_top__DOT__test_outputs__836__t_valid1 = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__836__t_flush_index;
    __Vtask_top__DOT__test_outputs__836__t_flush_index = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__836__t_flush_way_sel;
    __Vtask_top__DOT__test_outputs__836__t_flush_way_sel = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__887__delay_val;
    __Vtask_top__DOT__delay__887__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__887__unnamedblk6__DOT__i;
    __Vtask_top__DOT__delay__887__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__888__t_flush;
    __Vtask_top__DOT__set_inputs__888__t_flush = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__888__t_flush_done;
    __Vtask_top__DOT__set_inputs__888__t_flush_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__888__t_input_en;
    __Vtask_top__DOT__set_inputs__888__t_input_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__888__t_tarray_en;
    __Vtask_top__DOT__set_inputs__888__t_tarray_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__888__t_tarray_wen;
    __Vtask_top__DOT__set_inputs__888__t_tarray_wen = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__888__t_req_count_en;
    __Vtask_top__DOT__set_inputs__888__t_req_count_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__888__t_resp_count_en;
    __Vtask_top__DOT__set_inputs__888__t_resp_count_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__888__t_count_reset;
    __Vtask_top__DOT__set_inputs__888__t_count_reset = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__888__t_write_data_sel;
    __Vtask_top__DOT__set_inputs__888__t_write_data_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__888__t_darray_en;
    __Vtask_top__DOT__set_inputs__888__t_darray_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__888__t_darray_wen;
    __Vtask_top__DOT__set_inputs__888__t_darray_wen = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__888__t_index_sel;
    __Vtask_top__DOT__set_inputs__888__t_index_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__888__t_write_word_sel;
    __Vtask_top__DOT__set_inputs__888__t_write_word_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__888__t_read_word_sel;
    __Vtask_top__DOT__set_inputs__888__t_read_word_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__888__t_mem_action;
    __Vtask_top__DOT__set_inputs__888__t_mem_action = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__888__t_clean_set;
    __Vtask_top__DOT__set_inputs__888__t_clean_set = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__888__t_dirty_set;
    __Vtask_top__DOT__set_inputs__888__t_dirty_set = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__888__t_valid_set;
    __Vtask_top__DOT__set_inputs__888__t_valid_set = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__888__t_state;
    __Vtask_top__DOT__set_inputs__888__t_state = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__888__t_mem_addr;
    __Vtask_top__DOT__set_inputs__888__t_mem_addr = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__888__t_mem_data;
    __Vtask_top__DOT__set_inputs__888__t_mem_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__888__t_mem_type;
    __Vtask_top__DOT__set_inputs__888__t_mem_type = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__888__t_cache_data;
    __Vtask_top__DOT__set_inputs__888__t_cache_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__888__t_cache_type;
    __Vtask_top__DOT__set_inputs__888__t_cache_type = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__888__t_way_select;
    __Vtask_top__DOT__set_inputs__888__t_way_select = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__889__t_flush;
    __Vtask_top__DOT__set_inputs__889__t_flush = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__889__t_flush_done;
    __Vtask_top__DOT__set_inputs__889__t_flush_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__889__t_input_en;
    __Vtask_top__DOT__set_inputs__889__t_input_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__889__t_tarray_en;
    __Vtask_top__DOT__set_inputs__889__t_tarray_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__889__t_tarray_wen;
    __Vtask_top__DOT__set_inputs__889__t_tarray_wen = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__889__t_req_count_en;
    __Vtask_top__DOT__set_inputs__889__t_req_count_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__889__t_resp_count_en;
    __Vtask_top__DOT__set_inputs__889__t_resp_count_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__889__t_count_reset;
    __Vtask_top__DOT__set_inputs__889__t_count_reset = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__889__t_write_data_sel;
    __Vtask_top__DOT__set_inputs__889__t_write_data_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__889__t_darray_en;
    __Vtask_top__DOT__set_inputs__889__t_darray_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__889__t_darray_wen;
    __Vtask_top__DOT__set_inputs__889__t_darray_wen = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__889__t_index_sel;
    __Vtask_top__DOT__set_inputs__889__t_index_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__889__t_write_word_sel;
    __Vtask_top__DOT__set_inputs__889__t_write_word_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__889__t_read_word_sel;
    __Vtask_top__DOT__set_inputs__889__t_read_word_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__889__t_mem_action;
    __Vtask_top__DOT__set_inputs__889__t_mem_action = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__889__t_clean_set;
    __Vtask_top__DOT__set_inputs__889__t_clean_set = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__889__t_dirty_set;
    __Vtask_top__DOT__set_inputs__889__t_dirty_set = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__889__t_valid_set;
    __Vtask_top__DOT__set_inputs__889__t_valid_set = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__889__t_state;
    __Vtask_top__DOT__set_inputs__889__t_state = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__889__t_mem_addr;
    __Vtask_top__DOT__set_inputs__889__t_mem_addr = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__889__t_mem_data;
    __Vtask_top__DOT__set_inputs__889__t_mem_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__889__t_mem_type;
    __Vtask_top__DOT__set_inputs__889__t_mem_type = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__889__t_cache_data;
    __Vtask_top__DOT__set_inputs__889__t_cache_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__889__t_cache_type;
    __Vtask_top__DOT__set_inputs__889__t_cache_type = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__889__t_way_select;
    __Vtask_top__DOT__set_inputs__889__t_way_select = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__890__t_tarray0_match;
    __Vtask_top__DOT__test_outputs__890__t_tarray0_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__890__t_tarray1_match;
    __Vtask_top__DOT__test_outputs__890__t_tarray1_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__890__t_line0_dirty;
    __Vtask_top__DOT__test_outputs__890__t_line0_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__890__t_line1_dirty;
    __Vtask_top__DOT__test_outputs__890__t_line1_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__890__t_line0_valid;
    __Vtask_top__DOT__test_outputs__890__t_line0_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__890__t_line1_valid;
    __Vtask_top__DOT__test_outputs__890__t_line1_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__890__t_incoming_mem_type;
    __Vtask_top__DOT__test_outputs__890__t_incoming_mem_type = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__890__t_req_count_done;
    __Vtask_top__DOT__test_outputs__890__t_req_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__890__t_resp_count_done;
    __Vtask_top__DOT__test_outputs__890__t_resp_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__890__t_all_flushed;
    __Vtask_top__DOT__test_outputs__890__t_all_flushed = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__890__t_memresp_msg_type_;
    __Vtask_top__DOT__test_outputs__890__t_memresp_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__890__t_memresp_msg_data;
    __Vtask_top__DOT__test_outputs__890__t_memresp_msg_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__890__t_cache_req_msg_type_;
    __Vtask_top__DOT__test_outputs__890__t_cache_req_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__890__t_cache_req_msg_addr;
    __Vtask_top__DOT__test_outputs__890__t_cache_req_msg_addr = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__890__t_cache_req_msg_data;
    __Vtask_top__DOT__test_outputs__890__t_cache_req_msg_data = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__890__t_d_index;
    __Vtask_top__DOT__test_outputs__890__t_d_index = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__890__t_write_word_offset;
    __Vtask_top__DOT__test_outputs__890__t_write_word_offset = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__890__t_read_word_offset;
    __Vtask_top__DOT__test_outputs__890__t_read_word_offset = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__890__t_write_data;
    __Vtask_top__DOT__test_outputs__890__t_write_data = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__890__t_dirty0;
    __Vtask_top__DOT__test_outputs__890__t_dirty0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__890__t_dirty1;
    __Vtask_top__DOT__test_outputs__890__t_dirty1 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__890__t_valid0;
    __Vtask_top__DOT__test_outputs__890__t_valid0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__890__t_valid1;
    __Vtask_top__DOT__test_outputs__890__t_valid1 = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__890__t_flush_index;
    __Vtask_top__DOT__test_outputs__890__t_flush_index = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__890__t_flush_way_sel;
    __Vtask_top__DOT__test_outputs__890__t_flush_way_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__941__t_flush;
    __Vtask_top__DOT__set_inputs__941__t_flush = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__941__t_flush_done;
    __Vtask_top__DOT__set_inputs__941__t_flush_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__941__t_input_en;
    __Vtask_top__DOT__set_inputs__941__t_input_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__941__t_tarray_en;
    __Vtask_top__DOT__set_inputs__941__t_tarray_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__941__t_tarray_wen;
    __Vtask_top__DOT__set_inputs__941__t_tarray_wen = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__941__t_req_count_en;
    __Vtask_top__DOT__set_inputs__941__t_req_count_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__941__t_resp_count_en;
    __Vtask_top__DOT__set_inputs__941__t_resp_count_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__941__t_count_reset;
    __Vtask_top__DOT__set_inputs__941__t_count_reset = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__941__t_write_data_sel;
    __Vtask_top__DOT__set_inputs__941__t_write_data_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__941__t_darray_en;
    __Vtask_top__DOT__set_inputs__941__t_darray_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__941__t_darray_wen;
    __Vtask_top__DOT__set_inputs__941__t_darray_wen = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__941__t_index_sel;
    __Vtask_top__DOT__set_inputs__941__t_index_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__941__t_write_word_sel;
    __Vtask_top__DOT__set_inputs__941__t_write_word_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__941__t_read_word_sel;
    __Vtask_top__DOT__set_inputs__941__t_read_word_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__941__t_mem_action;
    __Vtask_top__DOT__set_inputs__941__t_mem_action = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__941__t_clean_set;
    __Vtask_top__DOT__set_inputs__941__t_clean_set = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__941__t_dirty_set;
    __Vtask_top__DOT__set_inputs__941__t_dirty_set = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__941__t_valid_set;
    __Vtask_top__DOT__set_inputs__941__t_valid_set = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__941__t_state;
    __Vtask_top__DOT__set_inputs__941__t_state = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__941__t_mem_addr;
    __Vtask_top__DOT__set_inputs__941__t_mem_addr = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__941__t_mem_data;
    __Vtask_top__DOT__set_inputs__941__t_mem_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__941__t_mem_type;
    __Vtask_top__DOT__set_inputs__941__t_mem_type = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__941__t_cache_data;
    __Vtask_top__DOT__set_inputs__941__t_cache_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__941__t_cache_type;
    __Vtask_top__DOT__set_inputs__941__t_cache_type = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__941__t_way_select;
    __Vtask_top__DOT__set_inputs__941__t_way_select = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__942__t_tarray0_match;
    __Vtask_top__DOT__test_outputs__942__t_tarray0_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__942__t_tarray1_match;
    __Vtask_top__DOT__test_outputs__942__t_tarray1_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__942__t_line0_dirty;
    __Vtask_top__DOT__test_outputs__942__t_line0_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__942__t_line1_dirty;
    __Vtask_top__DOT__test_outputs__942__t_line1_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__942__t_line0_valid;
    __Vtask_top__DOT__test_outputs__942__t_line0_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__942__t_line1_valid;
    __Vtask_top__DOT__test_outputs__942__t_line1_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__942__t_incoming_mem_type;
    __Vtask_top__DOT__test_outputs__942__t_incoming_mem_type = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__942__t_req_count_done;
    __Vtask_top__DOT__test_outputs__942__t_req_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__942__t_resp_count_done;
    __Vtask_top__DOT__test_outputs__942__t_resp_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__942__t_all_flushed;
    __Vtask_top__DOT__test_outputs__942__t_all_flushed = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__942__t_memresp_msg_type_;
    __Vtask_top__DOT__test_outputs__942__t_memresp_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__942__t_memresp_msg_data;
    __Vtask_top__DOT__test_outputs__942__t_memresp_msg_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__942__t_cache_req_msg_type_;
    __Vtask_top__DOT__test_outputs__942__t_cache_req_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__942__t_cache_req_msg_addr;
    __Vtask_top__DOT__test_outputs__942__t_cache_req_msg_addr = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__942__t_cache_req_msg_data;
    __Vtask_top__DOT__test_outputs__942__t_cache_req_msg_data = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__942__t_d_index;
    __Vtask_top__DOT__test_outputs__942__t_d_index = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__942__t_write_word_offset;
    __Vtask_top__DOT__test_outputs__942__t_write_word_offset = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__942__t_read_word_offset;
    __Vtask_top__DOT__test_outputs__942__t_read_word_offset = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__942__t_write_data;
    __Vtask_top__DOT__test_outputs__942__t_write_data = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__942__t_dirty0;
    __Vtask_top__DOT__test_outputs__942__t_dirty0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__942__t_dirty1;
    __Vtask_top__DOT__test_outputs__942__t_dirty1 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__942__t_valid0;
    __Vtask_top__DOT__test_outputs__942__t_valid0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__942__t_valid1;
    __Vtask_top__DOT__test_outputs__942__t_valid1 = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__942__t_flush_index;
    __Vtask_top__DOT__test_outputs__942__t_flush_index = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__942__t_flush_way_sel;
    __Vtask_top__DOT__test_outputs__942__t_flush_way_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__993__t_flush;
    __Vtask_top__DOT__set_inputs__993__t_flush = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__993__t_flush_done;
    __Vtask_top__DOT__set_inputs__993__t_flush_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__993__t_input_en;
    __Vtask_top__DOT__set_inputs__993__t_input_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__993__t_tarray_en;
    __Vtask_top__DOT__set_inputs__993__t_tarray_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__993__t_tarray_wen;
    __Vtask_top__DOT__set_inputs__993__t_tarray_wen = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__993__t_req_count_en;
    __Vtask_top__DOT__set_inputs__993__t_req_count_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__993__t_resp_count_en;
    __Vtask_top__DOT__set_inputs__993__t_resp_count_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__993__t_count_reset;
    __Vtask_top__DOT__set_inputs__993__t_count_reset = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__993__t_write_data_sel;
    __Vtask_top__DOT__set_inputs__993__t_write_data_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__993__t_darray_en;
    __Vtask_top__DOT__set_inputs__993__t_darray_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__993__t_darray_wen;
    __Vtask_top__DOT__set_inputs__993__t_darray_wen = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__993__t_index_sel;
    __Vtask_top__DOT__set_inputs__993__t_index_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__993__t_write_word_sel;
    __Vtask_top__DOT__set_inputs__993__t_write_word_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__993__t_read_word_sel;
    __Vtask_top__DOT__set_inputs__993__t_read_word_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__993__t_mem_action;
    __Vtask_top__DOT__set_inputs__993__t_mem_action = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__993__t_clean_set;
    __Vtask_top__DOT__set_inputs__993__t_clean_set = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__993__t_dirty_set;
    __Vtask_top__DOT__set_inputs__993__t_dirty_set = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__993__t_valid_set;
    __Vtask_top__DOT__set_inputs__993__t_valid_set = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__993__t_state;
    __Vtask_top__DOT__set_inputs__993__t_state = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__993__t_mem_addr;
    __Vtask_top__DOT__set_inputs__993__t_mem_addr = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__993__t_mem_data;
    __Vtask_top__DOT__set_inputs__993__t_mem_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__993__t_mem_type;
    __Vtask_top__DOT__set_inputs__993__t_mem_type = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__993__t_cache_data;
    __Vtask_top__DOT__set_inputs__993__t_cache_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__993__t_cache_type;
    __Vtask_top__DOT__set_inputs__993__t_cache_type = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__993__t_way_select;
    __Vtask_top__DOT__set_inputs__993__t_way_select = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__994__t_tarray0_match;
    __Vtask_top__DOT__test_outputs__994__t_tarray0_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__994__t_tarray1_match;
    __Vtask_top__DOT__test_outputs__994__t_tarray1_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__994__t_line0_dirty;
    __Vtask_top__DOT__test_outputs__994__t_line0_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__994__t_line1_dirty;
    __Vtask_top__DOT__test_outputs__994__t_line1_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__994__t_line0_valid;
    __Vtask_top__DOT__test_outputs__994__t_line0_valid = 0;
    // Body
    VL_WRITEF("\n---------------------------------------\nUnit Test 1: Read Miss + Refill\n---------------------------------------\n");
    vlSelf->top__DOT__reset = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       134);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->top__DOT__reset = 0U;
    __Vtask_top__DOT__set_inputs__0__t_way_select = 0U;
    __Vtask_top__DOT__set_inputs__0__t_cache_type = 0U;
    __Vtask_top__DOT__set_inputs__0__t_cache_data = 0U;
    __Vtask_top__DOT__set_inputs__0__t_mem_type = 0U;
    __Vtask_top__DOT__set_inputs__0__t_mem_data = 0U;
    __Vtask_top__DOT__set_inputs__0__t_mem_addr = 0xffffffffU;
    __Vtask_top__DOT__set_inputs__0__t_state = 1U;
    __Vtask_top__DOT__set_inputs__0__t_valid_set = 0U;
    __Vtask_top__DOT__set_inputs__0__t_dirty_set = 0U;
    __Vtask_top__DOT__set_inputs__0__t_clean_set = 0U;
    __Vtask_top__DOT__set_inputs__0__t_mem_action = 0U;
    __Vtask_top__DOT__set_inputs__0__t_read_word_sel = 0U;
    __Vtask_top__DOT__set_inputs__0__t_write_word_sel = 0U;
    __Vtask_top__DOT__set_inputs__0__t_index_sel = 0U;
    __Vtask_top__DOT__set_inputs__0__t_darray_wen = 0U;
    __Vtask_top__DOT__set_inputs__0__t_darray_en = 0U;
    __Vtask_top__DOT__set_inputs__0__t_write_data_sel = 0U;
    __Vtask_top__DOT__set_inputs__0__t_count_reset = 1U;
    __Vtask_top__DOT__set_inputs__0__t_resp_count_en = 0U;
    __Vtask_top__DOT__set_inputs__0__t_req_count_en = 0U;
    __Vtask_top__DOT__set_inputs__0__t_tarray_wen = 0U;
    __Vtask_top__DOT__set_inputs__0__t_tarray_en = 1U;
    __Vtask_top__DOT__set_inputs__0__t_input_en = 1U;
    __Vtask_top__DOT__set_inputs__0__t_flush_done = 0U;
    __Vtask_top__DOT__set_inputs__0__t_flush = 0U;
    vlSelf->top__DOT__flush = __Vtask_top__DOT__set_inputs__0__t_flush;
    vlSelf->top__DOT__flush_done = __Vtask_top__DOT__set_inputs__0__t_flush_done;
    vlSelf->top__DOT__input_en = __Vtask_top__DOT__set_inputs__0__t_input_en;
    vlSelf->top__DOT__tarray_en = __Vtask_top__DOT__set_inputs__0__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = __Vtask_top__DOT__set_inputs__0__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = __Vtask_top__DOT__set_inputs__0__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = __Vtask_top__DOT__set_inputs__0__t_resp_count_en;
    vlSelf->top__DOT__count_reset = __Vtask_top__DOT__set_inputs__0__t_count_reset;
    vlSelf->top__DOT__write_data_sel = __Vtask_top__DOT__set_inputs__0__t_write_data_sel;
    vlSelf->top__DOT__darray_en = __Vtask_top__DOT__set_inputs__0__t_darray_en;
    vlSelf->top__DOT__darray_wen = __Vtask_top__DOT__set_inputs__0__t_darray_wen;
    vlSelf->top__DOT__index_sel = __Vtask_top__DOT__set_inputs__0__t_index_sel;
    vlSelf->top__DOT__write_word_sel = __Vtask_top__DOT__set_inputs__0__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = __Vtask_top__DOT__set_inputs__0__t_read_word_sel;
    vlSelf->top__DOT__mem_action = __Vtask_top__DOT__set_inputs__0__t_mem_action;
    vlSelf->top__DOT__clean_set = __Vtask_top__DOT__set_inputs__0__t_clean_set;
    vlSelf->top__DOT__dirty_set = __Vtask_top__DOT__set_inputs__0__t_dirty_set;
    vlSelf->top__DOT__valid_set = __Vtask_top__DOT__set_inputs__0__t_valid_set;
    vlSelf->top__DOT__state = __Vtask_top__DOT__set_inputs__0__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (__Vtask_top__DOT__set_inputs__0__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (__Vtask_top__DOT__set_inputs__0__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = __Vtask_top__DOT__set_inputs__0__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(__Vtask_top__DOT__set_inputs__0__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(__Vtask_top__DOT__set_inputs__0__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(__Vtask_top__DOT__set_inputs__0__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = __Vtask_top__DOT__set_inputs__0__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\nSimulate read miss inputs in MT for way 0\n");
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       143);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    __Vtask_top__DOT__test_outputs__1__t_flush_way_sel = 1U;
    __Vtask_top__DOT__test_outputs__1__t_flush_index = 0U;
    __Vtask_top__DOT__test_outputs__1__t_valid1 = 0U;
    __Vtask_top__DOT__test_outputs__1__t_valid0 = 0U;
    __Vtask_top__DOT__test_outputs__1__t_dirty1 = 0U;
    __Vtask_top__DOT__test_outputs__1__t_dirty0 = 0U;
    __Vtask_top__DOT__test_outputs__1__t_write_data = 0U;
    __Vtask_top__DOT__test_outputs__1__t_read_word_offset = 0xfU;
    __Vtask_top__DOT__test_outputs__1__t_write_word_offset = 0xfU;
    __Vtask_top__DOT__test_outputs__1__t_d_index = 0x1fU;
    __Vtask_top__DOT__test_outputs__1__t_cache_req_msg_data = 0U;
    __Vtask_top__DOT__test_outputs__1__t_cache_req_msg_addr = 0xffffffc3U;
    __Vtask_top__DOT__test_outputs__1__t_cache_req_msg_type_ = 0U;
    __Vtask_top__DOT__test_outputs__1__t_memresp_msg_data = 0U;
    __Vtask_top__DOT__test_outputs__1__t_memresp_msg_type_ = 0U;
    __Vtask_top__DOT__test_outputs__1__t_all_flushed = 1U;
    __Vtask_top__DOT__test_outputs__1__t_resp_count_done = 0U;
    __Vtask_top__DOT__test_outputs__1__t_req_count_done = 0U;
    __Vtask_top__DOT__test_outputs__1__t_incoming_mem_type = 0U;
    __Vtask_top__DOT__test_outputs__1__t_line1_valid = 0U;
    __Vtask_top__DOT__test_outputs__1__t_line0_valid = 0U;
    __Vtask_top__DOT__test_outputs__1__t_line1_dirty = 0U;
    __Vtask_top__DOT__test_outputs__1__t_line0_dirty = 0U;
    __Vtask_top__DOT__test_outputs__1__t_tarray1_match = 0U;
    __Vtask_top__DOT__test_outputs__1__t_tarray0_match = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray0_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1__t_tarray0_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray0_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1__t_tarray0_match,
                          1,(IData)(vlSelf->top__DOT__tarray0_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray0_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1__t_tarray0_match,
                      1,(IData)(vlSelf->top__DOT__tarray0_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 825, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray1_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1__t_tarray1_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray1_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1__t_tarray1_match,
                          1,(IData)(vlSelf->top__DOT__tarray1_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray1_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1__t_tarray1_match,
                      1,(IData)(vlSelf->top__DOT__tarray1_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 831, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1__t_line0_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1__t_line0_dirty,
                          1,(IData)(vlSelf->top__DOT__line0_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1__t_line0_dirty,
                      1,(IData)(vlSelf->top__DOT__line0_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 837, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1__t_line1_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1__t_line1_dirty,
                          1,(IData)(vlSelf->top__DOT__line1_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1__t_line1_dirty,
                      1,(IData)(vlSelf->top__DOT__line1_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 843, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1__t_line0_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1__t_line0_valid,
                          1,(IData)(vlSelf->top__DOT__line0_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1__t_line0_valid,
                      1,(IData)(vlSelf->top__DOT__line0_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 849, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1__t_line1_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1__t_line1_valid,
                          1,(IData)(vlSelf->top__DOT__line1_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1__t_line1_valid,
                      1,(IData)(vlSelf->top__DOT__line1_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 855, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__1__t_incoming_mem_type)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("incoming_mem_type is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1__t_incoming_mem_type,
                          1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("incoming_mem_type is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1__t_incoming_mem_type,
                      1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 861, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1__t_req_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("req_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1__t_req_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("req_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1__t_req_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 867, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1__t_resp_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("resp_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1__t_resp_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("resp_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1__t_resp_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 873, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__all_flushed) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1__t_all_flushed)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("all_flushed is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1__t_all_flushed,
                          1,(IData)(vlSelf->top__DOT__all_flushed));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("all_flushed is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1__t_all_flushed,
                      1,(IData)(vlSelf->top__DOT__all_flushed));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 879, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                      >> 0x2cU))) == (IData)(__Vtask_top__DOT__test_outputs__1__t_memresp_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__1__t_memresp_msg_type_,
                          3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                           >> 0x2cU))));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__1__t_memresp_msg_type_,
                      3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                       >> 0x2cU))));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 885, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__memresp_msg) 
                       == __Vtask_top__DOT__test_outputs__1__t_memresp_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1__t_memresp_msg_data,
                          32,(IData)(vlSelf->top__DOT__memresp_msg));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1__t_memresp_msg_data,
                      32,(IData)(vlSelf->top__DOT__memresp_msg));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 891, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__1__t_cache_req_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__1__t_cache_req_msg_type_,
                          3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__1__t_cache_req_msg_type_,
                      3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 897, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((((vlSelf->top__DOT__cache_req_msg[2U] 
                         << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                      >> 2U)) == __Vtask_top__DOT__test_outputs__1__t_cache_req_msg_addr))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.addr is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1__t_cache_req_msg_addr,
                          32,((vlSelf->top__DOT__cache_req_msg[2U] 
                               << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                            >> 2U)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.addr is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1__t_cache_req_msg_addr,
                      32,((vlSelf->top__DOT__cache_req_msg[2U] 
                           << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                        >> 2U)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 903, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__cache_req_msg[0U] 
                       == __Vtask_top__DOT__test_outputs__1__t_cache_req_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1__t_cache_req_msg_data,
                          32,vlSelf->top__DOT__cache_req_msg[0U]);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1__t_cache_req_msg_data,
                      32,vlSelf->top__DOT__cache_req_msg[0U]);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 909, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__d_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1__t_d_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.d_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__1__t_d_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.d_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__1__t_d_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 915, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1__t_write_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__1__t_write_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__1__t_write_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 921, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1__t_read_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.read_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__1__t_read_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.read_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__1__t_read_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 927, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__write_data 
                       == __Vtask_top__DOT__test_outputs__1__t_write_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1__t_write_data,
                          32,vlSelf->top__DOT__DUT__DOT__write_data);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1__t_write_data,
                      32,vlSelf->top__DOT__DUT__DOT__write_data);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 933, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty0 
                       == __Vtask_top__DOT__test_outputs__1__t_dirty0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1__t_dirty0,
                          32,vlSelf->top__DOT__DUT__DOT__dirty0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1__t_dirty0,
                      32,vlSelf->top__DOT__DUT__DOT__dirty0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 939, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty1 
                       == __Vtask_top__DOT__test_outputs__1__t_dirty1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1__t_dirty1,
                          32,vlSelf->top__DOT__DUT__DOT__dirty1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1__t_dirty1,
                      32,vlSelf->top__DOT__DUT__DOT__dirty1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 945, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid0 
                       == __Vtask_top__DOT__test_outputs__1__t_valid0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1__t_valid0,
                          32,vlSelf->top__DOT__DUT__DOT__valid0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1__t_valid0,
                      32,vlSelf->top__DOT__DUT__DOT__valid0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 951, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid1 
                       == __Vtask_top__DOT__test_outputs__1__t_valid1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1__t_valid1,
                          32,vlSelf->top__DOT__DUT__DOT__valid1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1__t_valid1,
                      32,vlSelf->top__DOT__DUT__DOT__valid1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 957, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__flush_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1__t_flush_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.flush_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__1__t_flush_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.flush_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__1__t_flush_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 963, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0U == vlSelf->top__DOT__DUT__DOT__dirty0) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1__t_flush_way_sel)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("flush_way_sel is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1__t_flush_way_sel,
                          1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("flush_way_sel is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1__t_flush_way_sel,
                      1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 969, "");
        }
    }
    vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__delay__52__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__52__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__52__unnamedblk6__DOT__i, __Vtask_top__DOT__delay__52__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_CacheAltDpath.v", 
                                           730);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__52__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__52__unnamedblk6__DOT__i);
    }
    vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\nRefilling initialize\n");
    __Vtask_top__DOT__set_inputs__53__t_way_select = 0U;
    __Vtask_top__DOT__set_inputs__53__t_cache_type = 0U;
    __Vtask_top__DOT__set_inputs__53__t_cache_data = 0xffffffffU;
    __Vtask_top__DOT__set_inputs__53__t_mem_type = 0U;
    __Vtask_top__DOT__set_inputs__53__t_mem_data = 0U;
    __Vtask_top__DOT__set_inputs__53__t_mem_addr = 0xffffffffU;
    __Vtask_top__DOT__set_inputs__53__t_state = 3U;
    __Vtask_top__DOT__set_inputs__53__t_valid_set = 1U;
    __Vtask_top__DOT__set_inputs__53__t_dirty_set = 0U;
    __Vtask_top__DOT__set_inputs__53__t_clean_set = 0U;
    __Vtask_top__DOT__set_inputs__53__t_mem_action = 0U;
    __Vtask_top__DOT__set_inputs__53__t_read_word_sel = 0U;
    __Vtask_top__DOT__set_inputs__53__t_write_word_sel = 1U;
    __Vtask_top__DOT__set_inputs__53__t_index_sel = 0U;
    __Vtask_top__DOT__set_inputs__53__t_darray_wen = 1U;
    __Vtask_top__DOT__set_inputs__53__t_darray_en = 1U;
    __Vtask_top__DOT__set_inputs__53__t_write_data_sel = 1U;
    __Vtask_top__DOT__set_inputs__53__t_count_reset = 0U;
    __Vtask_top__DOT__set_inputs__53__t_resp_count_en = 1U;
    __Vtask_top__DOT__set_inputs__53__t_req_count_en = 1U;
    __Vtask_top__DOT__set_inputs__53__t_tarray_wen = 1U;
    __Vtask_top__DOT__set_inputs__53__t_tarray_en = 1U;
    __Vtask_top__DOT__set_inputs__53__t_input_en = 0U;
    __Vtask_top__DOT__set_inputs__53__t_flush_done = 0U;
    __Vtask_top__DOT__set_inputs__53__t_flush = 0U;
    vlSelf->top__DOT__flush = __Vtask_top__DOT__set_inputs__53__t_flush;
    vlSelf->top__DOT__flush_done = __Vtask_top__DOT__set_inputs__53__t_flush_done;
    vlSelf->top__DOT__input_en = __Vtask_top__DOT__set_inputs__53__t_input_en;
    vlSelf->top__DOT__tarray_en = __Vtask_top__DOT__set_inputs__53__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = __Vtask_top__DOT__set_inputs__53__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = __Vtask_top__DOT__set_inputs__53__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = __Vtask_top__DOT__set_inputs__53__t_resp_count_en;
    vlSelf->top__DOT__count_reset = __Vtask_top__DOT__set_inputs__53__t_count_reset;
    vlSelf->top__DOT__write_data_sel = __Vtask_top__DOT__set_inputs__53__t_write_data_sel;
    vlSelf->top__DOT__darray_en = __Vtask_top__DOT__set_inputs__53__t_darray_en;
    vlSelf->top__DOT__darray_wen = __Vtask_top__DOT__set_inputs__53__t_darray_wen;
    vlSelf->top__DOT__index_sel = __Vtask_top__DOT__set_inputs__53__t_index_sel;
    vlSelf->top__DOT__write_word_sel = __Vtask_top__DOT__set_inputs__53__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = __Vtask_top__DOT__set_inputs__53__t_read_word_sel;
    vlSelf->top__DOT__mem_action = __Vtask_top__DOT__set_inputs__53__t_mem_action;
    vlSelf->top__DOT__clean_set = __Vtask_top__DOT__set_inputs__53__t_clean_set;
    vlSelf->top__DOT__dirty_set = __Vtask_top__DOT__set_inputs__53__t_dirty_set;
    vlSelf->top__DOT__valid_set = __Vtask_top__DOT__set_inputs__53__t_valid_set;
    vlSelf->top__DOT__state = __Vtask_top__DOT__set_inputs__53__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (__Vtask_top__DOT__set_inputs__53__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (__Vtask_top__DOT__set_inputs__53__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = __Vtask_top__DOT__set_inputs__53__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(__Vtask_top__DOT__set_inputs__53__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(__Vtask_top__DOT__set_inputs__53__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(__Vtask_top__DOT__set_inputs__53__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = __Vtask_top__DOT__set_inputs__53__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       158);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    __Vtask_top__DOT__test_outputs__54__t_flush_way_sel = 1U;
    __Vtask_top__DOT__test_outputs__54__t_flush_index = 0U;
    __Vtask_top__DOT__test_outputs__54__t_valid1 = 0U;
    __Vtask_top__DOT__test_outputs__54__t_valid0 = 0x80000000U;
    __Vtask_top__DOT__test_outputs__54__t_dirty1 = 0U;
    __Vtask_top__DOT__test_outputs__54__t_dirty0 = 0U;
    __Vtask_top__DOT__test_outputs__54__t_write_data = 0xffffffffU;
    __Vtask_top__DOT__test_outputs__54__t_read_word_offset = 0xfU;
    __Vtask_top__DOT__test_outputs__54__t_write_word_offset = 1U;
    __Vtask_top__DOT__test_outputs__54__t_d_index = 0x1fU;
    __Vtask_top__DOT__test_outputs__54__t_cache_req_msg_data = 0U;
    __Vtask_top__DOT__test_outputs__54__t_cache_req_msg_addr = 0xffffffc7U;
    __Vtask_top__DOT__test_outputs__54__t_cache_req_msg_type_ = 0U;
    __Vtask_top__DOT__test_outputs__54__t_memresp_msg_data = 0U;
    __Vtask_top__DOT__test_outputs__54__t_memresp_msg_type_ = 0U;
    __Vtask_top__DOT__test_outputs__54__t_all_flushed = 1U;
    __Vtask_top__DOT__test_outputs__54__t_resp_count_done = 0U;
    __Vtask_top__DOT__test_outputs__54__t_req_count_done = 0U;
    __Vtask_top__DOT__test_outputs__54__t_incoming_mem_type = 0U;
    __Vtask_top__DOT__test_outputs__54__t_line1_valid = 0U;
    __Vtask_top__DOT__test_outputs__54__t_line0_valid = 1U;
    __Vtask_top__DOT__test_outputs__54__t_line1_dirty = 0U;
    __Vtask_top__DOT__test_outputs__54__t_line0_dirty = 0U;
    __Vtask_top__DOT__test_outputs__54__t_tarray1_match = 0U;
    __Vtask_top__DOT__test_outputs__54__t_tarray0_match = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray0_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__54__t_tarray0_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray0_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__54__t_tarray0_match,
                          1,(IData)(vlSelf->top__DOT__tarray0_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray0_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__54__t_tarray0_match,
                      1,(IData)(vlSelf->top__DOT__tarray0_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 825, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray1_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__54__t_tarray1_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray1_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__54__t_tarray1_match,
                          1,(IData)(vlSelf->top__DOT__tarray1_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray1_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__54__t_tarray1_match,
                      1,(IData)(vlSelf->top__DOT__tarray1_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 831, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__54__t_line0_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__54__t_line0_dirty,
                          1,(IData)(vlSelf->top__DOT__line0_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__54__t_line0_dirty,
                      1,(IData)(vlSelf->top__DOT__line0_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 837, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__54__t_line1_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__54__t_line1_dirty,
                          1,(IData)(vlSelf->top__DOT__line1_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__54__t_line1_dirty,
                      1,(IData)(vlSelf->top__DOT__line1_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 843, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__54__t_line0_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__54__t_line0_valid,
                          1,(IData)(vlSelf->top__DOT__line0_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__54__t_line0_valid,
                      1,(IData)(vlSelf->top__DOT__line0_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 849, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__54__t_line1_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__54__t_line1_valid,
                          1,(IData)(vlSelf->top__DOT__line1_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__54__t_line1_valid,
                      1,(IData)(vlSelf->top__DOT__line1_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 855, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__54__t_incoming_mem_type)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("incoming_mem_type is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__54__t_incoming_mem_type,
                          1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("incoming_mem_type is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__54__t_incoming_mem_type,
                      1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 861, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__54__t_req_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("req_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__54__t_req_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("req_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__54__t_req_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 867, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__54__t_resp_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("resp_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__54__t_resp_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("resp_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__54__t_resp_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 873, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__all_flushed) 
                       == (IData)(__Vtask_top__DOT__test_outputs__54__t_all_flushed)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("all_flushed is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__54__t_all_flushed,
                          1,(IData)(vlSelf->top__DOT__all_flushed));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("all_flushed is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__54__t_all_flushed,
                      1,(IData)(vlSelf->top__DOT__all_flushed));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 879, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                      >> 0x2cU))) == (IData)(__Vtask_top__DOT__test_outputs__54__t_memresp_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__54__t_memresp_msg_type_,
                          3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                           >> 0x2cU))));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__54__t_memresp_msg_type_,
                      3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                       >> 0x2cU))));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 885, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__memresp_msg) 
                       == __Vtask_top__DOT__test_outputs__54__t_memresp_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__54__t_memresp_msg_data,
                          32,(IData)(vlSelf->top__DOT__memresp_msg));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__54__t_memresp_msg_data,
                      32,(IData)(vlSelf->top__DOT__memresp_msg));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 891, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__54__t_cache_req_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__54__t_cache_req_msg_type_,
                          3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__54__t_cache_req_msg_type_,
                      3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 897, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((((vlSelf->top__DOT__cache_req_msg[2U] 
                         << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                      >> 2U)) == __Vtask_top__DOT__test_outputs__54__t_cache_req_msg_addr))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.addr is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__54__t_cache_req_msg_addr,
                          32,((vlSelf->top__DOT__cache_req_msg[2U] 
                               << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                            >> 2U)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.addr is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__54__t_cache_req_msg_addr,
                      32,((vlSelf->top__DOT__cache_req_msg[2U] 
                           << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                        >> 2U)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 903, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__cache_req_msg[0U] 
                       == __Vtask_top__DOT__test_outputs__54__t_cache_req_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__54__t_cache_req_msg_data,
                          32,vlSelf->top__DOT__cache_req_msg[0U]);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__54__t_cache_req_msg_data,
                      32,vlSelf->top__DOT__cache_req_msg[0U]);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 909, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__d_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__54__t_d_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.d_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__54__t_d_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.d_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__54__t_d_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 915, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__54__t_write_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__54__t_write_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__54__t_write_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 921, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__54__t_read_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.read_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__54__t_read_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.read_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__54__t_read_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 927, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__write_data 
                       == __Vtask_top__DOT__test_outputs__54__t_write_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__54__t_write_data,
                          32,vlSelf->top__DOT__DUT__DOT__write_data);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__54__t_write_data,
                      32,vlSelf->top__DOT__DUT__DOT__write_data);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 933, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty0 
                       == __Vtask_top__DOT__test_outputs__54__t_dirty0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__54__t_dirty0,
                          32,vlSelf->top__DOT__DUT__DOT__dirty0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__54__t_dirty0,
                      32,vlSelf->top__DOT__DUT__DOT__dirty0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 939, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty1 
                       == __Vtask_top__DOT__test_outputs__54__t_dirty1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__54__t_dirty1,
                          32,vlSelf->top__DOT__DUT__DOT__dirty1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__54__t_dirty1,
                      32,vlSelf->top__DOT__DUT__DOT__dirty1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 945, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid0 
                       == __Vtask_top__DOT__test_outputs__54__t_valid0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__54__t_valid0,
                          32,vlSelf->top__DOT__DUT__DOT__valid0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__54__t_valid0,
                      32,vlSelf->top__DOT__DUT__DOT__valid0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 951, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid1 
                       == __Vtask_top__DOT__test_outputs__54__t_valid1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__54__t_valid1,
                          32,vlSelf->top__DOT__DUT__DOT__valid1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__54__t_valid1,
                      32,vlSelf->top__DOT__DUT__DOT__valid1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 957, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__flush_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__54__t_flush_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.flush_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__54__t_flush_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.flush_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__54__t_flush_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 963, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0U == vlSelf->top__DOT__DUT__DOT__dirty0) 
                       == (IData)(__Vtask_top__DOT__test_outputs__54__t_flush_way_sel)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("flush_way_sel is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__54__t_flush_way_sel,
                          1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("flush_way_sel is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__54__t_flush_way_sel,
                      1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 969, "");
        }
    }
    vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\nRefilling cycle 1\n");
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       166);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    __Vtask_top__DOT__test_outputs__105__t_flush_way_sel = 1U;
    __Vtask_top__DOT__test_outputs__105__t_flush_index = 0U;
    __Vtask_top__DOT__test_outputs__105__t_valid1 = 0U;
    __Vtask_top__DOT__test_outputs__105__t_valid0 = 0x80000000U;
    __Vtask_top__DOT__test_outputs__105__t_dirty1 = 0U;
    __Vtask_top__DOT__test_outputs__105__t_dirty0 = 0U;
    __Vtask_top__DOT__test_outputs__105__t_write_data = 0xffffffffU;
    __Vtask_top__DOT__test_outputs__105__t_read_word_offset = 0xfU;
    __Vtask_top__DOT__test_outputs__105__t_write_word_offset = 2U;
    __Vtask_top__DOT__test_outputs__105__t_d_index = 0x1fU;
    __Vtask_top__DOT__test_outputs__105__t_cache_req_msg_data = 0U;
    __Vtask_top__DOT__test_outputs__105__t_cache_req_msg_addr = 0xffffffcbU;
    __Vtask_top__DOT__test_outputs__105__t_cache_req_msg_type_ = 0U;
    __Vtask_top__DOT__test_outputs__105__t_memresp_msg_data = 0U;
    __Vtask_top__DOT__test_outputs__105__t_memresp_msg_type_ = 0U;
    __Vtask_top__DOT__test_outputs__105__t_all_flushed = 1U;
    __Vtask_top__DOT__test_outputs__105__t_resp_count_done = 0U;
    __Vtask_top__DOT__test_outputs__105__t_req_count_done = 0U;
    __Vtask_top__DOT__test_outputs__105__t_incoming_mem_type = 0U;
    __Vtask_top__DOT__test_outputs__105__t_line1_valid = 0U;
    __Vtask_top__DOT__test_outputs__105__t_line0_valid = 1U;
    __Vtask_top__DOT__test_outputs__105__t_line1_dirty = 0U;
    __Vtask_top__DOT__test_outputs__105__t_line0_dirty = 0U;
    __Vtask_top__DOT__test_outputs__105__t_tarray1_match = 0U;
    __Vtask_top__DOT__test_outputs__105__t_tarray0_match = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray0_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__105__t_tarray0_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray0_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__105__t_tarray0_match,
                          1,(IData)(vlSelf->top__DOT__tarray0_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray0_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__105__t_tarray0_match,
                      1,(IData)(vlSelf->top__DOT__tarray0_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 825, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray1_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__105__t_tarray1_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray1_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__105__t_tarray1_match,
                          1,(IData)(vlSelf->top__DOT__tarray1_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray1_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__105__t_tarray1_match,
                      1,(IData)(vlSelf->top__DOT__tarray1_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 831, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__105__t_line0_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__105__t_line0_dirty,
                          1,(IData)(vlSelf->top__DOT__line0_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__105__t_line0_dirty,
                      1,(IData)(vlSelf->top__DOT__line0_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 837, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__105__t_line1_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__105__t_line1_dirty,
                          1,(IData)(vlSelf->top__DOT__line1_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__105__t_line1_dirty,
                      1,(IData)(vlSelf->top__DOT__line1_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 843, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__105__t_line0_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__105__t_line0_valid,
                          1,(IData)(vlSelf->top__DOT__line0_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__105__t_line0_valid,
                      1,(IData)(vlSelf->top__DOT__line0_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 849, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__105__t_line1_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__105__t_line1_valid,
                          1,(IData)(vlSelf->top__DOT__line1_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__105__t_line1_valid,
                      1,(IData)(vlSelf->top__DOT__line1_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 855, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__105__t_incoming_mem_type)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("incoming_mem_type is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__105__t_incoming_mem_type,
                          1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("incoming_mem_type is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__105__t_incoming_mem_type,
                      1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 861, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__105__t_req_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("req_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__105__t_req_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("req_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__105__t_req_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 867, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__105__t_resp_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("resp_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__105__t_resp_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("resp_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__105__t_resp_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 873, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__all_flushed) 
                       == (IData)(__Vtask_top__DOT__test_outputs__105__t_all_flushed)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("all_flushed is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__105__t_all_flushed,
                          1,(IData)(vlSelf->top__DOT__all_flushed));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("all_flushed is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__105__t_all_flushed,
                      1,(IData)(vlSelf->top__DOT__all_flushed));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 879, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                      >> 0x2cU))) == (IData)(__Vtask_top__DOT__test_outputs__105__t_memresp_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__105__t_memresp_msg_type_,
                          3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                           >> 0x2cU))));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__105__t_memresp_msg_type_,
                      3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                       >> 0x2cU))));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 885, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__memresp_msg) 
                       == __Vtask_top__DOT__test_outputs__105__t_memresp_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__105__t_memresp_msg_data,
                          32,(IData)(vlSelf->top__DOT__memresp_msg));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__105__t_memresp_msg_data,
                      32,(IData)(vlSelf->top__DOT__memresp_msg));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 891, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__105__t_cache_req_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__105__t_cache_req_msg_type_,
                          3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__105__t_cache_req_msg_type_,
                      3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 897, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((((vlSelf->top__DOT__cache_req_msg[2U] 
                         << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                      >> 2U)) == __Vtask_top__DOT__test_outputs__105__t_cache_req_msg_addr))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.addr is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__105__t_cache_req_msg_addr,
                          32,((vlSelf->top__DOT__cache_req_msg[2U] 
                               << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                            >> 2U)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.addr is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__105__t_cache_req_msg_addr,
                      32,((vlSelf->top__DOT__cache_req_msg[2U] 
                           << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                        >> 2U)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 903, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__cache_req_msg[0U] 
                       == __Vtask_top__DOT__test_outputs__105__t_cache_req_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__105__t_cache_req_msg_data,
                          32,vlSelf->top__DOT__cache_req_msg[0U]);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__105__t_cache_req_msg_data,
                      32,vlSelf->top__DOT__cache_req_msg[0U]);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 909, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__d_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__105__t_d_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.d_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__105__t_d_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.d_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__105__t_d_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 915, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__105__t_write_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__105__t_write_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__105__t_write_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 921, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__105__t_read_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.read_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__105__t_read_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.read_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__105__t_read_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 927, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__write_data 
                       == __Vtask_top__DOT__test_outputs__105__t_write_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__105__t_write_data,
                          32,vlSelf->top__DOT__DUT__DOT__write_data);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__105__t_write_data,
                      32,vlSelf->top__DOT__DUT__DOT__write_data);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 933, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty0 
                       == __Vtask_top__DOT__test_outputs__105__t_dirty0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__105__t_dirty0,
                          32,vlSelf->top__DOT__DUT__DOT__dirty0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__105__t_dirty0,
                      32,vlSelf->top__DOT__DUT__DOT__dirty0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 939, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty1 
                       == __Vtask_top__DOT__test_outputs__105__t_dirty1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__105__t_dirty1,
                          32,vlSelf->top__DOT__DUT__DOT__dirty1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__105__t_dirty1,
                      32,vlSelf->top__DOT__DUT__DOT__dirty1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 945, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid0 
                       == __Vtask_top__DOT__test_outputs__105__t_valid0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__105__t_valid0,
                          32,vlSelf->top__DOT__DUT__DOT__valid0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__105__t_valid0,
                      32,vlSelf->top__DOT__DUT__DOT__valid0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 951, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid1 
                       == __Vtask_top__DOT__test_outputs__105__t_valid1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__105__t_valid1,
                          32,vlSelf->top__DOT__DUT__DOT__valid1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__105__t_valid1,
                      32,vlSelf->top__DOT__DUT__DOT__valid1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 957, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__flush_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__105__t_flush_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.flush_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__105__t_flush_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.flush_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__105__t_flush_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 963, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0U == vlSelf->top__DOT__DUT__DOT__dirty0) 
                       == (IData)(__Vtask_top__DOT__test_outputs__105__t_flush_way_sel)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("flush_way_sel is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__105__t_flush_way_sel,
                          1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("flush_way_sel is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__105__t_flush_way_sel,
                      1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 969, "");
        }
    }
    vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\nRefilling cycle 2\n");
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       174);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    __Vtask_top__DOT__test_outputs__156__t_flush_way_sel = 1U;
    __Vtask_top__DOT__test_outputs__156__t_flush_index = 0U;
    __Vtask_top__DOT__test_outputs__156__t_valid1 = 0U;
    __Vtask_top__DOT__test_outputs__156__t_valid0 = 0x80000000U;
    __Vtask_top__DOT__test_outputs__156__t_dirty1 = 0U;
    __Vtask_top__DOT__test_outputs__156__t_dirty0 = 0U;
    __Vtask_top__DOT__test_outputs__156__t_write_data = 0xffffffffU;
    __Vtask_top__DOT__test_outputs__156__t_read_word_offset = 0xfU;
    __Vtask_top__DOT__test_outputs__156__t_write_word_offset = 3U;
    __Vtask_top__DOT__test_outputs__156__t_d_index = 0x1fU;
    __Vtask_top__DOT__test_outputs__156__t_cache_req_msg_data = 0U;
    __Vtask_top__DOT__test_outputs__156__t_cache_req_msg_addr = 0xffffffcfU;
    __Vtask_top__DOT__test_outputs__156__t_cache_req_msg_type_ = 0U;
    __Vtask_top__DOT__test_outputs__156__t_memresp_msg_data = 0U;
    __Vtask_top__DOT__test_outputs__156__t_memresp_msg_type_ = 0U;
    __Vtask_top__DOT__test_outputs__156__t_all_flushed = 1U;
    __Vtask_top__DOT__test_outputs__156__t_resp_count_done = 0U;
    __Vtask_top__DOT__test_outputs__156__t_req_count_done = 0U;
    __Vtask_top__DOT__test_outputs__156__t_incoming_mem_type = 0U;
    __Vtask_top__DOT__test_outputs__156__t_line1_valid = 0U;
    __Vtask_top__DOT__test_outputs__156__t_line0_valid = 1U;
    __Vtask_top__DOT__test_outputs__156__t_line1_dirty = 0U;
    __Vtask_top__DOT__test_outputs__156__t_line0_dirty = 0U;
    __Vtask_top__DOT__test_outputs__156__t_tarray1_match = 0U;
    __Vtask_top__DOT__test_outputs__156__t_tarray0_match = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray0_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__156__t_tarray0_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray0_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__156__t_tarray0_match,
                          1,(IData)(vlSelf->top__DOT__tarray0_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray0_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__156__t_tarray0_match,
                      1,(IData)(vlSelf->top__DOT__tarray0_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 825, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray1_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__156__t_tarray1_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray1_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__156__t_tarray1_match,
                          1,(IData)(vlSelf->top__DOT__tarray1_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray1_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__156__t_tarray1_match,
                      1,(IData)(vlSelf->top__DOT__tarray1_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 831, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__156__t_line0_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__156__t_line0_dirty,
                          1,(IData)(vlSelf->top__DOT__line0_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__156__t_line0_dirty,
                      1,(IData)(vlSelf->top__DOT__line0_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 837, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__156__t_line1_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__156__t_line1_dirty,
                          1,(IData)(vlSelf->top__DOT__line1_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__156__t_line1_dirty,
                      1,(IData)(vlSelf->top__DOT__line1_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 843, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__156__t_line0_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__156__t_line0_valid,
                          1,(IData)(vlSelf->top__DOT__line0_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__156__t_line0_valid,
                      1,(IData)(vlSelf->top__DOT__line0_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 849, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__156__t_line1_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__156__t_line1_valid,
                          1,(IData)(vlSelf->top__DOT__line1_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__156__t_line1_valid,
                      1,(IData)(vlSelf->top__DOT__line1_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 855, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__156__t_incoming_mem_type)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("incoming_mem_type is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__156__t_incoming_mem_type,
                          1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("incoming_mem_type is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__156__t_incoming_mem_type,
                      1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 861, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__156__t_req_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("req_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__156__t_req_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("req_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__156__t_req_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 867, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__156__t_resp_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("resp_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__156__t_resp_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("resp_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__156__t_resp_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 873, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__all_flushed) 
                       == (IData)(__Vtask_top__DOT__test_outputs__156__t_all_flushed)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("all_flushed is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__156__t_all_flushed,
                          1,(IData)(vlSelf->top__DOT__all_flushed));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("all_flushed is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__156__t_all_flushed,
                      1,(IData)(vlSelf->top__DOT__all_flushed));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 879, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                      >> 0x2cU))) == (IData)(__Vtask_top__DOT__test_outputs__156__t_memresp_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__156__t_memresp_msg_type_,
                          3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                           >> 0x2cU))));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__156__t_memresp_msg_type_,
                      3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                       >> 0x2cU))));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 885, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__memresp_msg) 
                       == __Vtask_top__DOT__test_outputs__156__t_memresp_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__156__t_memresp_msg_data,
                          32,(IData)(vlSelf->top__DOT__memresp_msg));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__156__t_memresp_msg_data,
                      32,(IData)(vlSelf->top__DOT__memresp_msg));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 891, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__156__t_cache_req_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__156__t_cache_req_msg_type_,
                          3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__156__t_cache_req_msg_type_,
                      3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 897, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((((vlSelf->top__DOT__cache_req_msg[2U] 
                         << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                      >> 2U)) == __Vtask_top__DOT__test_outputs__156__t_cache_req_msg_addr))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.addr is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__156__t_cache_req_msg_addr,
                          32,((vlSelf->top__DOT__cache_req_msg[2U] 
                               << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                            >> 2U)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.addr is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__156__t_cache_req_msg_addr,
                      32,((vlSelf->top__DOT__cache_req_msg[2U] 
                           << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                        >> 2U)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 903, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__cache_req_msg[0U] 
                       == __Vtask_top__DOT__test_outputs__156__t_cache_req_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__156__t_cache_req_msg_data,
                          32,vlSelf->top__DOT__cache_req_msg[0U]);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__156__t_cache_req_msg_data,
                      32,vlSelf->top__DOT__cache_req_msg[0U]);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 909, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__d_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__156__t_d_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.d_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__156__t_d_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.d_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__156__t_d_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 915, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__156__t_write_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__156__t_write_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__156__t_write_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 921, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__156__t_read_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.read_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__156__t_read_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.read_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__156__t_read_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 927, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__write_data 
                       == __Vtask_top__DOT__test_outputs__156__t_write_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__156__t_write_data,
                          32,vlSelf->top__DOT__DUT__DOT__write_data);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__156__t_write_data,
                      32,vlSelf->top__DOT__DUT__DOT__write_data);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 933, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty0 
                       == __Vtask_top__DOT__test_outputs__156__t_dirty0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__156__t_dirty0,
                          32,vlSelf->top__DOT__DUT__DOT__dirty0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__156__t_dirty0,
                      32,vlSelf->top__DOT__DUT__DOT__dirty0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 939, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty1 
                       == __Vtask_top__DOT__test_outputs__156__t_dirty1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__156__t_dirty1,
                          32,vlSelf->top__DOT__DUT__DOT__dirty1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__156__t_dirty1,
                      32,vlSelf->top__DOT__DUT__DOT__dirty1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 945, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid0 
                       == __Vtask_top__DOT__test_outputs__156__t_valid0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__156__t_valid0,
                          32,vlSelf->top__DOT__DUT__DOT__valid0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__156__t_valid0,
                      32,vlSelf->top__DOT__DUT__DOT__valid0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 951, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid1 
                       == __Vtask_top__DOT__test_outputs__156__t_valid1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__156__t_valid1,
                          32,vlSelf->top__DOT__DUT__DOT__valid1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__156__t_valid1,
                      32,vlSelf->top__DOT__DUT__DOT__valid1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 957, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__flush_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__156__t_flush_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.flush_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__156__t_flush_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.flush_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__156__t_flush_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 963, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0U == vlSelf->top__DOT__DUT__DOT__dirty0) 
                       == (IData)(__Vtask_top__DOT__test_outputs__156__t_flush_way_sel)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("flush_way_sel is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__156__t_flush_way_sel,
                          1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("flush_way_sel is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__156__t_flush_way_sel,
                      1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 969, "");
        }
    }
    vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       180);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    VL_WRITEF("\nDisable counters, save state until reenabled\n");
    __Vtask_top__DOT__set_inputs__207__t_way_select = 0U;
    __Vtask_top__DOT__set_inputs__207__t_cache_type = 0U;
    __Vtask_top__DOT__set_inputs__207__t_cache_data = 0xffffffffU;
    __Vtask_top__DOT__set_inputs__207__t_mem_type = 0U;
    __Vtask_top__DOT__set_inputs__207__t_mem_data = 0U;
    __Vtask_top__DOT__set_inputs__207__t_mem_addr = 0xffffffffU;
    __Vtask_top__DOT__set_inputs__207__t_state = 3U;
    __Vtask_top__DOT__set_inputs__207__t_valid_set = 1U;
    __Vtask_top__DOT__set_inputs__207__t_dirty_set = 0U;
    __Vtask_top__DOT__set_inputs__207__t_clean_set = 0U;
    __Vtask_top__DOT__set_inputs__207__t_mem_action = 0U;
    __Vtask_top__DOT__set_inputs__207__t_read_word_sel = 0U;
    __Vtask_top__DOT__set_inputs__207__t_write_word_sel = 1U;
    __Vtask_top__DOT__set_inputs__207__t_index_sel = 0U;
    __Vtask_top__DOT__set_inputs__207__t_darray_wen = 1U;
    __Vtask_top__DOT__set_inputs__207__t_darray_en = 1U;
    __Vtask_top__DOT__set_inputs__207__t_write_data_sel = 1U;
    __Vtask_top__DOT__set_inputs__207__t_count_reset = 0U;
    __Vtask_top__DOT__set_inputs__207__t_resp_count_en = 0U;
    __Vtask_top__DOT__set_inputs__207__t_req_count_en = 0U;
    __Vtask_top__DOT__set_inputs__207__t_tarray_wen = 1U;
    __Vtask_top__DOT__set_inputs__207__t_tarray_en = 1U;
    __Vtask_top__DOT__set_inputs__207__t_input_en = 0U;
    __Vtask_top__DOT__set_inputs__207__t_flush_done = 0U;
    __Vtask_top__DOT__set_inputs__207__t_flush = 0U;
    vlSelf->top__DOT__flush = __Vtask_top__DOT__set_inputs__207__t_flush;
    vlSelf->top__DOT__flush_done = __Vtask_top__DOT__set_inputs__207__t_flush_done;
    vlSelf->top__DOT__input_en = __Vtask_top__DOT__set_inputs__207__t_input_en;
    vlSelf->top__DOT__tarray_en = __Vtask_top__DOT__set_inputs__207__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = __Vtask_top__DOT__set_inputs__207__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = __Vtask_top__DOT__set_inputs__207__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = __Vtask_top__DOT__set_inputs__207__t_resp_count_en;
    vlSelf->top__DOT__count_reset = __Vtask_top__DOT__set_inputs__207__t_count_reset;
    vlSelf->top__DOT__write_data_sel = __Vtask_top__DOT__set_inputs__207__t_write_data_sel;
    vlSelf->top__DOT__darray_en = __Vtask_top__DOT__set_inputs__207__t_darray_en;
    vlSelf->top__DOT__darray_wen = __Vtask_top__DOT__set_inputs__207__t_darray_wen;
    vlSelf->top__DOT__index_sel = __Vtask_top__DOT__set_inputs__207__t_index_sel;
    vlSelf->top__DOT__write_word_sel = __Vtask_top__DOT__set_inputs__207__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = __Vtask_top__DOT__set_inputs__207__t_read_word_sel;
    vlSelf->top__DOT__mem_action = __Vtask_top__DOT__set_inputs__207__t_mem_action;
    vlSelf->top__DOT__clean_set = __Vtask_top__DOT__set_inputs__207__t_clean_set;
    vlSelf->top__DOT__dirty_set = __Vtask_top__DOT__set_inputs__207__t_dirty_set;
    vlSelf->top__DOT__valid_set = __Vtask_top__DOT__set_inputs__207__t_valid_set;
    vlSelf->top__DOT__state = __Vtask_top__DOT__set_inputs__207__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (__Vtask_top__DOT__set_inputs__207__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (__Vtask_top__DOT__set_inputs__207__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = __Vtask_top__DOT__set_inputs__207__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(__Vtask_top__DOT__set_inputs__207__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(__Vtask_top__DOT__set_inputs__207__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(__Vtask_top__DOT__set_inputs__207__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = __Vtask_top__DOT__set_inputs__207__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__delay__208__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__208__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__208__unnamedblk6__DOT__i, __Vtask_top__DOT__delay__208__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_CacheAltDpath.v", 
                                           730);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__208__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__208__unnamedblk6__DOT__i);
    }
    vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_outputs__209__t_flush_way_sel = 1U;
    __Vtask_top__DOT__test_outputs__209__t_flush_index = 0U;
    __Vtask_top__DOT__test_outputs__209__t_valid1 = 0U;
    __Vtask_top__DOT__test_outputs__209__t_valid0 = 0x80000000U;
    __Vtask_top__DOT__test_outputs__209__t_dirty1 = 0U;
    __Vtask_top__DOT__test_outputs__209__t_dirty0 = 0U;
    __Vtask_top__DOT__test_outputs__209__t_write_data = 0xffffffffU;
    __Vtask_top__DOT__test_outputs__209__t_read_word_offset = 0xfU;
    __Vtask_top__DOT__test_outputs__209__t_write_word_offset = 4U;
    __Vtask_top__DOT__test_outputs__209__t_d_index = 0x1fU;
    __Vtask_top__DOT__test_outputs__209__t_cache_req_msg_data = 0U;
    __Vtask_top__DOT__test_outputs__209__t_cache_req_msg_addr = 0xffffffd3U;
    __Vtask_top__DOT__test_outputs__209__t_cache_req_msg_type_ = 0U;
    __Vtask_top__DOT__test_outputs__209__t_memresp_msg_data = 0U;
    __Vtask_top__DOT__test_outputs__209__t_memresp_msg_type_ = 0U;
    __Vtask_top__DOT__test_outputs__209__t_all_flushed = 1U;
    __Vtask_top__DOT__test_outputs__209__t_resp_count_done = 0U;
    __Vtask_top__DOT__test_outputs__209__t_req_count_done = 0U;
    __Vtask_top__DOT__test_outputs__209__t_incoming_mem_type = 0U;
    __Vtask_top__DOT__test_outputs__209__t_line1_valid = 0U;
    __Vtask_top__DOT__test_outputs__209__t_line0_valid = 1U;
    __Vtask_top__DOT__test_outputs__209__t_line1_dirty = 0U;
    __Vtask_top__DOT__test_outputs__209__t_line0_dirty = 0U;
    __Vtask_top__DOT__test_outputs__209__t_tarray1_match = 0U;
    __Vtask_top__DOT__test_outputs__209__t_tarray0_match = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray0_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__209__t_tarray0_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray0_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__209__t_tarray0_match,
                          1,(IData)(vlSelf->top__DOT__tarray0_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray0_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__209__t_tarray0_match,
                      1,(IData)(vlSelf->top__DOT__tarray0_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 825, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray1_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__209__t_tarray1_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray1_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__209__t_tarray1_match,
                          1,(IData)(vlSelf->top__DOT__tarray1_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray1_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__209__t_tarray1_match,
                      1,(IData)(vlSelf->top__DOT__tarray1_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 831, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__209__t_line0_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__209__t_line0_dirty,
                          1,(IData)(vlSelf->top__DOT__line0_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__209__t_line0_dirty,
                      1,(IData)(vlSelf->top__DOT__line0_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 837, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__209__t_line1_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__209__t_line1_dirty,
                          1,(IData)(vlSelf->top__DOT__line1_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__209__t_line1_dirty,
                      1,(IData)(vlSelf->top__DOT__line1_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 843, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__209__t_line0_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__209__t_line0_valid,
                          1,(IData)(vlSelf->top__DOT__line0_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__209__t_line0_valid,
                      1,(IData)(vlSelf->top__DOT__line0_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 849, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__209__t_line1_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__209__t_line1_valid,
                          1,(IData)(vlSelf->top__DOT__line1_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__209__t_line1_valid,
                      1,(IData)(vlSelf->top__DOT__line1_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 855, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__209__t_incoming_mem_type)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("incoming_mem_type is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__209__t_incoming_mem_type,
                          1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("incoming_mem_type is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__209__t_incoming_mem_type,
                      1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 861, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__209__t_req_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("req_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__209__t_req_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("req_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__209__t_req_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 867, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__209__t_resp_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("resp_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__209__t_resp_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("resp_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__209__t_resp_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 873, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__all_flushed) 
                       == (IData)(__Vtask_top__DOT__test_outputs__209__t_all_flushed)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("all_flushed is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__209__t_all_flushed,
                          1,(IData)(vlSelf->top__DOT__all_flushed));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("all_flushed is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__209__t_all_flushed,
                      1,(IData)(vlSelf->top__DOT__all_flushed));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 879, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                      >> 0x2cU))) == (IData)(__Vtask_top__DOT__test_outputs__209__t_memresp_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__209__t_memresp_msg_type_,
                          3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                           >> 0x2cU))));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__209__t_memresp_msg_type_,
                      3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                       >> 0x2cU))));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 885, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__memresp_msg) 
                       == __Vtask_top__DOT__test_outputs__209__t_memresp_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__209__t_memresp_msg_data,
                          32,(IData)(vlSelf->top__DOT__memresp_msg));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__209__t_memresp_msg_data,
                      32,(IData)(vlSelf->top__DOT__memresp_msg));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 891, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__209__t_cache_req_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__209__t_cache_req_msg_type_,
                          3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__209__t_cache_req_msg_type_,
                      3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 897, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((((vlSelf->top__DOT__cache_req_msg[2U] 
                         << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                      >> 2U)) == __Vtask_top__DOT__test_outputs__209__t_cache_req_msg_addr))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.addr is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__209__t_cache_req_msg_addr,
                          32,((vlSelf->top__DOT__cache_req_msg[2U] 
                               << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                            >> 2U)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.addr is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__209__t_cache_req_msg_addr,
                      32,((vlSelf->top__DOT__cache_req_msg[2U] 
                           << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                        >> 2U)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 903, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__cache_req_msg[0U] 
                       == __Vtask_top__DOT__test_outputs__209__t_cache_req_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__209__t_cache_req_msg_data,
                          32,vlSelf->top__DOT__cache_req_msg[0U]);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__209__t_cache_req_msg_data,
                      32,vlSelf->top__DOT__cache_req_msg[0U]);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 909, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__d_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__209__t_d_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.d_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__209__t_d_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.d_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__209__t_d_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 915, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__209__t_write_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__209__t_write_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__209__t_write_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 921, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__209__t_read_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.read_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__209__t_read_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.read_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__209__t_read_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 927, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__write_data 
                       == __Vtask_top__DOT__test_outputs__209__t_write_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__209__t_write_data,
                          32,vlSelf->top__DOT__DUT__DOT__write_data);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__209__t_write_data,
                      32,vlSelf->top__DOT__DUT__DOT__write_data);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 933, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty0 
                       == __Vtask_top__DOT__test_outputs__209__t_dirty0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__209__t_dirty0,
                          32,vlSelf->top__DOT__DUT__DOT__dirty0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__209__t_dirty0,
                      32,vlSelf->top__DOT__DUT__DOT__dirty0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 939, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty1 
                       == __Vtask_top__DOT__test_outputs__209__t_dirty1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__209__t_dirty1,
                          32,vlSelf->top__DOT__DUT__DOT__dirty1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__209__t_dirty1,
                      32,vlSelf->top__DOT__DUT__DOT__dirty1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 945, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid0 
                       == __Vtask_top__DOT__test_outputs__209__t_valid0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__209__t_valid0,
                          32,vlSelf->top__DOT__DUT__DOT__valid0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__209__t_valid0,
                      32,vlSelf->top__DOT__DUT__DOT__valid0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 951, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid1 
                       == __Vtask_top__DOT__test_outputs__209__t_valid1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__209__t_valid1,
                          32,vlSelf->top__DOT__DUT__DOT__valid1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__209__t_valid1,
                      32,vlSelf->top__DOT__DUT__DOT__valid1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 957, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__flush_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__209__t_flush_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.flush_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__209__t_flush_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.flush_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__209__t_flush_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 963, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0U == vlSelf->top__DOT__DUT__DOT__dirty0) 
                       == (IData)(__Vtask_top__DOT__test_outputs__209__t_flush_way_sel)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("flush_way_sel is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__209__t_flush_way_sel,
                          1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("flush_way_sel is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__209__t_flush_way_sel,
                      1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 969, "");
        }
    }
    vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       196);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    VL_WRITEF("\nReenable counters, cycle 4\n");
    __Vtask_top__DOT__set_inputs__260__t_way_select = 0U;
    __Vtask_top__DOT__set_inputs__260__t_cache_type = 0U;
    __Vtask_top__DOT__set_inputs__260__t_cache_data = 0xffffffffU;
    __Vtask_top__DOT__set_inputs__260__t_mem_type = 0U;
    __Vtask_top__DOT__set_inputs__260__t_mem_data = 0U;
    __Vtask_top__DOT__set_inputs__260__t_mem_addr = 0xffffffffU;
    __Vtask_top__DOT__set_inputs__260__t_state = 3U;
    __Vtask_top__DOT__set_inputs__260__t_valid_set = 1U;
    __Vtask_top__DOT__set_inputs__260__t_dirty_set = 0U;
    __Vtask_top__DOT__set_inputs__260__t_clean_set = 0U;
    __Vtask_top__DOT__set_inputs__260__t_mem_action = 0U;
    __Vtask_top__DOT__set_inputs__260__t_read_word_sel = 0U;
    __Vtask_top__DOT__set_inputs__260__t_write_word_sel = 1U;
    __Vtask_top__DOT__set_inputs__260__t_index_sel = 0U;
    __Vtask_top__DOT__set_inputs__260__t_darray_wen = 1U;
    __Vtask_top__DOT__set_inputs__260__t_darray_en = 1U;
    __Vtask_top__DOT__set_inputs__260__t_write_data_sel = 1U;
    __Vtask_top__DOT__set_inputs__260__t_count_reset = 0U;
    __Vtask_top__DOT__set_inputs__260__t_resp_count_en = 1U;
    __Vtask_top__DOT__set_inputs__260__t_req_count_en = 1U;
    __Vtask_top__DOT__set_inputs__260__t_tarray_wen = 1U;
    __Vtask_top__DOT__set_inputs__260__t_tarray_en = 1U;
    __Vtask_top__DOT__set_inputs__260__t_input_en = 0U;
    __Vtask_top__DOT__set_inputs__260__t_flush_done = 0U;
    __Vtask_top__DOT__set_inputs__260__t_flush = 0U;
    vlSelf->top__DOT__flush = __Vtask_top__DOT__set_inputs__260__t_flush;
    vlSelf->top__DOT__flush_done = __Vtask_top__DOT__set_inputs__260__t_flush_done;
    vlSelf->top__DOT__input_en = __Vtask_top__DOT__set_inputs__260__t_input_en;
    vlSelf->top__DOT__tarray_en = __Vtask_top__DOT__set_inputs__260__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = __Vtask_top__DOT__set_inputs__260__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = __Vtask_top__DOT__set_inputs__260__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = __Vtask_top__DOT__set_inputs__260__t_resp_count_en;
    vlSelf->top__DOT__count_reset = __Vtask_top__DOT__set_inputs__260__t_count_reset;
    vlSelf->top__DOT__write_data_sel = __Vtask_top__DOT__set_inputs__260__t_write_data_sel;
    vlSelf->top__DOT__darray_en = __Vtask_top__DOT__set_inputs__260__t_darray_en;
    vlSelf->top__DOT__darray_wen = __Vtask_top__DOT__set_inputs__260__t_darray_wen;
    vlSelf->top__DOT__index_sel = __Vtask_top__DOT__set_inputs__260__t_index_sel;
    vlSelf->top__DOT__write_word_sel = __Vtask_top__DOT__set_inputs__260__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = __Vtask_top__DOT__set_inputs__260__t_read_word_sel;
    vlSelf->top__DOT__mem_action = __Vtask_top__DOT__set_inputs__260__t_mem_action;
    vlSelf->top__DOT__clean_set = __Vtask_top__DOT__set_inputs__260__t_clean_set;
    vlSelf->top__DOT__dirty_set = __Vtask_top__DOT__set_inputs__260__t_dirty_set;
    vlSelf->top__DOT__valid_set = __Vtask_top__DOT__set_inputs__260__t_valid_set;
    vlSelf->top__DOT__state = __Vtask_top__DOT__set_inputs__260__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (__Vtask_top__DOT__set_inputs__260__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (__Vtask_top__DOT__set_inputs__260__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = __Vtask_top__DOT__set_inputs__260__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(__Vtask_top__DOT__set_inputs__260__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(__Vtask_top__DOT__set_inputs__260__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(__Vtask_top__DOT__set_inputs__260__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = __Vtask_top__DOT__set_inputs__260__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       205);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    __Vtask_top__DOT__test_outputs__261__t_flush_way_sel = 1U;
    __Vtask_top__DOT__test_outputs__261__t_flush_index = 0U;
    __Vtask_top__DOT__test_outputs__261__t_valid1 = 0U;
    __Vtask_top__DOT__test_outputs__261__t_valid0 = 0x80000000U;
    __Vtask_top__DOT__test_outputs__261__t_dirty1 = 0U;
    __Vtask_top__DOT__test_outputs__261__t_dirty0 = 0U;
    __Vtask_top__DOT__test_outputs__261__t_write_data = 0xffffffffU;
    __Vtask_top__DOT__test_outputs__261__t_read_word_offset = 0xfU;
    __Vtask_top__DOT__test_outputs__261__t_write_word_offset = 5U;
    __Vtask_top__DOT__test_outputs__261__t_d_index = 0x1fU;
    __Vtask_top__DOT__test_outputs__261__t_cache_req_msg_data = 0U;
    __Vtask_top__DOT__test_outputs__261__t_cache_req_msg_addr = 0xffffffd7U;
    __Vtask_top__DOT__test_outputs__261__t_cache_req_msg_type_ = 0U;
    __Vtask_top__DOT__test_outputs__261__t_memresp_msg_data = 0U;
    __Vtask_top__DOT__test_outputs__261__t_memresp_msg_type_ = 0U;
    __Vtask_top__DOT__test_outputs__261__t_all_flushed = 1U;
    __Vtask_top__DOT__test_outputs__261__t_resp_count_done = 0U;
    __Vtask_top__DOT__test_outputs__261__t_req_count_done = 0U;
    __Vtask_top__DOT__test_outputs__261__t_incoming_mem_type = 0U;
    __Vtask_top__DOT__test_outputs__261__t_line1_valid = 0U;
    __Vtask_top__DOT__test_outputs__261__t_line0_valid = 1U;
    __Vtask_top__DOT__test_outputs__261__t_line1_dirty = 0U;
    __Vtask_top__DOT__test_outputs__261__t_line0_dirty = 0U;
    __Vtask_top__DOT__test_outputs__261__t_tarray1_match = 0U;
    __Vtask_top__DOT__test_outputs__261__t_tarray0_match = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray0_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__261__t_tarray0_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray0_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__261__t_tarray0_match,
                          1,(IData)(vlSelf->top__DOT__tarray0_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray0_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__261__t_tarray0_match,
                      1,(IData)(vlSelf->top__DOT__tarray0_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 825, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray1_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__261__t_tarray1_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray1_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__261__t_tarray1_match,
                          1,(IData)(vlSelf->top__DOT__tarray1_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray1_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__261__t_tarray1_match,
                      1,(IData)(vlSelf->top__DOT__tarray1_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 831, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__261__t_line0_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__261__t_line0_dirty,
                          1,(IData)(vlSelf->top__DOT__line0_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__261__t_line0_dirty,
                      1,(IData)(vlSelf->top__DOT__line0_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 837, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__261__t_line1_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__261__t_line1_dirty,
                          1,(IData)(vlSelf->top__DOT__line1_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__261__t_line1_dirty,
                      1,(IData)(vlSelf->top__DOT__line1_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 843, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__261__t_line0_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__261__t_line0_valid,
                          1,(IData)(vlSelf->top__DOT__line0_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__261__t_line0_valid,
                      1,(IData)(vlSelf->top__DOT__line0_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 849, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__261__t_line1_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__261__t_line1_valid,
                          1,(IData)(vlSelf->top__DOT__line1_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__261__t_line1_valid,
                      1,(IData)(vlSelf->top__DOT__line1_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 855, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__261__t_incoming_mem_type)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("incoming_mem_type is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__261__t_incoming_mem_type,
                          1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("incoming_mem_type is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__261__t_incoming_mem_type,
                      1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 861, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__261__t_req_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("req_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__261__t_req_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("req_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__261__t_req_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 867, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__261__t_resp_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("resp_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__261__t_resp_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("resp_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__261__t_resp_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 873, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__all_flushed) 
                       == (IData)(__Vtask_top__DOT__test_outputs__261__t_all_flushed)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("all_flushed is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__261__t_all_flushed,
                          1,(IData)(vlSelf->top__DOT__all_flushed));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("all_flushed is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__261__t_all_flushed,
                      1,(IData)(vlSelf->top__DOT__all_flushed));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 879, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                      >> 0x2cU))) == (IData)(__Vtask_top__DOT__test_outputs__261__t_memresp_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__261__t_memresp_msg_type_,
                          3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                           >> 0x2cU))));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__261__t_memresp_msg_type_,
                      3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                       >> 0x2cU))));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 885, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__memresp_msg) 
                       == __Vtask_top__DOT__test_outputs__261__t_memresp_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__261__t_memresp_msg_data,
                          32,(IData)(vlSelf->top__DOT__memresp_msg));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__261__t_memresp_msg_data,
                      32,(IData)(vlSelf->top__DOT__memresp_msg));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 891, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__261__t_cache_req_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__261__t_cache_req_msg_type_,
                          3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__261__t_cache_req_msg_type_,
                      3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 897, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((((vlSelf->top__DOT__cache_req_msg[2U] 
                         << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                      >> 2U)) == __Vtask_top__DOT__test_outputs__261__t_cache_req_msg_addr))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.addr is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__261__t_cache_req_msg_addr,
                          32,((vlSelf->top__DOT__cache_req_msg[2U] 
                               << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                            >> 2U)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.addr is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__261__t_cache_req_msg_addr,
                      32,((vlSelf->top__DOT__cache_req_msg[2U] 
                           << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                        >> 2U)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 903, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__cache_req_msg[0U] 
                       == __Vtask_top__DOT__test_outputs__261__t_cache_req_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__261__t_cache_req_msg_data,
                          32,vlSelf->top__DOT__cache_req_msg[0U]);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__261__t_cache_req_msg_data,
                      32,vlSelf->top__DOT__cache_req_msg[0U]);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 909, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__d_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__261__t_d_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.d_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__261__t_d_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.d_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__261__t_d_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 915, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__261__t_write_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__261__t_write_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__261__t_write_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 921, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__261__t_read_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.read_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__261__t_read_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.read_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__261__t_read_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 927, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__write_data 
                       == __Vtask_top__DOT__test_outputs__261__t_write_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__261__t_write_data,
                          32,vlSelf->top__DOT__DUT__DOT__write_data);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__261__t_write_data,
                      32,vlSelf->top__DOT__DUT__DOT__write_data);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 933, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty0 
                       == __Vtask_top__DOT__test_outputs__261__t_dirty0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__261__t_dirty0,
                          32,vlSelf->top__DOT__DUT__DOT__dirty0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__261__t_dirty0,
                      32,vlSelf->top__DOT__DUT__DOT__dirty0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 939, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty1 
                       == __Vtask_top__DOT__test_outputs__261__t_dirty1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__261__t_dirty1,
                          32,vlSelf->top__DOT__DUT__DOT__dirty1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__261__t_dirty1,
                      32,vlSelf->top__DOT__DUT__DOT__dirty1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 945, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid0 
                       == __Vtask_top__DOT__test_outputs__261__t_valid0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__261__t_valid0,
                          32,vlSelf->top__DOT__DUT__DOT__valid0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__261__t_valid0,
                      32,vlSelf->top__DOT__DUT__DOT__valid0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 951, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid1 
                       == __Vtask_top__DOT__test_outputs__261__t_valid1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__261__t_valid1,
                          32,vlSelf->top__DOT__DUT__DOT__valid1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__261__t_valid1,
                      32,vlSelf->top__DOT__DUT__DOT__valid1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 957, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__flush_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__261__t_flush_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.flush_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__261__t_flush_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.flush_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__261__t_flush_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 963, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0U == vlSelf->top__DOT__DUT__DOT__dirty0) 
                       == (IData)(__Vtask_top__DOT__test_outputs__261__t_flush_way_sel)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("flush_way_sel is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__261__t_flush_way_sel,
                          1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("flush_way_sel is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__261__t_flush_way_sel,
                      1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 969, "");
        }
    }
    vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       211);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       212);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       213);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       214);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       215);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       216);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       217);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       218);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       219);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       220);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       221);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    VL_WRITEF("\nCounters done, output value to memresp data\n");
    __Vtask_top__DOT__test_outputs__312__t_flush_way_sel = 1U;
    __Vtask_top__DOT__test_outputs__312__t_flush_index = 0U;
    __Vtask_top__DOT__test_outputs__312__t_valid1 = 0U;
    __Vtask_top__DOT__test_outputs__312__t_valid0 = 0x80000000U;
    __Vtask_top__DOT__test_outputs__312__t_dirty1 = 0U;
    __Vtask_top__DOT__test_outputs__312__t_dirty0 = 0U;
    __Vtask_top__DOT__test_outputs__312__t_write_data = 0xffffffffU;
    __Vtask_top__DOT__test_outputs__312__t_read_word_offset = 0xfU;
    __Vtask_top__DOT__test_outputs__312__t_write_word_offset = 0U;
    __Vtask_top__DOT__test_outputs__312__t_d_index = 0x1fU;
    __Vtask_top__DOT__test_outputs__312__t_cache_req_msg_data = 0xffffffffU;
    __Vtask_top__DOT__test_outputs__312__t_cache_req_msg_addr = 0xffffffc3U;
    __Vtask_top__DOT__test_outputs__312__t_cache_req_msg_type_ = 0U;
    __Vtask_top__DOT__test_outputs__312__t_memresp_msg_data = 0xffffffffU;
    __Vtask_top__DOT__test_outputs__312__t_memresp_msg_type_ = 0U;
    __Vtask_top__DOT__test_outputs__312__t_all_flushed = 1U;
    __Vtask_top__DOT__test_outputs__312__t_resp_count_done = 1U;
    __Vtask_top__DOT__test_outputs__312__t_req_count_done = 1U;
    __Vtask_top__DOT__test_outputs__312__t_incoming_mem_type = 0U;
    __Vtask_top__DOT__test_outputs__312__t_line1_valid = 0U;
    __Vtask_top__DOT__test_outputs__312__t_line0_valid = 1U;
    __Vtask_top__DOT__test_outputs__312__t_line1_dirty = 0U;
    __Vtask_top__DOT__test_outputs__312__t_line0_dirty = 0U;
    __Vtask_top__DOT__test_outputs__312__t_tarray1_match = 0U;
    __Vtask_top__DOT__test_outputs__312__t_tarray0_match = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray0_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__312__t_tarray0_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray0_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__312__t_tarray0_match,
                          1,(IData)(vlSelf->top__DOT__tarray0_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray0_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__312__t_tarray0_match,
                      1,(IData)(vlSelf->top__DOT__tarray0_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 825, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray1_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__312__t_tarray1_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray1_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__312__t_tarray1_match,
                          1,(IData)(vlSelf->top__DOT__tarray1_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray1_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__312__t_tarray1_match,
                      1,(IData)(vlSelf->top__DOT__tarray1_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 831, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__312__t_line0_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__312__t_line0_dirty,
                          1,(IData)(vlSelf->top__DOT__line0_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__312__t_line0_dirty,
                      1,(IData)(vlSelf->top__DOT__line0_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 837, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__312__t_line1_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__312__t_line1_dirty,
                          1,(IData)(vlSelf->top__DOT__line1_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__312__t_line1_dirty,
                      1,(IData)(vlSelf->top__DOT__line1_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 843, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__312__t_line0_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__312__t_line0_valid,
                          1,(IData)(vlSelf->top__DOT__line0_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__312__t_line0_valid,
                      1,(IData)(vlSelf->top__DOT__line0_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 849, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__312__t_line1_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__312__t_line1_valid,
                          1,(IData)(vlSelf->top__DOT__line1_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__312__t_line1_valid,
                      1,(IData)(vlSelf->top__DOT__line1_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 855, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__312__t_incoming_mem_type)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("incoming_mem_type is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__312__t_incoming_mem_type,
                          1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("incoming_mem_type is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__312__t_incoming_mem_type,
                      1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 861, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__312__t_req_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("req_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__312__t_req_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("req_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__312__t_req_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 867, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__312__t_resp_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("resp_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__312__t_resp_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("resp_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__312__t_resp_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 873, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__all_flushed) 
                       == (IData)(__Vtask_top__DOT__test_outputs__312__t_all_flushed)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("all_flushed is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__312__t_all_flushed,
                          1,(IData)(vlSelf->top__DOT__all_flushed));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("all_flushed is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__312__t_all_flushed,
                      1,(IData)(vlSelf->top__DOT__all_flushed));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 879, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                      >> 0x2cU))) == (IData)(__Vtask_top__DOT__test_outputs__312__t_memresp_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__312__t_memresp_msg_type_,
                          3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                           >> 0x2cU))));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__312__t_memresp_msg_type_,
                      3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                       >> 0x2cU))));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 885, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__memresp_msg) 
                       == __Vtask_top__DOT__test_outputs__312__t_memresp_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__312__t_memresp_msg_data,
                          32,(IData)(vlSelf->top__DOT__memresp_msg));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__312__t_memresp_msg_data,
                      32,(IData)(vlSelf->top__DOT__memresp_msg));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 891, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__312__t_cache_req_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__312__t_cache_req_msg_type_,
                          3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__312__t_cache_req_msg_type_,
                      3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 897, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((((vlSelf->top__DOT__cache_req_msg[2U] 
                         << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                      >> 2U)) == __Vtask_top__DOT__test_outputs__312__t_cache_req_msg_addr))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.addr is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__312__t_cache_req_msg_addr,
                          32,((vlSelf->top__DOT__cache_req_msg[2U] 
                               << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                            >> 2U)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.addr is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__312__t_cache_req_msg_addr,
                      32,((vlSelf->top__DOT__cache_req_msg[2U] 
                           << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                        >> 2U)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 903, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__cache_req_msg[0U] 
                       == __Vtask_top__DOT__test_outputs__312__t_cache_req_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__312__t_cache_req_msg_data,
                          32,vlSelf->top__DOT__cache_req_msg[0U]);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__312__t_cache_req_msg_data,
                      32,vlSelf->top__DOT__cache_req_msg[0U]);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 909, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__d_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__312__t_d_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.d_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__312__t_d_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.d_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__312__t_d_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 915, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__312__t_write_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__312__t_write_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__312__t_write_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 921, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__312__t_read_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.read_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__312__t_read_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.read_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__312__t_read_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 927, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__write_data 
                       == __Vtask_top__DOT__test_outputs__312__t_write_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__312__t_write_data,
                          32,vlSelf->top__DOT__DUT__DOT__write_data);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__312__t_write_data,
                      32,vlSelf->top__DOT__DUT__DOT__write_data);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 933, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty0 
                       == __Vtask_top__DOT__test_outputs__312__t_dirty0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__312__t_dirty0,
                          32,vlSelf->top__DOT__DUT__DOT__dirty0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__312__t_dirty0,
                      32,vlSelf->top__DOT__DUT__DOT__dirty0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 939, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty1 
                       == __Vtask_top__DOT__test_outputs__312__t_dirty1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__312__t_dirty1,
                          32,vlSelf->top__DOT__DUT__DOT__dirty1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__312__t_dirty1,
                      32,vlSelf->top__DOT__DUT__DOT__dirty1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 945, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid0 
                       == __Vtask_top__DOT__test_outputs__312__t_valid0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__312__t_valid0,
                          32,vlSelf->top__DOT__DUT__DOT__valid0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__312__t_valid0,
                      32,vlSelf->top__DOT__DUT__DOT__valid0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 951, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid1 
                       == __Vtask_top__DOT__test_outputs__312__t_valid1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__312__t_valid1,
                          32,vlSelf->top__DOT__DUT__DOT__valid1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__312__t_valid1,
                      32,vlSelf->top__DOT__DUT__DOT__valid1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 957, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__flush_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__312__t_flush_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.flush_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__312__t_flush_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.flush_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__312__t_flush_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 963, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0U == vlSelf->top__DOT__DUT__DOT__dirty0) 
                       == (IData)(__Vtask_top__DOT__test_outputs__312__t_flush_way_sel)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("flush_way_sel is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__312__t_flush_way_sel,
                          1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("flush_way_sel is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__312__t_flush_way_sel,
                      1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 969, "");
        }
    }
    vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__delay__363__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__363__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__363__unnamedblk6__DOT__i, __Vtask_top__DOT__delay__363__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_CacheAltDpath.v", 
                                           730);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__363__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__363__unnamedblk6__DOT__i);
    }
    vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\nOutput data in MD state\n");
    __Vtask_top__DOT__set_inputs__364__t_way_select = 0U;
    __Vtask_top__DOT__set_inputs__364__t_cache_type = 0U;
    __Vtask_top__DOT__set_inputs__364__t_cache_data = 0xffffffffU;
    __Vtask_top__DOT__set_inputs__364__t_mem_type = 0U;
    __Vtask_top__DOT__set_inputs__364__t_mem_data = 0U;
    __Vtask_top__DOT__set_inputs__364__t_mem_addr = 0xffffffffU;
    __Vtask_top__DOT__set_inputs__364__t_state = 4U;
    __Vtask_top__DOT__set_inputs__364__t_valid_set = 1U;
    __Vtask_top__DOT__set_inputs__364__t_dirty_set = 0U;
    __Vtask_top__DOT__set_inputs__364__t_clean_set = 0U;
    __Vtask_top__DOT__set_inputs__364__t_mem_action = 0U;
    __Vtask_top__DOT__set_inputs__364__t_read_word_sel = 0U;
    __Vtask_top__DOT__set_inputs__364__t_write_word_sel = 0U;
    __Vtask_top__DOT__set_inputs__364__t_index_sel = 0U;
    __Vtask_top__DOT__set_inputs__364__t_darray_wen = 0U;
    __Vtask_top__DOT__set_inputs__364__t_darray_en = 1U;
    __Vtask_top__DOT__set_inputs__364__t_write_data_sel = 0U;
    __Vtask_top__DOT__set_inputs__364__t_count_reset = 1U;
    __Vtask_top__DOT__set_inputs__364__t_resp_count_en = 0U;
    __Vtask_top__DOT__set_inputs__364__t_req_count_en = 0U;
    __Vtask_top__DOT__set_inputs__364__t_tarray_wen = 0U;
    __Vtask_top__DOT__set_inputs__364__t_tarray_en = 0U;
    __Vtask_top__DOT__set_inputs__364__t_input_en = 1U;
    __Vtask_top__DOT__set_inputs__364__t_flush_done = 0U;
    __Vtask_top__DOT__set_inputs__364__t_flush = 0U;
    vlSelf->top__DOT__flush = __Vtask_top__DOT__set_inputs__364__t_flush;
    vlSelf->top__DOT__flush_done = __Vtask_top__DOT__set_inputs__364__t_flush_done;
    vlSelf->top__DOT__input_en = __Vtask_top__DOT__set_inputs__364__t_input_en;
    vlSelf->top__DOT__tarray_en = __Vtask_top__DOT__set_inputs__364__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = __Vtask_top__DOT__set_inputs__364__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = __Vtask_top__DOT__set_inputs__364__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = __Vtask_top__DOT__set_inputs__364__t_resp_count_en;
    vlSelf->top__DOT__count_reset = __Vtask_top__DOT__set_inputs__364__t_count_reset;
    vlSelf->top__DOT__write_data_sel = __Vtask_top__DOT__set_inputs__364__t_write_data_sel;
    vlSelf->top__DOT__darray_en = __Vtask_top__DOT__set_inputs__364__t_darray_en;
    vlSelf->top__DOT__darray_wen = __Vtask_top__DOT__set_inputs__364__t_darray_wen;
    vlSelf->top__DOT__index_sel = __Vtask_top__DOT__set_inputs__364__t_index_sel;
    vlSelf->top__DOT__write_word_sel = __Vtask_top__DOT__set_inputs__364__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = __Vtask_top__DOT__set_inputs__364__t_read_word_sel;
    vlSelf->top__DOT__mem_action = __Vtask_top__DOT__set_inputs__364__t_mem_action;
    vlSelf->top__DOT__clean_set = __Vtask_top__DOT__set_inputs__364__t_clean_set;
    vlSelf->top__DOT__dirty_set = __Vtask_top__DOT__set_inputs__364__t_dirty_set;
    vlSelf->top__DOT__valid_set = __Vtask_top__DOT__set_inputs__364__t_valid_set;
    vlSelf->top__DOT__state = __Vtask_top__DOT__set_inputs__364__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (__Vtask_top__DOT__set_inputs__364__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (__Vtask_top__DOT__set_inputs__364__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = __Vtask_top__DOT__set_inputs__364__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(__Vtask_top__DOT__set_inputs__364__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(__Vtask_top__DOT__set_inputs__364__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(__Vtask_top__DOT__set_inputs__364__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = __Vtask_top__DOT__set_inputs__364__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       239);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    __Vtask_top__DOT__test_outputs__365__t_flush_way_sel = 1U;
    __Vtask_top__DOT__test_outputs__365__t_flush_index = 0U;
    __Vtask_top__DOT__test_outputs__365__t_valid1 = 0U;
    __Vtask_top__DOT__test_outputs__365__t_valid0 = 0x80000000U;
    __Vtask_top__DOT__test_outputs__365__t_dirty1 = 0U;
    __Vtask_top__DOT__test_outputs__365__t_dirty0 = 0U;
    __Vtask_top__DOT__test_outputs__365__t_write_data = 0U;
    __Vtask_top__DOT__test_outputs__365__t_read_word_offset = 0xfU;
    __Vtask_top__DOT__test_outputs__365__t_write_word_offset = 0xfU;
    __Vtask_top__DOT__test_outputs__365__t_d_index = 0x1fU;
    __Vtask_top__DOT__test_outputs__365__t_cache_req_msg_data = 0xffffffffU;
    __Vtask_top__DOT__test_outputs__365__t_cache_req_msg_addr = 0xffffffc3U;
    __Vtask_top__DOT__test_outputs__365__t_cache_req_msg_type_ = 0U;
    __Vtask_top__DOT__test_outputs__365__t_memresp_msg_data = 0xffffffffU;
    __Vtask_top__DOT__test_outputs__365__t_memresp_msg_type_ = 0U;
    __Vtask_top__DOT__test_outputs__365__t_all_flushed = 1U;
    __Vtask_top__DOT__test_outputs__365__t_resp_count_done = 0U;
    __Vtask_top__DOT__test_outputs__365__t_req_count_done = 0U;
    __Vtask_top__DOT__test_outputs__365__t_incoming_mem_type = 0U;
    __Vtask_top__DOT__test_outputs__365__t_line1_valid = 0U;
    __Vtask_top__DOT__test_outputs__365__t_line0_valid = 1U;
    __Vtask_top__DOT__test_outputs__365__t_line1_dirty = 0U;
    __Vtask_top__DOT__test_outputs__365__t_line0_dirty = 0U;
    __Vtask_top__DOT__test_outputs__365__t_tarray1_match = 0U;
    __Vtask_top__DOT__test_outputs__365__t_tarray0_match = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray0_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__365__t_tarray0_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray0_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__365__t_tarray0_match,
                          1,(IData)(vlSelf->top__DOT__tarray0_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray0_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__365__t_tarray0_match,
                      1,(IData)(vlSelf->top__DOT__tarray0_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 825, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray1_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__365__t_tarray1_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray1_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__365__t_tarray1_match,
                          1,(IData)(vlSelf->top__DOT__tarray1_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray1_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__365__t_tarray1_match,
                      1,(IData)(vlSelf->top__DOT__tarray1_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 831, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__365__t_line0_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__365__t_line0_dirty,
                          1,(IData)(vlSelf->top__DOT__line0_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__365__t_line0_dirty,
                      1,(IData)(vlSelf->top__DOT__line0_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 837, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__365__t_line1_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__365__t_line1_dirty,
                          1,(IData)(vlSelf->top__DOT__line1_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__365__t_line1_dirty,
                      1,(IData)(vlSelf->top__DOT__line1_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 843, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__365__t_line0_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__365__t_line0_valid,
                          1,(IData)(vlSelf->top__DOT__line0_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__365__t_line0_valid,
                      1,(IData)(vlSelf->top__DOT__line0_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 849, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__365__t_line1_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__365__t_line1_valid,
                          1,(IData)(vlSelf->top__DOT__line1_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__365__t_line1_valid,
                      1,(IData)(vlSelf->top__DOT__line1_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 855, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__365__t_incoming_mem_type)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("incoming_mem_type is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__365__t_incoming_mem_type,
                          1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("incoming_mem_type is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__365__t_incoming_mem_type,
                      1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 861, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__365__t_req_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("req_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__365__t_req_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("req_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__365__t_req_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 867, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__365__t_resp_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("resp_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__365__t_resp_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("resp_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__365__t_resp_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 873, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__all_flushed) 
                       == (IData)(__Vtask_top__DOT__test_outputs__365__t_all_flushed)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("all_flushed is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__365__t_all_flushed,
                          1,(IData)(vlSelf->top__DOT__all_flushed));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("all_flushed is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__365__t_all_flushed,
                      1,(IData)(vlSelf->top__DOT__all_flushed));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 879, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                      >> 0x2cU))) == (IData)(__Vtask_top__DOT__test_outputs__365__t_memresp_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__365__t_memresp_msg_type_,
                          3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                           >> 0x2cU))));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__365__t_memresp_msg_type_,
                      3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                       >> 0x2cU))));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 885, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__memresp_msg) 
                       == __Vtask_top__DOT__test_outputs__365__t_memresp_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__365__t_memresp_msg_data,
                          32,(IData)(vlSelf->top__DOT__memresp_msg));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__365__t_memresp_msg_data,
                      32,(IData)(vlSelf->top__DOT__memresp_msg));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 891, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__365__t_cache_req_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__365__t_cache_req_msg_type_,
                          3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__365__t_cache_req_msg_type_,
                      3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 897, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((((vlSelf->top__DOT__cache_req_msg[2U] 
                         << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                      >> 2U)) == __Vtask_top__DOT__test_outputs__365__t_cache_req_msg_addr))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.addr is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__365__t_cache_req_msg_addr,
                          32,((vlSelf->top__DOT__cache_req_msg[2U] 
                               << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                            >> 2U)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.addr is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__365__t_cache_req_msg_addr,
                      32,((vlSelf->top__DOT__cache_req_msg[2U] 
                           << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                        >> 2U)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 903, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__cache_req_msg[0U] 
                       == __Vtask_top__DOT__test_outputs__365__t_cache_req_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__365__t_cache_req_msg_data,
                          32,vlSelf->top__DOT__cache_req_msg[0U]);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__365__t_cache_req_msg_data,
                      32,vlSelf->top__DOT__cache_req_msg[0U]);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 909, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__d_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__365__t_d_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.d_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__365__t_d_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.d_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__365__t_d_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 915, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__365__t_write_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__365__t_write_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__365__t_write_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 921, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__365__t_read_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.read_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__365__t_read_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.read_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__365__t_read_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 927, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__write_data 
                       == __Vtask_top__DOT__test_outputs__365__t_write_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__365__t_write_data,
                          32,vlSelf->top__DOT__DUT__DOT__write_data);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__365__t_write_data,
                      32,vlSelf->top__DOT__DUT__DOT__write_data);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 933, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty0 
                       == __Vtask_top__DOT__test_outputs__365__t_dirty0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__365__t_dirty0,
                          32,vlSelf->top__DOT__DUT__DOT__dirty0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__365__t_dirty0,
                      32,vlSelf->top__DOT__DUT__DOT__dirty0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 939, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty1 
                       == __Vtask_top__DOT__test_outputs__365__t_dirty1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__365__t_dirty1,
                          32,vlSelf->top__DOT__DUT__DOT__dirty1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__365__t_dirty1,
                      32,vlSelf->top__DOT__DUT__DOT__dirty1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 945, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid0 
                       == __Vtask_top__DOT__test_outputs__365__t_valid0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__365__t_valid0,
                          32,vlSelf->top__DOT__DUT__DOT__valid0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__365__t_valid0,
                      32,vlSelf->top__DOT__DUT__DOT__valid0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 951, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid1 
                       == __Vtask_top__DOT__test_outputs__365__t_valid1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__365__t_valid1,
                          32,vlSelf->top__DOT__DUT__DOT__valid1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__365__t_valid1,
                      32,vlSelf->top__DOT__DUT__DOT__valid1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 957, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__flush_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__365__t_flush_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.flush_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__365__t_flush_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.flush_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__365__t_flush_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 963, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0U == vlSelf->top__DOT__DUT__DOT__dirty0) 
                       == (IData)(__Vtask_top__DOT__test_outputs__365__t_flush_way_sel)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("flush_way_sel is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__365__t_flush_way_sel,
                          1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("flush_way_sel is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__365__t_flush_way_sel,
                      1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 969, "");
        }
    }
    vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__delay__416__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__416__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__416__unnamedblk6__DOT__i, __Vtask_top__DOT__delay__416__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_CacheAltDpath.v", 
                                           730);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__416__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__416__unnamedblk6__DOT__i);
    }
    vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       251);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    __Vtask_top__DOT__set_inputs__417__t_way_select = 1U;
    __Vtask_top__DOT__set_inputs__417__t_cache_type = 0U;
    __Vtask_top__DOT__set_inputs__417__t_cache_data = 0U;
    __Vtask_top__DOT__set_inputs__417__t_mem_type = 0U;
    __Vtask_top__DOT__set_inputs__417__t_mem_data = 0U;
    __Vtask_top__DOT__set_inputs__417__t_mem_addr = 0x16a0U;
    __Vtask_top__DOT__set_inputs__417__t_state = 1U;
    __Vtask_top__DOT__set_inputs__417__t_valid_set = 0U;
    __Vtask_top__DOT__set_inputs__417__t_dirty_set = 0U;
    __Vtask_top__DOT__set_inputs__417__t_clean_set = 0U;
    __Vtask_top__DOT__set_inputs__417__t_mem_action = 0U;
    __Vtask_top__DOT__set_inputs__417__t_read_word_sel = 0U;
    __Vtask_top__DOT__set_inputs__417__t_write_word_sel = 0U;
    __Vtask_top__DOT__set_inputs__417__t_index_sel = 0U;
    __Vtask_top__DOT__set_inputs__417__t_darray_wen = 0U;
    __Vtask_top__DOT__set_inputs__417__t_darray_en = 0U;
    __Vtask_top__DOT__set_inputs__417__t_write_data_sel = 0U;
    __Vtask_top__DOT__set_inputs__417__t_count_reset = 1U;
    __Vtask_top__DOT__set_inputs__417__t_resp_count_en = 0U;
    __Vtask_top__DOT__set_inputs__417__t_req_count_en = 0U;
    __Vtask_top__DOT__set_inputs__417__t_tarray_wen = 0U;
    __Vtask_top__DOT__set_inputs__417__t_tarray_en = 1U;
    __Vtask_top__DOT__set_inputs__417__t_input_en = 1U;
    __Vtask_top__DOT__set_inputs__417__t_flush_done = 0U;
    __Vtask_top__DOT__set_inputs__417__t_flush = 0U;
    vlSelf->top__DOT__flush = __Vtask_top__DOT__set_inputs__417__t_flush;
    vlSelf->top__DOT__flush_done = __Vtask_top__DOT__set_inputs__417__t_flush_done;
    vlSelf->top__DOT__input_en = __Vtask_top__DOT__set_inputs__417__t_input_en;
    vlSelf->top__DOT__tarray_en = __Vtask_top__DOT__set_inputs__417__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = __Vtask_top__DOT__set_inputs__417__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = __Vtask_top__DOT__set_inputs__417__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = __Vtask_top__DOT__set_inputs__417__t_resp_count_en;
    vlSelf->top__DOT__count_reset = __Vtask_top__DOT__set_inputs__417__t_count_reset;
    vlSelf->top__DOT__write_data_sel = __Vtask_top__DOT__set_inputs__417__t_write_data_sel;
    vlSelf->top__DOT__darray_en = __Vtask_top__DOT__set_inputs__417__t_darray_en;
    vlSelf->top__DOT__darray_wen = __Vtask_top__DOT__set_inputs__417__t_darray_wen;
    vlSelf->top__DOT__index_sel = __Vtask_top__DOT__set_inputs__417__t_index_sel;
    vlSelf->top__DOT__write_word_sel = __Vtask_top__DOT__set_inputs__417__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = __Vtask_top__DOT__set_inputs__417__t_read_word_sel;
    vlSelf->top__DOT__mem_action = __Vtask_top__DOT__set_inputs__417__t_mem_action;
    vlSelf->top__DOT__clean_set = __Vtask_top__DOT__set_inputs__417__t_clean_set;
    vlSelf->top__DOT__dirty_set = __Vtask_top__DOT__set_inputs__417__t_dirty_set;
    vlSelf->top__DOT__valid_set = __Vtask_top__DOT__set_inputs__417__t_valid_set;
    vlSelf->top__DOT__state = __Vtask_top__DOT__set_inputs__417__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (__Vtask_top__DOT__set_inputs__417__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (__Vtask_top__DOT__set_inputs__417__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = __Vtask_top__DOT__set_inputs__417__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(__Vtask_top__DOT__set_inputs__417__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(__Vtask_top__DOT__set_inputs__417__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(__Vtask_top__DOT__set_inputs__417__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = __Vtask_top__DOT__set_inputs__417__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\nSimulate read miss inputs in MT for way 1\n");
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       259);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    __Vtask_top__DOT__test_outputs__418__t_flush_way_sel = 1U;
    __Vtask_top__DOT__test_outputs__418__t_flush_index = 0U;
    __Vtask_top__DOT__test_outputs__418__t_valid1 = 0U;
    __Vtask_top__DOT__test_outputs__418__t_valid0 = 0x80000000U;
    __Vtask_top__DOT__test_outputs__418__t_dirty1 = 0U;
    __Vtask_top__DOT__test_outputs__418__t_dirty0 = 0U;
    __Vtask_top__DOT__test_outputs__418__t_write_data = 0U;
    __Vtask_top__DOT__test_outputs__418__t_read_word_offset = 8U;
    __Vtask_top__DOT__test_outputs__418__t_write_word_offset = 8U;
    __Vtask_top__DOT__test_outputs__418__t_d_index = 0x1aU;
    __Vtask_top__DOT__test_outputs__418__t_cache_req_msg_data = 0U;
    __Vtask_top__DOT__test_outputs__418__t_cache_req_msg_addr = 0x1680U;
    __Vtask_top__DOT__test_outputs__418__t_cache_req_msg_type_ = 0U;
    __Vtask_top__DOT__test_outputs__418__t_memresp_msg_data = 0U;
    __Vtask_top__DOT__test_outputs__418__t_memresp_msg_type_ = 0U;
    __Vtask_top__DOT__test_outputs__418__t_all_flushed = 1U;
    __Vtask_top__DOT__test_outputs__418__t_resp_count_done = 0U;
    __Vtask_top__DOT__test_outputs__418__t_req_count_done = 0U;
    __Vtask_top__DOT__test_outputs__418__t_incoming_mem_type = 0U;
    __Vtask_top__DOT__test_outputs__418__t_line1_valid = 0U;
    __Vtask_top__DOT__test_outputs__418__t_line0_valid = 0U;
    __Vtask_top__DOT__test_outputs__418__t_line1_dirty = 0U;
    __Vtask_top__DOT__test_outputs__418__t_line0_dirty = 0U;
    __Vtask_top__DOT__test_outputs__418__t_tarray1_match = 0U;
    __Vtask_top__DOT__test_outputs__418__t_tarray0_match = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray0_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__418__t_tarray0_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray0_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__418__t_tarray0_match,
                          1,(IData)(vlSelf->top__DOT__tarray0_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray0_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__418__t_tarray0_match,
                      1,(IData)(vlSelf->top__DOT__tarray0_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 825, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray1_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__418__t_tarray1_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray1_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__418__t_tarray1_match,
                          1,(IData)(vlSelf->top__DOT__tarray1_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray1_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__418__t_tarray1_match,
                      1,(IData)(vlSelf->top__DOT__tarray1_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 831, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__418__t_line0_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__418__t_line0_dirty,
                          1,(IData)(vlSelf->top__DOT__line0_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__418__t_line0_dirty,
                      1,(IData)(vlSelf->top__DOT__line0_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 837, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__418__t_line1_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__418__t_line1_dirty,
                          1,(IData)(vlSelf->top__DOT__line1_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__418__t_line1_dirty,
                      1,(IData)(vlSelf->top__DOT__line1_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 843, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__418__t_line0_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__418__t_line0_valid,
                          1,(IData)(vlSelf->top__DOT__line0_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__418__t_line0_valid,
                      1,(IData)(vlSelf->top__DOT__line0_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 849, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__418__t_line1_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__418__t_line1_valid,
                          1,(IData)(vlSelf->top__DOT__line1_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__418__t_line1_valid,
                      1,(IData)(vlSelf->top__DOT__line1_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 855, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__418__t_incoming_mem_type)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("incoming_mem_type is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__418__t_incoming_mem_type,
                          1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("incoming_mem_type is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__418__t_incoming_mem_type,
                      1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 861, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__418__t_req_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("req_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__418__t_req_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("req_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__418__t_req_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 867, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__418__t_resp_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("resp_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__418__t_resp_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("resp_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__418__t_resp_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 873, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__all_flushed) 
                       == (IData)(__Vtask_top__DOT__test_outputs__418__t_all_flushed)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("all_flushed is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__418__t_all_flushed,
                          1,(IData)(vlSelf->top__DOT__all_flushed));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("all_flushed is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__418__t_all_flushed,
                      1,(IData)(vlSelf->top__DOT__all_flushed));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 879, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                      >> 0x2cU))) == (IData)(__Vtask_top__DOT__test_outputs__418__t_memresp_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__418__t_memresp_msg_type_,
                          3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                           >> 0x2cU))));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__418__t_memresp_msg_type_,
                      3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                       >> 0x2cU))));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 885, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__memresp_msg) 
                       == __Vtask_top__DOT__test_outputs__418__t_memresp_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__418__t_memresp_msg_data,
                          32,(IData)(vlSelf->top__DOT__memresp_msg));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__418__t_memresp_msg_data,
                      32,(IData)(vlSelf->top__DOT__memresp_msg));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 891, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__418__t_cache_req_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__418__t_cache_req_msg_type_,
                          3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__418__t_cache_req_msg_type_,
                      3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 897, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((((vlSelf->top__DOT__cache_req_msg[2U] 
                         << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                      >> 2U)) == __Vtask_top__DOT__test_outputs__418__t_cache_req_msg_addr))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.addr is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__418__t_cache_req_msg_addr,
                          32,((vlSelf->top__DOT__cache_req_msg[2U] 
                               << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                            >> 2U)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.addr is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__418__t_cache_req_msg_addr,
                      32,((vlSelf->top__DOT__cache_req_msg[2U] 
                           << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                        >> 2U)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 903, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__cache_req_msg[0U] 
                       == __Vtask_top__DOT__test_outputs__418__t_cache_req_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__418__t_cache_req_msg_data,
                          32,vlSelf->top__DOT__cache_req_msg[0U]);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__418__t_cache_req_msg_data,
                      32,vlSelf->top__DOT__cache_req_msg[0U]);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 909, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__d_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__418__t_d_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.d_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__418__t_d_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.d_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__418__t_d_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 915, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__418__t_write_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__418__t_write_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__418__t_write_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 921, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__418__t_read_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.read_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__418__t_read_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.read_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__418__t_read_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 927, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__write_data 
                       == __Vtask_top__DOT__test_outputs__418__t_write_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__418__t_write_data,
                          32,vlSelf->top__DOT__DUT__DOT__write_data);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__418__t_write_data,
                      32,vlSelf->top__DOT__DUT__DOT__write_data);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 933, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty0 
                       == __Vtask_top__DOT__test_outputs__418__t_dirty0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__418__t_dirty0,
                          32,vlSelf->top__DOT__DUT__DOT__dirty0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__418__t_dirty0,
                      32,vlSelf->top__DOT__DUT__DOT__dirty0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 939, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty1 
                       == __Vtask_top__DOT__test_outputs__418__t_dirty1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__418__t_dirty1,
                          32,vlSelf->top__DOT__DUT__DOT__dirty1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__418__t_dirty1,
                      32,vlSelf->top__DOT__DUT__DOT__dirty1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 945, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid0 
                       == __Vtask_top__DOT__test_outputs__418__t_valid0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__418__t_valid0,
                          32,vlSelf->top__DOT__DUT__DOT__valid0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__418__t_valid0,
                      32,vlSelf->top__DOT__DUT__DOT__valid0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 951, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid1 
                       == __Vtask_top__DOT__test_outputs__418__t_valid1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__418__t_valid1,
                          32,vlSelf->top__DOT__DUT__DOT__valid1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__418__t_valid1,
                      32,vlSelf->top__DOT__DUT__DOT__valid1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 957, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__flush_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__418__t_flush_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.flush_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__418__t_flush_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.flush_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__418__t_flush_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 963, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0U == vlSelf->top__DOT__DUT__DOT__dirty0) 
                       == (IData)(__Vtask_top__DOT__test_outputs__418__t_flush_way_sel)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("flush_way_sel is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__418__t_flush_way_sel,
                          1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("flush_way_sel is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__418__t_flush_way_sel,
                      1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 969, "");
        }
    }
    vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__delay__469__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__469__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__469__unnamedblk6__DOT__i, __Vtask_top__DOT__delay__469__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_CacheAltDpath.v", 
                                           730);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__469__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__469__unnamedblk6__DOT__i);
    }
    vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\nRefilling initialize\n");
    __Vtask_top__DOT__set_inputs__470__t_way_select = 1U;
    __Vtask_top__DOT__set_inputs__470__t_cache_type = 0U;
    __Vtask_top__DOT__set_inputs__470__t_cache_data = 0xffffffffU;
    __Vtask_top__DOT__set_inputs__470__t_mem_type = 0U;
    __Vtask_top__DOT__set_inputs__470__t_mem_data = 0U;
    __Vtask_top__DOT__set_inputs__470__t_mem_addr = 0x16a0U;
    __Vtask_top__DOT__set_inputs__470__t_state = 3U;
    __Vtask_top__DOT__set_inputs__470__t_valid_set = 1U;
    __Vtask_top__DOT__set_inputs__470__t_dirty_set = 0U;
    __Vtask_top__DOT__set_inputs__470__t_clean_set = 0U;
    __Vtask_top__DOT__set_inputs__470__t_mem_action = 0U;
    __Vtask_top__DOT__set_inputs__470__t_read_word_sel = 0U;
    __Vtask_top__DOT__set_inputs__470__t_write_word_sel = 1U;
    __Vtask_top__DOT__set_inputs__470__t_index_sel = 0U;
    __Vtask_top__DOT__set_inputs__470__t_darray_wen = 1U;
    __Vtask_top__DOT__set_inputs__470__t_darray_en = 1U;
    __Vtask_top__DOT__set_inputs__470__t_write_data_sel = 1U;
    __Vtask_top__DOT__set_inputs__470__t_count_reset = 0U;
    __Vtask_top__DOT__set_inputs__470__t_resp_count_en = 1U;
    __Vtask_top__DOT__set_inputs__470__t_req_count_en = 1U;
    __Vtask_top__DOT__set_inputs__470__t_tarray_wen = 1U;
    __Vtask_top__DOT__set_inputs__470__t_tarray_en = 1U;
    __Vtask_top__DOT__set_inputs__470__t_input_en = 0U;
    __Vtask_top__DOT__set_inputs__470__t_flush_done = 0U;
    __Vtask_top__DOT__set_inputs__470__t_flush = 0U;
    vlSelf->top__DOT__flush = __Vtask_top__DOT__set_inputs__470__t_flush;
    vlSelf->top__DOT__flush_done = __Vtask_top__DOT__set_inputs__470__t_flush_done;
    vlSelf->top__DOT__input_en = __Vtask_top__DOT__set_inputs__470__t_input_en;
    vlSelf->top__DOT__tarray_en = __Vtask_top__DOT__set_inputs__470__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = __Vtask_top__DOT__set_inputs__470__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = __Vtask_top__DOT__set_inputs__470__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = __Vtask_top__DOT__set_inputs__470__t_resp_count_en;
    vlSelf->top__DOT__count_reset = __Vtask_top__DOT__set_inputs__470__t_count_reset;
    vlSelf->top__DOT__write_data_sel = __Vtask_top__DOT__set_inputs__470__t_write_data_sel;
    vlSelf->top__DOT__darray_en = __Vtask_top__DOT__set_inputs__470__t_darray_en;
    vlSelf->top__DOT__darray_wen = __Vtask_top__DOT__set_inputs__470__t_darray_wen;
    vlSelf->top__DOT__index_sel = __Vtask_top__DOT__set_inputs__470__t_index_sel;
    vlSelf->top__DOT__write_word_sel = __Vtask_top__DOT__set_inputs__470__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = __Vtask_top__DOT__set_inputs__470__t_read_word_sel;
    vlSelf->top__DOT__mem_action = __Vtask_top__DOT__set_inputs__470__t_mem_action;
    vlSelf->top__DOT__clean_set = __Vtask_top__DOT__set_inputs__470__t_clean_set;
    vlSelf->top__DOT__dirty_set = __Vtask_top__DOT__set_inputs__470__t_dirty_set;
    vlSelf->top__DOT__valid_set = __Vtask_top__DOT__set_inputs__470__t_valid_set;
    vlSelf->top__DOT__state = __Vtask_top__DOT__set_inputs__470__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (__Vtask_top__DOT__set_inputs__470__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (__Vtask_top__DOT__set_inputs__470__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = __Vtask_top__DOT__set_inputs__470__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(__Vtask_top__DOT__set_inputs__470__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(__Vtask_top__DOT__set_inputs__470__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(__Vtask_top__DOT__set_inputs__470__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = __Vtask_top__DOT__set_inputs__470__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       274);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    __Vtask_top__DOT__test_outputs__471__t_flush_way_sel = 1U;
    __Vtask_top__DOT__test_outputs__471__t_flush_index = 0U;
    __Vtask_top__DOT__test_outputs__471__t_valid1 = 0x4000000U;
    __Vtask_top__DOT__test_outputs__471__t_valid0 = 0x80000000U;
    __Vtask_top__DOT__test_outputs__471__t_dirty1 = 0U;
    __Vtask_top__DOT__test_outputs__471__t_dirty0 = 0U;
    __Vtask_top__DOT__test_outputs__471__t_write_data = 0xffffffffU;
    __Vtask_top__DOT__test_outputs__471__t_read_word_offset = 8U;
    __Vtask_top__DOT__test_outputs__471__t_write_word_offset = 1U;
    __Vtask_top__DOT__test_outputs__471__t_d_index = 0x1aU;
    __Vtask_top__DOT__test_outputs__471__t_cache_req_msg_data = 0U;
    __Vtask_top__DOT__test_outputs__471__t_cache_req_msg_addr = 0x1684U;
    __Vtask_top__DOT__test_outputs__471__t_cache_req_msg_type_ = 0U;
    __Vtask_top__DOT__test_outputs__471__t_memresp_msg_data = 0U;
    __Vtask_top__DOT__test_outputs__471__t_memresp_msg_type_ = 0U;
    __Vtask_top__DOT__test_outputs__471__t_all_flushed = 1U;
    __Vtask_top__DOT__test_outputs__471__t_resp_count_done = 0U;
    __Vtask_top__DOT__test_outputs__471__t_req_count_done = 0U;
    __Vtask_top__DOT__test_outputs__471__t_incoming_mem_type = 0U;
    __Vtask_top__DOT__test_outputs__471__t_line1_valid = 1U;
    __Vtask_top__DOT__test_outputs__471__t_line0_valid = 0U;
    __Vtask_top__DOT__test_outputs__471__t_line1_dirty = 0U;
    __Vtask_top__DOT__test_outputs__471__t_line0_dirty = 0U;
    __Vtask_top__DOT__test_outputs__471__t_tarray1_match = 1U;
    __Vtask_top__DOT__test_outputs__471__t_tarray0_match = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray0_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__471__t_tarray0_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray0_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__471__t_tarray0_match,
                          1,(IData)(vlSelf->top__DOT__tarray0_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray0_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__471__t_tarray0_match,
                      1,(IData)(vlSelf->top__DOT__tarray0_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 825, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray1_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__471__t_tarray1_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray1_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__471__t_tarray1_match,
                          1,(IData)(vlSelf->top__DOT__tarray1_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray1_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__471__t_tarray1_match,
                      1,(IData)(vlSelf->top__DOT__tarray1_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 831, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__471__t_line0_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__471__t_line0_dirty,
                          1,(IData)(vlSelf->top__DOT__line0_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__471__t_line0_dirty,
                      1,(IData)(vlSelf->top__DOT__line0_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 837, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__471__t_line1_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__471__t_line1_dirty,
                          1,(IData)(vlSelf->top__DOT__line1_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__471__t_line1_dirty,
                      1,(IData)(vlSelf->top__DOT__line1_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 843, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__471__t_line0_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__471__t_line0_valid,
                          1,(IData)(vlSelf->top__DOT__line0_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__471__t_line0_valid,
                      1,(IData)(vlSelf->top__DOT__line0_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 849, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__471__t_line1_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__471__t_line1_valid,
                          1,(IData)(vlSelf->top__DOT__line1_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__471__t_line1_valid,
                      1,(IData)(vlSelf->top__DOT__line1_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 855, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__471__t_incoming_mem_type)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("incoming_mem_type is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__471__t_incoming_mem_type,
                          1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("incoming_mem_type is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__471__t_incoming_mem_type,
                      1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 861, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__471__t_req_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("req_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__471__t_req_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("req_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__471__t_req_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 867, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__471__t_resp_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("resp_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__471__t_resp_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("resp_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__471__t_resp_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 873, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__all_flushed) 
                       == (IData)(__Vtask_top__DOT__test_outputs__471__t_all_flushed)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("all_flushed is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__471__t_all_flushed,
                          1,(IData)(vlSelf->top__DOT__all_flushed));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("all_flushed is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__471__t_all_flushed,
                      1,(IData)(vlSelf->top__DOT__all_flushed));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 879, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                      >> 0x2cU))) == (IData)(__Vtask_top__DOT__test_outputs__471__t_memresp_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__471__t_memresp_msg_type_,
                          3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                           >> 0x2cU))));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__471__t_memresp_msg_type_,
                      3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                       >> 0x2cU))));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 885, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__memresp_msg) 
                       == __Vtask_top__DOT__test_outputs__471__t_memresp_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__471__t_memresp_msg_data,
                          32,(IData)(vlSelf->top__DOT__memresp_msg));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__471__t_memresp_msg_data,
                      32,(IData)(vlSelf->top__DOT__memresp_msg));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 891, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__471__t_cache_req_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__471__t_cache_req_msg_type_,
                          3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__471__t_cache_req_msg_type_,
                      3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 897, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((((vlSelf->top__DOT__cache_req_msg[2U] 
                         << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                      >> 2U)) == __Vtask_top__DOT__test_outputs__471__t_cache_req_msg_addr))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.addr is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__471__t_cache_req_msg_addr,
                          32,((vlSelf->top__DOT__cache_req_msg[2U] 
                               << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                            >> 2U)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.addr is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__471__t_cache_req_msg_addr,
                      32,((vlSelf->top__DOT__cache_req_msg[2U] 
                           << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                        >> 2U)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 903, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__cache_req_msg[0U] 
                       == __Vtask_top__DOT__test_outputs__471__t_cache_req_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__471__t_cache_req_msg_data,
                          32,vlSelf->top__DOT__cache_req_msg[0U]);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__471__t_cache_req_msg_data,
                      32,vlSelf->top__DOT__cache_req_msg[0U]);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 909, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__d_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__471__t_d_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.d_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__471__t_d_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.d_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__471__t_d_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 915, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__471__t_write_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__471__t_write_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__471__t_write_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 921, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__471__t_read_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.read_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__471__t_read_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.read_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__471__t_read_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 927, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__write_data 
                       == __Vtask_top__DOT__test_outputs__471__t_write_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__471__t_write_data,
                          32,vlSelf->top__DOT__DUT__DOT__write_data);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__471__t_write_data,
                      32,vlSelf->top__DOT__DUT__DOT__write_data);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 933, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty0 
                       == __Vtask_top__DOT__test_outputs__471__t_dirty0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__471__t_dirty0,
                          32,vlSelf->top__DOT__DUT__DOT__dirty0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__471__t_dirty0,
                      32,vlSelf->top__DOT__DUT__DOT__dirty0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 939, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty1 
                       == __Vtask_top__DOT__test_outputs__471__t_dirty1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__471__t_dirty1,
                          32,vlSelf->top__DOT__DUT__DOT__dirty1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__471__t_dirty1,
                      32,vlSelf->top__DOT__DUT__DOT__dirty1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 945, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid0 
                       == __Vtask_top__DOT__test_outputs__471__t_valid0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__471__t_valid0,
                          32,vlSelf->top__DOT__DUT__DOT__valid0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__471__t_valid0,
                      32,vlSelf->top__DOT__DUT__DOT__valid0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 951, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid1 
                       == __Vtask_top__DOT__test_outputs__471__t_valid1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__471__t_valid1,
                          32,vlSelf->top__DOT__DUT__DOT__valid1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__471__t_valid1,
                      32,vlSelf->top__DOT__DUT__DOT__valid1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 957, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__flush_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__471__t_flush_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.flush_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__471__t_flush_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.flush_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__471__t_flush_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 963, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0U == vlSelf->top__DOT__DUT__DOT__dirty0) 
                       == (IData)(__Vtask_top__DOT__test_outputs__471__t_flush_way_sel)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("flush_way_sel is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__471__t_flush_way_sel,
                          1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("flush_way_sel is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__471__t_flush_way_sel,
                      1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 969, "");
        }
    }
    vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\nRefilling cycle 1\n");
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       282);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    __Vtask_top__DOT__test_outputs__522__t_flush_way_sel = 1U;
    __Vtask_top__DOT__test_outputs__522__t_flush_index = 0U;
    __Vtask_top__DOT__test_outputs__522__t_valid1 = 0x4000000U;
    __Vtask_top__DOT__test_outputs__522__t_valid0 = 0x80000000U;
    __Vtask_top__DOT__test_outputs__522__t_dirty1 = 0U;
    __Vtask_top__DOT__test_outputs__522__t_dirty0 = 0U;
    __Vtask_top__DOT__test_outputs__522__t_write_data = 0xffffffffU;
    __Vtask_top__DOT__test_outputs__522__t_read_word_offset = 8U;
    __Vtask_top__DOT__test_outputs__522__t_write_word_offset = 2U;
    __Vtask_top__DOT__test_outputs__522__t_d_index = 0x1aU;
    __Vtask_top__DOT__test_outputs__522__t_cache_req_msg_data = 0U;
    __Vtask_top__DOT__test_outputs__522__t_cache_req_msg_addr = 0x1688U;
    __Vtask_top__DOT__test_outputs__522__t_cache_req_msg_type_ = 0U;
    __Vtask_top__DOT__test_outputs__522__t_memresp_msg_data = 0U;
    __Vtask_top__DOT__test_outputs__522__t_memresp_msg_type_ = 0U;
    __Vtask_top__DOT__test_outputs__522__t_all_flushed = 1U;
    __Vtask_top__DOT__test_outputs__522__t_resp_count_done = 0U;
    __Vtask_top__DOT__test_outputs__522__t_req_count_done = 0U;
    __Vtask_top__DOT__test_outputs__522__t_incoming_mem_type = 0U;
    __Vtask_top__DOT__test_outputs__522__t_line1_valid = 1U;
    __Vtask_top__DOT__test_outputs__522__t_line0_valid = 0U;
    __Vtask_top__DOT__test_outputs__522__t_line1_dirty = 0U;
    __Vtask_top__DOT__test_outputs__522__t_line0_dirty = 0U;
    __Vtask_top__DOT__test_outputs__522__t_tarray1_match = 1U;
    __Vtask_top__DOT__test_outputs__522__t_tarray0_match = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray0_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__522__t_tarray0_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray0_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__522__t_tarray0_match,
                          1,(IData)(vlSelf->top__DOT__tarray0_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray0_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__522__t_tarray0_match,
                      1,(IData)(vlSelf->top__DOT__tarray0_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 825, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray1_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__522__t_tarray1_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray1_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__522__t_tarray1_match,
                          1,(IData)(vlSelf->top__DOT__tarray1_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray1_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__522__t_tarray1_match,
                      1,(IData)(vlSelf->top__DOT__tarray1_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 831, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__522__t_line0_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__522__t_line0_dirty,
                          1,(IData)(vlSelf->top__DOT__line0_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__522__t_line0_dirty,
                      1,(IData)(vlSelf->top__DOT__line0_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 837, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__522__t_line1_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__522__t_line1_dirty,
                          1,(IData)(vlSelf->top__DOT__line1_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__522__t_line1_dirty,
                      1,(IData)(vlSelf->top__DOT__line1_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 843, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__522__t_line0_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__522__t_line0_valid,
                          1,(IData)(vlSelf->top__DOT__line0_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__522__t_line0_valid,
                      1,(IData)(vlSelf->top__DOT__line0_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 849, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__522__t_line1_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__522__t_line1_valid,
                          1,(IData)(vlSelf->top__DOT__line1_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__522__t_line1_valid,
                      1,(IData)(vlSelf->top__DOT__line1_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 855, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__522__t_incoming_mem_type)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("incoming_mem_type is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__522__t_incoming_mem_type,
                          1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("incoming_mem_type is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__522__t_incoming_mem_type,
                      1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 861, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__522__t_req_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("req_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__522__t_req_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("req_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__522__t_req_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 867, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__522__t_resp_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("resp_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__522__t_resp_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("resp_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__522__t_resp_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 873, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__all_flushed) 
                       == (IData)(__Vtask_top__DOT__test_outputs__522__t_all_flushed)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("all_flushed is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__522__t_all_flushed,
                          1,(IData)(vlSelf->top__DOT__all_flushed));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("all_flushed is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__522__t_all_flushed,
                      1,(IData)(vlSelf->top__DOT__all_flushed));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 879, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                      >> 0x2cU))) == (IData)(__Vtask_top__DOT__test_outputs__522__t_memresp_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__522__t_memresp_msg_type_,
                          3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                           >> 0x2cU))));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__522__t_memresp_msg_type_,
                      3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                       >> 0x2cU))));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 885, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__memresp_msg) 
                       == __Vtask_top__DOT__test_outputs__522__t_memresp_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__522__t_memresp_msg_data,
                          32,(IData)(vlSelf->top__DOT__memresp_msg));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__522__t_memresp_msg_data,
                      32,(IData)(vlSelf->top__DOT__memresp_msg));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 891, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__522__t_cache_req_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__522__t_cache_req_msg_type_,
                          3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__522__t_cache_req_msg_type_,
                      3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 897, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((((vlSelf->top__DOT__cache_req_msg[2U] 
                         << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                      >> 2U)) == __Vtask_top__DOT__test_outputs__522__t_cache_req_msg_addr))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.addr is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__522__t_cache_req_msg_addr,
                          32,((vlSelf->top__DOT__cache_req_msg[2U] 
                               << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                            >> 2U)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.addr is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__522__t_cache_req_msg_addr,
                      32,((vlSelf->top__DOT__cache_req_msg[2U] 
                           << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                        >> 2U)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 903, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__cache_req_msg[0U] 
                       == __Vtask_top__DOT__test_outputs__522__t_cache_req_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__522__t_cache_req_msg_data,
                          32,vlSelf->top__DOT__cache_req_msg[0U]);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__522__t_cache_req_msg_data,
                      32,vlSelf->top__DOT__cache_req_msg[0U]);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 909, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__d_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__522__t_d_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.d_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__522__t_d_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.d_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__522__t_d_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 915, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__522__t_write_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__522__t_write_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__522__t_write_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 921, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__522__t_read_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.read_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__522__t_read_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.read_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__522__t_read_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 927, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__write_data 
                       == __Vtask_top__DOT__test_outputs__522__t_write_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__522__t_write_data,
                          32,vlSelf->top__DOT__DUT__DOT__write_data);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__522__t_write_data,
                      32,vlSelf->top__DOT__DUT__DOT__write_data);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 933, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty0 
                       == __Vtask_top__DOT__test_outputs__522__t_dirty0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__522__t_dirty0,
                          32,vlSelf->top__DOT__DUT__DOT__dirty0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__522__t_dirty0,
                      32,vlSelf->top__DOT__DUT__DOT__dirty0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 939, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty1 
                       == __Vtask_top__DOT__test_outputs__522__t_dirty1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__522__t_dirty1,
                          32,vlSelf->top__DOT__DUT__DOT__dirty1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__522__t_dirty1,
                      32,vlSelf->top__DOT__DUT__DOT__dirty1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 945, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid0 
                       == __Vtask_top__DOT__test_outputs__522__t_valid0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__522__t_valid0,
                          32,vlSelf->top__DOT__DUT__DOT__valid0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__522__t_valid0,
                      32,vlSelf->top__DOT__DUT__DOT__valid0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 951, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid1 
                       == __Vtask_top__DOT__test_outputs__522__t_valid1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__522__t_valid1,
                          32,vlSelf->top__DOT__DUT__DOT__valid1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__522__t_valid1,
                      32,vlSelf->top__DOT__DUT__DOT__valid1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 957, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__flush_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__522__t_flush_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.flush_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__522__t_flush_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.flush_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__522__t_flush_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 963, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0U == vlSelf->top__DOT__DUT__DOT__dirty0) 
                       == (IData)(__Vtask_top__DOT__test_outputs__522__t_flush_way_sel)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("flush_way_sel is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__522__t_flush_way_sel,
                          1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("flush_way_sel is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__522__t_flush_way_sel,
                      1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 969, "");
        }
    }
    vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\nRefilling cycle 2\n");
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       290);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    __Vtask_top__DOT__test_outputs__573__t_flush_way_sel = 1U;
    __Vtask_top__DOT__test_outputs__573__t_flush_index = 0U;
    __Vtask_top__DOT__test_outputs__573__t_valid1 = 0x4000000U;
    __Vtask_top__DOT__test_outputs__573__t_valid0 = 0x80000000U;
    __Vtask_top__DOT__test_outputs__573__t_dirty1 = 0U;
    __Vtask_top__DOT__test_outputs__573__t_dirty0 = 0U;
    __Vtask_top__DOT__test_outputs__573__t_write_data = 0xffffffffU;
    __Vtask_top__DOT__test_outputs__573__t_read_word_offset = 8U;
    __Vtask_top__DOT__test_outputs__573__t_write_word_offset = 3U;
    __Vtask_top__DOT__test_outputs__573__t_d_index = 0x1aU;
    __Vtask_top__DOT__test_outputs__573__t_cache_req_msg_data = 0U;
    __Vtask_top__DOT__test_outputs__573__t_cache_req_msg_addr = 0x168cU;
    __Vtask_top__DOT__test_outputs__573__t_cache_req_msg_type_ = 0U;
    __Vtask_top__DOT__test_outputs__573__t_memresp_msg_data = 0U;
    __Vtask_top__DOT__test_outputs__573__t_memresp_msg_type_ = 0U;
    __Vtask_top__DOT__test_outputs__573__t_all_flushed = 1U;
    __Vtask_top__DOT__test_outputs__573__t_resp_count_done = 0U;
    __Vtask_top__DOT__test_outputs__573__t_req_count_done = 0U;
    __Vtask_top__DOT__test_outputs__573__t_incoming_mem_type = 0U;
    __Vtask_top__DOT__test_outputs__573__t_line1_valid = 1U;
    __Vtask_top__DOT__test_outputs__573__t_line0_valid = 0U;
    __Vtask_top__DOT__test_outputs__573__t_line1_dirty = 0U;
    __Vtask_top__DOT__test_outputs__573__t_line0_dirty = 0U;
    __Vtask_top__DOT__test_outputs__573__t_tarray1_match = 1U;
    __Vtask_top__DOT__test_outputs__573__t_tarray0_match = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray0_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__573__t_tarray0_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray0_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__573__t_tarray0_match,
                          1,(IData)(vlSelf->top__DOT__tarray0_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray0_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__573__t_tarray0_match,
                      1,(IData)(vlSelf->top__DOT__tarray0_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 825, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray1_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__573__t_tarray1_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray1_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__573__t_tarray1_match,
                          1,(IData)(vlSelf->top__DOT__tarray1_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray1_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__573__t_tarray1_match,
                      1,(IData)(vlSelf->top__DOT__tarray1_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 831, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__573__t_line0_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__573__t_line0_dirty,
                          1,(IData)(vlSelf->top__DOT__line0_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__573__t_line0_dirty,
                      1,(IData)(vlSelf->top__DOT__line0_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 837, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__573__t_line1_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__573__t_line1_dirty,
                          1,(IData)(vlSelf->top__DOT__line1_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__573__t_line1_dirty,
                      1,(IData)(vlSelf->top__DOT__line1_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 843, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__573__t_line0_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__573__t_line0_valid,
                          1,(IData)(vlSelf->top__DOT__line0_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__573__t_line0_valid,
                      1,(IData)(vlSelf->top__DOT__line0_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 849, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__573__t_line1_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__573__t_line1_valid,
                          1,(IData)(vlSelf->top__DOT__line1_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__573__t_line1_valid,
                      1,(IData)(vlSelf->top__DOT__line1_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 855, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__573__t_incoming_mem_type)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("incoming_mem_type is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__573__t_incoming_mem_type,
                          1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("incoming_mem_type is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__573__t_incoming_mem_type,
                      1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 861, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__573__t_req_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("req_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__573__t_req_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("req_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__573__t_req_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 867, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__573__t_resp_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("resp_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__573__t_resp_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("resp_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__573__t_resp_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 873, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__all_flushed) 
                       == (IData)(__Vtask_top__DOT__test_outputs__573__t_all_flushed)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("all_flushed is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__573__t_all_flushed,
                          1,(IData)(vlSelf->top__DOT__all_flushed));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("all_flushed is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__573__t_all_flushed,
                      1,(IData)(vlSelf->top__DOT__all_flushed));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 879, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                      >> 0x2cU))) == (IData)(__Vtask_top__DOT__test_outputs__573__t_memresp_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__573__t_memresp_msg_type_,
                          3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                           >> 0x2cU))));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__573__t_memresp_msg_type_,
                      3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                       >> 0x2cU))));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 885, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__memresp_msg) 
                       == __Vtask_top__DOT__test_outputs__573__t_memresp_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__573__t_memresp_msg_data,
                          32,(IData)(vlSelf->top__DOT__memresp_msg));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__573__t_memresp_msg_data,
                      32,(IData)(vlSelf->top__DOT__memresp_msg));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 891, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__573__t_cache_req_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__573__t_cache_req_msg_type_,
                          3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__573__t_cache_req_msg_type_,
                      3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 897, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((((vlSelf->top__DOT__cache_req_msg[2U] 
                         << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                      >> 2U)) == __Vtask_top__DOT__test_outputs__573__t_cache_req_msg_addr))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.addr is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__573__t_cache_req_msg_addr,
                          32,((vlSelf->top__DOT__cache_req_msg[2U] 
                               << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                            >> 2U)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.addr is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__573__t_cache_req_msg_addr,
                      32,((vlSelf->top__DOT__cache_req_msg[2U] 
                           << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                        >> 2U)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 903, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__cache_req_msg[0U] 
                       == __Vtask_top__DOT__test_outputs__573__t_cache_req_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__573__t_cache_req_msg_data,
                          32,vlSelf->top__DOT__cache_req_msg[0U]);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__573__t_cache_req_msg_data,
                      32,vlSelf->top__DOT__cache_req_msg[0U]);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 909, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__d_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__573__t_d_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.d_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__573__t_d_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.d_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__573__t_d_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 915, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__573__t_write_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__573__t_write_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__573__t_write_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 921, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__573__t_read_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.read_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__573__t_read_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.read_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__573__t_read_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 927, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__write_data 
                       == __Vtask_top__DOT__test_outputs__573__t_write_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__573__t_write_data,
                          32,vlSelf->top__DOT__DUT__DOT__write_data);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__573__t_write_data,
                      32,vlSelf->top__DOT__DUT__DOT__write_data);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 933, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty0 
                       == __Vtask_top__DOT__test_outputs__573__t_dirty0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__573__t_dirty0,
                          32,vlSelf->top__DOT__DUT__DOT__dirty0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__573__t_dirty0,
                      32,vlSelf->top__DOT__DUT__DOT__dirty0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 939, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty1 
                       == __Vtask_top__DOT__test_outputs__573__t_dirty1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__573__t_dirty1,
                          32,vlSelf->top__DOT__DUT__DOT__dirty1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__573__t_dirty1,
                      32,vlSelf->top__DOT__DUT__DOT__dirty1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 945, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid0 
                       == __Vtask_top__DOT__test_outputs__573__t_valid0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__573__t_valid0,
                          32,vlSelf->top__DOT__DUT__DOT__valid0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__573__t_valid0,
                      32,vlSelf->top__DOT__DUT__DOT__valid0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 951, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid1 
                       == __Vtask_top__DOT__test_outputs__573__t_valid1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__573__t_valid1,
                          32,vlSelf->top__DOT__DUT__DOT__valid1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__573__t_valid1,
                      32,vlSelf->top__DOT__DUT__DOT__valid1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 957, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__flush_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__573__t_flush_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.flush_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__573__t_flush_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.flush_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__573__t_flush_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 963, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0U == vlSelf->top__DOT__DUT__DOT__dirty0) 
                       == (IData)(__Vtask_top__DOT__test_outputs__573__t_flush_way_sel)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("flush_way_sel is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__573__t_flush_way_sel,
                          1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("flush_way_sel is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__573__t_flush_way_sel,
                      1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 969, "");
        }
    }
    vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       296);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    VL_WRITEF("\nDisable counters, save state until reenabled\n");
    __Vtask_top__DOT__set_inputs__624__t_way_select = 1U;
    __Vtask_top__DOT__set_inputs__624__t_cache_type = 0U;
    __Vtask_top__DOT__set_inputs__624__t_cache_data = 0xffffffffU;
    __Vtask_top__DOT__set_inputs__624__t_mem_type = 0U;
    __Vtask_top__DOT__set_inputs__624__t_mem_data = 0U;
    __Vtask_top__DOT__set_inputs__624__t_mem_addr = 0x16a0U;
    __Vtask_top__DOT__set_inputs__624__t_state = 3U;
    __Vtask_top__DOT__set_inputs__624__t_valid_set = 1U;
    __Vtask_top__DOT__set_inputs__624__t_dirty_set = 0U;
    __Vtask_top__DOT__set_inputs__624__t_clean_set = 0U;
    __Vtask_top__DOT__set_inputs__624__t_mem_action = 0U;
    __Vtask_top__DOT__set_inputs__624__t_read_word_sel = 0U;
    __Vtask_top__DOT__set_inputs__624__t_write_word_sel = 1U;
    __Vtask_top__DOT__set_inputs__624__t_index_sel = 0U;
    __Vtask_top__DOT__set_inputs__624__t_darray_wen = 1U;
    __Vtask_top__DOT__set_inputs__624__t_darray_en = 1U;
    __Vtask_top__DOT__set_inputs__624__t_write_data_sel = 1U;
    __Vtask_top__DOT__set_inputs__624__t_count_reset = 0U;
    __Vtask_top__DOT__set_inputs__624__t_resp_count_en = 0U;
    __Vtask_top__DOT__set_inputs__624__t_req_count_en = 0U;
    __Vtask_top__DOT__set_inputs__624__t_tarray_wen = 1U;
    __Vtask_top__DOT__set_inputs__624__t_tarray_en = 1U;
    __Vtask_top__DOT__set_inputs__624__t_input_en = 0U;
    __Vtask_top__DOT__set_inputs__624__t_flush_done = 0U;
    __Vtask_top__DOT__set_inputs__624__t_flush = 0U;
    vlSelf->top__DOT__flush = __Vtask_top__DOT__set_inputs__624__t_flush;
    vlSelf->top__DOT__flush_done = __Vtask_top__DOT__set_inputs__624__t_flush_done;
    vlSelf->top__DOT__input_en = __Vtask_top__DOT__set_inputs__624__t_input_en;
    vlSelf->top__DOT__tarray_en = __Vtask_top__DOT__set_inputs__624__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = __Vtask_top__DOT__set_inputs__624__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = __Vtask_top__DOT__set_inputs__624__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = __Vtask_top__DOT__set_inputs__624__t_resp_count_en;
    vlSelf->top__DOT__count_reset = __Vtask_top__DOT__set_inputs__624__t_count_reset;
    vlSelf->top__DOT__write_data_sel = __Vtask_top__DOT__set_inputs__624__t_write_data_sel;
    vlSelf->top__DOT__darray_en = __Vtask_top__DOT__set_inputs__624__t_darray_en;
    vlSelf->top__DOT__darray_wen = __Vtask_top__DOT__set_inputs__624__t_darray_wen;
    vlSelf->top__DOT__index_sel = __Vtask_top__DOT__set_inputs__624__t_index_sel;
    vlSelf->top__DOT__write_word_sel = __Vtask_top__DOT__set_inputs__624__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = __Vtask_top__DOT__set_inputs__624__t_read_word_sel;
    vlSelf->top__DOT__mem_action = __Vtask_top__DOT__set_inputs__624__t_mem_action;
    vlSelf->top__DOT__clean_set = __Vtask_top__DOT__set_inputs__624__t_clean_set;
    vlSelf->top__DOT__dirty_set = __Vtask_top__DOT__set_inputs__624__t_dirty_set;
    vlSelf->top__DOT__valid_set = __Vtask_top__DOT__set_inputs__624__t_valid_set;
    vlSelf->top__DOT__state = __Vtask_top__DOT__set_inputs__624__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (__Vtask_top__DOT__set_inputs__624__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (__Vtask_top__DOT__set_inputs__624__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = __Vtask_top__DOT__set_inputs__624__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(__Vtask_top__DOT__set_inputs__624__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(__Vtask_top__DOT__set_inputs__624__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(__Vtask_top__DOT__set_inputs__624__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = __Vtask_top__DOT__set_inputs__624__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__delay__625__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__625__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__625__unnamedblk6__DOT__i, __Vtask_top__DOT__delay__625__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_CacheAltDpath.v", 
                                           730);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__625__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__625__unnamedblk6__DOT__i);
    }
    vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_outputs__626__t_flush_way_sel = 1U;
    __Vtask_top__DOT__test_outputs__626__t_flush_index = 0U;
    __Vtask_top__DOT__test_outputs__626__t_valid1 = 0x4000000U;
    __Vtask_top__DOT__test_outputs__626__t_valid0 = 0x80000000U;
    __Vtask_top__DOT__test_outputs__626__t_dirty1 = 0U;
    __Vtask_top__DOT__test_outputs__626__t_dirty0 = 0U;
    __Vtask_top__DOT__test_outputs__626__t_write_data = 0xffffffffU;
    __Vtask_top__DOT__test_outputs__626__t_read_word_offset = 8U;
    __Vtask_top__DOT__test_outputs__626__t_write_word_offset = 4U;
    __Vtask_top__DOT__test_outputs__626__t_d_index = 0x1aU;
    __Vtask_top__DOT__test_outputs__626__t_cache_req_msg_data = 0U;
    __Vtask_top__DOT__test_outputs__626__t_cache_req_msg_addr = 0x1690U;
    __Vtask_top__DOT__test_outputs__626__t_cache_req_msg_type_ = 0U;
    __Vtask_top__DOT__test_outputs__626__t_memresp_msg_data = 0U;
    __Vtask_top__DOT__test_outputs__626__t_memresp_msg_type_ = 0U;
    __Vtask_top__DOT__test_outputs__626__t_all_flushed = 1U;
    __Vtask_top__DOT__test_outputs__626__t_resp_count_done = 0U;
    __Vtask_top__DOT__test_outputs__626__t_req_count_done = 0U;
    __Vtask_top__DOT__test_outputs__626__t_incoming_mem_type = 0U;
    __Vtask_top__DOT__test_outputs__626__t_line1_valid = 1U;
    __Vtask_top__DOT__test_outputs__626__t_line0_valid = 0U;
    __Vtask_top__DOT__test_outputs__626__t_line1_dirty = 0U;
    __Vtask_top__DOT__test_outputs__626__t_line0_dirty = 0U;
    __Vtask_top__DOT__test_outputs__626__t_tarray1_match = 1U;
    __Vtask_top__DOT__test_outputs__626__t_tarray0_match = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray0_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__626__t_tarray0_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray0_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__626__t_tarray0_match,
                          1,(IData)(vlSelf->top__DOT__tarray0_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray0_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__626__t_tarray0_match,
                      1,(IData)(vlSelf->top__DOT__tarray0_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 825, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray1_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__626__t_tarray1_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray1_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__626__t_tarray1_match,
                          1,(IData)(vlSelf->top__DOT__tarray1_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray1_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__626__t_tarray1_match,
                      1,(IData)(vlSelf->top__DOT__tarray1_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 831, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__626__t_line0_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__626__t_line0_dirty,
                          1,(IData)(vlSelf->top__DOT__line0_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__626__t_line0_dirty,
                      1,(IData)(vlSelf->top__DOT__line0_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 837, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__626__t_line1_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__626__t_line1_dirty,
                          1,(IData)(vlSelf->top__DOT__line1_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__626__t_line1_dirty,
                      1,(IData)(vlSelf->top__DOT__line1_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 843, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__626__t_line0_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__626__t_line0_valid,
                          1,(IData)(vlSelf->top__DOT__line0_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__626__t_line0_valid,
                      1,(IData)(vlSelf->top__DOT__line0_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 849, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__626__t_line1_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__626__t_line1_valid,
                          1,(IData)(vlSelf->top__DOT__line1_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__626__t_line1_valid,
                      1,(IData)(vlSelf->top__DOT__line1_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 855, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__626__t_incoming_mem_type)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("incoming_mem_type is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__626__t_incoming_mem_type,
                          1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("incoming_mem_type is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__626__t_incoming_mem_type,
                      1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 861, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__626__t_req_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("req_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__626__t_req_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("req_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__626__t_req_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 867, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__626__t_resp_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("resp_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__626__t_resp_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("resp_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__626__t_resp_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 873, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__all_flushed) 
                       == (IData)(__Vtask_top__DOT__test_outputs__626__t_all_flushed)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("all_flushed is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__626__t_all_flushed,
                          1,(IData)(vlSelf->top__DOT__all_flushed));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("all_flushed is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__626__t_all_flushed,
                      1,(IData)(vlSelf->top__DOT__all_flushed));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 879, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                      >> 0x2cU))) == (IData)(__Vtask_top__DOT__test_outputs__626__t_memresp_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__626__t_memresp_msg_type_,
                          3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                           >> 0x2cU))));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__626__t_memresp_msg_type_,
                      3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                       >> 0x2cU))));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 885, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__memresp_msg) 
                       == __Vtask_top__DOT__test_outputs__626__t_memresp_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__626__t_memresp_msg_data,
                          32,(IData)(vlSelf->top__DOT__memresp_msg));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__626__t_memresp_msg_data,
                      32,(IData)(vlSelf->top__DOT__memresp_msg));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 891, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__626__t_cache_req_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__626__t_cache_req_msg_type_,
                          3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__626__t_cache_req_msg_type_,
                      3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 897, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((((vlSelf->top__DOT__cache_req_msg[2U] 
                         << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                      >> 2U)) == __Vtask_top__DOT__test_outputs__626__t_cache_req_msg_addr))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.addr is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__626__t_cache_req_msg_addr,
                          32,((vlSelf->top__DOT__cache_req_msg[2U] 
                               << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                            >> 2U)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.addr is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__626__t_cache_req_msg_addr,
                      32,((vlSelf->top__DOT__cache_req_msg[2U] 
                           << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                        >> 2U)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 903, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__cache_req_msg[0U] 
                       == __Vtask_top__DOT__test_outputs__626__t_cache_req_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__626__t_cache_req_msg_data,
                          32,vlSelf->top__DOT__cache_req_msg[0U]);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__626__t_cache_req_msg_data,
                      32,vlSelf->top__DOT__cache_req_msg[0U]);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 909, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__d_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__626__t_d_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.d_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__626__t_d_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.d_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__626__t_d_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 915, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__626__t_write_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__626__t_write_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__626__t_write_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 921, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__626__t_read_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.read_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__626__t_read_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.read_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__626__t_read_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 927, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__write_data 
                       == __Vtask_top__DOT__test_outputs__626__t_write_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__626__t_write_data,
                          32,vlSelf->top__DOT__DUT__DOT__write_data);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__626__t_write_data,
                      32,vlSelf->top__DOT__DUT__DOT__write_data);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 933, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty0 
                       == __Vtask_top__DOT__test_outputs__626__t_dirty0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__626__t_dirty0,
                          32,vlSelf->top__DOT__DUT__DOT__dirty0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__626__t_dirty0,
                      32,vlSelf->top__DOT__DUT__DOT__dirty0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 939, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty1 
                       == __Vtask_top__DOT__test_outputs__626__t_dirty1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__626__t_dirty1,
                          32,vlSelf->top__DOT__DUT__DOT__dirty1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__626__t_dirty1,
                      32,vlSelf->top__DOT__DUT__DOT__dirty1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 945, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid0 
                       == __Vtask_top__DOT__test_outputs__626__t_valid0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__626__t_valid0,
                          32,vlSelf->top__DOT__DUT__DOT__valid0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__626__t_valid0,
                      32,vlSelf->top__DOT__DUT__DOT__valid0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 951, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid1 
                       == __Vtask_top__DOT__test_outputs__626__t_valid1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__626__t_valid1,
                          32,vlSelf->top__DOT__DUT__DOT__valid1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__626__t_valid1,
                      32,vlSelf->top__DOT__DUT__DOT__valid1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 957, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__flush_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__626__t_flush_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.flush_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__626__t_flush_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.flush_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__626__t_flush_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 963, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0U == vlSelf->top__DOT__DUT__DOT__dirty0) 
                       == (IData)(__Vtask_top__DOT__test_outputs__626__t_flush_way_sel)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("flush_way_sel is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__626__t_flush_way_sel,
                          1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("flush_way_sel is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__626__t_flush_way_sel,
                      1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 969, "");
        }
    }
    vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       312);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    VL_WRITEF("\nReenable counters, cycle 4\n");
    __Vtask_top__DOT__set_inputs__677__t_way_select = 1U;
    __Vtask_top__DOT__set_inputs__677__t_cache_type = 0U;
    __Vtask_top__DOT__set_inputs__677__t_cache_data = 0xffffffffU;
    __Vtask_top__DOT__set_inputs__677__t_mem_type = 0U;
    __Vtask_top__DOT__set_inputs__677__t_mem_data = 0U;
    __Vtask_top__DOT__set_inputs__677__t_mem_addr = 0x16a0U;
    __Vtask_top__DOT__set_inputs__677__t_state = 3U;
    __Vtask_top__DOT__set_inputs__677__t_valid_set = 1U;
    __Vtask_top__DOT__set_inputs__677__t_dirty_set = 0U;
    __Vtask_top__DOT__set_inputs__677__t_clean_set = 0U;
    __Vtask_top__DOT__set_inputs__677__t_mem_action = 0U;
    __Vtask_top__DOT__set_inputs__677__t_read_word_sel = 0U;
    __Vtask_top__DOT__set_inputs__677__t_write_word_sel = 1U;
    __Vtask_top__DOT__set_inputs__677__t_index_sel = 0U;
    __Vtask_top__DOT__set_inputs__677__t_darray_wen = 1U;
    __Vtask_top__DOT__set_inputs__677__t_darray_en = 1U;
    __Vtask_top__DOT__set_inputs__677__t_write_data_sel = 1U;
    __Vtask_top__DOT__set_inputs__677__t_count_reset = 0U;
    __Vtask_top__DOT__set_inputs__677__t_resp_count_en = 1U;
    __Vtask_top__DOT__set_inputs__677__t_req_count_en = 1U;
    __Vtask_top__DOT__set_inputs__677__t_tarray_wen = 1U;
    __Vtask_top__DOT__set_inputs__677__t_tarray_en = 1U;
    __Vtask_top__DOT__set_inputs__677__t_input_en = 0U;
    __Vtask_top__DOT__set_inputs__677__t_flush_done = 0U;
    __Vtask_top__DOT__set_inputs__677__t_flush = 0U;
    vlSelf->top__DOT__flush = __Vtask_top__DOT__set_inputs__677__t_flush;
    vlSelf->top__DOT__flush_done = __Vtask_top__DOT__set_inputs__677__t_flush_done;
    vlSelf->top__DOT__input_en = __Vtask_top__DOT__set_inputs__677__t_input_en;
    vlSelf->top__DOT__tarray_en = __Vtask_top__DOT__set_inputs__677__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = __Vtask_top__DOT__set_inputs__677__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = __Vtask_top__DOT__set_inputs__677__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = __Vtask_top__DOT__set_inputs__677__t_resp_count_en;
    vlSelf->top__DOT__count_reset = __Vtask_top__DOT__set_inputs__677__t_count_reset;
    vlSelf->top__DOT__write_data_sel = __Vtask_top__DOT__set_inputs__677__t_write_data_sel;
    vlSelf->top__DOT__darray_en = __Vtask_top__DOT__set_inputs__677__t_darray_en;
    vlSelf->top__DOT__darray_wen = __Vtask_top__DOT__set_inputs__677__t_darray_wen;
    vlSelf->top__DOT__index_sel = __Vtask_top__DOT__set_inputs__677__t_index_sel;
    vlSelf->top__DOT__write_word_sel = __Vtask_top__DOT__set_inputs__677__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = __Vtask_top__DOT__set_inputs__677__t_read_word_sel;
    vlSelf->top__DOT__mem_action = __Vtask_top__DOT__set_inputs__677__t_mem_action;
    vlSelf->top__DOT__clean_set = __Vtask_top__DOT__set_inputs__677__t_clean_set;
    vlSelf->top__DOT__dirty_set = __Vtask_top__DOT__set_inputs__677__t_dirty_set;
    vlSelf->top__DOT__valid_set = __Vtask_top__DOT__set_inputs__677__t_valid_set;
    vlSelf->top__DOT__state = __Vtask_top__DOT__set_inputs__677__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (__Vtask_top__DOT__set_inputs__677__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (__Vtask_top__DOT__set_inputs__677__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = __Vtask_top__DOT__set_inputs__677__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(__Vtask_top__DOT__set_inputs__677__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(__Vtask_top__DOT__set_inputs__677__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(__Vtask_top__DOT__set_inputs__677__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = __Vtask_top__DOT__set_inputs__677__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       321);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    __Vtask_top__DOT__test_outputs__678__t_flush_way_sel = 1U;
    __Vtask_top__DOT__test_outputs__678__t_flush_index = 0U;
    __Vtask_top__DOT__test_outputs__678__t_valid1 = 0x4000000U;
    __Vtask_top__DOT__test_outputs__678__t_valid0 = 0x80000000U;
    __Vtask_top__DOT__test_outputs__678__t_dirty1 = 0U;
    __Vtask_top__DOT__test_outputs__678__t_dirty0 = 0U;
    __Vtask_top__DOT__test_outputs__678__t_write_data = 0xffffffffU;
    __Vtask_top__DOT__test_outputs__678__t_read_word_offset = 8U;
    __Vtask_top__DOT__test_outputs__678__t_write_word_offset = 5U;
    __Vtask_top__DOT__test_outputs__678__t_d_index = 0x1aU;
    __Vtask_top__DOT__test_outputs__678__t_cache_req_msg_data = 0U;
    __Vtask_top__DOT__test_outputs__678__t_cache_req_msg_addr = 0x1694U;
    __Vtask_top__DOT__test_outputs__678__t_cache_req_msg_type_ = 0U;
    __Vtask_top__DOT__test_outputs__678__t_memresp_msg_data = 0U;
    __Vtask_top__DOT__test_outputs__678__t_memresp_msg_type_ = 0U;
    __Vtask_top__DOT__test_outputs__678__t_all_flushed = 1U;
    __Vtask_top__DOT__test_outputs__678__t_resp_count_done = 0U;
    __Vtask_top__DOT__test_outputs__678__t_req_count_done = 0U;
    __Vtask_top__DOT__test_outputs__678__t_incoming_mem_type = 0U;
    __Vtask_top__DOT__test_outputs__678__t_line1_valid = 1U;
    __Vtask_top__DOT__test_outputs__678__t_line0_valid = 0U;
    __Vtask_top__DOT__test_outputs__678__t_line1_dirty = 0U;
    __Vtask_top__DOT__test_outputs__678__t_line0_dirty = 0U;
    __Vtask_top__DOT__test_outputs__678__t_tarray1_match = 1U;
    __Vtask_top__DOT__test_outputs__678__t_tarray0_match = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray0_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__678__t_tarray0_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray0_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__678__t_tarray0_match,
                          1,(IData)(vlSelf->top__DOT__tarray0_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray0_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__678__t_tarray0_match,
                      1,(IData)(vlSelf->top__DOT__tarray0_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 825, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray1_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__678__t_tarray1_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray1_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__678__t_tarray1_match,
                          1,(IData)(vlSelf->top__DOT__tarray1_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray1_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__678__t_tarray1_match,
                      1,(IData)(vlSelf->top__DOT__tarray1_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 831, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__678__t_line0_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__678__t_line0_dirty,
                          1,(IData)(vlSelf->top__DOT__line0_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__678__t_line0_dirty,
                      1,(IData)(vlSelf->top__DOT__line0_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 837, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__678__t_line1_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__678__t_line1_dirty,
                          1,(IData)(vlSelf->top__DOT__line1_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__678__t_line1_dirty,
                      1,(IData)(vlSelf->top__DOT__line1_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 843, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__678__t_line0_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__678__t_line0_valid,
                          1,(IData)(vlSelf->top__DOT__line0_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__678__t_line0_valid,
                      1,(IData)(vlSelf->top__DOT__line0_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 849, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__678__t_line1_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__678__t_line1_valid,
                          1,(IData)(vlSelf->top__DOT__line1_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__678__t_line1_valid,
                      1,(IData)(vlSelf->top__DOT__line1_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 855, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__678__t_incoming_mem_type)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("incoming_mem_type is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__678__t_incoming_mem_type,
                          1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("incoming_mem_type is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__678__t_incoming_mem_type,
                      1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 861, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__678__t_req_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("req_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__678__t_req_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("req_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__678__t_req_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 867, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__678__t_resp_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("resp_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__678__t_resp_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("resp_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__678__t_resp_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 873, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__all_flushed) 
                       == (IData)(__Vtask_top__DOT__test_outputs__678__t_all_flushed)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("all_flushed is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__678__t_all_flushed,
                          1,(IData)(vlSelf->top__DOT__all_flushed));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("all_flushed is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__678__t_all_flushed,
                      1,(IData)(vlSelf->top__DOT__all_flushed));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 879, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                      >> 0x2cU))) == (IData)(__Vtask_top__DOT__test_outputs__678__t_memresp_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__678__t_memresp_msg_type_,
                          3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                           >> 0x2cU))));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__678__t_memresp_msg_type_,
                      3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                       >> 0x2cU))));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 885, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__memresp_msg) 
                       == __Vtask_top__DOT__test_outputs__678__t_memresp_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__678__t_memresp_msg_data,
                          32,(IData)(vlSelf->top__DOT__memresp_msg));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__678__t_memresp_msg_data,
                      32,(IData)(vlSelf->top__DOT__memresp_msg));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 891, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__678__t_cache_req_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__678__t_cache_req_msg_type_,
                          3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__678__t_cache_req_msg_type_,
                      3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 897, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((((vlSelf->top__DOT__cache_req_msg[2U] 
                         << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                      >> 2U)) == __Vtask_top__DOT__test_outputs__678__t_cache_req_msg_addr))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.addr is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__678__t_cache_req_msg_addr,
                          32,((vlSelf->top__DOT__cache_req_msg[2U] 
                               << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                            >> 2U)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.addr is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__678__t_cache_req_msg_addr,
                      32,((vlSelf->top__DOT__cache_req_msg[2U] 
                           << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                        >> 2U)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 903, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__cache_req_msg[0U] 
                       == __Vtask_top__DOT__test_outputs__678__t_cache_req_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__678__t_cache_req_msg_data,
                          32,vlSelf->top__DOT__cache_req_msg[0U]);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__678__t_cache_req_msg_data,
                      32,vlSelf->top__DOT__cache_req_msg[0U]);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 909, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__d_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__678__t_d_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.d_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__678__t_d_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.d_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__678__t_d_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 915, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__678__t_write_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__678__t_write_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__678__t_write_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 921, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__678__t_read_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.read_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__678__t_read_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.read_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__678__t_read_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 927, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__write_data 
                       == __Vtask_top__DOT__test_outputs__678__t_write_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__678__t_write_data,
                          32,vlSelf->top__DOT__DUT__DOT__write_data);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__678__t_write_data,
                      32,vlSelf->top__DOT__DUT__DOT__write_data);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 933, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty0 
                       == __Vtask_top__DOT__test_outputs__678__t_dirty0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__678__t_dirty0,
                          32,vlSelf->top__DOT__DUT__DOT__dirty0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__678__t_dirty0,
                      32,vlSelf->top__DOT__DUT__DOT__dirty0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 939, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty1 
                       == __Vtask_top__DOT__test_outputs__678__t_dirty1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__678__t_dirty1,
                          32,vlSelf->top__DOT__DUT__DOT__dirty1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__678__t_dirty1,
                      32,vlSelf->top__DOT__DUT__DOT__dirty1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 945, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid0 
                       == __Vtask_top__DOT__test_outputs__678__t_valid0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__678__t_valid0,
                          32,vlSelf->top__DOT__DUT__DOT__valid0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__678__t_valid0,
                      32,vlSelf->top__DOT__DUT__DOT__valid0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 951, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid1 
                       == __Vtask_top__DOT__test_outputs__678__t_valid1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__678__t_valid1,
                          32,vlSelf->top__DOT__DUT__DOT__valid1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__678__t_valid1,
                      32,vlSelf->top__DOT__DUT__DOT__valid1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 957, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__flush_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__678__t_flush_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.flush_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__678__t_flush_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.flush_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__678__t_flush_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 963, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0U == vlSelf->top__DOT__DUT__DOT__dirty0) 
                       == (IData)(__Vtask_top__DOT__test_outputs__678__t_flush_way_sel)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("flush_way_sel is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__678__t_flush_way_sel,
                          1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("flush_way_sel is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__678__t_flush_way_sel,
                      1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 969, "");
        }
    }
    vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       327);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       328);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       329);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       330);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       331);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       332);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       333);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       334);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       335);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       336);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       337);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    VL_WRITEF("\nCounters done, output value to memresp data\n");
    __Vtask_top__DOT__test_outputs__729__t_flush_way_sel = 1U;
    __Vtask_top__DOT__test_outputs__729__t_flush_index = 0U;
    __Vtask_top__DOT__test_outputs__729__t_valid1 = 0x4000000U;
    __Vtask_top__DOT__test_outputs__729__t_valid0 = 0x80000000U;
    __Vtask_top__DOT__test_outputs__729__t_dirty1 = 0U;
    __Vtask_top__DOT__test_outputs__729__t_dirty0 = 0U;
    __Vtask_top__DOT__test_outputs__729__t_write_data = 0xffffffffU;
    __Vtask_top__DOT__test_outputs__729__t_read_word_offset = 8U;
    __Vtask_top__DOT__test_outputs__729__t_write_word_offset = 0U;
    __Vtask_top__DOT__test_outputs__729__t_d_index = 0x1aU;
    __Vtask_top__DOT__test_outputs__729__t_cache_req_msg_data = 0xffffffffU;
    __Vtask_top__DOT__test_outputs__729__t_cache_req_msg_addr = 0x1680U;
    __Vtask_top__DOT__test_outputs__729__t_cache_req_msg_type_ = 0U;
    __Vtask_top__DOT__test_outputs__729__t_memresp_msg_data = 0xffffffffU;
    __Vtask_top__DOT__test_outputs__729__t_memresp_msg_type_ = 0U;
    __Vtask_top__DOT__test_outputs__729__t_all_flushed = 1U;
    __Vtask_top__DOT__test_outputs__729__t_resp_count_done = 1U;
    __Vtask_top__DOT__test_outputs__729__t_req_count_done = 1U;
    __Vtask_top__DOT__test_outputs__729__t_incoming_mem_type = 0U;
    __Vtask_top__DOT__test_outputs__729__t_line1_valid = 1U;
    __Vtask_top__DOT__test_outputs__729__t_line0_valid = 0U;
    __Vtask_top__DOT__test_outputs__729__t_line1_dirty = 0U;
    __Vtask_top__DOT__test_outputs__729__t_line0_dirty = 0U;
    __Vtask_top__DOT__test_outputs__729__t_tarray1_match = 1U;
    __Vtask_top__DOT__test_outputs__729__t_tarray0_match = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray0_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__729__t_tarray0_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray0_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__729__t_tarray0_match,
                          1,(IData)(vlSelf->top__DOT__tarray0_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray0_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__729__t_tarray0_match,
                      1,(IData)(vlSelf->top__DOT__tarray0_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 825, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray1_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__729__t_tarray1_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray1_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__729__t_tarray1_match,
                          1,(IData)(vlSelf->top__DOT__tarray1_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray1_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__729__t_tarray1_match,
                      1,(IData)(vlSelf->top__DOT__tarray1_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 831, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__729__t_line0_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__729__t_line0_dirty,
                          1,(IData)(vlSelf->top__DOT__line0_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__729__t_line0_dirty,
                      1,(IData)(vlSelf->top__DOT__line0_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 837, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__729__t_line1_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__729__t_line1_dirty,
                          1,(IData)(vlSelf->top__DOT__line1_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__729__t_line1_dirty,
                      1,(IData)(vlSelf->top__DOT__line1_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 843, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__729__t_line0_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__729__t_line0_valid,
                          1,(IData)(vlSelf->top__DOT__line0_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__729__t_line0_valid,
                      1,(IData)(vlSelf->top__DOT__line0_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 849, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__729__t_line1_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__729__t_line1_valid,
                          1,(IData)(vlSelf->top__DOT__line1_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__729__t_line1_valid,
                      1,(IData)(vlSelf->top__DOT__line1_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 855, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__729__t_incoming_mem_type)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("incoming_mem_type is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__729__t_incoming_mem_type,
                          1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("incoming_mem_type is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__729__t_incoming_mem_type,
                      1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 861, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__729__t_req_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("req_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__729__t_req_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("req_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__729__t_req_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 867, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__729__t_resp_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("resp_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__729__t_resp_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("resp_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__729__t_resp_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 873, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__all_flushed) 
                       == (IData)(__Vtask_top__DOT__test_outputs__729__t_all_flushed)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("all_flushed is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__729__t_all_flushed,
                          1,(IData)(vlSelf->top__DOT__all_flushed));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("all_flushed is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__729__t_all_flushed,
                      1,(IData)(vlSelf->top__DOT__all_flushed));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 879, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                      >> 0x2cU))) == (IData)(__Vtask_top__DOT__test_outputs__729__t_memresp_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__729__t_memresp_msg_type_,
                          3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                           >> 0x2cU))));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__729__t_memresp_msg_type_,
                      3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                       >> 0x2cU))));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 885, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__memresp_msg) 
                       == __Vtask_top__DOT__test_outputs__729__t_memresp_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__729__t_memresp_msg_data,
                          32,(IData)(vlSelf->top__DOT__memresp_msg));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__729__t_memresp_msg_data,
                      32,(IData)(vlSelf->top__DOT__memresp_msg));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 891, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__729__t_cache_req_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__729__t_cache_req_msg_type_,
                          3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__729__t_cache_req_msg_type_,
                      3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 897, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((((vlSelf->top__DOT__cache_req_msg[2U] 
                         << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                      >> 2U)) == __Vtask_top__DOT__test_outputs__729__t_cache_req_msg_addr))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.addr is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__729__t_cache_req_msg_addr,
                          32,((vlSelf->top__DOT__cache_req_msg[2U] 
                               << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                            >> 2U)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.addr is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__729__t_cache_req_msg_addr,
                      32,((vlSelf->top__DOT__cache_req_msg[2U] 
                           << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                        >> 2U)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 903, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__cache_req_msg[0U] 
                       == __Vtask_top__DOT__test_outputs__729__t_cache_req_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__729__t_cache_req_msg_data,
                          32,vlSelf->top__DOT__cache_req_msg[0U]);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__729__t_cache_req_msg_data,
                      32,vlSelf->top__DOT__cache_req_msg[0U]);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 909, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__d_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__729__t_d_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.d_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__729__t_d_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.d_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__729__t_d_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 915, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__729__t_write_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__729__t_write_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__729__t_write_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 921, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__729__t_read_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.read_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__729__t_read_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.read_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__729__t_read_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 927, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__write_data 
                       == __Vtask_top__DOT__test_outputs__729__t_write_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__729__t_write_data,
                          32,vlSelf->top__DOT__DUT__DOT__write_data);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__729__t_write_data,
                      32,vlSelf->top__DOT__DUT__DOT__write_data);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 933, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty0 
                       == __Vtask_top__DOT__test_outputs__729__t_dirty0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__729__t_dirty0,
                          32,vlSelf->top__DOT__DUT__DOT__dirty0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__729__t_dirty0,
                      32,vlSelf->top__DOT__DUT__DOT__dirty0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 939, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty1 
                       == __Vtask_top__DOT__test_outputs__729__t_dirty1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__729__t_dirty1,
                          32,vlSelf->top__DOT__DUT__DOT__dirty1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__729__t_dirty1,
                      32,vlSelf->top__DOT__DUT__DOT__dirty1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 945, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid0 
                       == __Vtask_top__DOT__test_outputs__729__t_valid0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__729__t_valid0,
                          32,vlSelf->top__DOT__DUT__DOT__valid0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__729__t_valid0,
                      32,vlSelf->top__DOT__DUT__DOT__valid0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 951, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid1 
                       == __Vtask_top__DOT__test_outputs__729__t_valid1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__729__t_valid1,
                          32,vlSelf->top__DOT__DUT__DOT__valid1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__729__t_valid1,
                      32,vlSelf->top__DOT__DUT__DOT__valid1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 957, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__flush_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__729__t_flush_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.flush_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__729__t_flush_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.flush_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__729__t_flush_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 963, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0U == vlSelf->top__DOT__DUT__DOT__dirty0) 
                       == (IData)(__Vtask_top__DOT__test_outputs__729__t_flush_way_sel)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("flush_way_sel is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__729__t_flush_way_sel,
                          1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("flush_way_sel is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__729__t_flush_way_sel,
                      1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 969, "");
        }
    }
    vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__delay__780__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__780__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__780__unnamedblk6__DOT__i, __Vtask_top__DOT__delay__780__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_CacheAltDpath.v", 
                                           730);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__780__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__780__unnamedblk6__DOT__i);
    }
    vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\nOutput data in MD state\n");
    __Vtask_top__DOT__set_inputs__781__t_way_select = 1U;
    __Vtask_top__DOT__set_inputs__781__t_cache_type = 0U;
    __Vtask_top__DOT__set_inputs__781__t_cache_data = 0xffffffffU;
    __Vtask_top__DOT__set_inputs__781__t_mem_type = 0U;
    __Vtask_top__DOT__set_inputs__781__t_mem_data = 0U;
    __Vtask_top__DOT__set_inputs__781__t_mem_addr = 0x16a0U;
    __Vtask_top__DOT__set_inputs__781__t_state = 4U;
    __Vtask_top__DOT__set_inputs__781__t_valid_set = 1U;
    __Vtask_top__DOT__set_inputs__781__t_dirty_set = 0U;
    __Vtask_top__DOT__set_inputs__781__t_clean_set = 0U;
    __Vtask_top__DOT__set_inputs__781__t_mem_action = 0U;
    __Vtask_top__DOT__set_inputs__781__t_read_word_sel = 0U;
    __Vtask_top__DOT__set_inputs__781__t_write_word_sel = 0U;
    __Vtask_top__DOT__set_inputs__781__t_index_sel = 0U;
    __Vtask_top__DOT__set_inputs__781__t_darray_wen = 0U;
    __Vtask_top__DOT__set_inputs__781__t_darray_en = 1U;
    __Vtask_top__DOT__set_inputs__781__t_write_data_sel = 0U;
    __Vtask_top__DOT__set_inputs__781__t_count_reset = 1U;
    __Vtask_top__DOT__set_inputs__781__t_resp_count_en = 0U;
    __Vtask_top__DOT__set_inputs__781__t_req_count_en = 0U;
    __Vtask_top__DOT__set_inputs__781__t_tarray_wen = 0U;
    __Vtask_top__DOT__set_inputs__781__t_tarray_en = 0U;
    __Vtask_top__DOT__set_inputs__781__t_input_en = 1U;
    __Vtask_top__DOT__set_inputs__781__t_flush_done = 0U;
    __Vtask_top__DOT__set_inputs__781__t_flush = 0U;
    vlSelf->top__DOT__flush = __Vtask_top__DOT__set_inputs__781__t_flush;
    vlSelf->top__DOT__flush_done = __Vtask_top__DOT__set_inputs__781__t_flush_done;
    vlSelf->top__DOT__input_en = __Vtask_top__DOT__set_inputs__781__t_input_en;
    vlSelf->top__DOT__tarray_en = __Vtask_top__DOT__set_inputs__781__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = __Vtask_top__DOT__set_inputs__781__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = __Vtask_top__DOT__set_inputs__781__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = __Vtask_top__DOT__set_inputs__781__t_resp_count_en;
    vlSelf->top__DOT__count_reset = __Vtask_top__DOT__set_inputs__781__t_count_reset;
    vlSelf->top__DOT__write_data_sel = __Vtask_top__DOT__set_inputs__781__t_write_data_sel;
    vlSelf->top__DOT__darray_en = __Vtask_top__DOT__set_inputs__781__t_darray_en;
    vlSelf->top__DOT__darray_wen = __Vtask_top__DOT__set_inputs__781__t_darray_wen;
    vlSelf->top__DOT__index_sel = __Vtask_top__DOT__set_inputs__781__t_index_sel;
    vlSelf->top__DOT__write_word_sel = __Vtask_top__DOT__set_inputs__781__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = __Vtask_top__DOT__set_inputs__781__t_read_word_sel;
    vlSelf->top__DOT__mem_action = __Vtask_top__DOT__set_inputs__781__t_mem_action;
    vlSelf->top__DOT__clean_set = __Vtask_top__DOT__set_inputs__781__t_clean_set;
    vlSelf->top__DOT__dirty_set = __Vtask_top__DOT__set_inputs__781__t_dirty_set;
    vlSelf->top__DOT__valid_set = __Vtask_top__DOT__set_inputs__781__t_valid_set;
    vlSelf->top__DOT__state = __Vtask_top__DOT__set_inputs__781__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (__Vtask_top__DOT__set_inputs__781__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (__Vtask_top__DOT__set_inputs__781__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = __Vtask_top__DOT__set_inputs__781__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(__Vtask_top__DOT__set_inputs__781__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(__Vtask_top__DOT__set_inputs__781__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(__Vtask_top__DOT__set_inputs__781__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = __Vtask_top__DOT__set_inputs__781__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       355);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    __Vtask_top__DOT__test_outputs__782__t_flush_way_sel = 1U;
    __Vtask_top__DOT__test_outputs__782__t_flush_index = 0U;
    __Vtask_top__DOT__test_outputs__782__t_valid1 = 0x4000000U;
    __Vtask_top__DOT__test_outputs__782__t_valid0 = 0x80000000U;
    __Vtask_top__DOT__test_outputs__782__t_dirty1 = 0U;
    __Vtask_top__DOT__test_outputs__782__t_dirty0 = 0U;
    __Vtask_top__DOT__test_outputs__782__t_write_data = 0U;
    __Vtask_top__DOT__test_outputs__782__t_read_word_offset = 8U;
    __Vtask_top__DOT__test_outputs__782__t_write_word_offset = 8U;
    __Vtask_top__DOT__test_outputs__782__t_d_index = 0x1aU;
    __Vtask_top__DOT__test_outputs__782__t_cache_req_msg_data = 0xffffffffU;
    __Vtask_top__DOT__test_outputs__782__t_cache_req_msg_addr = 0x1680U;
    __Vtask_top__DOT__test_outputs__782__t_cache_req_msg_type_ = 0U;
    __Vtask_top__DOT__test_outputs__782__t_memresp_msg_data = 0xffffffffU;
    __Vtask_top__DOT__test_outputs__782__t_memresp_msg_type_ = 0U;
    __Vtask_top__DOT__test_outputs__782__t_all_flushed = 1U;
    __Vtask_top__DOT__test_outputs__782__t_resp_count_done = 0U;
    __Vtask_top__DOT__test_outputs__782__t_req_count_done = 0U;
    __Vtask_top__DOT__test_outputs__782__t_incoming_mem_type = 0U;
    __Vtask_top__DOT__test_outputs__782__t_line1_valid = 1U;
    __Vtask_top__DOT__test_outputs__782__t_line0_valid = 0U;
    __Vtask_top__DOT__test_outputs__782__t_line1_dirty = 0U;
    __Vtask_top__DOT__test_outputs__782__t_line0_dirty = 0U;
    __Vtask_top__DOT__test_outputs__782__t_tarray1_match = 1U;
    __Vtask_top__DOT__test_outputs__782__t_tarray0_match = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray0_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__782__t_tarray0_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray0_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__782__t_tarray0_match,
                          1,(IData)(vlSelf->top__DOT__tarray0_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray0_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__782__t_tarray0_match,
                      1,(IData)(vlSelf->top__DOT__tarray0_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 825, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray1_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__782__t_tarray1_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray1_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__782__t_tarray1_match,
                          1,(IData)(vlSelf->top__DOT__tarray1_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray1_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__782__t_tarray1_match,
                      1,(IData)(vlSelf->top__DOT__tarray1_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 831, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__782__t_line0_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__782__t_line0_dirty,
                          1,(IData)(vlSelf->top__DOT__line0_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__782__t_line0_dirty,
                      1,(IData)(vlSelf->top__DOT__line0_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 837, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__782__t_line1_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__782__t_line1_dirty,
                          1,(IData)(vlSelf->top__DOT__line1_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__782__t_line1_dirty,
                      1,(IData)(vlSelf->top__DOT__line1_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 843, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__782__t_line0_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__782__t_line0_valid,
                          1,(IData)(vlSelf->top__DOT__line0_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__782__t_line0_valid,
                      1,(IData)(vlSelf->top__DOT__line0_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 849, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__782__t_line1_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__782__t_line1_valid,
                          1,(IData)(vlSelf->top__DOT__line1_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__782__t_line1_valid,
                      1,(IData)(vlSelf->top__DOT__line1_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 855, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__782__t_incoming_mem_type)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("incoming_mem_type is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__782__t_incoming_mem_type,
                          1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("incoming_mem_type is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__782__t_incoming_mem_type,
                      1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 861, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__782__t_req_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("req_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__782__t_req_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("req_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__782__t_req_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 867, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__782__t_resp_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("resp_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__782__t_resp_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("resp_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__782__t_resp_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 873, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__all_flushed) 
                       == (IData)(__Vtask_top__DOT__test_outputs__782__t_all_flushed)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("all_flushed is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__782__t_all_flushed,
                          1,(IData)(vlSelf->top__DOT__all_flushed));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("all_flushed is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__782__t_all_flushed,
                      1,(IData)(vlSelf->top__DOT__all_flushed));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 879, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                      >> 0x2cU))) == (IData)(__Vtask_top__DOT__test_outputs__782__t_memresp_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__782__t_memresp_msg_type_,
                          3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                           >> 0x2cU))));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__782__t_memresp_msg_type_,
                      3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                       >> 0x2cU))));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 885, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__memresp_msg) 
                       == __Vtask_top__DOT__test_outputs__782__t_memresp_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__782__t_memresp_msg_data,
                          32,(IData)(vlSelf->top__DOT__memresp_msg));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__782__t_memresp_msg_data,
                      32,(IData)(vlSelf->top__DOT__memresp_msg));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 891, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__782__t_cache_req_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__782__t_cache_req_msg_type_,
                          3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__782__t_cache_req_msg_type_,
                      3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 897, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((((vlSelf->top__DOT__cache_req_msg[2U] 
                         << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                      >> 2U)) == __Vtask_top__DOT__test_outputs__782__t_cache_req_msg_addr))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.addr is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__782__t_cache_req_msg_addr,
                          32,((vlSelf->top__DOT__cache_req_msg[2U] 
                               << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                            >> 2U)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.addr is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__782__t_cache_req_msg_addr,
                      32,((vlSelf->top__DOT__cache_req_msg[2U] 
                           << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                        >> 2U)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 903, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__cache_req_msg[0U] 
                       == __Vtask_top__DOT__test_outputs__782__t_cache_req_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__782__t_cache_req_msg_data,
                          32,vlSelf->top__DOT__cache_req_msg[0U]);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__782__t_cache_req_msg_data,
                      32,vlSelf->top__DOT__cache_req_msg[0U]);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 909, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__d_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__782__t_d_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.d_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__782__t_d_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.d_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__782__t_d_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 915, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__782__t_write_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__782__t_write_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__782__t_write_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 921, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__782__t_read_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.read_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__782__t_read_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.read_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__782__t_read_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 927, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__write_data 
                       == __Vtask_top__DOT__test_outputs__782__t_write_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__782__t_write_data,
                          32,vlSelf->top__DOT__DUT__DOT__write_data);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__782__t_write_data,
                      32,vlSelf->top__DOT__DUT__DOT__write_data);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 933, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty0 
                       == __Vtask_top__DOT__test_outputs__782__t_dirty0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__782__t_dirty0,
                          32,vlSelf->top__DOT__DUT__DOT__dirty0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__782__t_dirty0,
                      32,vlSelf->top__DOT__DUT__DOT__dirty0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 939, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty1 
                       == __Vtask_top__DOT__test_outputs__782__t_dirty1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__782__t_dirty1,
                          32,vlSelf->top__DOT__DUT__DOT__dirty1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__782__t_dirty1,
                      32,vlSelf->top__DOT__DUT__DOT__dirty1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 945, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid0 
                       == __Vtask_top__DOT__test_outputs__782__t_valid0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__782__t_valid0,
                          32,vlSelf->top__DOT__DUT__DOT__valid0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__782__t_valid0,
                      32,vlSelf->top__DOT__DUT__DOT__valid0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 951, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid1 
                       == __Vtask_top__DOT__test_outputs__782__t_valid1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__782__t_valid1,
                          32,vlSelf->top__DOT__DUT__DOT__valid1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__782__t_valid1,
                      32,vlSelf->top__DOT__DUT__DOT__valid1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 957, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__flush_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__782__t_flush_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.flush_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__782__t_flush_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.flush_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__782__t_flush_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 963, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0U == vlSelf->top__DOT__DUT__DOT__dirty0) 
                       == (IData)(__Vtask_top__DOT__test_outputs__782__t_flush_way_sel)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("flush_way_sel is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__782__t_flush_way_sel,
                          1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("flush_way_sel is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__782__t_flush_way_sel,
                      1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 969, "");
        }
    }
    vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__delay__833__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__833__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__833__unnamedblk6__DOT__i, __Vtask_top__DOT__delay__833__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_CacheAltDpath.v", 
                                           730);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__833__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__833__unnamedblk6__DOT__i);
    }
    vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\n---------------------------------------\nUnit Test 2: Write Hit\n---------------------------------------\n");
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    __Vtask_top__DOT__set_inputs__834__t_way_select = 0U;
    __Vtask_top__DOT__set_inputs__834__t_cache_type = 0U;
    __Vtask_top__DOT__set_inputs__834__t_cache_data = 0U;
    __Vtask_top__DOT__set_inputs__834__t_mem_type = 1U;
    __Vtask_top__DOT__set_inputs__834__t_mem_data = 0U;
    __Vtask_top__DOT__set_inputs__834__t_mem_addr = 0xffffffffU;
    __Vtask_top__DOT__set_inputs__834__t_state = 0U;
    __Vtask_top__DOT__set_inputs__834__t_valid_set = 0U;
    __Vtask_top__DOT__set_inputs__834__t_dirty_set = 0U;
    __Vtask_top__DOT__set_inputs__834__t_clean_set = 0U;
    __Vtask_top__DOT__set_inputs__834__t_mem_action = 0U;
    __Vtask_top__DOT__set_inputs__834__t_read_word_sel = 0U;
    __Vtask_top__DOT__set_inputs__834__t_write_word_sel = 0U;
    __Vtask_top__DOT__set_inputs__834__t_index_sel = 0U;
    __Vtask_top__DOT__set_inputs__834__t_darray_wen = 1U;
    __Vtask_top__DOT__set_inputs__834__t_darray_en = 1U;
    __Vtask_top__DOT__set_inputs__834__t_write_data_sel = 0U;
    __Vtask_top__DOT__set_inputs__834__t_count_reset = 1U;
    __Vtask_top__DOT__set_inputs__834__t_resp_count_en = 0U;
    __Vtask_top__DOT__set_inputs__834__t_req_count_en = 0U;
    __Vtask_top__DOT__set_inputs__834__t_tarray_wen = 0U;
    __Vtask_top__DOT__set_inputs__834__t_tarray_en = 1U;
    __Vtask_top__DOT__set_inputs__834__t_input_en = 1U;
    __Vtask_top__DOT__set_inputs__834__t_flush_done = 0U;
    __Vtask_top__DOT__set_inputs__834__t_flush = 0U;
    vlSelf->top__DOT__flush = __Vtask_top__DOT__set_inputs__834__t_flush;
    vlSelf->top__DOT__flush_done = __Vtask_top__DOT__set_inputs__834__t_flush_done;
    vlSelf->top__DOT__input_en = __Vtask_top__DOT__set_inputs__834__t_input_en;
    vlSelf->top__DOT__tarray_en = __Vtask_top__DOT__set_inputs__834__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = __Vtask_top__DOT__set_inputs__834__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = __Vtask_top__DOT__set_inputs__834__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = __Vtask_top__DOT__set_inputs__834__t_resp_count_en;
    vlSelf->top__DOT__count_reset = __Vtask_top__DOT__set_inputs__834__t_count_reset;
    vlSelf->top__DOT__write_data_sel = __Vtask_top__DOT__set_inputs__834__t_write_data_sel;
    vlSelf->top__DOT__darray_en = __Vtask_top__DOT__set_inputs__834__t_darray_en;
    vlSelf->top__DOT__darray_wen = __Vtask_top__DOT__set_inputs__834__t_darray_wen;
    vlSelf->top__DOT__index_sel = __Vtask_top__DOT__set_inputs__834__t_index_sel;
    vlSelf->top__DOT__write_word_sel = __Vtask_top__DOT__set_inputs__834__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = __Vtask_top__DOT__set_inputs__834__t_read_word_sel;
    vlSelf->top__DOT__mem_action = __Vtask_top__DOT__set_inputs__834__t_mem_action;
    vlSelf->top__DOT__clean_set = __Vtask_top__DOT__set_inputs__834__t_clean_set;
    vlSelf->top__DOT__dirty_set = __Vtask_top__DOT__set_inputs__834__t_dirty_set;
    vlSelf->top__DOT__valid_set = __Vtask_top__DOT__set_inputs__834__t_valid_set;
    vlSelf->top__DOT__state = __Vtask_top__DOT__set_inputs__834__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (__Vtask_top__DOT__set_inputs__834__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (__Vtask_top__DOT__set_inputs__834__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = __Vtask_top__DOT__set_inputs__834__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(__Vtask_top__DOT__set_inputs__834__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(__Vtask_top__DOT__set_inputs__834__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(__Vtask_top__DOT__set_inputs__834__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = __Vtask_top__DOT__set_inputs__834__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       378);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    __Vtask_top__DOT__set_inputs__835__t_way_select = 0U;
    __Vtask_top__DOT__set_inputs__835__t_cache_type = 0U;
    __Vtask_top__DOT__set_inputs__835__t_cache_data = 0U;
    __Vtask_top__DOT__set_inputs__835__t_mem_type = 1U;
    __Vtask_top__DOT__set_inputs__835__t_mem_data = 0U;
    __Vtask_top__DOT__set_inputs__835__t_mem_addr = 0xffffffffU;
    __Vtask_top__DOT__set_inputs__835__t_state = 1U;
    __Vtask_top__DOT__set_inputs__835__t_valid_set = 0U;
    __Vtask_top__DOT__set_inputs__835__t_dirty_set = 1U;
    __Vtask_top__DOT__set_inputs__835__t_clean_set = 0U;
    __Vtask_top__DOT__set_inputs__835__t_mem_action = 0U;
    __Vtask_top__DOT__set_inputs__835__t_read_word_sel = 0U;
    __Vtask_top__DOT__set_inputs__835__t_write_word_sel = 0U;
    __Vtask_top__DOT__set_inputs__835__t_index_sel = 0U;
    __Vtask_top__DOT__set_inputs__835__t_darray_wen = 1U;
    __Vtask_top__DOT__set_inputs__835__t_darray_en = 1U;
    __Vtask_top__DOT__set_inputs__835__t_write_data_sel = 0U;
    __Vtask_top__DOT__set_inputs__835__t_count_reset = 1U;
    __Vtask_top__DOT__set_inputs__835__t_resp_count_en = 0U;
    __Vtask_top__DOT__set_inputs__835__t_req_count_en = 0U;
    __Vtask_top__DOT__set_inputs__835__t_tarray_wen = 0U;
    __Vtask_top__DOT__set_inputs__835__t_tarray_en = 1U;
    __Vtask_top__DOT__set_inputs__835__t_input_en = 1U;
    __Vtask_top__DOT__set_inputs__835__t_flush_done = 0U;
    __Vtask_top__DOT__set_inputs__835__t_flush = 0U;
    vlSelf->top__DOT__flush = __Vtask_top__DOT__set_inputs__835__t_flush;
    vlSelf->top__DOT__flush_done = __Vtask_top__DOT__set_inputs__835__t_flush_done;
    vlSelf->top__DOT__input_en = __Vtask_top__DOT__set_inputs__835__t_input_en;
    vlSelf->top__DOT__tarray_en = __Vtask_top__DOT__set_inputs__835__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = __Vtask_top__DOT__set_inputs__835__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = __Vtask_top__DOT__set_inputs__835__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = __Vtask_top__DOT__set_inputs__835__t_resp_count_en;
    vlSelf->top__DOT__count_reset = __Vtask_top__DOT__set_inputs__835__t_count_reset;
    vlSelf->top__DOT__write_data_sel = __Vtask_top__DOT__set_inputs__835__t_write_data_sel;
    vlSelf->top__DOT__darray_en = __Vtask_top__DOT__set_inputs__835__t_darray_en;
    vlSelf->top__DOT__darray_wen = __Vtask_top__DOT__set_inputs__835__t_darray_wen;
    vlSelf->top__DOT__index_sel = __Vtask_top__DOT__set_inputs__835__t_index_sel;
    vlSelf->top__DOT__write_word_sel = __Vtask_top__DOT__set_inputs__835__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = __Vtask_top__DOT__set_inputs__835__t_read_word_sel;
    vlSelf->top__DOT__mem_action = __Vtask_top__DOT__set_inputs__835__t_mem_action;
    vlSelf->top__DOT__clean_set = __Vtask_top__DOT__set_inputs__835__t_clean_set;
    vlSelf->top__DOT__dirty_set = __Vtask_top__DOT__set_inputs__835__t_dirty_set;
    vlSelf->top__DOT__valid_set = __Vtask_top__DOT__set_inputs__835__t_valid_set;
    vlSelf->top__DOT__state = __Vtask_top__DOT__set_inputs__835__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (__Vtask_top__DOT__set_inputs__835__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (__Vtask_top__DOT__set_inputs__835__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = __Vtask_top__DOT__set_inputs__835__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(__Vtask_top__DOT__set_inputs__835__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(__Vtask_top__DOT__set_inputs__835__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(__Vtask_top__DOT__set_inputs__835__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = __Vtask_top__DOT__set_inputs__835__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\nWrite hit in MT in way 0\n");
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       387);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    __Vtask_top__DOT__test_outputs__836__t_flush_way_sel = 0U;
    __Vtask_top__DOT__test_outputs__836__t_flush_index = 0x1fU;
    __Vtask_top__DOT__test_outputs__836__t_valid1 = 0x4000000U;
    __Vtask_top__DOT__test_outputs__836__t_valid0 = 0x80000000U;
    __Vtask_top__DOT__test_outputs__836__t_dirty1 = 0U;
    __Vtask_top__DOT__test_outputs__836__t_dirty0 = 0x80000000U;
    __Vtask_top__DOT__test_outputs__836__t_write_data = 0U;
    __Vtask_top__DOT__test_outputs__836__t_read_word_offset = 0xfU;
    __Vtask_top__DOT__test_outputs__836__t_write_word_offset = 0xfU;
    __Vtask_top__DOT__test_outputs__836__t_d_index = 0x1fU;
    __Vtask_top__DOT__test_outputs__836__t_cache_req_msg_data = 0U;
    __Vtask_top__DOT__test_outputs__836__t_cache_req_msg_addr = 0xffffffc3U;
    __Vtask_top__DOT__test_outputs__836__t_cache_req_msg_type_ = 0U;
    __Vtask_top__DOT__test_outputs__836__t_memresp_msg_data = 0U;
    __Vtask_top__DOT__test_outputs__836__t_memresp_msg_type_ = 1U;
    __Vtask_top__DOT__test_outputs__836__t_all_flushed = 0U;
    __Vtask_top__DOT__test_outputs__836__t_resp_count_done = 0U;
    __Vtask_top__DOT__test_outputs__836__t_req_count_done = 0U;
    __Vtask_top__DOT__test_outputs__836__t_incoming_mem_type = 1U;
    __Vtask_top__DOT__test_outputs__836__t_line1_valid = 0U;
    __Vtask_top__DOT__test_outputs__836__t_line0_valid = 1U;
    __Vtask_top__DOT__test_outputs__836__t_line1_dirty = 0U;
    __Vtask_top__DOT__test_outputs__836__t_line0_dirty = 1U;
    __Vtask_top__DOT__test_outputs__836__t_tarray1_match = 0U;
    __Vtask_top__DOT__test_outputs__836__t_tarray0_match = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray0_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__836__t_tarray0_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray0_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__836__t_tarray0_match,
                          1,(IData)(vlSelf->top__DOT__tarray0_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray0_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__836__t_tarray0_match,
                      1,(IData)(vlSelf->top__DOT__tarray0_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 825, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray1_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__836__t_tarray1_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray1_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__836__t_tarray1_match,
                          1,(IData)(vlSelf->top__DOT__tarray1_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray1_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__836__t_tarray1_match,
                      1,(IData)(vlSelf->top__DOT__tarray1_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 831, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__836__t_line0_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__836__t_line0_dirty,
                          1,(IData)(vlSelf->top__DOT__line0_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__836__t_line0_dirty,
                      1,(IData)(vlSelf->top__DOT__line0_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 837, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__836__t_line1_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__836__t_line1_dirty,
                          1,(IData)(vlSelf->top__DOT__line1_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__836__t_line1_dirty,
                      1,(IData)(vlSelf->top__DOT__line1_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 843, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__836__t_line0_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__836__t_line0_valid,
                          1,(IData)(vlSelf->top__DOT__line0_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__836__t_line0_valid,
                      1,(IData)(vlSelf->top__DOT__line0_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 849, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__836__t_line1_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__836__t_line1_valid,
                          1,(IData)(vlSelf->top__DOT__line1_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__836__t_line1_valid,
                      1,(IData)(vlSelf->top__DOT__line1_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 855, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__836__t_incoming_mem_type)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("incoming_mem_type is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__836__t_incoming_mem_type,
                          1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("incoming_mem_type is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__836__t_incoming_mem_type,
                      1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 861, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__836__t_req_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("req_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__836__t_req_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("req_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__836__t_req_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 867, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__836__t_resp_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("resp_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__836__t_resp_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("resp_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__836__t_resp_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 873, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__all_flushed) 
                       == (IData)(__Vtask_top__DOT__test_outputs__836__t_all_flushed)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("all_flushed is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__836__t_all_flushed,
                          1,(IData)(vlSelf->top__DOT__all_flushed));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("all_flushed is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__836__t_all_flushed,
                      1,(IData)(vlSelf->top__DOT__all_flushed));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 879, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                      >> 0x2cU))) == (IData)(__Vtask_top__DOT__test_outputs__836__t_memresp_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__836__t_memresp_msg_type_,
                          3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                           >> 0x2cU))));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__836__t_memresp_msg_type_,
                      3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                       >> 0x2cU))));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 885, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__memresp_msg) 
                       == __Vtask_top__DOT__test_outputs__836__t_memresp_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__836__t_memresp_msg_data,
                          32,(IData)(vlSelf->top__DOT__memresp_msg));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__836__t_memresp_msg_data,
                      32,(IData)(vlSelf->top__DOT__memresp_msg));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 891, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__836__t_cache_req_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__836__t_cache_req_msg_type_,
                          3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__836__t_cache_req_msg_type_,
                      3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 897, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((((vlSelf->top__DOT__cache_req_msg[2U] 
                         << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                      >> 2U)) == __Vtask_top__DOT__test_outputs__836__t_cache_req_msg_addr))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.addr is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__836__t_cache_req_msg_addr,
                          32,((vlSelf->top__DOT__cache_req_msg[2U] 
                               << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                            >> 2U)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.addr is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__836__t_cache_req_msg_addr,
                      32,((vlSelf->top__DOT__cache_req_msg[2U] 
                           << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                        >> 2U)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 903, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__cache_req_msg[0U] 
                       == __Vtask_top__DOT__test_outputs__836__t_cache_req_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__836__t_cache_req_msg_data,
                          32,vlSelf->top__DOT__cache_req_msg[0U]);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__836__t_cache_req_msg_data,
                      32,vlSelf->top__DOT__cache_req_msg[0U]);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 909, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__d_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__836__t_d_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.d_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__836__t_d_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.d_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__836__t_d_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 915, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__836__t_write_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__836__t_write_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__836__t_write_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 921, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__836__t_read_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.read_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__836__t_read_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.read_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__836__t_read_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 927, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__write_data 
                       == __Vtask_top__DOT__test_outputs__836__t_write_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__836__t_write_data,
                          32,vlSelf->top__DOT__DUT__DOT__write_data);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__836__t_write_data,
                      32,vlSelf->top__DOT__DUT__DOT__write_data);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 933, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty0 
                       == __Vtask_top__DOT__test_outputs__836__t_dirty0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__836__t_dirty0,
                          32,vlSelf->top__DOT__DUT__DOT__dirty0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__836__t_dirty0,
                      32,vlSelf->top__DOT__DUT__DOT__dirty0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 939, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty1 
                       == __Vtask_top__DOT__test_outputs__836__t_dirty1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__836__t_dirty1,
                          32,vlSelf->top__DOT__DUT__DOT__dirty1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__836__t_dirty1,
                      32,vlSelf->top__DOT__DUT__DOT__dirty1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 945, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid0 
                       == __Vtask_top__DOT__test_outputs__836__t_valid0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__836__t_valid0,
                          32,vlSelf->top__DOT__DUT__DOT__valid0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__836__t_valid0,
                      32,vlSelf->top__DOT__DUT__DOT__valid0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 951, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid1 
                       == __Vtask_top__DOT__test_outputs__836__t_valid1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__836__t_valid1,
                          32,vlSelf->top__DOT__DUT__DOT__valid1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__836__t_valid1,
                      32,vlSelf->top__DOT__DUT__DOT__valid1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 957, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__flush_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__836__t_flush_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.flush_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__836__t_flush_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.flush_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__836__t_flush_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 963, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0U == vlSelf->top__DOT__DUT__DOT__dirty0) 
                       == (IData)(__Vtask_top__DOT__test_outputs__836__t_flush_way_sel)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("flush_way_sel is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__836__t_flush_way_sel,
                          1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("flush_way_sel is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__836__t_flush_way_sel,
                      1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 969, "");
        }
    }
    vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__delay__887__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__887__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__887__unnamedblk6__DOT__i, __Vtask_top__DOT__delay__887__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_CacheAltDpath.v", 
                                           730);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__887__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__887__unnamedblk6__DOT__i);
    }
    vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       395);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    __Vtask_top__DOT__set_inputs__888__t_way_select = 1U;
    __Vtask_top__DOT__set_inputs__888__t_cache_type = 0U;
    __Vtask_top__DOT__set_inputs__888__t_cache_data = 0U;
    __Vtask_top__DOT__set_inputs__888__t_mem_type = 1U;
    __Vtask_top__DOT__set_inputs__888__t_mem_data = 0U;
    __Vtask_top__DOT__set_inputs__888__t_mem_addr = 0x16a0U;
    __Vtask_top__DOT__set_inputs__888__t_state = 0U;
    __Vtask_top__DOT__set_inputs__888__t_valid_set = 0U;
    __Vtask_top__DOT__set_inputs__888__t_dirty_set = 0U;
    __Vtask_top__DOT__set_inputs__888__t_clean_set = 0U;
    __Vtask_top__DOT__set_inputs__888__t_mem_action = 0U;
    __Vtask_top__DOT__set_inputs__888__t_read_word_sel = 0U;
    __Vtask_top__DOT__set_inputs__888__t_write_word_sel = 0U;
    __Vtask_top__DOT__set_inputs__888__t_index_sel = 0U;
    __Vtask_top__DOT__set_inputs__888__t_darray_wen = 1U;
    __Vtask_top__DOT__set_inputs__888__t_darray_en = 1U;
    __Vtask_top__DOT__set_inputs__888__t_write_data_sel = 0U;
    __Vtask_top__DOT__set_inputs__888__t_count_reset = 1U;
    __Vtask_top__DOT__set_inputs__888__t_resp_count_en = 0U;
    __Vtask_top__DOT__set_inputs__888__t_req_count_en = 0U;
    __Vtask_top__DOT__set_inputs__888__t_tarray_wen = 0U;
    __Vtask_top__DOT__set_inputs__888__t_tarray_en = 1U;
    __Vtask_top__DOT__set_inputs__888__t_input_en = 1U;
    __Vtask_top__DOT__set_inputs__888__t_flush_done = 0U;
    __Vtask_top__DOT__set_inputs__888__t_flush = 0U;
    vlSelf->top__DOT__flush = __Vtask_top__DOT__set_inputs__888__t_flush;
    vlSelf->top__DOT__flush_done = __Vtask_top__DOT__set_inputs__888__t_flush_done;
    vlSelf->top__DOT__input_en = __Vtask_top__DOT__set_inputs__888__t_input_en;
    vlSelf->top__DOT__tarray_en = __Vtask_top__DOT__set_inputs__888__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = __Vtask_top__DOT__set_inputs__888__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = __Vtask_top__DOT__set_inputs__888__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = __Vtask_top__DOT__set_inputs__888__t_resp_count_en;
    vlSelf->top__DOT__count_reset = __Vtask_top__DOT__set_inputs__888__t_count_reset;
    vlSelf->top__DOT__write_data_sel = __Vtask_top__DOT__set_inputs__888__t_write_data_sel;
    vlSelf->top__DOT__darray_en = __Vtask_top__DOT__set_inputs__888__t_darray_en;
    vlSelf->top__DOT__darray_wen = __Vtask_top__DOT__set_inputs__888__t_darray_wen;
    vlSelf->top__DOT__index_sel = __Vtask_top__DOT__set_inputs__888__t_index_sel;
    vlSelf->top__DOT__write_word_sel = __Vtask_top__DOT__set_inputs__888__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = __Vtask_top__DOT__set_inputs__888__t_read_word_sel;
    vlSelf->top__DOT__mem_action = __Vtask_top__DOT__set_inputs__888__t_mem_action;
    vlSelf->top__DOT__clean_set = __Vtask_top__DOT__set_inputs__888__t_clean_set;
    vlSelf->top__DOT__dirty_set = __Vtask_top__DOT__set_inputs__888__t_dirty_set;
    vlSelf->top__DOT__valid_set = __Vtask_top__DOT__set_inputs__888__t_valid_set;
    vlSelf->top__DOT__state = __Vtask_top__DOT__set_inputs__888__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (__Vtask_top__DOT__set_inputs__888__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (__Vtask_top__DOT__set_inputs__888__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = __Vtask_top__DOT__set_inputs__888__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(__Vtask_top__DOT__set_inputs__888__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(__Vtask_top__DOT__set_inputs__888__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(__Vtask_top__DOT__set_inputs__888__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = __Vtask_top__DOT__set_inputs__888__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       400);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    __Vtask_top__DOT__set_inputs__889__t_way_select = 1U;
    __Vtask_top__DOT__set_inputs__889__t_cache_type = 0U;
    __Vtask_top__DOT__set_inputs__889__t_cache_data = 0U;
    __Vtask_top__DOT__set_inputs__889__t_mem_type = 1U;
    __Vtask_top__DOT__set_inputs__889__t_mem_data = 0U;
    __Vtask_top__DOT__set_inputs__889__t_mem_addr = 0x16a0U;
    __Vtask_top__DOT__set_inputs__889__t_state = 1U;
    __Vtask_top__DOT__set_inputs__889__t_valid_set = 0U;
    __Vtask_top__DOT__set_inputs__889__t_dirty_set = 1U;
    __Vtask_top__DOT__set_inputs__889__t_clean_set = 0U;
    __Vtask_top__DOT__set_inputs__889__t_mem_action = 0U;
    __Vtask_top__DOT__set_inputs__889__t_read_word_sel = 0U;
    __Vtask_top__DOT__set_inputs__889__t_write_word_sel = 0U;
    __Vtask_top__DOT__set_inputs__889__t_index_sel = 0U;
    __Vtask_top__DOT__set_inputs__889__t_darray_wen = 1U;
    __Vtask_top__DOT__set_inputs__889__t_darray_en = 1U;
    __Vtask_top__DOT__set_inputs__889__t_write_data_sel = 0U;
    __Vtask_top__DOT__set_inputs__889__t_count_reset = 1U;
    __Vtask_top__DOT__set_inputs__889__t_resp_count_en = 0U;
    __Vtask_top__DOT__set_inputs__889__t_req_count_en = 0U;
    __Vtask_top__DOT__set_inputs__889__t_tarray_wen = 0U;
    __Vtask_top__DOT__set_inputs__889__t_tarray_en = 1U;
    __Vtask_top__DOT__set_inputs__889__t_input_en = 1U;
    __Vtask_top__DOT__set_inputs__889__t_flush_done = 0U;
    __Vtask_top__DOT__set_inputs__889__t_flush = 0U;
    vlSelf->top__DOT__flush = __Vtask_top__DOT__set_inputs__889__t_flush;
    vlSelf->top__DOT__flush_done = __Vtask_top__DOT__set_inputs__889__t_flush_done;
    vlSelf->top__DOT__input_en = __Vtask_top__DOT__set_inputs__889__t_input_en;
    vlSelf->top__DOT__tarray_en = __Vtask_top__DOT__set_inputs__889__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = __Vtask_top__DOT__set_inputs__889__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = __Vtask_top__DOT__set_inputs__889__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = __Vtask_top__DOT__set_inputs__889__t_resp_count_en;
    vlSelf->top__DOT__count_reset = __Vtask_top__DOT__set_inputs__889__t_count_reset;
    vlSelf->top__DOT__write_data_sel = __Vtask_top__DOT__set_inputs__889__t_write_data_sel;
    vlSelf->top__DOT__darray_en = __Vtask_top__DOT__set_inputs__889__t_darray_en;
    vlSelf->top__DOT__darray_wen = __Vtask_top__DOT__set_inputs__889__t_darray_wen;
    vlSelf->top__DOT__index_sel = __Vtask_top__DOT__set_inputs__889__t_index_sel;
    vlSelf->top__DOT__write_word_sel = __Vtask_top__DOT__set_inputs__889__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = __Vtask_top__DOT__set_inputs__889__t_read_word_sel;
    vlSelf->top__DOT__mem_action = __Vtask_top__DOT__set_inputs__889__t_mem_action;
    vlSelf->top__DOT__clean_set = __Vtask_top__DOT__set_inputs__889__t_clean_set;
    vlSelf->top__DOT__dirty_set = __Vtask_top__DOT__set_inputs__889__t_dirty_set;
    vlSelf->top__DOT__valid_set = __Vtask_top__DOT__set_inputs__889__t_valid_set;
    vlSelf->top__DOT__state = __Vtask_top__DOT__set_inputs__889__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (__Vtask_top__DOT__set_inputs__889__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (__Vtask_top__DOT__set_inputs__889__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = __Vtask_top__DOT__set_inputs__889__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(__Vtask_top__DOT__set_inputs__889__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(__Vtask_top__DOT__set_inputs__889__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(__Vtask_top__DOT__set_inputs__889__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = __Vtask_top__DOT__set_inputs__889__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\nWrite hit in MT in way 1\n");
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       409);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    __Vtask_top__DOT__test_outputs__890__t_flush_way_sel = 0U;
    __Vtask_top__DOT__test_outputs__890__t_flush_index = 0x1fU;
    __Vtask_top__DOT__test_outputs__890__t_valid1 = 0x4000000U;
    __Vtask_top__DOT__test_outputs__890__t_valid0 = 0x80000000U;
    __Vtask_top__DOT__test_outputs__890__t_dirty1 = 0x4000000U;
    __Vtask_top__DOT__test_outputs__890__t_dirty0 = 0x80000000U;
    __Vtask_top__DOT__test_outputs__890__t_write_data = 0U;
    __Vtask_top__DOT__test_outputs__890__t_read_word_offset = 8U;
    __Vtask_top__DOT__test_outputs__890__t_write_word_offset = 8U;
    __Vtask_top__DOT__test_outputs__890__t_d_index = 0x1aU;
    __Vtask_top__DOT__test_outputs__890__t_cache_req_msg_data = 0U;
    __Vtask_top__DOT__test_outputs__890__t_cache_req_msg_addr = 0x1680U;
    __Vtask_top__DOT__test_outputs__890__t_cache_req_msg_type_ = 0U;
    __Vtask_top__DOT__test_outputs__890__t_memresp_msg_data = 0U;
    __Vtask_top__DOT__test_outputs__890__t_memresp_msg_type_ = 1U;
    __Vtask_top__DOT__test_outputs__890__t_all_flushed = 0U;
    __Vtask_top__DOT__test_outputs__890__t_resp_count_done = 0U;
    __Vtask_top__DOT__test_outputs__890__t_req_count_done = 0U;
    __Vtask_top__DOT__test_outputs__890__t_incoming_mem_type = 1U;
    __Vtask_top__DOT__test_outputs__890__t_line1_valid = 1U;
    __Vtask_top__DOT__test_outputs__890__t_line0_valid = 0U;
    __Vtask_top__DOT__test_outputs__890__t_line1_dirty = 1U;
    __Vtask_top__DOT__test_outputs__890__t_line0_dirty = 0U;
    __Vtask_top__DOT__test_outputs__890__t_tarray1_match = 1U;
    __Vtask_top__DOT__test_outputs__890__t_tarray0_match = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray0_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__890__t_tarray0_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray0_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__890__t_tarray0_match,
                          1,(IData)(vlSelf->top__DOT__tarray0_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray0_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__890__t_tarray0_match,
                      1,(IData)(vlSelf->top__DOT__tarray0_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 825, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray1_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__890__t_tarray1_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray1_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__890__t_tarray1_match,
                          1,(IData)(vlSelf->top__DOT__tarray1_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray1_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__890__t_tarray1_match,
                      1,(IData)(vlSelf->top__DOT__tarray1_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 831, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__890__t_line0_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__890__t_line0_dirty,
                          1,(IData)(vlSelf->top__DOT__line0_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__890__t_line0_dirty,
                      1,(IData)(vlSelf->top__DOT__line0_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 837, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__890__t_line1_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__890__t_line1_dirty,
                          1,(IData)(vlSelf->top__DOT__line1_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__890__t_line1_dirty,
                      1,(IData)(vlSelf->top__DOT__line1_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 843, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__890__t_line0_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__890__t_line0_valid,
                          1,(IData)(vlSelf->top__DOT__line0_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__890__t_line0_valid,
                      1,(IData)(vlSelf->top__DOT__line0_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 849, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__890__t_line1_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__890__t_line1_valid,
                          1,(IData)(vlSelf->top__DOT__line1_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__890__t_line1_valid,
                      1,(IData)(vlSelf->top__DOT__line1_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 855, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__890__t_incoming_mem_type)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("incoming_mem_type is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__890__t_incoming_mem_type,
                          1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("incoming_mem_type is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__890__t_incoming_mem_type,
                      1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 861, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__890__t_req_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("req_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__890__t_req_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("req_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__890__t_req_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 867, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__890__t_resp_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("resp_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__890__t_resp_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("resp_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__890__t_resp_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 873, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__all_flushed) 
                       == (IData)(__Vtask_top__DOT__test_outputs__890__t_all_flushed)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("all_flushed is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__890__t_all_flushed,
                          1,(IData)(vlSelf->top__DOT__all_flushed));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("all_flushed is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__890__t_all_flushed,
                      1,(IData)(vlSelf->top__DOT__all_flushed));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 879, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                      >> 0x2cU))) == (IData)(__Vtask_top__DOT__test_outputs__890__t_memresp_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__890__t_memresp_msg_type_,
                          3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                           >> 0x2cU))));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__890__t_memresp_msg_type_,
                      3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                       >> 0x2cU))));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 885, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__memresp_msg) 
                       == __Vtask_top__DOT__test_outputs__890__t_memresp_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__890__t_memresp_msg_data,
                          32,(IData)(vlSelf->top__DOT__memresp_msg));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__890__t_memresp_msg_data,
                      32,(IData)(vlSelf->top__DOT__memresp_msg));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 891, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__890__t_cache_req_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__890__t_cache_req_msg_type_,
                          3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__890__t_cache_req_msg_type_,
                      3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 897, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((((vlSelf->top__DOT__cache_req_msg[2U] 
                         << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                      >> 2U)) == __Vtask_top__DOT__test_outputs__890__t_cache_req_msg_addr))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.addr is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__890__t_cache_req_msg_addr,
                          32,((vlSelf->top__DOT__cache_req_msg[2U] 
                               << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                            >> 2U)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.addr is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__890__t_cache_req_msg_addr,
                      32,((vlSelf->top__DOT__cache_req_msg[2U] 
                           << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                        >> 2U)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 903, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__cache_req_msg[0U] 
                       == __Vtask_top__DOT__test_outputs__890__t_cache_req_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__890__t_cache_req_msg_data,
                          32,vlSelf->top__DOT__cache_req_msg[0U]);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__890__t_cache_req_msg_data,
                      32,vlSelf->top__DOT__cache_req_msg[0U]);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 909, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__d_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__890__t_d_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.d_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__890__t_d_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.d_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__890__t_d_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 915, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__890__t_write_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__890__t_write_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__890__t_write_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 921, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__890__t_read_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.read_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__890__t_read_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.read_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__890__t_read_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 927, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__write_data 
                       == __Vtask_top__DOT__test_outputs__890__t_write_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__890__t_write_data,
                          32,vlSelf->top__DOT__DUT__DOT__write_data);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__890__t_write_data,
                      32,vlSelf->top__DOT__DUT__DOT__write_data);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 933, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty0 
                       == __Vtask_top__DOT__test_outputs__890__t_dirty0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__890__t_dirty0,
                          32,vlSelf->top__DOT__DUT__DOT__dirty0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__890__t_dirty0,
                      32,vlSelf->top__DOT__DUT__DOT__dirty0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 939, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty1 
                       == __Vtask_top__DOT__test_outputs__890__t_dirty1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__890__t_dirty1,
                          32,vlSelf->top__DOT__DUT__DOT__dirty1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__890__t_dirty1,
                      32,vlSelf->top__DOT__DUT__DOT__dirty1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 945, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid0 
                       == __Vtask_top__DOT__test_outputs__890__t_valid0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__890__t_valid0,
                          32,vlSelf->top__DOT__DUT__DOT__valid0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__890__t_valid0,
                      32,vlSelf->top__DOT__DUT__DOT__valid0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 951, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid1 
                       == __Vtask_top__DOT__test_outputs__890__t_valid1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__890__t_valid1,
                          32,vlSelf->top__DOT__DUT__DOT__valid1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__890__t_valid1,
                      32,vlSelf->top__DOT__DUT__DOT__valid1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 957, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__flush_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__890__t_flush_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.flush_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__890__t_flush_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.flush_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__890__t_flush_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 963, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0U == vlSelf->top__DOT__DUT__DOT__dirty0) 
                       == (IData)(__Vtask_top__DOT__test_outputs__890__t_flush_way_sel)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("flush_way_sel is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__890__t_flush_way_sel,
                          1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("flush_way_sel is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__890__t_flush_way_sel,
                      1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 969, "");
        }
    }
    vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\n---------------------------------------\nUnit Test 3: Write Miss + Evict\n---------------------------------------\n");
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       425);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    __Vtask_top__DOT__set_inputs__941__t_way_select = 0U;
    __Vtask_top__DOT__set_inputs__941__t_cache_type = 0U;
    __Vtask_top__DOT__set_inputs__941__t_cache_data = 0U;
    __Vtask_top__DOT__set_inputs__941__t_mem_type = 1U;
    __Vtask_top__DOT__set_inputs__941__t_mem_data = 0xffffffffU;
    __Vtask_top__DOT__set_inputs__941__t_mem_addr = 0xfffffffU;
    __Vtask_top__DOT__set_inputs__941__t_state = 1U;
    __Vtask_top__DOT__set_inputs__941__t_valid_set = 0U;
    __Vtask_top__DOT__set_inputs__941__t_dirty_set = 0U;
    __Vtask_top__DOT__set_inputs__941__t_clean_set = 0U;
    __Vtask_top__DOT__set_inputs__941__t_mem_action = 0U;
    __Vtask_top__DOT__set_inputs__941__t_read_word_sel = 0U;
    __Vtask_top__DOT__set_inputs__941__t_write_word_sel = 0U;
    __Vtask_top__DOT__set_inputs__941__t_index_sel = 0U;
    __Vtask_top__DOT__set_inputs__941__t_darray_wen = 0U;
    __Vtask_top__DOT__set_inputs__941__t_darray_en = 1U;
    __Vtask_top__DOT__set_inputs__941__t_write_data_sel = 0U;
    __Vtask_top__DOT__set_inputs__941__t_count_reset = 1U;
    __Vtask_top__DOT__set_inputs__941__t_resp_count_en = 0U;
    __Vtask_top__DOT__set_inputs__941__t_req_count_en = 0U;
    __Vtask_top__DOT__set_inputs__941__t_tarray_wen = 0U;
    __Vtask_top__DOT__set_inputs__941__t_tarray_en = 1U;
    __Vtask_top__DOT__set_inputs__941__t_input_en = 1U;
    __Vtask_top__DOT__set_inputs__941__t_flush_done = 0U;
    __Vtask_top__DOT__set_inputs__941__t_flush = 0U;
    vlSelf->top__DOT__flush = __Vtask_top__DOT__set_inputs__941__t_flush;
    vlSelf->top__DOT__flush_done = __Vtask_top__DOT__set_inputs__941__t_flush_done;
    vlSelf->top__DOT__input_en = __Vtask_top__DOT__set_inputs__941__t_input_en;
    vlSelf->top__DOT__tarray_en = __Vtask_top__DOT__set_inputs__941__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = __Vtask_top__DOT__set_inputs__941__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = __Vtask_top__DOT__set_inputs__941__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = __Vtask_top__DOT__set_inputs__941__t_resp_count_en;
    vlSelf->top__DOT__count_reset = __Vtask_top__DOT__set_inputs__941__t_count_reset;
    vlSelf->top__DOT__write_data_sel = __Vtask_top__DOT__set_inputs__941__t_write_data_sel;
    vlSelf->top__DOT__darray_en = __Vtask_top__DOT__set_inputs__941__t_darray_en;
    vlSelf->top__DOT__darray_wen = __Vtask_top__DOT__set_inputs__941__t_darray_wen;
    vlSelf->top__DOT__index_sel = __Vtask_top__DOT__set_inputs__941__t_index_sel;
    vlSelf->top__DOT__write_word_sel = __Vtask_top__DOT__set_inputs__941__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = __Vtask_top__DOT__set_inputs__941__t_read_word_sel;
    vlSelf->top__DOT__mem_action = __Vtask_top__DOT__set_inputs__941__t_mem_action;
    vlSelf->top__DOT__clean_set = __Vtask_top__DOT__set_inputs__941__t_clean_set;
    vlSelf->top__DOT__dirty_set = __Vtask_top__DOT__set_inputs__941__t_dirty_set;
    vlSelf->top__DOT__valid_set = __Vtask_top__DOT__set_inputs__941__t_valid_set;
    vlSelf->top__DOT__state = __Vtask_top__DOT__set_inputs__941__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (__Vtask_top__DOT__set_inputs__941__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (__Vtask_top__DOT__set_inputs__941__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = __Vtask_top__DOT__set_inputs__941__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(__Vtask_top__DOT__set_inputs__941__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(__Vtask_top__DOT__set_inputs__941__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(__Vtask_top__DOT__set_inputs__941__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = __Vtask_top__DOT__set_inputs__941__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\nWrite miss in MT - line0 is dirty\n");
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       433);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    __Vtask_top__DOT__test_outputs__942__t_flush_way_sel = 0U;
    __Vtask_top__DOT__test_outputs__942__t_flush_index = 0x1fU;
    __Vtask_top__DOT__test_outputs__942__t_valid1 = 0x4000000U;
    __Vtask_top__DOT__test_outputs__942__t_valid0 = 0x80000000U;
    __Vtask_top__DOT__test_outputs__942__t_dirty1 = 0x4000000U;
    __Vtask_top__DOT__test_outputs__942__t_dirty0 = 0x80000000U;
    __Vtask_top__DOT__test_outputs__942__t_write_data = 0xffffffffU;
    __Vtask_top__DOT__test_outputs__942__t_read_word_offset = 0xfU;
    __Vtask_top__DOT__test_outputs__942__t_write_word_offset = 0xfU;
    __Vtask_top__DOT__test_outputs__942__t_d_index = 0x1fU;
    __Vtask_top__DOT__test_outputs__942__t_cache_req_msg_data = 0U;
    __Vtask_top__DOT__test_outputs__942__t_cache_req_msg_addr = 0xfffffc3U;
    __Vtask_top__DOT__test_outputs__942__t_cache_req_msg_type_ = 0U;
    __Vtask_top__DOT__test_outputs__942__t_memresp_msg_data = 0U;
    __Vtask_top__DOT__test_outputs__942__t_memresp_msg_type_ = 1U;
    __Vtask_top__DOT__test_outputs__942__t_all_flushed = 0U;
    __Vtask_top__DOT__test_outputs__942__t_resp_count_done = 0U;
    __Vtask_top__DOT__test_outputs__942__t_req_count_done = 0U;
    __Vtask_top__DOT__test_outputs__942__t_incoming_mem_type = 1U;
    __Vtask_top__DOT__test_outputs__942__t_line1_valid = 0U;
    __Vtask_top__DOT__test_outputs__942__t_line0_valid = 1U;
    __Vtask_top__DOT__test_outputs__942__t_line1_dirty = 0U;
    __Vtask_top__DOT__test_outputs__942__t_line0_dirty = 1U;
    __Vtask_top__DOT__test_outputs__942__t_tarray1_match = 0U;
    __Vtask_top__DOT__test_outputs__942__t_tarray0_match = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray0_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__942__t_tarray0_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray0_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__942__t_tarray0_match,
                          1,(IData)(vlSelf->top__DOT__tarray0_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray0_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__942__t_tarray0_match,
                      1,(IData)(vlSelf->top__DOT__tarray0_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 825, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray1_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__942__t_tarray1_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray1_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__942__t_tarray1_match,
                          1,(IData)(vlSelf->top__DOT__tarray1_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray1_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__942__t_tarray1_match,
                      1,(IData)(vlSelf->top__DOT__tarray1_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 831, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__942__t_line0_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__942__t_line0_dirty,
                          1,(IData)(vlSelf->top__DOT__line0_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__942__t_line0_dirty,
                      1,(IData)(vlSelf->top__DOT__line0_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 837, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__942__t_line1_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__942__t_line1_dirty,
                          1,(IData)(vlSelf->top__DOT__line1_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__942__t_line1_dirty,
                      1,(IData)(vlSelf->top__DOT__line1_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 843, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__942__t_line0_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__942__t_line0_valid,
                          1,(IData)(vlSelf->top__DOT__line0_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__942__t_line0_valid,
                      1,(IData)(vlSelf->top__DOT__line0_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 849, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__942__t_line1_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__942__t_line1_valid,
                          1,(IData)(vlSelf->top__DOT__line1_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__942__t_line1_valid,
                      1,(IData)(vlSelf->top__DOT__line1_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 855, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__942__t_incoming_mem_type)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("incoming_mem_type is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__942__t_incoming_mem_type,
                          1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("incoming_mem_type is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__942__t_incoming_mem_type,
                      1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 861, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__942__t_req_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("req_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__942__t_req_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("req_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__942__t_req_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 867, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__942__t_resp_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("resp_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__942__t_resp_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("resp_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__942__t_resp_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 873, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__all_flushed) 
                       == (IData)(__Vtask_top__DOT__test_outputs__942__t_all_flushed)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("all_flushed is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__942__t_all_flushed,
                          1,(IData)(vlSelf->top__DOT__all_flushed));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("all_flushed is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__942__t_all_flushed,
                      1,(IData)(vlSelf->top__DOT__all_flushed));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 879, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                      >> 0x2cU))) == (IData)(__Vtask_top__DOT__test_outputs__942__t_memresp_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__942__t_memresp_msg_type_,
                          3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                           >> 0x2cU))));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__942__t_memresp_msg_type_,
                      3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                       >> 0x2cU))));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 885, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__memresp_msg) 
                       == __Vtask_top__DOT__test_outputs__942__t_memresp_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__942__t_memresp_msg_data,
                          32,(IData)(vlSelf->top__DOT__memresp_msg));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__942__t_memresp_msg_data,
                      32,(IData)(vlSelf->top__DOT__memresp_msg));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 891, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__942__t_cache_req_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__942__t_cache_req_msg_type_,
                          3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__942__t_cache_req_msg_type_,
                      3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 897, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((((vlSelf->top__DOT__cache_req_msg[2U] 
                         << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                      >> 2U)) == __Vtask_top__DOT__test_outputs__942__t_cache_req_msg_addr))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.addr is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__942__t_cache_req_msg_addr,
                          32,((vlSelf->top__DOT__cache_req_msg[2U] 
                               << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                            >> 2U)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.addr is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__942__t_cache_req_msg_addr,
                      32,((vlSelf->top__DOT__cache_req_msg[2U] 
                           << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                        >> 2U)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 903, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__cache_req_msg[0U] 
                       == __Vtask_top__DOT__test_outputs__942__t_cache_req_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__942__t_cache_req_msg_data,
                          32,vlSelf->top__DOT__cache_req_msg[0U]);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__942__t_cache_req_msg_data,
                      32,vlSelf->top__DOT__cache_req_msg[0U]);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 909, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__d_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__942__t_d_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.d_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__942__t_d_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.d_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__942__t_d_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 915, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__942__t_write_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__942__t_write_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__942__t_write_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 921, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__942__t_read_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.read_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__942__t_read_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.read_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__942__t_read_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 927, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__write_data 
                       == __Vtask_top__DOT__test_outputs__942__t_write_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__942__t_write_data,
                          32,vlSelf->top__DOT__DUT__DOT__write_data);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__942__t_write_data,
                      32,vlSelf->top__DOT__DUT__DOT__write_data);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 933, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty0 
                       == __Vtask_top__DOT__test_outputs__942__t_dirty0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__942__t_dirty0,
                          32,vlSelf->top__DOT__DUT__DOT__dirty0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__942__t_dirty0,
                      32,vlSelf->top__DOT__DUT__DOT__dirty0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 939, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty1 
                       == __Vtask_top__DOT__test_outputs__942__t_dirty1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__942__t_dirty1,
                          32,vlSelf->top__DOT__DUT__DOT__dirty1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__942__t_dirty1,
                      32,vlSelf->top__DOT__DUT__DOT__dirty1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 945, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid0 
                       == __Vtask_top__DOT__test_outputs__942__t_valid0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__942__t_valid0,
                          32,vlSelf->top__DOT__DUT__DOT__valid0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__942__t_valid0,
                      32,vlSelf->top__DOT__DUT__DOT__valid0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 951, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid1 
                       == __Vtask_top__DOT__test_outputs__942__t_valid1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__942__t_valid1,
                          32,vlSelf->top__DOT__DUT__DOT__valid1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__942__t_valid1,
                      32,vlSelf->top__DOT__DUT__DOT__valid1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 957, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__flush_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__942__t_flush_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.flush_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__942__t_flush_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.flush_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__942__t_flush_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 963, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0U == vlSelf->top__DOT__DUT__DOT__dirty0) 
                       == (IData)(__Vtask_top__DOT__test_outputs__942__t_flush_way_sel)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("flush_way_sel is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__942__t_flush_way_sel,
                          1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("flush_way_sel is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__942__t_flush_way_sel,
                      1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 969, "");
        }
    }
    vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       439);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    __Vtask_top__DOT__set_inputs__993__t_way_select = 0U;
    __Vtask_top__DOT__set_inputs__993__t_cache_type = 0U;
    __Vtask_top__DOT__set_inputs__993__t_cache_data = 0U;
    __Vtask_top__DOT__set_inputs__993__t_mem_type = 1U;
    __Vtask_top__DOT__set_inputs__993__t_mem_data = 0xffffffffU;
    __Vtask_top__DOT__set_inputs__993__t_mem_addr = 0xfffffffU;
    __Vtask_top__DOT__set_inputs__993__t_state = 2U;
    __Vtask_top__DOT__set_inputs__993__t_valid_set = 0U;
    __Vtask_top__DOT__set_inputs__993__t_dirty_set = 0U;
    __Vtask_top__DOT__set_inputs__993__t_clean_set = 1U;
    __Vtask_top__DOT__set_inputs__993__t_mem_action = 1U;
    __Vtask_top__DOT__set_inputs__993__t_read_word_sel = 1U;
    __Vtask_top__DOT__set_inputs__993__t_write_word_sel = 0U;
    __Vtask_top__DOT__set_inputs__993__t_index_sel = 0U;
    __Vtask_top__DOT__set_inputs__993__t_darray_wen = 0U;
    __Vtask_top__DOT__set_inputs__993__t_darray_en = 1U;
    __Vtask_top__DOT__set_inputs__993__t_write_data_sel = 0U;
    __Vtask_top__DOT__set_inputs__993__t_count_reset = 0U;
    __Vtask_top__DOT__set_inputs__993__t_resp_count_en = 0U;
    __Vtask_top__DOT__set_inputs__993__t_req_count_en = 0U;
    __Vtask_top__DOT__set_inputs__993__t_tarray_wen = 0U;
    __Vtask_top__DOT__set_inputs__993__t_tarray_en = 0U;
    __Vtask_top__DOT__set_inputs__993__t_input_en = 0U;
    __Vtask_top__DOT__set_inputs__993__t_flush_done = 0U;
    __Vtask_top__DOT__set_inputs__993__t_flush = 0U;
    vlSelf->top__DOT__flush = __Vtask_top__DOT__set_inputs__993__t_flush;
    vlSelf->top__DOT__flush_done = __Vtask_top__DOT__set_inputs__993__t_flush_done;
    vlSelf->top__DOT__input_en = __Vtask_top__DOT__set_inputs__993__t_input_en;
    vlSelf->top__DOT__tarray_en = __Vtask_top__DOT__set_inputs__993__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = __Vtask_top__DOT__set_inputs__993__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = __Vtask_top__DOT__set_inputs__993__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = __Vtask_top__DOT__set_inputs__993__t_resp_count_en;
    vlSelf->top__DOT__count_reset = __Vtask_top__DOT__set_inputs__993__t_count_reset;
    vlSelf->top__DOT__write_data_sel = __Vtask_top__DOT__set_inputs__993__t_write_data_sel;
    vlSelf->top__DOT__darray_en = __Vtask_top__DOT__set_inputs__993__t_darray_en;
    vlSelf->top__DOT__darray_wen = __Vtask_top__DOT__set_inputs__993__t_darray_wen;
    vlSelf->top__DOT__index_sel = __Vtask_top__DOT__set_inputs__993__t_index_sel;
    vlSelf->top__DOT__write_word_sel = __Vtask_top__DOT__set_inputs__993__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = __Vtask_top__DOT__set_inputs__993__t_read_word_sel;
    vlSelf->top__DOT__mem_action = __Vtask_top__DOT__set_inputs__993__t_mem_action;
    vlSelf->top__DOT__clean_set = __Vtask_top__DOT__set_inputs__993__t_clean_set;
    vlSelf->top__DOT__dirty_set = __Vtask_top__DOT__set_inputs__993__t_dirty_set;
    vlSelf->top__DOT__valid_set = __Vtask_top__DOT__set_inputs__993__t_valid_set;
    vlSelf->top__DOT__state = __Vtask_top__DOT__set_inputs__993__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (__Vtask_top__DOT__set_inputs__993__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (__Vtask_top__DOT__set_inputs__993__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = __Vtask_top__DOT__set_inputs__993__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(__Vtask_top__DOT__set_inputs__993__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(__Vtask_top__DOT__set_inputs__993__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(__Vtask_top__DOT__set_inputs__993__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = __Vtask_top__DOT__set_inputs__993__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\nEvict initialized - wait for mem ready\n");
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       447);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vtask_top__DOT__test_outputs__994__t_flush_way_sel = 1U;
    vlSelf->__Vtask_top__DOT__test_outputs__994__t_flush_index = 0x1aU;
    vlSelf->__Vtask_top__DOT__test_outputs__994__t_valid1 = 0x4000000U;
    vlSelf->__Vtask_top__DOT__test_outputs__994__t_valid0 = 0x80000000U;
    vlSelf->__Vtask_top__DOT__test_outputs__994__t_dirty1 = 0x4000000U;
    vlSelf->__Vtask_top__DOT__test_outputs__994__t_dirty0 = 0U;
    vlSelf->__Vtask_top__DOT__test_outputs__994__t_write_data = 0xffffffffU;
    vlSelf->__Vtask_top__DOT__test_outputs__994__t_read_word_offset = 0U;
    vlSelf->__Vtask_top__DOT__test_outputs__994__t_write_word_offset = 0xfU;
    vlSelf->__Vtask_top__DOT__test_outputs__994__t_d_index = 0x1fU;
    vlSelf->__Vtask_top__DOT__test_outputs__994__t_cache_req_msg_data = 0xffffffffU;
    vlSelf->__Vtask_top__DOT__test_outputs__994__t_cache_req_msg_addr = 0xffffffc3U;
    vlSelf->__Vtask_top__DOT__test_outputs__994__t_cache_req_msg_type_ = 1U;
    vlSelf->__Vtask_top__DOT__test_outputs__994__t_memresp_msg_data = 0xffffffffU;
    vlSelf->__Vtask_top__DOT__test_outputs__994__t_memresp_msg_type_ = 1U;
    vlSelf->__Vtask_top__DOT__test_outputs__994__t_all_flushed = 0U;
    vlSelf->__Vtask_top__DOT__test_outputs__994__t_resp_count_done = 0U;
    vlSelf->__Vtask_top__DOT__test_outputs__994__t_req_count_done = 0U;
    vlSelf->__Vtask_top__DOT__test_outputs__994__t_incoming_mem_type = 1U;
    vlSelf->__Vtask_top__DOT__test_outputs__994__t_line1_valid = 0U;
    __Vtask_top__DOT__test_outputs__994__t_line0_valid = 1U;
    __Vtask_top__DOT__test_outputs__994__t_line1_dirty = 0U;
    __Vtask_top__DOT__test_outputs__994__t_line0_dirty = 0U;
    __Vtask_top__DOT__test_outputs__994__t_tarray1_match = 0U;
    __Vtask_top__DOT__test_outputs__994__t_tarray0_match = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray0_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__994__t_tarray0_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray0_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__994__t_tarray0_match,
                          1,(IData)(vlSelf->top__DOT__tarray0_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray0_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__994__t_tarray0_match,
                      1,(IData)(vlSelf->top__DOT__tarray0_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 825, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray1_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__994__t_tarray1_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray1_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__994__t_tarray1_match,
                          1,(IData)(vlSelf->top__DOT__tarray1_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray1_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__994__t_tarray1_match,
                      1,(IData)(vlSelf->top__DOT__tarray1_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 831, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__994__t_line0_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__994__t_line0_dirty,
                          1,(IData)(vlSelf->top__DOT__line0_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__994__t_line0_dirty,
                      1,(IData)(vlSelf->top__DOT__line0_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 837, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__994__t_line1_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__994__t_line1_dirty,
                          1,(IData)(vlSelf->top__DOT__line1_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__994__t_line1_dirty,
                      1,(IData)(vlSelf->top__DOT__line1_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 843, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__994__t_line0_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__994__t_line0_valid,
                          1,(IData)(vlSelf->top__DOT__line0_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__994__t_line0_valid,
                      1,(IData)(vlSelf->top__DOT__line0_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 849, "");
        }
    }
    vlSelf->__Vm_traceActivity[1U] = 1U;
}
