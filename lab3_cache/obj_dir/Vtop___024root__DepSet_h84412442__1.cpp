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

VlCoroutine Vtop___024root___eval_initial__TOP__0__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__0__1\n"); );
    // Init
    IData/*31:0*/ __Vtask_top__DOT__delay__1045__delay_val;
    __Vtask_top__DOT__delay__1045__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__1045__unnamedblk6__DOT__i;
    __Vtask_top__DOT__delay__1045__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1046__t_flush;
    __Vtask_top__DOT__set_inputs__1046__t_flush = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1046__t_flush_done;
    __Vtask_top__DOT__set_inputs__1046__t_flush_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1046__t_input_en;
    __Vtask_top__DOT__set_inputs__1046__t_input_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1046__t_tarray_en;
    __Vtask_top__DOT__set_inputs__1046__t_tarray_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1046__t_tarray_wen;
    __Vtask_top__DOT__set_inputs__1046__t_tarray_wen = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1046__t_req_count_en;
    __Vtask_top__DOT__set_inputs__1046__t_req_count_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1046__t_resp_count_en;
    __Vtask_top__DOT__set_inputs__1046__t_resp_count_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1046__t_count_reset;
    __Vtask_top__DOT__set_inputs__1046__t_count_reset = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1046__t_write_data_sel;
    __Vtask_top__DOT__set_inputs__1046__t_write_data_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1046__t_darray_en;
    __Vtask_top__DOT__set_inputs__1046__t_darray_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1046__t_darray_wen;
    __Vtask_top__DOT__set_inputs__1046__t_darray_wen = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1046__t_index_sel;
    __Vtask_top__DOT__set_inputs__1046__t_index_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1046__t_write_word_sel;
    __Vtask_top__DOT__set_inputs__1046__t_write_word_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1046__t_read_word_sel;
    __Vtask_top__DOT__set_inputs__1046__t_read_word_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1046__t_mem_action;
    __Vtask_top__DOT__set_inputs__1046__t_mem_action = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1046__t_clean_set;
    __Vtask_top__DOT__set_inputs__1046__t_clean_set = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1046__t_dirty_set;
    __Vtask_top__DOT__set_inputs__1046__t_dirty_set = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1046__t_valid_set;
    __Vtask_top__DOT__set_inputs__1046__t_valid_set = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__1046__t_state;
    __Vtask_top__DOT__set_inputs__1046__t_state = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__1046__t_mem_addr;
    __Vtask_top__DOT__set_inputs__1046__t_mem_addr = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__1046__t_mem_data;
    __Vtask_top__DOT__set_inputs__1046__t_mem_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__1046__t_mem_type;
    __Vtask_top__DOT__set_inputs__1046__t_mem_type = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__1046__t_cache_data;
    __Vtask_top__DOT__set_inputs__1046__t_cache_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__1046__t_cache_type;
    __Vtask_top__DOT__set_inputs__1046__t_cache_type = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1046__t_way_select;
    __Vtask_top__DOT__set_inputs__1046__t_way_select = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1047__t_tarray0_match;
    __Vtask_top__DOT__test_outputs__1047__t_tarray0_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1047__t_tarray1_match;
    __Vtask_top__DOT__test_outputs__1047__t_tarray1_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1047__t_line0_dirty;
    __Vtask_top__DOT__test_outputs__1047__t_line0_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1047__t_line1_dirty;
    __Vtask_top__DOT__test_outputs__1047__t_line1_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1047__t_line0_valid;
    __Vtask_top__DOT__test_outputs__1047__t_line0_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1047__t_line1_valid;
    __Vtask_top__DOT__test_outputs__1047__t_line1_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1047__t_incoming_mem_type;
    __Vtask_top__DOT__test_outputs__1047__t_incoming_mem_type = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1047__t_req_count_done;
    __Vtask_top__DOT__test_outputs__1047__t_req_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1047__t_resp_count_done;
    __Vtask_top__DOT__test_outputs__1047__t_resp_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1047__t_all_flushed;
    __Vtask_top__DOT__test_outputs__1047__t_all_flushed = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__1047__t_memresp_msg_type_;
    __Vtask_top__DOT__test_outputs__1047__t_memresp_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1047__t_memresp_msg_data;
    __Vtask_top__DOT__test_outputs__1047__t_memresp_msg_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__1047__t_cache_req_msg_type_;
    __Vtask_top__DOT__test_outputs__1047__t_cache_req_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1047__t_cache_req_msg_addr;
    __Vtask_top__DOT__test_outputs__1047__t_cache_req_msg_addr = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1047__t_cache_req_msg_data;
    __Vtask_top__DOT__test_outputs__1047__t_cache_req_msg_data = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__1047__t_d_index;
    __Vtask_top__DOT__test_outputs__1047__t_d_index = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__1047__t_write_word_offset;
    __Vtask_top__DOT__test_outputs__1047__t_write_word_offset = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__1047__t_read_word_offset;
    __Vtask_top__DOT__test_outputs__1047__t_read_word_offset = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1047__t_write_data;
    __Vtask_top__DOT__test_outputs__1047__t_write_data = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1047__t_dirty0;
    __Vtask_top__DOT__test_outputs__1047__t_dirty0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1047__t_dirty1;
    __Vtask_top__DOT__test_outputs__1047__t_dirty1 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1047__t_valid0;
    __Vtask_top__DOT__test_outputs__1047__t_valid0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1047__t_valid1;
    __Vtask_top__DOT__test_outputs__1047__t_valid1 = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__1047__t_flush_index;
    __Vtask_top__DOT__test_outputs__1047__t_flush_index = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1047__t_flush_way_sel;
    __Vtask_top__DOT__test_outputs__1047__t_flush_way_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1098__t_tarray0_match;
    __Vtask_top__DOT__test_outputs__1098__t_tarray0_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1098__t_tarray1_match;
    __Vtask_top__DOT__test_outputs__1098__t_tarray1_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1098__t_line0_dirty;
    __Vtask_top__DOT__test_outputs__1098__t_line0_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1098__t_line1_dirty;
    __Vtask_top__DOT__test_outputs__1098__t_line1_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1098__t_line0_valid;
    __Vtask_top__DOT__test_outputs__1098__t_line0_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1098__t_line1_valid;
    __Vtask_top__DOT__test_outputs__1098__t_line1_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1098__t_incoming_mem_type;
    __Vtask_top__DOT__test_outputs__1098__t_incoming_mem_type = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1098__t_req_count_done;
    __Vtask_top__DOT__test_outputs__1098__t_req_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1098__t_resp_count_done;
    __Vtask_top__DOT__test_outputs__1098__t_resp_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1098__t_all_flushed;
    __Vtask_top__DOT__test_outputs__1098__t_all_flushed = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__1098__t_memresp_msg_type_;
    __Vtask_top__DOT__test_outputs__1098__t_memresp_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1098__t_memresp_msg_data;
    __Vtask_top__DOT__test_outputs__1098__t_memresp_msg_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__1098__t_cache_req_msg_type_;
    __Vtask_top__DOT__test_outputs__1098__t_cache_req_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1098__t_cache_req_msg_addr;
    __Vtask_top__DOT__test_outputs__1098__t_cache_req_msg_addr = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1098__t_cache_req_msg_data;
    __Vtask_top__DOT__test_outputs__1098__t_cache_req_msg_data = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__1098__t_d_index;
    __Vtask_top__DOT__test_outputs__1098__t_d_index = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__1098__t_write_word_offset;
    __Vtask_top__DOT__test_outputs__1098__t_write_word_offset = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__1098__t_read_word_offset;
    __Vtask_top__DOT__test_outputs__1098__t_read_word_offset = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1098__t_write_data;
    __Vtask_top__DOT__test_outputs__1098__t_write_data = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1098__t_dirty0;
    __Vtask_top__DOT__test_outputs__1098__t_dirty0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1098__t_dirty1;
    __Vtask_top__DOT__test_outputs__1098__t_dirty1 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1098__t_valid0;
    __Vtask_top__DOT__test_outputs__1098__t_valid0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1098__t_valid1;
    __Vtask_top__DOT__test_outputs__1098__t_valid1 = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__1098__t_flush_index;
    __Vtask_top__DOT__test_outputs__1098__t_flush_index = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1098__t_flush_way_sel;
    __Vtask_top__DOT__test_outputs__1098__t_flush_way_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1149__t_tarray0_match;
    __Vtask_top__DOT__test_outputs__1149__t_tarray0_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1149__t_tarray1_match;
    __Vtask_top__DOT__test_outputs__1149__t_tarray1_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1149__t_line0_dirty;
    __Vtask_top__DOT__test_outputs__1149__t_line0_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1149__t_line1_dirty;
    __Vtask_top__DOT__test_outputs__1149__t_line1_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1149__t_line0_valid;
    __Vtask_top__DOT__test_outputs__1149__t_line0_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1149__t_line1_valid;
    __Vtask_top__DOT__test_outputs__1149__t_line1_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1149__t_incoming_mem_type;
    __Vtask_top__DOT__test_outputs__1149__t_incoming_mem_type = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1149__t_req_count_done;
    __Vtask_top__DOT__test_outputs__1149__t_req_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1149__t_resp_count_done;
    __Vtask_top__DOT__test_outputs__1149__t_resp_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1149__t_all_flushed;
    __Vtask_top__DOT__test_outputs__1149__t_all_flushed = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__1149__t_memresp_msg_type_;
    __Vtask_top__DOT__test_outputs__1149__t_memresp_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1149__t_memresp_msg_data;
    __Vtask_top__DOT__test_outputs__1149__t_memresp_msg_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__1149__t_cache_req_msg_type_;
    __Vtask_top__DOT__test_outputs__1149__t_cache_req_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1149__t_cache_req_msg_addr;
    __Vtask_top__DOT__test_outputs__1149__t_cache_req_msg_addr = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1149__t_cache_req_msg_data;
    __Vtask_top__DOT__test_outputs__1149__t_cache_req_msg_data = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__1149__t_d_index;
    __Vtask_top__DOT__test_outputs__1149__t_d_index = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__1149__t_write_word_offset;
    __Vtask_top__DOT__test_outputs__1149__t_write_word_offset = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__1149__t_read_word_offset;
    __Vtask_top__DOT__test_outputs__1149__t_read_word_offset = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1149__t_write_data;
    __Vtask_top__DOT__test_outputs__1149__t_write_data = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1149__t_dirty0;
    __Vtask_top__DOT__test_outputs__1149__t_dirty0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1149__t_dirty1;
    __Vtask_top__DOT__test_outputs__1149__t_dirty1 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1149__t_valid0;
    __Vtask_top__DOT__test_outputs__1149__t_valid0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1149__t_valid1;
    __Vtask_top__DOT__test_outputs__1149__t_valid1 = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__1149__t_flush_index;
    __Vtask_top__DOT__test_outputs__1149__t_flush_index = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1149__t_flush_way_sel;
    __Vtask_top__DOT__test_outputs__1149__t_flush_way_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1200__t_tarray0_match;
    __Vtask_top__DOT__test_outputs__1200__t_tarray0_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1200__t_tarray1_match;
    __Vtask_top__DOT__test_outputs__1200__t_tarray1_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1200__t_line0_dirty;
    __Vtask_top__DOT__test_outputs__1200__t_line0_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1200__t_line1_dirty;
    __Vtask_top__DOT__test_outputs__1200__t_line1_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1200__t_line0_valid;
    __Vtask_top__DOT__test_outputs__1200__t_line0_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1200__t_line1_valid;
    __Vtask_top__DOT__test_outputs__1200__t_line1_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1200__t_incoming_mem_type;
    __Vtask_top__DOT__test_outputs__1200__t_incoming_mem_type = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1200__t_req_count_done;
    __Vtask_top__DOT__test_outputs__1200__t_req_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1200__t_resp_count_done;
    __Vtask_top__DOT__test_outputs__1200__t_resp_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1200__t_all_flushed;
    __Vtask_top__DOT__test_outputs__1200__t_all_flushed = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__1200__t_memresp_msg_type_;
    __Vtask_top__DOT__test_outputs__1200__t_memresp_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1200__t_memresp_msg_data;
    __Vtask_top__DOT__test_outputs__1200__t_memresp_msg_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__1200__t_cache_req_msg_type_;
    __Vtask_top__DOT__test_outputs__1200__t_cache_req_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1200__t_cache_req_msg_addr;
    __Vtask_top__DOT__test_outputs__1200__t_cache_req_msg_addr = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1200__t_cache_req_msg_data;
    __Vtask_top__DOT__test_outputs__1200__t_cache_req_msg_data = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__1200__t_d_index;
    __Vtask_top__DOT__test_outputs__1200__t_d_index = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__1200__t_write_word_offset;
    __Vtask_top__DOT__test_outputs__1200__t_write_word_offset = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__1200__t_read_word_offset;
    __Vtask_top__DOT__test_outputs__1200__t_read_word_offset = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1200__t_write_data;
    __Vtask_top__DOT__test_outputs__1200__t_write_data = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1200__t_dirty0;
    __Vtask_top__DOT__test_outputs__1200__t_dirty0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1200__t_dirty1;
    __Vtask_top__DOT__test_outputs__1200__t_dirty1 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1200__t_valid0;
    __Vtask_top__DOT__test_outputs__1200__t_valid0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1200__t_valid1;
    __Vtask_top__DOT__test_outputs__1200__t_valid1 = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__1200__t_flush_index;
    __Vtask_top__DOT__test_outputs__1200__t_flush_index = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1200__t_flush_way_sel;
    __Vtask_top__DOT__test_outputs__1200__t_flush_way_sel = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__1251__delay_val;
    __Vtask_top__DOT__delay__1251__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__1251__unnamedblk6__DOT__i;
    __Vtask_top__DOT__delay__1251__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1252__t_flush;
    __Vtask_top__DOT__set_inputs__1252__t_flush = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1252__t_flush_done;
    __Vtask_top__DOT__set_inputs__1252__t_flush_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1252__t_input_en;
    __Vtask_top__DOT__set_inputs__1252__t_input_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1252__t_tarray_en;
    __Vtask_top__DOT__set_inputs__1252__t_tarray_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1252__t_tarray_wen;
    __Vtask_top__DOT__set_inputs__1252__t_tarray_wen = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1252__t_req_count_en;
    __Vtask_top__DOT__set_inputs__1252__t_req_count_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1252__t_resp_count_en;
    __Vtask_top__DOT__set_inputs__1252__t_resp_count_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1252__t_count_reset;
    __Vtask_top__DOT__set_inputs__1252__t_count_reset = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1252__t_write_data_sel;
    __Vtask_top__DOT__set_inputs__1252__t_write_data_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1252__t_darray_en;
    __Vtask_top__DOT__set_inputs__1252__t_darray_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1252__t_darray_wen;
    __Vtask_top__DOT__set_inputs__1252__t_darray_wen = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1252__t_index_sel;
    __Vtask_top__DOT__set_inputs__1252__t_index_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1252__t_write_word_sel;
    __Vtask_top__DOT__set_inputs__1252__t_write_word_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1252__t_read_word_sel;
    __Vtask_top__DOT__set_inputs__1252__t_read_word_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1252__t_mem_action;
    __Vtask_top__DOT__set_inputs__1252__t_mem_action = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1252__t_clean_set;
    __Vtask_top__DOT__set_inputs__1252__t_clean_set = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1252__t_dirty_set;
    __Vtask_top__DOT__set_inputs__1252__t_dirty_set = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1252__t_valid_set;
    __Vtask_top__DOT__set_inputs__1252__t_valid_set = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__1252__t_state;
    __Vtask_top__DOT__set_inputs__1252__t_state = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__1252__t_mem_addr;
    __Vtask_top__DOT__set_inputs__1252__t_mem_addr = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__1252__t_mem_data;
    __Vtask_top__DOT__set_inputs__1252__t_mem_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__1252__t_mem_type;
    __Vtask_top__DOT__set_inputs__1252__t_mem_type = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__1252__t_cache_data;
    __Vtask_top__DOT__set_inputs__1252__t_cache_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__1252__t_cache_type;
    __Vtask_top__DOT__set_inputs__1252__t_cache_type = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1252__t_way_select;
    __Vtask_top__DOT__set_inputs__1252__t_way_select = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1253__t_tarray0_match;
    __Vtask_top__DOT__test_outputs__1253__t_tarray0_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1253__t_tarray1_match;
    __Vtask_top__DOT__test_outputs__1253__t_tarray1_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1253__t_line0_dirty;
    __Vtask_top__DOT__test_outputs__1253__t_line0_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1253__t_line1_dirty;
    __Vtask_top__DOT__test_outputs__1253__t_line1_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1253__t_line0_valid;
    __Vtask_top__DOT__test_outputs__1253__t_line0_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1253__t_line1_valid;
    __Vtask_top__DOT__test_outputs__1253__t_line1_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1253__t_incoming_mem_type;
    __Vtask_top__DOT__test_outputs__1253__t_incoming_mem_type = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1253__t_req_count_done;
    __Vtask_top__DOT__test_outputs__1253__t_req_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1253__t_resp_count_done;
    __Vtask_top__DOT__test_outputs__1253__t_resp_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1253__t_all_flushed;
    __Vtask_top__DOT__test_outputs__1253__t_all_flushed = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__1253__t_memresp_msg_type_;
    __Vtask_top__DOT__test_outputs__1253__t_memresp_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1253__t_memresp_msg_data;
    __Vtask_top__DOT__test_outputs__1253__t_memresp_msg_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__1253__t_cache_req_msg_type_;
    __Vtask_top__DOT__test_outputs__1253__t_cache_req_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1253__t_cache_req_msg_addr;
    __Vtask_top__DOT__test_outputs__1253__t_cache_req_msg_addr = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1253__t_cache_req_msg_data;
    __Vtask_top__DOT__test_outputs__1253__t_cache_req_msg_data = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__1253__t_d_index;
    __Vtask_top__DOT__test_outputs__1253__t_d_index = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__1253__t_write_word_offset;
    __Vtask_top__DOT__test_outputs__1253__t_write_word_offset = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__1253__t_read_word_offset;
    __Vtask_top__DOT__test_outputs__1253__t_read_word_offset = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1253__t_write_data;
    __Vtask_top__DOT__test_outputs__1253__t_write_data = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1253__t_dirty0;
    __Vtask_top__DOT__test_outputs__1253__t_dirty0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1253__t_dirty1;
    __Vtask_top__DOT__test_outputs__1253__t_dirty1 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1253__t_valid0;
    __Vtask_top__DOT__test_outputs__1253__t_valid0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1253__t_valid1;
    __Vtask_top__DOT__test_outputs__1253__t_valid1 = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__1253__t_flush_index;
    __Vtask_top__DOT__test_outputs__1253__t_flush_index = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1253__t_flush_way_sel;
    __Vtask_top__DOT__test_outputs__1253__t_flush_way_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1304__t_flush;
    __Vtask_top__DOT__set_inputs__1304__t_flush = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1304__t_flush_done;
    __Vtask_top__DOT__set_inputs__1304__t_flush_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1304__t_input_en;
    __Vtask_top__DOT__set_inputs__1304__t_input_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1304__t_tarray_en;
    __Vtask_top__DOT__set_inputs__1304__t_tarray_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1304__t_tarray_wen;
    __Vtask_top__DOT__set_inputs__1304__t_tarray_wen = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1304__t_req_count_en;
    __Vtask_top__DOT__set_inputs__1304__t_req_count_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1304__t_resp_count_en;
    __Vtask_top__DOT__set_inputs__1304__t_resp_count_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1304__t_count_reset;
    __Vtask_top__DOT__set_inputs__1304__t_count_reset = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1304__t_write_data_sel;
    __Vtask_top__DOT__set_inputs__1304__t_write_data_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1304__t_darray_en;
    __Vtask_top__DOT__set_inputs__1304__t_darray_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1304__t_darray_wen;
    __Vtask_top__DOT__set_inputs__1304__t_darray_wen = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1304__t_index_sel;
    __Vtask_top__DOT__set_inputs__1304__t_index_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1304__t_write_word_sel;
    __Vtask_top__DOT__set_inputs__1304__t_write_word_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1304__t_read_word_sel;
    __Vtask_top__DOT__set_inputs__1304__t_read_word_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1304__t_mem_action;
    __Vtask_top__DOT__set_inputs__1304__t_mem_action = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1304__t_clean_set;
    __Vtask_top__DOT__set_inputs__1304__t_clean_set = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1304__t_dirty_set;
    __Vtask_top__DOT__set_inputs__1304__t_dirty_set = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1304__t_valid_set;
    __Vtask_top__DOT__set_inputs__1304__t_valid_set = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__1304__t_state;
    __Vtask_top__DOT__set_inputs__1304__t_state = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__1304__t_mem_addr;
    __Vtask_top__DOT__set_inputs__1304__t_mem_addr = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__1304__t_mem_data;
    __Vtask_top__DOT__set_inputs__1304__t_mem_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__1304__t_mem_type;
    __Vtask_top__DOT__set_inputs__1304__t_mem_type = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__1304__t_cache_data;
    __Vtask_top__DOT__set_inputs__1304__t_cache_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__1304__t_cache_type;
    __Vtask_top__DOT__set_inputs__1304__t_cache_type = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1304__t_way_select;
    __Vtask_top__DOT__set_inputs__1304__t_way_select = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1305__t_tarray0_match;
    __Vtask_top__DOT__test_outputs__1305__t_tarray0_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1305__t_tarray1_match;
    __Vtask_top__DOT__test_outputs__1305__t_tarray1_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1305__t_line0_dirty;
    __Vtask_top__DOT__test_outputs__1305__t_line0_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1305__t_line1_dirty;
    __Vtask_top__DOT__test_outputs__1305__t_line1_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1305__t_line0_valid;
    __Vtask_top__DOT__test_outputs__1305__t_line0_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1305__t_line1_valid;
    __Vtask_top__DOT__test_outputs__1305__t_line1_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1305__t_incoming_mem_type;
    __Vtask_top__DOT__test_outputs__1305__t_incoming_mem_type = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1305__t_req_count_done;
    __Vtask_top__DOT__test_outputs__1305__t_req_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1305__t_resp_count_done;
    __Vtask_top__DOT__test_outputs__1305__t_resp_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1305__t_all_flushed;
    __Vtask_top__DOT__test_outputs__1305__t_all_flushed = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__1305__t_memresp_msg_type_;
    __Vtask_top__DOT__test_outputs__1305__t_memresp_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1305__t_memresp_msg_data;
    __Vtask_top__DOT__test_outputs__1305__t_memresp_msg_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__1305__t_cache_req_msg_type_;
    __Vtask_top__DOT__test_outputs__1305__t_cache_req_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1305__t_cache_req_msg_addr;
    __Vtask_top__DOT__test_outputs__1305__t_cache_req_msg_addr = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1305__t_cache_req_msg_data;
    __Vtask_top__DOT__test_outputs__1305__t_cache_req_msg_data = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__1305__t_d_index;
    __Vtask_top__DOT__test_outputs__1305__t_d_index = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__1305__t_write_word_offset;
    __Vtask_top__DOT__test_outputs__1305__t_write_word_offset = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__1305__t_read_word_offset;
    __Vtask_top__DOT__test_outputs__1305__t_read_word_offset = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1305__t_write_data;
    __Vtask_top__DOT__test_outputs__1305__t_write_data = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1305__t_dirty0;
    __Vtask_top__DOT__test_outputs__1305__t_dirty0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1305__t_dirty1;
    __Vtask_top__DOT__test_outputs__1305__t_dirty1 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1305__t_valid0;
    __Vtask_top__DOT__test_outputs__1305__t_valid0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1305__t_valid1;
    __Vtask_top__DOT__test_outputs__1305__t_valid1 = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__1305__t_flush_index;
    __Vtask_top__DOT__test_outputs__1305__t_flush_index = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1305__t_flush_way_sel;
    __Vtask_top__DOT__test_outputs__1305__t_flush_way_sel = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__1356__delay_val;
    __Vtask_top__DOT__delay__1356__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__1356__unnamedblk6__DOT__i;
    __Vtask_top__DOT__delay__1356__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1357__t_flush;
    __Vtask_top__DOT__set_inputs__1357__t_flush = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1357__t_flush_done;
    __Vtask_top__DOT__set_inputs__1357__t_flush_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1357__t_input_en;
    __Vtask_top__DOT__set_inputs__1357__t_input_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1357__t_tarray_en;
    __Vtask_top__DOT__set_inputs__1357__t_tarray_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1357__t_tarray_wen;
    __Vtask_top__DOT__set_inputs__1357__t_tarray_wen = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1357__t_req_count_en;
    __Vtask_top__DOT__set_inputs__1357__t_req_count_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1357__t_resp_count_en;
    __Vtask_top__DOT__set_inputs__1357__t_resp_count_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1357__t_count_reset;
    __Vtask_top__DOT__set_inputs__1357__t_count_reset = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1357__t_write_data_sel;
    __Vtask_top__DOT__set_inputs__1357__t_write_data_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1357__t_darray_en;
    __Vtask_top__DOT__set_inputs__1357__t_darray_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1357__t_darray_wen;
    __Vtask_top__DOT__set_inputs__1357__t_darray_wen = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1357__t_index_sel;
    __Vtask_top__DOT__set_inputs__1357__t_index_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1357__t_write_word_sel;
    __Vtask_top__DOT__set_inputs__1357__t_write_word_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1357__t_read_word_sel;
    __Vtask_top__DOT__set_inputs__1357__t_read_word_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1357__t_mem_action;
    __Vtask_top__DOT__set_inputs__1357__t_mem_action = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1357__t_clean_set;
    __Vtask_top__DOT__set_inputs__1357__t_clean_set = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1357__t_dirty_set;
    __Vtask_top__DOT__set_inputs__1357__t_dirty_set = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1357__t_valid_set;
    __Vtask_top__DOT__set_inputs__1357__t_valid_set = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__1357__t_state;
    __Vtask_top__DOT__set_inputs__1357__t_state = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__1357__t_mem_addr;
    __Vtask_top__DOT__set_inputs__1357__t_mem_addr = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__1357__t_mem_data;
    __Vtask_top__DOT__set_inputs__1357__t_mem_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__1357__t_mem_type;
    __Vtask_top__DOT__set_inputs__1357__t_mem_type = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__1357__t_cache_data;
    __Vtask_top__DOT__set_inputs__1357__t_cache_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__set_inputs__1357__t_cache_type;
    __Vtask_top__DOT__set_inputs__1357__t_cache_type = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__1357__t_way_select;
    __Vtask_top__DOT__set_inputs__1357__t_way_select = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1358__t_tarray0_match;
    __Vtask_top__DOT__test_outputs__1358__t_tarray0_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1358__t_tarray1_match;
    __Vtask_top__DOT__test_outputs__1358__t_tarray1_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1358__t_line0_dirty;
    __Vtask_top__DOT__test_outputs__1358__t_line0_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1358__t_line1_dirty;
    __Vtask_top__DOT__test_outputs__1358__t_line1_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1358__t_line0_valid;
    __Vtask_top__DOT__test_outputs__1358__t_line0_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1358__t_line1_valid;
    __Vtask_top__DOT__test_outputs__1358__t_line1_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1358__t_incoming_mem_type;
    __Vtask_top__DOT__test_outputs__1358__t_incoming_mem_type = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1358__t_req_count_done;
    __Vtask_top__DOT__test_outputs__1358__t_req_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1358__t_resp_count_done;
    __Vtask_top__DOT__test_outputs__1358__t_resp_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1358__t_all_flushed;
    __Vtask_top__DOT__test_outputs__1358__t_all_flushed = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__1358__t_memresp_msg_type_;
    __Vtask_top__DOT__test_outputs__1358__t_memresp_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1358__t_memresp_msg_data;
    __Vtask_top__DOT__test_outputs__1358__t_memresp_msg_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__1358__t_cache_req_msg_type_;
    __Vtask_top__DOT__test_outputs__1358__t_cache_req_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1358__t_cache_req_msg_addr;
    __Vtask_top__DOT__test_outputs__1358__t_cache_req_msg_addr = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1358__t_cache_req_msg_data;
    __Vtask_top__DOT__test_outputs__1358__t_cache_req_msg_data = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__1358__t_d_index;
    __Vtask_top__DOT__test_outputs__1358__t_d_index = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__1358__t_write_word_offset;
    __Vtask_top__DOT__test_outputs__1358__t_write_word_offset = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__1358__t_read_word_offset;
    __Vtask_top__DOT__test_outputs__1358__t_read_word_offset = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1358__t_write_data;
    __Vtask_top__DOT__test_outputs__1358__t_write_data = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1358__t_dirty0;
    __Vtask_top__DOT__test_outputs__1358__t_dirty0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1358__t_dirty1;
    __Vtask_top__DOT__test_outputs__1358__t_dirty1 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1358__t_valid0;
    __Vtask_top__DOT__test_outputs__1358__t_valid0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1358__t_valid1;
    __Vtask_top__DOT__test_outputs__1358__t_valid1 = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__1358__t_flush_index;
    __Vtask_top__DOT__test_outputs__1358__t_flush_index = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1358__t_flush_way_sel;
    __Vtask_top__DOT__test_outputs__1358__t_flush_way_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1409__t_tarray0_match;
    __Vtask_top__DOT__test_outputs__1409__t_tarray0_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1409__t_tarray1_match;
    __Vtask_top__DOT__test_outputs__1409__t_tarray1_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1409__t_line0_dirty;
    __Vtask_top__DOT__test_outputs__1409__t_line0_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1409__t_line1_dirty;
    __Vtask_top__DOT__test_outputs__1409__t_line1_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1409__t_line0_valid;
    __Vtask_top__DOT__test_outputs__1409__t_line0_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1409__t_line1_valid;
    __Vtask_top__DOT__test_outputs__1409__t_line1_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1409__t_incoming_mem_type;
    __Vtask_top__DOT__test_outputs__1409__t_incoming_mem_type = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1409__t_req_count_done;
    __Vtask_top__DOT__test_outputs__1409__t_req_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1409__t_resp_count_done;
    __Vtask_top__DOT__test_outputs__1409__t_resp_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1409__t_all_flushed;
    __Vtask_top__DOT__test_outputs__1409__t_all_flushed = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__1409__t_memresp_msg_type_;
    __Vtask_top__DOT__test_outputs__1409__t_memresp_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1409__t_memresp_msg_data;
    __Vtask_top__DOT__test_outputs__1409__t_memresp_msg_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__1409__t_cache_req_msg_type_;
    __Vtask_top__DOT__test_outputs__1409__t_cache_req_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1409__t_cache_req_msg_addr;
    __Vtask_top__DOT__test_outputs__1409__t_cache_req_msg_addr = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1409__t_cache_req_msg_data;
    __Vtask_top__DOT__test_outputs__1409__t_cache_req_msg_data = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__1409__t_d_index;
    __Vtask_top__DOT__test_outputs__1409__t_d_index = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__1409__t_write_word_offset;
    __Vtask_top__DOT__test_outputs__1409__t_write_word_offset = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__1409__t_read_word_offset;
    __Vtask_top__DOT__test_outputs__1409__t_read_word_offset = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1409__t_write_data;
    __Vtask_top__DOT__test_outputs__1409__t_write_data = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1409__t_dirty0;
    __Vtask_top__DOT__test_outputs__1409__t_dirty0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1409__t_dirty1;
    __Vtask_top__DOT__test_outputs__1409__t_dirty1 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1409__t_valid0;
    __Vtask_top__DOT__test_outputs__1409__t_valid0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1409__t_valid1;
    __Vtask_top__DOT__test_outputs__1409__t_valid1 = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__1409__t_flush_index;
    __Vtask_top__DOT__test_outputs__1409__t_flush_index = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1409__t_flush_way_sel;
    __Vtask_top__DOT__test_outputs__1409__t_flush_way_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1460__t_tarray0_match;
    __Vtask_top__DOT__test_outputs__1460__t_tarray0_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1460__t_tarray1_match;
    __Vtask_top__DOT__test_outputs__1460__t_tarray1_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1460__t_line0_dirty;
    __Vtask_top__DOT__test_outputs__1460__t_line0_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1460__t_line1_dirty;
    __Vtask_top__DOT__test_outputs__1460__t_line1_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1460__t_line0_valid;
    __Vtask_top__DOT__test_outputs__1460__t_line0_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1460__t_line1_valid;
    __Vtask_top__DOT__test_outputs__1460__t_line1_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1460__t_incoming_mem_type;
    __Vtask_top__DOT__test_outputs__1460__t_incoming_mem_type = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1460__t_req_count_done;
    __Vtask_top__DOT__test_outputs__1460__t_req_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1460__t_resp_count_done;
    __Vtask_top__DOT__test_outputs__1460__t_resp_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1460__t_all_flushed;
    __Vtask_top__DOT__test_outputs__1460__t_all_flushed = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__1460__t_memresp_msg_type_;
    __Vtask_top__DOT__test_outputs__1460__t_memresp_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1460__t_memresp_msg_data;
    __Vtask_top__DOT__test_outputs__1460__t_memresp_msg_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__1460__t_cache_req_msg_type_;
    __Vtask_top__DOT__test_outputs__1460__t_cache_req_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1460__t_cache_req_msg_addr;
    __Vtask_top__DOT__test_outputs__1460__t_cache_req_msg_addr = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1460__t_cache_req_msg_data;
    __Vtask_top__DOT__test_outputs__1460__t_cache_req_msg_data = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__1460__t_d_index;
    __Vtask_top__DOT__test_outputs__1460__t_d_index = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__1460__t_write_word_offset;
    __Vtask_top__DOT__test_outputs__1460__t_write_word_offset = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__1460__t_read_word_offset;
    __Vtask_top__DOT__test_outputs__1460__t_read_word_offset = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1460__t_write_data;
    __Vtask_top__DOT__test_outputs__1460__t_write_data = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1460__t_dirty0;
    __Vtask_top__DOT__test_outputs__1460__t_dirty0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1460__t_dirty1;
    __Vtask_top__DOT__test_outputs__1460__t_dirty1 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1460__t_valid0;
    __Vtask_top__DOT__test_outputs__1460__t_valid0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1460__t_valid1;
    __Vtask_top__DOT__test_outputs__1460__t_valid1 = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__1460__t_flush_index;
    __Vtask_top__DOT__test_outputs__1460__t_flush_index = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1460__t_flush_way_sel;
    __Vtask_top__DOT__test_outputs__1460__t_flush_way_sel = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1511__t_tarray0_match;
    __Vtask_top__DOT__test_outputs__1511__t_tarray0_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1511__t_tarray1_match;
    __Vtask_top__DOT__test_outputs__1511__t_tarray1_match = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1511__t_line0_dirty;
    __Vtask_top__DOT__test_outputs__1511__t_line0_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1511__t_line1_dirty;
    __Vtask_top__DOT__test_outputs__1511__t_line1_dirty = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1511__t_line0_valid;
    __Vtask_top__DOT__test_outputs__1511__t_line0_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1511__t_line1_valid;
    __Vtask_top__DOT__test_outputs__1511__t_line1_valid = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1511__t_incoming_mem_type;
    __Vtask_top__DOT__test_outputs__1511__t_incoming_mem_type = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1511__t_req_count_done;
    __Vtask_top__DOT__test_outputs__1511__t_req_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1511__t_resp_count_done;
    __Vtask_top__DOT__test_outputs__1511__t_resp_count_done = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1511__t_all_flushed;
    __Vtask_top__DOT__test_outputs__1511__t_all_flushed = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__1511__t_memresp_msg_type_;
    __Vtask_top__DOT__test_outputs__1511__t_memresp_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1511__t_memresp_msg_data;
    __Vtask_top__DOT__test_outputs__1511__t_memresp_msg_data = 0;
    CData/*2:0*/ __Vtask_top__DOT__test_outputs__1511__t_cache_req_msg_type_;
    __Vtask_top__DOT__test_outputs__1511__t_cache_req_msg_type_ = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1511__t_cache_req_msg_addr;
    __Vtask_top__DOT__test_outputs__1511__t_cache_req_msg_addr = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1511__t_cache_req_msg_data;
    __Vtask_top__DOT__test_outputs__1511__t_cache_req_msg_data = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__1511__t_d_index;
    __Vtask_top__DOT__test_outputs__1511__t_d_index = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__1511__t_write_word_offset;
    __Vtask_top__DOT__test_outputs__1511__t_write_word_offset = 0;
    CData/*3:0*/ __Vtask_top__DOT__test_outputs__1511__t_read_word_offset;
    __Vtask_top__DOT__test_outputs__1511__t_read_word_offset = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1511__t_write_data;
    __Vtask_top__DOT__test_outputs__1511__t_write_data = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1511__t_dirty0;
    __Vtask_top__DOT__test_outputs__1511__t_dirty0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1511__t_dirty1;
    __Vtask_top__DOT__test_outputs__1511__t_dirty1 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1511__t_valid0;
    __Vtask_top__DOT__test_outputs__1511__t_valid0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_outputs__1511__t_valid1;
    __Vtask_top__DOT__test_outputs__1511__t_valid1 = 0;
    CData/*4:0*/ __Vtask_top__DOT__test_outputs__1511__t_flush_index;
    __Vtask_top__DOT__test_outputs__1511__t_flush_index = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__1511__t_flush_way_sel;
    __Vtask_top__DOT__test_outputs__1511__t_flush_way_sel = 0;
    // Body
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_valid) 
                       == (IData)(vlSelf->__Vtask_top__DOT__test_outputs__994__t_line1_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_valid is correct.  Expected: %x, Actual: %x\n",
                          1,vlSelf->__Vtask_top__DOT__test_outputs__994__t_line1_valid,
                          1,(IData)(vlSelf->top__DOT__line1_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,vlSelf->__Vtask_top__DOT__test_outputs__994__t_line1_valid,
                      1,(IData)(vlSelf->top__DOT__line1_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 855, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                              >> 0xaU)) == (IData)(vlSelf->__Vtask_top__DOT__test_outputs__994__t_incoming_mem_type)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("incoming_mem_type is correct.  Expected: %x, Actual: %x\n",
                          1,vlSelf->__Vtask_top__DOT__test_outputs__994__t_incoming_mem_type,
                          1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("incoming_mem_type is incorrect.  Expected: %x, Actual: %x\n",
                      1,vlSelf->__Vtask_top__DOT__test_outputs__994__t_incoming_mem_type,
                      1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 861, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)) 
                       == (IData)(vlSelf->__Vtask_top__DOT__test_outputs__994__t_req_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("req_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,vlSelf->__Vtask_top__DOT__test_outputs__994__t_req_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("req_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,vlSelf->__Vtask_top__DOT__test_outputs__994__t_req_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 867, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)) 
                       == (IData)(vlSelf->__Vtask_top__DOT__test_outputs__994__t_resp_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("resp_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,vlSelf->__Vtask_top__DOT__test_outputs__994__t_resp_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("resp_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,vlSelf->__Vtask_top__DOT__test_outputs__994__t_resp_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 873, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__all_flushed) 
                       == (IData)(vlSelf->__Vtask_top__DOT__test_outputs__994__t_all_flushed)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("all_flushed is correct.  Expected: %x, Actual: %x\n",
                          1,vlSelf->__Vtask_top__DOT__test_outputs__994__t_all_flushed,
                          1,(IData)(vlSelf->top__DOT__all_flushed));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("all_flushed is incorrect.  Expected: %x, Actual: %x\n",
                      1,vlSelf->__Vtask_top__DOT__test_outputs__994__t_all_flushed,
                      1,(IData)(vlSelf->top__DOT__all_flushed));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 879, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                      >> 0x2cU))) == (IData)(vlSelf->__Vtask_top__DOT__test_outputs__994__t_memresp_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,vlSelf->__Vtask_top__DOT__test_outputs__994__t_memresp_msg_type_,
                          3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                           >> 0x2cU))));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,vlSelf->__Vtask_top__DOT__test_outputs__994__t_memresp_msg_type_,
                      3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                       >> 0x2cU))));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 885, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__memresp_msg) 
                       == vlSelf->__Vtask_top__DOT__test_outputs__994__t_memresp_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,vlSelf->__Vtask_top__DOT__test_outputs__994__t_memresp_msg_data,
                          32,(IData)(vlSelf->top__DOT__memresp_msg));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,vlSelf->__Vtask_top__DOT__test_outputs__994__t_memresp_msg_data,
                      32,(IData)(vlSelf->top__DOT__memresp_msg));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 891, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                              >> 0xaU)) == (IData)(vlSelf->__Vtask_top__DOT__test_outputs__994__t_cache_req_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,vlSelf->__Vtask_top__DOT__test_outputs__994__t_cache_req_msg_type_,
                          3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,vlSelf->__Vtask_top__DOT__test_outputs__994__t_cache_req_msg_type_,
                      3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 897, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((((vlSelf->top__DOT__cache_req_msg[2U] 
                         << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                      >> 2U)) == vlSelf->__Vtask_top__DOT__test_outputs__994__t_cache_req_msg_addr))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.addr is correct.  Expected: %x, Actual: %x\n",
                          32,vlSelf->__Vtask_top__DOT__test_outputs__994__t_cache_req_msg_addr,
                          32,((vlSelf->top__DOT__cache_req_msg[2U] 
                               << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                            >> 2U)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.addr is incorrect.  Expected: %x, Actual: %x\n",
                      32,vlSelf->__Vtask_top__DOT__test_outputs__994__t_cache_req_msg_addr,
                      32,((vlSelf->top__DOT__cache_req_msg[2U] 
                           << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                        >> 2U)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 903, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__cache_req_msg[0U] 
                       == vlSelf->__Vtask_top__DOT__test_outputs__994__t_cache_req_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,vlSelf->__Vtask_top__DOT__test_outputs__994__t_cache_req_msg_data,
                          32,vlSelf->top__DOT__cache_req_msg[0U]);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,vlSelf->__Vtask_top__DOT__test_outputs__994__t_cache_req_msg_data,
                      32,vlSelf->top__DOT__cache_req_msg[0U]);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 909, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__d_index) 
                       == (IData)(vlSelf->__Vtask_top__DOT__test_outputs__994__t_d_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.d_index is correct.  Expected: %x, Actual: %x\n",
                          5,vlSelf->__Vtask_top__DOT__test_outputs__994__t_d_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.d_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,vlSelf->__Vtask_top__DOT__test_outputs__994__t_d_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 915, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset) 
                       == (IData)(vlSelf->__Vtask_top__DOT__test_outputs__994__t_write_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,vlSelf->__Vtask_top__DOT__test_outputs__994__t_write_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,vlSelf->__Vtask_top__DOT__test_outputs__994__t_write_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 921, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset) 
                       == (IData)(vlSelf->__Vtask_top__DOT__test_outputs__994__t_read_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.read_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,vlSelf->__Vtask_top__DOT__test_outputs__994__t_read_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.read_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,vlSelf->__Vtask_top__DOT__test_outputs__994__t_read_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 927, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__write_data 
                       == vlSelf->__Vtask_top__DOT__test_outputs__994__t_write_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_data is correct.  Expected: %x, Actual: %x\n",
                          32,vlSelf->__Vtask_top__DOT__test_outputs__994__t_write_data,
                          32,vlSelf->top__DOT__DUT__DOT__write_data);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_data is incorrect.  Expected: %x, Actual: %x\n",
                      32,vlSelf->__Vtask_top__DOT__test_outputs__994__t_write_data,
                      32,vlSelf->top__DOT__DUT__DOT__write_data);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 933, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty0 
                       == vlSelf->__Vtask_top__DOT__test_outputs__994__t_dirty0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty0 is correct.  Expected: %x, Actual: %x\n",
                          32,vlSelf->__Vtask_top__DOT__test_outputs__994__t_dirty0,
                          32,vlSelf->top__DOT__DUT__DOT__dirty0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,vlSelf->__Vtask_top__DOT__test_outputs__994__t_dirty0,
                      32,vlSelf->top__DOT__DUT__DOT__dirty0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 939, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty1 
                       == vlSelf->__Vtask_top__DOT__test_outputs__994__t_dirty1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty1 is correct.  Expected: %x, Actual: %x\n",
                          32,vlSelf->__Vtask_top__DOT__test_outputs__994__t_dirty1,
                          32,vlSelf->top__DOT__DUT__DOT__dirty1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,vlSelf->__Vtask_top__DOT__test_outputs__994__t_dirty1,
                      32,vlSelf->top__DOT__DUT__DOT__dirty1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 945, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid0 
                       == vlSelf->__Vtask_top__DOT__test_outputs__994__t_valid0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid0 is correct.  Expected: %x, Actual: %x\n",
                          32,vlSelf->__Vtask_top__DOT__test_outputs__994__t_valid0,
                          32,vlSelf->top__DOT__DUT__DOT__valid0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,vlSelf->__Vtask_top__DOT__test_outputs__994__t_valid0,
                      32,vlSelf->top__DOT__DUT__DOT__valid0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 951, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid1 
                       == vlSelf->__Vtask_top__DOT__test_outputs__994__t_valid1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid1 is correct.  Expected: %x, Actual: %x\n",
                          32,vlSelf->__Vtask_top__DOT__test_outputs__994__t_valid1,
                          32,vlSelf->top__DOT__DUT__DOT__valid1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,vlSelf->__Vtask_top__DOT__test_outputs__994__t_valid1,
                      32,vlSelf->top__DOT__DUT__DOT__valid1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 957, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__flush_index) 
                       == (IData)(vlSelf->__Vtask_top__DOT__test_outputs__994__t_flush_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.flush_index is correct.  Expected: %x, Actual: %x\n",
                          5,vlSelf->__Vtask_top__DOT__test_outputs__994__t_flush_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.flush_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,vlSelf->__Vtask_top__DOT__test_outputs__994__t_flush_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 963, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0U == vlSelf->top__DOT__DUT__DOT__dirty0) 
                       == (IData)(vlSelf->__Vtask_top__DOT__test_outputs__994__t_flush_way_sel)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("flush_way_sel is correct.  Expected: %x, Actual: %x\n",
                          1,vlSelf->__Vtask_top__DOT__test_outputs__994__t_flush_way_sel,
                          1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("flush_way_sel is incorrect.  Expected: %x, Actual: %x\n",
                      1,vlSelf->__Vtask_top__DOT__test_outputs__994__t_flush_way_sel,
                      1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 969, "");
        }
    }
    vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__delay__1045__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__1045__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__1045__unnamedblk6__DOT__i, __Vtask_top__DOT__delay__1045__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_CacheAltDpath.v", 
                                           730);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__1045__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__1045__unnamedblk6__DOT__i);
    }
    vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       455);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_top__DOT__set_inputs__1046__t_way_select = 0U;
    __Vtask_top__DOT__set_inputs__1046__t_cache_type = 0U;
    __Vtask_top__DOT__set_inputs__1046__t_cache_data = 0U;
    __Vtask_top__DOT__set_inputs__1046__t_mem_type = 1U;
    __Vtask_top__DOT__set_inputs__1046__t_mem_data = 0xffffffffU;
    __Vtask_top__DOT__set_inputs__1046__t_mem_addr = 0xfffffffU;
    __Vtask_top__DOT__set_inputs__1046__t_state = 2U;
    __Vtask_top__DOT__set_inputs__1046__t_valid_set = 0U;
    __Vtask_top__DOT__set_inputs__1046__t_dirty_set = 0U;
    __Vtask_top__DOT__set_inputs__1046__t_clean_set = 1U;
    __Vtask_top__DOT__set_inputs__1046__t_mem_action = 1U;
    __Vtask_top__DOT__set_inputs__1046__t_read_word_sel = 1U;
    __Vtask_top__DOT__set_inputs__1046__t_write_word_sel = 0U;
    __Vtask_top__DOT__set_inputs__1046__t_index_sel = 0U;
    __Vtask_top__DOT__set_inputs__1046__t_darray_wen = 0U;
    __Vtask_top__DOT__set_inputs__1046__t_darray_en = 1U;
    __Vtask_top__DOT__set_inputs__1046__t_write_data_sel = 0U;
    __Vtask_top__DOT__set_inputs__1046__t_count_reset = 0U;
    __Vtask_top__DOT__set_inputs__1046__t_resp_count_en = 1U;
    __Vtask_top__DOT__set_inputs__1046__t_req_count_en = 1U;
    __Vtask_top__DOT__set_inputs__1046__t_tarray_wen = 0U;
    __Vtask_top__DOT__set_inputs__1046__t_tarray_en = 0U;
    __Vtask_top__DOT__set_inputs__1046__t_input_en = 0U;
    __Vtask_top__DOT__set_inputs__1046__t_flush_done = 0U;
    __Vtask_top__DOT__set_inputs__1046__t_flush = 0U;
    vlSelf->top__DOT__flush = __Vtask_top__DOT__set_inputs__1046__t_flush;
    vlSelf->top__DOT__flush_done = __Vtask_top__DOT__set_inputs__1046__t_flush_done;
    vlSelf->top__DOT__input_en = __Vtask_top__DOT__set_inputs__1046__t_input_en;
    vlSelf->top__DOT__tarray_en = __Vtask_top__DOT__set_inputs__1046__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = __Vtask_top__DOT__set_inputs__1046__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = __Vtask_top__DOT__set_inputs__1046__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = __Vtask_top__DOT__set_inputs__1046__t_resp_count_en;
    vlSelf->top__DOT__count_reset = __Vtask_top__DOT__set_inputs__1046__t_count_reset;
    vlSelf->top__DOT__write_data_sel = __Vtask_top__DOT__set_inputs__1046__t_write_data_sel;
    vlSelf->top__DOT__darray_en = __Vtask_top__DOT__set_inputs__1046__t_darray_en;
    vlSelf->top__DOT__darray_wen = __Vtask_top__DOT__set_inputs__1046__t_darray_wen;
    vlSelf->top__DOT__index_sel = __Vtask_top__DOT__set_inputs__1046__t_index_sel;
    vlSelf->top__DOT__write_word_sel = __Vtask_top__DOT__set_inputs__1046__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = __Vtask_top__DOT__set_inputs__1046__t_read_word_sel;
    vlSelf->top__DOT__mem_action = __Vtask_top__DOT__set_inputs__1046__t_mem_action;
    vlSelf->top__DOT__clean_set = __Vtask_top__DOT__set_inputs__1046__t_clean_set;
    vlSelf->top__DOT__dirty_set = __Vtask_top__DOT__set_inputs__1046__t_dirty_set;
    vlSelf->top__DOT__valid_set = __Vtask_top__DOT__set_inputs__1046__t_valid_set;
    vlSelf->top__DOT__state = __Vtask_top__DOT__set_inputs__1046__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (__Vtask_top__DOT__set_inputs__1046__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (__Vtask_top__DOT__set_inputs__1046__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = __Vtask_top__DOT__set_inputs__1046__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(__Vtask_top__DOT__set_inputs__1046__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(__Vtask_top__DOT__set_inputs__1046__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(__Vtask_top__DOT__set_inputs__1046__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = __Vtask_top__DOT__set_inputs__1046__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\nMem ready to receive and respond\n");
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       463);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_top__DOT__test_outputs__1047__t_flush_way_sel = 1U;
    __Vtask_top__DOT__test_outputs__1047__t_flush_index = 0x1aU;
    __Vtask_top__DOT__test_outputs__1047__t_valid1 = 0x4000000U;
    __Vtask_top__DOT__test_outputs__1047__t_valid0 = 0x80000000U;
    __Vtask_top__DOT__test_outputs__1047__t_dirty1 = 0x4000000U;
    __Vtask_top__DOT__test_outputs__1047__t_dirty0 = 0U;
    __Vtask_top__DOT__test_outputs__1047__t_write_data = 0xffffffffU;
    __Vtask_top__DOT__test_outputs__1047__t_read_word_offset = 1U;
    __Vtask_top__DOT__test_outputs__1047__t_write_word_offset = 0xfU;
    __Vtask_top__DOT__test_outputs__1047__t_d_index = 0x1fU;
    __Vtask_top__DOT__test_outputs__1047__t_cache_req_msg_data = 0xffffffffU;
    __Vtask_top__DOT__test_outputs__1047__t_cache_req_msg_addr = 0xffffffc7U;
    __Vtask_top__DOT__test_outputs__1047__t_cache_req_msg_type_ = 1U;
    __Vtask_top__DOT__test_outputs__1047__t_memresp_msg_data = 0xffffffffU;
    __Vtask_top__DOT__test_outputs__1047__t_memresp_msg_type_ = 1U;
    __Vtask_top__DOT__test_outputs__1047__t_all_flushed = 0U;
    __Vtask_top__DOT__test_outputs__1047__t_resp_count_done = 0U;
    __Vtask_top__DOT__test_outputs__1047__t_req_count_done = 0U;
    __Vtask_top__DOT__test_outputs__1047__t_incoming_mem_type = 1U;
    __Vtask_top__DOT__test_outputs__1047__t_line1_valid = 0U;
    __Vtask_top__DOT__test_outputs__1047__t_line0_valid = 1U;
    __Vtask_top__DOT__test_outputs__1047__t_line1_dirty = 0U;
    __Vtask_top__DOT__test_outputs__1047__t_line0_dirty = 0U;
    __Vtask_top__DOT__test_outputs__1047__t_tarray1_match = 0U;
    __Vtask_top__DOT__test_outputs__1047__t_tarray0_match = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray0_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1047__t_tarray0_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray0_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1047__t_tarray0_match,
                          1,(IData)(vlSelf->top__DOT__tarray0_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray0_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1047__t_tarray0_match,
                      1,(IData)(vlSelf->top__DOT__tarray0_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 825, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray1_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1047__t_tarray1_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray1_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1047__t_tarray1_match,
                          1,(IData)(vlSelf->top__DOT__tarray1_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray1_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1047__t_tarray1_match,
                      1,(IData)(vlSelf->top__DOT__tarray1_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 831, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1047__t_line0_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1047__t_line0_dirty,
                          1,(IData)(vlSelf->top__DOT__line0_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1047__t_line0_dirty,
                      1,(IData)(vlSelf->top__DOT__line0_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 837, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1047__t_line1_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1047__t_line1_dirty,
                          1,(IData)(vlSelf->top__DOT__line1_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1047__t_line1_dirty,
                      1,(IData)(vlSelf->top__DOT__line1_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 843, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1047__t_line0_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1047__t_line0_valid,
                          1,(IData)(vlSelf->top__DOT__line0_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1047__t_line0_valid,
                      1,(IData)(vlSelf->top__DOT__line0_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 849, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1047__t_line1_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1047__t_line1_valid,
                          1,(IData)(vlSelf->top__DOT__line1_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1047__t_line1_valid,
                      1,(IData)(vlSelf->top__DOT__line1_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 855, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__1047__t_incoming_mem_type)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("incoming_mem_type is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1047__t_incoming_mem_type,
                          1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("incoming_mem_type is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1047__t_incoming_mem_type,
                      1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 861, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1047__t_req_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("req_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1047__t_req_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("req_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1047__t_req_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 867, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1047__t_resp_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("resp_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1047__t_resp_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("resp_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1047__t_resp_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 873, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__all_flushed) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1047__t_all_flushed)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("all_flushed is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1047__t_all_flushed,
                          1,(IData)(vlSelf->top__DOT__all_flushed));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("all_flushed is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1047__t_all_flushed,
                      1,(IData)(vlSelf->top__DOT__all_flushed));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 879, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                      >> 0x2cU))) == (IData)(__Vtask_top__DOT__test_outputs__1047__t_memresp_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__1047__t_memresp_msg_type_,
                          3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                           >> 0x2cU))));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__1047__t_memresp_msg_type_,
                      3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                       >> 0x2cU))));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 885, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__memresp_msg) 
                       == __Vtask_top__DOT__test_outputs__1047__t_memresp_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1047__t_memresp_msg_data,
                          32,(IData)(vlSelf->top__DOT__memresp_msg));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1047__t_memresp_msg_data,
                      32,(IData)(vlSelf->top__DOT__memresp_msg));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 891, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__1047__t_cache_req_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__1047__t_cache_req_msg_type_,
                          3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__1047__t_cache_req_msg_type_,
                      3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 897, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((((vlSelf->top__DOT__cache_req_msg[2U] 
                         << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                      >> 2U)) == __Vtask_top__DOT__test_outputs__1047__t_cache_req_msg_addr))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.addr is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1047__t_cache_req_msg_addr,
                          32,((vlSelf->top__DOT__cache_req_msg[2U] 
                               << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                            >> 2U)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.addr is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1047__t_cache_req_msg_addr,
                      32,((vlSelf->top__DOT__cache_req_msg[2U] 
                           << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                        >> 2U)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 903, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__cache_req_msg[0U] 
                       == __Vtask_top__DOT__test_outputs__1047__t_cache_req_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1047__t_cache_req_msg_data,
                          32,vlSelf->top__DOT__cache_req_msg[0U]);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1047__t_cache_req_msg_data,
                      32,vlSelf->top__DOT__cache_req_msg[0U]);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 909, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__d_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1047__t_d_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.d_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__1047__t_d_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.d_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__1047__t_d_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 915, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1047__t_write_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__1047__t_write_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__1047__t_write_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 921, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1047__t_read_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.read_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__1047__t_read_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.read_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__1047__t_read_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 927, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__write_data 
                       == __Vtask_top__DOT__test_outputs__1047__t_write_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1047__t_write_data,
                          32,vlSelf->top__DOT__DUT__DOT__write_data);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1047__t_write_data,
                      32,vlSelf->top__DOT__DUT__DOT__write_data);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 933, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty0 
                       == __Vtask_top__DOT__test_outputs__1047__t_dirty0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1047__t_dirty0,
                          32,vlSelf->top__DOT__DUT__DOT__dirty0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1047__t_dirty0,
                      32,vlSelf->top__DOT__DUT__DOT__dirty0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 939, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty1 
                       == __Vtask_top__DOT__test_outputs__1047__t_dirty1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1047__t_dirty1,
                          32,vlSelf->top__DOT__DUT__DOT__dirty1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1047__t_dirty1,
                      32,vlSelf->top__DOT__DUT__DOT__dirty1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 945, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid0 
                       == __Vtask_top__DOT__test_outputs__1047__t_valid0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1047__t_valid0,
                          32,vlSelf->top__DOT__DUT__DOT__valid0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1047__t_valid0,
                      32,vlSelf->top__DOT__DUT__DOT__valid0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 951, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid1 
                       == __Vtask_top__DOT__test_outputs__1047__t_valid1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1047__t_valid1,
                          32,vlSelf->top__DOT__DUT__DOT__valid1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1047__t_valid1,
                      32,vlSelf->top__DOT__DUT__DOT__valid1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 957, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__flush_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1047__t_flush_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.flush_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__1047__t_flush_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.flush_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__1047__t_flush_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 963, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0U == vlSelf->top__DOT__DUT__DOT__dirty0) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1047__t_flush_way_sel)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("flush_way_sel is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1047__t_flush_way_sel,
                          1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("flush_way_sel is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1047__t_flush_way_sel,
                      1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 969, "");
        }
    }
    vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\nEvict cycle 1\n");
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       471);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_top__DOT__test_outputs__1098__t_flush_way_sel = 1U;
    __Vtask_top__DOT__test_outputs__1098__t_flush_index = 0x1aU;
    __Vtask_top__DOT__test_outputs__1098__t_valid1 = 0x4000000U;
    __Vtask_top__DOT__test_outputs__1098__t_valid0 = 0x80000000U;
    __Vtask_top__DOT__test_outputs__1098__t_dirty1 = 0x4000000U;
    __Vtask_top__DOT__test_outputs__1098__t_dirty0 = 0U;
    __Vtask_top__DOT__test_outputs__1098__t_write_data = 0xffffffffU;
    __Vtask_top__DOT__test_outputs__1098__t_read_word_offset = 2U;
    __Vtask_top__DOT__test_outputs__1098__t_write_word_offset = 0xfU;
    __Vtask_top__DOT__test_outputs__1098__t_d_index = 0x1fU;
    __Vtask_top__DOT__test_outputs__1098__t_cache_req_msg_data = 0xffffffffU;
    __Vtask_top__DOT__test_outputs__1098__t_cache_req_msg_addr = 0xffffffcbU;
    __Vtask_top__DOT__test_outputs__1098__t_cache_req_msg_type_ = 1U;
    __Vtask_top__DOT__test_outputs__1098__t_memresp_msg_data = 0xffffffffU;
    __Vtask_top__DOT__test_outputs__1098__t_memresp_msg_type_ = 1U;
    __Vtask_top__DOT__test_outputs__1098__t_all_flushed = 0U;
    __Vtask_top__DOT__test_outputs__1098__t_resp_count_done = 0U;
    __Vtask_top__DOT__test_outputs__1098__t_req_count_done = 0U;
    __Vtask_top__DOT__test_outputs__1098__t_incoming_mem_type = 1U;
    __Vtask_top__DOT__test_outputs__1098__t_line1_valid = 0U;
    __Vtask_top__DOT__test_outputs__1098__t_line0_valid = 1U;
    __Vtask_top__DOT__test_outputs__1098__t_line1_dirty = 0U;
    __Vtask_top__DOT__test_outputs__1098__t_line0_dirty = 0U;
    __Vtask_top__DOT__test_outputs__1098__t_tarray1_match = 0U;
    __Vtask_top__DOT__test_outputs__1098__t_tarray0_match = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray0_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1098__t_tarray0_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray0_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1098__t_tarray0_match,
                          1,(IData)(vlSelf->top__DOT__tarray0_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray0_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1098__t_tarray0_match,
                      1,(IData)(vlSelf->top__DOT__tarray0_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 825, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray1_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1098__t_tarray1_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray1_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1098__t_tarray1_match,
                          1,(IData)(vlSelf->top__DOT__tarray1_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray1_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1098__t_tarray1_match,
                      1,(IData)(vlSelf->top__DOT__tarray1_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 831, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1098__t_line0_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1098__t_line0_dirty,
                          1,(IData)(vlSelf->top__DOT__line0_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1098__t_line0_dirty,
                      1,(IData)(vlSelf->top__DOT__line0_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 837, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1098__t_line1_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1098__t_line1_dirty,
                          1,(IData)(vlSelf->top__DOT__line1_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1098__t_line1_dirty,
                      1,(IData)(vlSelf->top__DOT__line1_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 843, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1098__t_line0_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1098__t_line0_valid,
                          1,(IData)(vlSelf->top__DOT__line0_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1098__t_line0_valid,
                      1,(IData)(vlSelf->top__DOT__line0_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 849, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1098__t_line1_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1098__t_line1_valid,
                          1,(IData)(vlSelf->top__DOT__line1_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1098__t_line1_valid,
                      1,(IData)(vlSelf->top__DOT__line1_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 855, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__1098__t_incoming_mem_type)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("incoming_mem_type is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1098__t_incoming_mem_type,
                          1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("incoming_mem_type is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1098__t_incoming_mem_type,
                      1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 861, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1098__t_req_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("req_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1098__t_req_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("req_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1098__t_req_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 867, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1098__t_resp_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("resp_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1098__t_resp_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("resp_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1098__t_resp_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 873, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__all_flushed) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1098__t_all_flushed)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("all_flushed is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1098__t_all_flushed,
                          1,(IData)(vlSelf->top__DOT__all_flushed));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("all_flushed is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1098__t_all_flushed,
                      1,(IData)(vlSelf->top__DOT__all_flushed));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 879, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                      >> 0x2cU))) == (IData)(__Vtask_top__DOT__test_outputs__1098__t_memresp_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__1098__t_memresp_msg_type_,
                          3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                           >> 0x2cU))));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__1098__t_memresp_msg_type_,
                      3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                       >> 0x2cU))));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 885, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__memresp_msg) 
                       == __Vtask_top__DOT__test_outputs__1098__t_memresp_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1098__t_memresp_msg_data,
                          32,(IData)(vlSelf->top__DOT__memresp_msg));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1098__t_memresp_msg_data,
                      32,(IData)(vlSelf->top__DOT__memresp_msg));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 891, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__1098__t_cache_req_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__1098__t_cache_req_msg_type_,
                          3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__1098__t_cache_req_msg_type_,
                      3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 897, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((((vlSelf->top__DOT__cache_req_msg[2U] 
                         << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                      >> 2U)) == __Vtask_top__DOT__test_outputs__1098__t_cache_req_msg_addr))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.addr is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1098__t_cache_req_msg_addr,
                          32,((vlSelf->top__DOT__cache_req_msg[2U] 
                               << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                            >> 2U)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.addr is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1098__t_cache_req_msg_addr,
                      32,((vlSelf->top__DOT__cache_req_msg[2U] 
                           << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                        >> 2U)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 903, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__cache_req_msg[0U] 
                       == __Vtask_top__DOT__test_outputs__1098__t_cache_req_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1098__t_cache_req_msg_data,
                          32,vlSelf->top__DOT__cache_req_msg[0U]);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1098__t_cache_req_msg_data,
                      32,vlSelf->top__DOT__cache_req_msg[0U]);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 909, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__d_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1098__t_d_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.d_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__1098__t_d_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.d_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__1098__t_d_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 915, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1098__t_write_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__1098__t_write_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__1098__t_write_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 921, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1098__t_read_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.read_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__1098__t_read_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.read_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__1098__t_read_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 927, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__write_data 
                       == __Vtask_top__DOT__test_outputs__1098__t_write_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1098__t_write_data,
                          32,vlSelf->top__DOT__DUT__DOT__write_data);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1098__t_write_data,
                      32,vlSelf->top__DOT__DUT__DOT__write_data);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 933, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty0 
                       == __Vtask_top__DOT__test_outputs__1098__t_dirty0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1098__t_dirty0,
                          32,vlSelf->top__DOT__DUT__DOT__dirty0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1098__t_dirty0,
                      32,vlSelf->top__DOT__DUT__DOT__dirty0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 939, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty1 
                       == __Vtask_top__DOT__test_outputs__1098__t_dirty1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1098__t_dirty1,
                          32,vlSelf->top__DOT__DUT__DOT__dirty1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1098__t_dirty1,
                      32,vlSelf->top__DOT__DUT__DOT__dirty1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 945, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid0 
                       == __Vtask_top__DOT__test_outputs__1098__t_valid0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1098__t_valid0,
                          32,vlSelf->top__DOT__DUT__DOT__valid0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1098__t_valid0,
                      32,vlSelf->top__DOT__DUT__DOT__valid0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 951, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid1 
                       == __Vtask_top__DOT__test_outputs__1098__t_valid1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1098__t_valid1,
                          32,vlSelf->top__DOT__DUT__DOT__valid1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1098__t_valid1,
                      32,vlSelf->top__DOT__DUT__DOT__valid1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 957, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__flush_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1098__t_flush_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.flush_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__1098__t_flush_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.flush_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__1098__t_flush_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 963, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0U == vlSelf->top__DOT__DUT__DOT__dirty0) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1098__t_flush_way_sel)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("flush_way_sel is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1098__t_flush_way_sel,
                          1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("flush_way_sel is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1098__t_flush_way_sel,
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
                                                       477);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       478);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       479);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       480);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       481);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       482);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       483);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       485);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       486);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       487);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       488);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("\nEvict cycle 14\n");
    __Vtask_top__DOT__test_outputs__1149__t_flush_way_sel = 1U;
    __Vtask_top__DOT__test_outputs__1149__t_flush_index = 0x1aU;
    __Vtask_top__DOT__test_outputs__1149__t_valid1 = 0x4000000U;
    __Vtask_top__DOT__test_outputs__1149__t_valid0 = 0x80000000U;
    __Vtask_top__DOT__test_outputs__1149__t_dirty1 = 0x4000000U;
    __Vtask_top__DOT__test_outputs__1149__t_dirty0 = 0U;
    __Vtask_top__DOT__test_outputs__1149__t_write_data = 0xffffffffU;
    __Vtask_top__DOT__test_outputs__1149__t_read_word_offset = 0xeU;
    __Vtask_top__DOT__test_outputs__1149__t_write_word_offset = 0xfU;
    __Vtask_top__DOT__test_outputs__1149__t_d_index = 0x1fU;
    __Vtask_top__DOT__test_outputs__1149__t_cache_req_msg_data = 0xffffffffU;
    __Vtask_top__DOT__test_outputs__1149__t_cache_req_msg_addr = 0xfffffffbU;
    __Vtask_top__DOT__test_outputs__1149__t_cache_req_msg_type_ = 1U;
    __Vtask_top__DOT__test_outputs__1149__t_memresp_msg_data = 0xffffffffU;
    __Vtask_top__DOT__test_outputs__1149__t_memresp_msg_type_ = 1U;
    __Vtask_top__DOT__test_outputs__1149__t_all_flushed = 0U;
    __Vtask_top__DOT__test_outputs__1149__t_resp_count_done = 0U;
    __Vtask_top__DOT__test_outputs__1149__t_req_count_done = 0U;
    __Vtask_top__DOT__test_outputs__1149__t_incoming_mem_type = 1U;
    __Vtask_top__DOT__test_outputs__1149__t_line1_valid = 0U;
    __Vtask_top__DOT__test_outputs__1149__t_line0_valid = 1U;
    __Vtask_top__DOT__test_outputs__1149__t_line1_dirty = 0U;
    __Vtask_top__DOT__test_outputs__1149__t_line0_dirty = 0U;
    __Vtask_top__DOT__test_outputs__1149__t_tarray1_match = 0U;
    __Vtask_top__DOT__test_outputs__1149__t_tarray0_match = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray0_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1149__t_tarray0_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray0_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1149__t_tarray0_match,
                          1,(IData)(vlSelf->top__DOT__tarray0_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray0_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1149__t_tarray0_match,
                      1,(IData)(vlSelf->top__DOT__tarray0_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 825, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray1_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1149__t_tarray1_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray1_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1149__t_tarray1_match,
                          1,(IData)(vlSelf->top__DOT__tarray1_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray1_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1149__t_tarray1_match,
                      1,(IData)(vlSelf->top__DOT__tarray1_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 831, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1149__t_line0_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1149__t_line0_dirty,
                          1,(IData)(vlSelf->top__DOT__line0_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1149__t_line0_dirty,
                      1,(IData)(vlSelf->top__DOT__line0_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 837, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1149__t_line1_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1149__t_line1_dirty,
                          1,(IData)(vlSelf->top__DOT__line1_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1149__t_line1_dirty,
                      1,(IData)(vlSelf->top__DOT__line1_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 843, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1149__t_line0_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1149__t_line0_valid,
                          1,(IData)(vlSelf->top__DOT__line0_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1149__t_line0_valid,
                      1,(IData)(vlSelf->top__DOT__line0_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 849, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1149__t_line1_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1149__t_line1_valid,
                          1,(IData)(vlSelf->top__DOT__line1_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1149__t_line1_valid,
                      1,(IData)(vlSelf->top__DOT__line1_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 855, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__1149__t_incoming_mem_type)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("incoming_mem_type is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1149__t_incoming_mem_type,
                          1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("incoming_mem_type is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1149__t_incoming_mem_type,
                      1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 861, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1149__t_req_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("req_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1149__t_req_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("req_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1149__t_req_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 867, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1149__t_resp_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("resp_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1149__t_resp_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("resp_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1149__t_resp_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 873, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__all_flushed) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1149__t_all_flushed)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("all_flushed is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1149__t_all_flushed,
                          1,(IData)(vlSelf->top__DOT__all_flushed));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("all_flushed is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1149__t_all_flushed,
                      1,(IData)(vlSelf->top__DOT__all_flushed));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 879, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                      >> 0x2cU))) == (IData)(__Vtask_top__DOT__test_outputs__1149__t_memresp_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__1149__t_memresp_msg_type_,
                          3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                           >> 0x2cU))));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__1149__t_memresp_msg_type_,
                      3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                       >> 0x2cU))));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 885, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__memresp_msg) 
                       == __Vtask_top__DOT__test_outputs__1149__t_memresp_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1149__t_memresp_msg_data,
                          32,(IData)(vlSelf->top__DOT__memresp_msg));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1149__t_memresp_msg_data,
                      32,(IData)(vlSelf->top__DOT__memresp_msg));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 891, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__1149__t_cache_req_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__1149__t_cache_req_msg_type_,
                          3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__1149__t_cache_req_msg_type_,
                      3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 897, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((((vlSelf->top__DOT__cache_req_msg[2U] 
                         << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                      >> 2U)) == __Vtask_top__DOT__test_outputs__1149__t_cache_req_msg_addr))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.addr is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1149__t_cache_req_msg_addr,
                          32,((vlSelf->top__DOT__cache_req_msg[2U] 
                               << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                            >> 2U)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.addr is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1149__t_cache_req_msg_addr,
                      32,((vlSelf->top__DOT__cache_req_msg[2U] 
                           << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                        >> 2U)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 903, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__cache_req_msg[0U] 
                       == __Vtask_top__DOT__test_outputs__1149__t_cache_req_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1149__t_cache_req_msg_data,
                          32,vlSelf->top__DOT__cache_req_msg[0U]);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1149__t_cache_req_msg_data,
                      32,vlSelf->top__DOT__cache_req_msg[0U]);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 909, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__d_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1149__t_d_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.d_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__1149__t_d_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.d_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__1149__t_d_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 915, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1149__t_write_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__1149__t_write_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__1149__t_write_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 921, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1149__t_read_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.read_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__1149__t_read_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.read_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__1149__t_read_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 927, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__write_data 
                       == __Vtask_top__DOT__test_outputs__1149__t_write_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1149__t_write_data,
                          32,vlSelf->top__DOT__DUT__DOT__write_data);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1149__t_write_data,
                      32,vlSelf->top__DOT__DUT__DOT__write_data);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 933, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty0 
                       == __Vtask_top__DOT__test_outputs__1149__t_dirty0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1149__t_dirty0,
                          32,vlSelf->top__DOT__DUT__DOT__dirty0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1149__t_dirty0,
                      32,vlSelf->top__DOT__DUT__DOT__dirty0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 939, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty1 
                       == __Vtask_top__DOT__test_outputs__1149__t_dirty1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1149__t_dirty1,
                          32,vlSelf->top__DOT__DUT__DOT__dirty1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1149__t_dirty1,
                      32,vlSelf->top__DOT__DUT__DOT__dirty1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 945, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid0 
                       == __Vtask_top__DOT__test_outputs__1149__t_valid0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1149__t_valid0,
                          32,vlSelf->top__DOT__DUT__DOT__valid0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1149__t_valid0,
                      32,vlSelf->top__DOT__DUT__DOT__valid0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 951, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid1 
                       == __Vtask_top__DOT__test_outputs__1149__t_valid1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1149__t_valid1,
                          32,vlSelf->top__DOT__DUT__DOT__valid1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1149__t_valid1,
                      32,vlSelf->top__DOT__DUT__DOT__valid1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 957, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__flush_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1149__t_flush_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.flush_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__1149__t_flush_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.flush_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__1149__t_flush_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 963, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0U == vlSelf->top__DOT__DUT__DOT__dirty0) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1149__t_flush_way_sel)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("flush_way_sel is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1149__t_flush_way_sel,
                          1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("flush_way_sel is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1149__t_flush_way_sel,
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
                                                       497);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("\nEvict cycle 15\n");
    __Vtask_top__DOT__test_outputs__1200__t_flush_way_sel = 1U;
    __Vtask_top__DOT__test_outputs__1200__t_flush_index = 0x1aU;
    __Vtask_top__DOT__test_outputs__1200__t_valid1 = 0x4000000U;
    __Vtask_top__DOT__test_outputs__1200__t_valid0 = 0x80000000U;
    __Vtask_top__DOT__test_outputs__1200__t_dirty1 = 0x4000000U;
    __Vtask_top__DOT__test_outputs__1200__t_dirty0 = 0U;
    __Vtask_top__DOT__test_outputs__1200__t_write_data = 0xffffffffU;
    __Vtask_top__DOT__test_outputs__1200__t_read_word_offset = 0xfU;
    __Vtask_top__DOT__test_outputs__1200__t_write_word_offset = 0xfU;
    __Vtask_top__DOT__test_outputs__1200__t_d_index = 0x1fU;
    __Vtask_top__DOT__test_outputs__1200__t_cache_req_msg_data = 0U;
    __Vtask_top__DOT__test_outputs__1200__t_cache_req_msg_addr = 0xffffffffU;
    __Vtask_top__DOT__test_outputs__1200__t_cache_req_msg_type_ = 1U;
    __Vtask_top__DOT__test_outputs__1200__t_memresp_msg_data = 0U;
    __Vtask_top__DOT__test_outputs__1200__t_memresp_msg_type_ = 1U;
    __Vtask_top__DOT__test_outputs__1200__t_all_flushed = 0U;
    __Vtask_top__DOT__test_outputs__1200__t_resp_count_done = 0U;
    __Vtask_top__DOT__test_outputs__1200__t_req_count_done = 0U;
    __Vtask_top__DOT__test_outputs__1200__t_incoming_mem_type = 1U;
    __Vtask_top__DOT__test_outputs__1200__t_line1_valid = 0U;
    __Vtask_top__DOT__test_outputs__1200__t_line0_valid = 1U;
    __Vtask_top__DOT__test_outputs__1200__t_line1_dirty = 0U;
    __Vtask_top__DOT__test_outputs__1200__t_line0_dirty = 0U;
    __Vtask_top__DOT__test_outputs__1200__t_tarray1_match = 0U;
    __Vtask_top__DOT__test_outputs__1200__t_tarray0_match = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray0_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1200__t_tarray0_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray0_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1200__t_tarray0_match,
                          1,(IData)(vlSelf->top__DOT__tarray0_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray0_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1200__t_tarray0_match,
                      1,(IData)(vlSelf->top__DOT__tarray0_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 825, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray1_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1200__t_tarray1_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray1_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1200__t_tarray1_match,
                          1,(IData)(vlSelf->top__DOT__tarray1_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray1_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1200__t_tarray1_match,
                      1,(IData)(vlSelf->top__DOT__tarray1_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 831, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1200__t_line0_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1200__t_line0_dirty,
                          1,(IData)(vlSelf->top__DOT__line0_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1200__t_line0_dirty,
                      1,(IData)(vlSelf->top__DOT__line0_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 837, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1200__t_line1_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1200__t_line1_dirty,
                          1,(IData)(vlSelf->top__DOT__line1_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1200__t_line1_dirty,
                      1,(IData)(vlSelf->top__DOT__line1_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 843, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1200__t_line0_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1200__t_line0_valid,
                          1,(IData)(vlSelf->top__DOT__line0_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1200__t_line0_valid,
                      1,(IData)(vlSelf->top__DOT__line0_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 849, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1200__t_line1_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1200__t_line1_valid,
                          1,(IData)(vlSelf->top__DOT__line1_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1200__t_line1_valid,
                      1,(IData)(vlSelf->top__DOT__line1_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 855, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__1200__t_incoming_mem_type)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("incoming_mem_type is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1200__t_incoming_mem_type,
                          1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("incoming_mem_type is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1200__t_incoming_mem_type,
                      1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 861, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1200__t_req_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("req_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1200__t_req_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("req_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1200__t_req_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 867, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1200__t_resp_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("resp_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1200__t_resp_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("resp_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1200__t_resp_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 873, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__all_flushed) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1200__t_all_flushed)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("all_flushed is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1200__t_all_flushed,
                          1,(IData)(vlSelf->top__DOT__all_flushed));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("all_flushed is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1200__t_all_flushed,
                      1,(IData)(vlSelf->top__DOT__all_flushed));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 879, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                      >> 0x2cU))) == (IData)(__Vtask_top__DOT__test_outputs__1200__t_memresp_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__1200__t_memresp_msg_type_,
                          3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                           >> 0x2cU))));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__1200__t_memresp_msg_type_,
                      3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                       >> 0x2cU))));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 885, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__memresp_msg) 
                       == __Vtask_top__DOT__test_outputs__1200__t_memresp_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1200__t_memresp_msg_data,
                          32,(IData)(vlSelf->top__DOT__memresp_msg));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1200__t_memresp_msg_data,
                      32,(IData)(vlSelf->top__DOT__memresp_msg));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 891, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__1200__t_cache_req_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__1200__t_cache_req_msg_type_,
                          3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__1200__t_cache_req_msg_type_,
                      3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 897, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((((vlSelf->top__DOT__cache_req_msg[2U] 
                         << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                      >> 2U)) == __Vtask_top__DOT__test_outputs__1200__t_cache_req_msg_addr))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.addr is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1200__t_cache_req_msg_addr,
                          32,((vlSelf->top__DOT__cache_req_msg[2U] 
                               << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                            >> 2U)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.addr is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1200__t_cache_req_msg_addr,
                      32,((vlSelf->top__DOT__cache_req_msg[2U] 
                           << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                        >> 2U)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 903, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__cache_req_msg[0U] 
                       == __Vtask_top__DOT__test_outputs__1200__t_cache_req_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1200__t_cache_req_msg_data,
                          32,vlSelf->top__DOT__cache_req_msg[0U]);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1200__t_cache_req_msg_data,
                      32,vlSelf->top__DOT__cache_req_msg[0U]);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 909, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__d_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1200__t_d_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.d_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__1200__t_d_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.d_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__1200__t_d_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 915, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1200__t_write_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__1200__t_write_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__1200__t_write_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 921, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1200__t_read_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.read_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__1200__t_read_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.read_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__1200__t_read_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 927, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__write_data 
                       == __Vtask_top__DOT__test_outputs__1200__t_write_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1200__t_write_data,
                          32,vlSelf->top__DOT__DUT__DOT__write_data);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1200__t_write_data,
                      32,vlSelf->top__DOT__DUT__DOT__write_data);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 933, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty0 
                       == __Vtask_top__DOT__test_outputs__1200__t_dirty0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1200__t_dirty0,
                          32,vlSelf->top__DOT__DUT__DOT__dirty0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1200__t_dirty0,
                      32,vlSelf->top__DOT__DUT__DOT__dirty0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 939, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty1 
                       == __Vtask_top__DOT__test_outputs__1200__t_dirty1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1200__t_dirty1,
                          32,vlSelf->top__DOT__DUT__DOT__dirty1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1200__t_dirty1,
                      32,vlSelf->top__DOT__DUT__DOT__dirty1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 945, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid0 
                       == __Vtask_top__DOT__test_outputs__1200__t_valid0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1200__t_valid0,
                          32,vlSelf->top__DOT__DUT__DOT__valid0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1200__t_valid0,
                      32,vlSelf->top__DOT__DUT__DOT__valid0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 951, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid1 
                       == __Vtask_top__DOT__test_outputs__1200__t_valid1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1200__t_valid1,
                          32,vlSelf->top__DOT__DUT__DOT__valid1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1200__t_valid1,
                      32,vlSelf->top__DOT__DUT__DOT__valid1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 957, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__flush_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1200__t_flush_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.flush_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__1200__t_flush_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.flush_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__1200__t_flush_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 963, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0U == vlSelf->top__DOT__DUT__DOT__dirty0) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1200__t_flush_way_sel)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("flush_way_sel is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1200__t_flush_way_sel,
                          1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("flush_way_sel is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1200__t_flush_way_sel,
                      1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 969, "");
        }
    }
    vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__delay__1251__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__1251__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__1251__unnamedblk6__DOT__i, __Vtask_top__DOT__delay__1251__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_CacheAltDpath.v", 
                                           730);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__1251__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__1251__unnamedblk6__DOT__i);
    }
    vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       509);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_top__DOT__set_inputs__1252__t_way_select = 1U;
    __Vtask_top__DOT__set_inputs__1252__t_cache_type = 0U;
    __Vtask_top__DOT__set_inputs__1252__t_cache_data = 0U;
    __Vtask_top__DOT__set_inputs__1252__t_mem_type = 1U;
    __Vtask_top__DOT__set_inputs__1252__t_mem_data = 0xffffffffU;
    __Vtask_top__DOT__set_inputs__1252__t_mem_addr = 0x116a0U;
    __Vtask_top__DOT__set_inputs__1252__t_state = 1U;
    __Vtask_top__DOT__set_inputs__1252__t_valid_set = 0U;
    __Vtask_top__DOT__set_inputs__1252__t_dirty_set = 0U;
    __Vtask_top__DOT__set_inputs__1252__t_clean_set = 0U;
    __Vtask_top__DOT__set_inputs__1252__t_mem_action = 0U;
    __Vtask_top__DOT__set_inputs__1252__t_read_word_sel = 0U;
    __Vtask_top__DOT__set_inputs__1252__t_write_word_sel = 0U;
    __Vtask_top__DOT__set_inputs__1252__t_index_sel = 0U;
    __Vtask_top__DOT__set_inputs__1252__t_darray_wen = 0U;
    __Vtask_top__DOT__set_inputs__1252__t_darray_en = 1U;
    __Vtask_top__DOT__set_inputs__1252__t_write_data_sel = 0U;
    __Vtask_top__DOT__set_inputs__1252__t_count_reset = 1U;
    __Vtask_top__DOT__set_inputs__1252__t_resp_count_en = 0U;
    __Vtask_top__DOT__set_inputs__1252__t_req_count_en = 0U;
    __Vtask_top__DOT__set_inputs__1252__t_tarray_wen = 0U;
    __Vtask_top__DOT__set_inputs__1252__t_tarray_en = 1U;
    __Vtask_top__DOT__set_inputs__1252__t_input_en = 1U;
    __Vtask_top__DOT__set_inputs__1252__t_flush_done = 0U;
    __Vtask_top__DOT__set_inputs__1252__t_flush = 0U;
    vlSelf->top__DOT__flush = __Vtask_top__DOT__set_inputs__1252__t_flush;
    vlSelf->top__DOT__flush_done = __Vtask_top__DOT__set_inputs__1252__t_flush_done;
    vlSelf->top__DOT__input_en = __Vtask_top__DOT__set_inputs__1252__t_input_en;
    vlSelf->top__DOT__tarray_en = __Vtask_top__DOT__set_inputs__1252__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = __Vtask_top__DOT__set_inputs__1252__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = __Vtask_top__DOT__set_inputs__1252__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = __Vtask_top__DOT__set_inputs__1252__t_resp_count_en;
    vlSelf->top__DOT__count_reset = __Vtask_top__DOT__set_inputs__1252__t_count_reset;
    vlSelf->top__DOT__write_data_sel = __Vtask_top__DOT__set_inputs__1252__t_write_data_sel;
    vlSelf->top__DOT__darray_en = __Vtask_top__DOT__set_inputs__1252__t_darray_en;
    vlSelf->top__DOT__darray_wen = __Vtask_top__DOT__set_inputs__1252__t_darray_wen;
    vlSelf->top__DOT__index_sel = __Vtask_top__DOT__set_inputs__1252__t_index_sel;
    vlSelf->top__DOT__write_word_sel = __Vtask_top__DOT__set_inputs__1252__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = __Vtask_top__DOT__set_inputs__1252__t_read_word_sel;
    vlSelf->top__DOT__mem_action = __Vtask_top__DOT__set_inputs__1252__t_mem_action;
    vlSelf->top__DOT__clean_set = __Vtask_top__DOT__set_inputs__1252__t_clean_set;
    vlSelf->top__DOT__dirty_set = __Vtask_top__DOT__set_inputs__1252__t_dirty_set;
    vlSelf->top__DOT__valid_set = __Vtask_top__DOT__set_inputs__1252__t_valid_set;
    vlSelf->top__DOT__state = __Vtask_top__DOT__set_inputs__1252__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (__Vtask_top__DOT__set_inputs__1252__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (__Vtask_top__DOT__set_inputs__1252__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = __Vtask_top__DOT__set_inputs__1252__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(__Vtask_top__DOT__set_inputs__1252__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(__Vtask_top__DOT__set_inputs__1252__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(__Vtask_top__DOT__set_inputs__1252__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = __Vtask_top__DOT__set_inputs__1252__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\nWrite miss in MT - line1 is dirty\n");
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       517);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_top__DOT__test_outputs__1253__t_flush_way_sel = 1U;
    __Vtask_top__DOT__test_outputs__1253__t_flush_index = 0x1aU;
    __Vtask_top__DOT__test_outputs__1253__t_valid1 = 0x4000000U;
    __Vtask_top__DOT__test_outputs__1253__t_valid0 = 0x80000000U;
    __Vtask_top__DOT__test_outputs__1253__t_dirty1 = 0x4000000U;
    __Vtask_top__DOT__test_outputs__1253__t_dirty0 = 0U;
    __Vtask_top__DOT__test_outputs__1253__t_write_data = 0xffffffffU;
    __Vtask_top__DOT__test_outputs__1253__t_read_word_offset = 8U;
    __Vtask_top__DOT__test_outputs__1253__t_write_word_offset = 8U;
    __Vtask_top__DOT__test_outputs__1253__t_d_index = 0x1aU;
    __Vtask_top__DOT__test_outputs__1253__t_cache_req_msg_data = 0U;
    __Vtask_top__DOT__test_outputs__1253__t_cache_req_msg_addr = 0x11680U;
    __Vtask_top__DOT__test_outputs__1253__t_cache_req_msg_type_ = 0U;
    __Vtask_top__DOT__test_outputs__1253__t_memresp_msg_data = 0U;
    __Vtask_top__DOT__test_outputs__1253__t_memresp_msg_type_ = 1U;
    __Vtask_top__DOT__test_outputs__1253__t_all_flushed = 0U;
    __Vtask_top__DOT__test_outputs__1253__t_resp_count_done = 0U;
    __Vtask_top__DOT__test_outputs__1253__t_req_count_done = 0U;
    __Vtask_top__DOT__test_outputs__1253__t_incoming_mem_type = 1U;
    __Vtask_top__DOT__test_outputs__1253__t_line1_valid = 1U;
    __Vtask_top__DOT__test_outputs__1253__t_line0_valid = 0U;
    __Vtask_top__DOT__test_outputs__1253__t_line1_dirty = 1U;
    __Vtask_top__DOT__test_outputs__1253__t_line0_dirty = 0U;
    __Vtask_top__DOT__test_outputs__1253__t_tarray1_match = 0U;
    __Vtask_top__DOT__test_outputs__1253__t_tarray0_match = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray0_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1253__t_tarray0_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray0_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1253__t_tarray0_match,
                          1,(IData)(vlSelf->top__DOT__tarray0_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray0_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1253__t_tarray0_match,
                      1,(IData)(vlSelf->top__DOT__tarray0_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 825, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray1_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1253__t_tarray1_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray1_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1253__t_tarray1_match,
                          1,(IData)(vlSelf->top__DOT__tarray1_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray1_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1253__t_tarray1_match,
                      1,(IData)(vlSelf->top__DOT__tarray1_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 831, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1253__t_line0_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1253__t_line0_dirty,
                          1,(IData)(vlSelf->top__DOT__line0_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1253__t_line0_dirty,
                      1,(IData)(vlSelf->top__DOT__line0_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 837, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1253__t_line1_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1253__t_line1_dirty,
                          1,(IData)(vlSelf->top__DOT__line1_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1253__t_line1_dirty,
                      1,(IData)(vlSelf->top__DOT__line1_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 843, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1253__t_line0_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1253__t_line0_valid,
                          1,(IData)(vlSelf->top__DOT__line0_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1253__t_line0_valid,
                      1,(IData)(vlSelf->top__DOT__line0_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 849, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1253__t_line1_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1253__t_line1_valid,
                          1,(IData)(vlSelf->top__DOT__line1_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1253__t_line1_valid,
                      1,(IData)(vlSelf->top__DOT__line1_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 855, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__1253__t_incoming_mem_type)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("incoming_mem_type is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1253__t_incoming_mem_type,
                          1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("incoming_mem_type is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1253__t_incoming_mem_type,
                      1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 861, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1253__t_req_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("req_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1253__t_req_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("req_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1253__t_req_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 867, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1253__t_resp_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("resp_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1253__t_resp_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("resp_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1253__t_resp_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 873, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__all_flushed) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1253__t_all_flushed)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("all_flushed is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1253__t_all_flushed,
                          1,(IData)(vlSelf->top__DOT__all_flushed));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("all_flushed is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1253__t_all_flushed,
                      1,(IData)(vlSelf->top__DOT__all_flushed));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 879, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                      >> 0x2cU))) == (IData)(__Vtask_top__DOT__test_outputs__1253__t_memresp_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__1253__t_memresp_msg_type_,
                          3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                           >> 0x2cU))));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__1253__t_memresp_msg_type_,
                      3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                       >> 0x2cU))));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 885, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__memresp_msg) 
                       == __Vtask_top__DOT__test_outputs__1253__t_memresp_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1253__t_memresp_msg_data,
                          32,(IData)(vlSelf->top__DOT__memresp_msg));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1253__t_memresp_msg_data,
                      32,(IData)(vlSelf->top__DOT__memresp_msg));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 891, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__1253__t_cache_req_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__1253__t_cache_req_msg_type_,
                          3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__1253__t_cache_req_msg_type_,
                      3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 897, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((((vlSelf->top__DOT__cache_req_msg[2U] 
                         << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                      >> 2U)) == __Vtask_top__DOT__test_outputs__1253__t_cache_req_msg_addr))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.addr is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1253__t_cache_req_msg_addr,
                          32,((vlSelf->top__DOT__cache_req_msg[2U] 
                               << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                            >> 2U)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.addr is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1253__t_cache_req_msg_addr,
                      32,((vlSelf->top__DOT__cache_req_msg[2U] 
                           << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                        >> 2U)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 903, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__cache_req_msg[0U] 
                       == __Vtask_top__DOT__test_outputs__1253__t_cache_req_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1253__t_cache_req_msg_data,
                          32,vlSelf->top__DOT__cache_req_msg[0U]);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1253__t_cache_req_msg_data,
                      32,vlSelf->top__DOT__cache_req_msg[0U]);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 909, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__d_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1253__t_d_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.d_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__1253__t_d_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.d_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__1253__t_d_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 915, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1253__t_write_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__1253__t_write_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__1253__t_write_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 921, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1253__t_read_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.read_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__1253__t_read_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.read_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__1253__t_read_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 927, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__write_data 
                       == __Vtask_top__DOT__test_outputs__1253__t_write_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1253__t_write_data,
                          32,vlSelf->top__DOT__DUT__DOT__write_data);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1253__t_write_data,
                      32,vlSelf->top__DOT__DUT__DOT__write_data);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 933, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty0 
                       == __Vtask_top__DOT__test_outputs__1253__t_dirty0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1253__t_dirty0,
                          32,vlSelf->top__DOT__DUT__DOT__dirty0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1253__t_dirty0,
                      32,vlSelf->top__DOT__DUT__DOT__dirty0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 939, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty1 
                       == __Vtask_top__DOT__test_outputs__1253__t_dirty1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1253__t_dirty1,
                          32,vlSelf->top__DOT__DUT__DOT__dirty1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1253__t_dirty1,
                      32,vlSelf->top__DOT__DUT__DOT__dirty1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 945, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid0 
                       == __Vtask_top__DOT__test_outputs__1253__t_valid0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1253__t_valid0,
                          32,vlSelf->top__DOT__DUT__DOT__valid0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1253__t_valid0,
                      32,vlSelf->top__DOT__DUT__DOT__valid0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 951, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid1 
                       == __Vtask_top__DOT__test_outputs__1253__t_valid1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1253__t_valid1,
                          32,vlSelf->top__DOT__DUT__DOT__valid1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1253__t_valid1,
                      32,vlSelf->top__DOT__DUT__DOT__valid1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 957, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__flush_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1253__t_flush_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.flush_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__1253__t_flush_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.flush_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__1253__t_flush_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 963, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0U == vlSelf->top__DOT__DUT__DOT__dirty0) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1253__t_flush_way_sel)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("flush_way_sel is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1253__t_flush_way_sel,
                          1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("flush_way_sel is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1253__t_flush_way_sel,
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
                                                       523);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_top__DOT__set_inputs__1304__t_way_select = 1U;
    __Vtask_top__DOT__set_inputs__1304__t_cache_type = 0U;
    __Vtask_top__DOT__set_inputs__1304__t_cache_data = 0U;
    __Vtask_top__DOT__set_inputs__1304__t_mem_type = 1U;
    __Vtask_top__DOT__set_inputs__1304__t_mem_data = 0xffffffffU;
    __Vtask_top__DOT__set_inputs__1304__t_mem_addr = 0x116a0U;
    __Vtask_top__DOT__set_inputs__1304__t_state = 2U;
    __Vtask_top__DOT__set_inputs__1304__t_valid_set = 0U;
    __Vtask_top__DOT__set_inputs__1304__t_dirty_set = 0U;
    __Vtask_top__DOT__set_inputs__1304__t_clean_set = 1U;
    __Vtask_top__DOT__set_inputs__1304__t_mem_action = 1U;
    __Vtask_top__DOT__set_inputs__1304__t_read_word_sel = 1U;
    __Vtask_top__DOT__set_inputs__1304__t_write_word_sel = 0U;
    __Vtask_top__DOT__set_inputs__1304__t_index_sel = 0U;
    __Vtask_top__DOT__set_inputs__1304__t_darray_wen = 0U;
    __Vtask_top__DOT__set_inputs__1304__t_darray_en = 1U;
    __Vtask_top__DOT__set_inputs__1304__t_write_data_sel = 0U;
    __Vtask_top__DOT__set_inputs__1304__t_count_reset = 0U;
    __Vtask_top__DOT__set_inputs__1304__t_resp_count_en = 0U;
    __Vtask_top__DOT__set_inputs__1304__t_req_count_en = 0U;
    __Vtask_top__DOT__set_inputs__1304__t_tarray_wen = 0U;
    __Vtask_top__DOT__set_inputs__1304__t_tarray_en = 0U;
    __Vtask_top__DOT__set_inputs__1304__t_input_en = 0U;
    __Vtask_top__DOT__set_inputs__1304__t_flush_done = 0U;
    __Vtask_top__DOT__set_inputs__1304__t_flush = 0U;
    vlSelf->top__DOT__flush = __Vtask_top__DOT__set_inputs__1304__t_flush;
    vlSelf->top__DOT__flush_done = __Vtask_top__DOT__set_inputs__1304__t_flush_done;
    vlSelf->top__DOT__input_en = __Vtask_top__DOT__set_inputs__1304__t_input_en;
    vlSelf->top__DOT__tarray_en = __Vtask_top__DOT__set_inputs__1304__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = __Vtask_top__DOT__set_inputs__1304__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = __Vtask_top__DOT__set_inputs__1304__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = __Vtask_top__DOT__set_inputs__1304__t_resp_count_en;
    vlSelf->top__DOT__count_reset = __Vtask_top__DOT__set_inputs__1304__t_count_reset;
    vlSelf->top__DOT__write_data_sel = __Vtask_top__DOT__set_inputs__1304__t_write_data_sel;
    vlSelf->top__DOT__darray_en = __Vtask_top__DOT__set_inputs__1304__t_darray_en;
    vlSelf->top__DOT__darray_wen = __Vtask_top__DOT__set_inputs__1304__t_darray_wen;
    vlSelf->top__DOT__index_sel = __Vtask_top__DOT__set_inputs__1304__t_index_sel;
    vlSelf->top__DOT__write_word_sel = __Vtask_top__DOT__set_inputs__1304__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = __Vtask_top__DOT__set_inputs__1304__t_read_word_sel;
    vlSelf->top__DOT__mem_action = __Vtask_top__DOT__set_inputs__1304__t_mem_action;
    vlSelf->top__DOT__clean_set = __Vtask_top__DOT__set_inputs__1304__t_clean_set;
    vlSelf->top__DOT__dirty_set = __Vtask_top__DOT__set_inputs__1304__t_dirty_set;
    vlSelf->top__DOT__valid_set = __Vtask_top__DOT__set_inputs__1304__t_valid_set;
    vlSelf->top__DOT__state = __Vtask_top__DOT__set_inputs__1304__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (__Vtask_top__DOT__set_inputs__1304__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (__Vtask_top__DOT__set_inputs__1304__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = __Vtask_top__DOT__set_inputs__1304__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(__Vtask_top__DOT__set_inputs__1304__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(__Vtask_top__DOT__set_inputs__1304__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(__Vtask_top__DOT__set_inputs__1304__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = __Vtask_top__DOT__set_inputs__1304__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\nEvict initialized - wait for mem ready\n");
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       531);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_top__DOT__test_outputs__1305__t_flush_way_sel = 1U;
    __Vtask_top__DOT__test_outputs__1305__t_flush_index = 0U;
    __Vtask_top__DOT__test_outputs__1305__t_valid1 = 0x4000000U;
    __Vtask_top__DOT__test_outputs__1305__t_valid0 = 0x80000000U;
    __Vtask_top__DOT__test_outputs__1305__t_dirty1 = 0U;
    __Vtask_top__DOT__test_outputs__1305__t_dirty0 = 0U;
    __Vtask_top__DOT__test_outputs__1305__t_write_data = 0xffffffffU;
    __Vtask_top__DOT__test_outputs__1305__t_read_word_offset = 0U;
    __Vtask_top__DOT__test_outputs__1305__t_write_word_offset = 8U;
    __Vtask_top__DOT__test_outputs__1305__t_d_index = 0x1aU;
    __Vtask_top__DOT__test_outputs__1305__t_cache_req_msg_data = 0xffffffffU;
    __Vtask_top__DOT__test_outputs__1305__t_cache_req_msg_addr = 0x1680U;
    __Vtask_top__DOT__test_outputs__1305__t_cache_req_msg_type_ = 1U;
    __Vtask_top__DOT__test_outputs__1305__t_memresp_msg_data = 0xffffffffU;
    __Vtask_top__DOT__test_outputs__1305__t_memresp_msg_type_ = 1U;
    __Vtask_top__DOT__test_outputs__1305__t_all_flushed = 1U;
    __Vtask_top__DOT__test_outputs__1305__t_resp_count_done = 0U;
    __Vtask_top__DOT__test_outputs__1305__t_req_count_done = 0U;
    __Vtask_top__DOT__test_outputs__1305__t_incoming_mem_type = 1U;
    __Vtask_top__DOT__test_outputs__1305__t_line1_valid = 1U;
    __Vtask_top__DOT__test_outputs__1305__t_line0_valid = 0U;
    __Vtask_top__DOT__test_outputs__1305__t_line1_dirty = 0U;
    __Vtask_top__DOT__test_outputs__1305__t_line0_dirty = 0U;
    __Vtask_top__DOT__test_outputs__1305__t_tarray1_match = 0U;
    __Vtask_top__DOT__test_outputs__1305__t_tarray0_match = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray0_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1305__t_tarray0_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray0_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1305__t_tarray0_match,
                          1,(IData)(vlSelf->top__DOT__tarray0_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray0_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1305__t_tarray0_match,
                      1,(IData)(vlSelf->top__DOT__tarray0_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 825, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray1_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1305__t_tarray1_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray1_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1305__t_tarray1_match,
                          1,(IData)(vlSelf->top__DOT__tarray1_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray1_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1305__t_tarray1_match,
                      1,(IData)(vlSelf->top__DOT__tarray1_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 831, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1305__t_line0_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1305__t_line0_dirty,
                          1,(IData)(vlSelf->top__DOT__line0_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1305__t_line0_dirty,
                      1,(IData)(vlSelf->top__DOT__line0_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 837, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1305__t_line1_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1305__t_line1_dirty,
                          1,(IData)(vlSelf->top__DOT__line1_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1305__t_line1_dirty,
                      1,(IData)(vlSelf->top__DOT__line1_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 843, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1305__t_line0_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1305__t_line0_valid,
                          1,(IData)(vlSelf->top__DOT__line0_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1305__t_line0_valid,
                      1,(IData)(vlSelf->top__DOT__line0_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 849, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1305__t_line1_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1305__t_line1_valid,
                          1,(IData)(vlSelf->top__DOT__line1_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1305__t_line1_valid,
                      1,(IData)(vlSelf->top__DOT__line1_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 855, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__1305__t_incoming_mem_type)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("incoming_mem_type is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1305__t_incoming_mem_type,
                          1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("incoming_mem_type is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1305__t_incoming_mem_type,
                      1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 861, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1305__t_req_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("req_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1305__t_req_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("req_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1305__t_req_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 867, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1305__t_resp_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("resp_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1305__t_resp_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("resp_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1305__t_resp_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 873, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__all_flushed) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1305__t_all_flushed)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("all_flushed is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1305__t_all_flushed,
                          1,(IData)(vlSelf->top__DOT__all_flushed));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("all_flushed is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1305__t_all_flushed,
                      1,(IData)(vlSelf->top__DOT__all_flushed));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 879, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                      >> 0x2cU))) == (IData)(__Vtask_top__DOT__test_outputs__1305__t_memresp_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__1305__t_memresp_msg_type_,
                          3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                           >> 0x2cU))));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__1305__t_memresp_msg_type_,
                      3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                       >> 0x2cU))));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 885, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__memresp_msg) 
                       == __Vtask_top__DOT__test_outputs__1305__t_memresp_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1305__t_memresp_msg_data,
                          32,(IData)(vlSelf->top__DOT__memresp_msg));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1305__t_memresp_msg_data,
                      32,(IData)(vlSelf->top__DOT__memresp_msg));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 891, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__1305__t_cache_req_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__1305__t_cache_req_msg_type_,
                          3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__1305__t_cache_req_msg_type_,
                      3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 897, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((((vlSelf->top__DOT__cache_req_msg[2U] 
                         << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                      >> 2U)) == __Vtask_top__DOT__test_outputs__1305__t_cache_req_msg_addr))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.addr is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1305__t_cache_req_msg_addr,
                          32,((vlSelf->top__DOT__cache_req_msg[2U] 
                               << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                            >> 2U)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.addr is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1305__t_cache_req_msg_addr,
                      32,((vlSelf->top__DOT__cache_req_msg[2U] 
                           << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                        >> 2U)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 903, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__cache_req_msg[0U] 
                       == __Vtask_top__DOT__test_outputs__1305__t_cache_req_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1305__t_cache_req_msg_data,
                          32,vlSelf->top__DOT__cache_req_msg[0U]);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1305__t_cache_req_msg_data,
                      32,vlSelf->top__DOT__cache_req_msg[0U]);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 909, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__d_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1305__t_d_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.d_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__1305__t_d_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.d_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__1305__t_d_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 915, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1305__t_write_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__1305__t_write_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__1305__t_write_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 921, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1305__t_read_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.read_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__1305__t_read_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.read_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__1305__t_read_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 927, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__write_data 
                       == __Vtask_top__DOT__test_outputs__1305__t_write_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1305__t_write_data,
                          32,vlSelf->top__DOT__DUT__DOT__write_data);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1305__t_write_data,
                      32,vlSelf->top__DOT__DUT__DOT__write_data);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 933, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty0 
                       == __Vtask_top__DOT__test_outputs__1305__t_dirty0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1305__t_dirty0,
                          32,vlSelf->top__DOT__DUT__DOT__dirty0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1305__t_dirty0,
                      32,vlSelf->top__DOT__DUT__DOT__dirty0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 939, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty1 
                       == __Vtask_top__DOT__test_outputs__1305__t_dirty1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1305__t_dirty1,
                          32,vlSelf->top__DOT__DUT__DOT__dirty1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1305__t_dirty1,
                      32,vlSelf->top__DOT__DUT__DOT__dirty1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 945, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid0 
                       == __Vtask_top__DOT__test_outputs__1305__t_valid0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1305__t_valid0,
                          32,vlSelf->top__DOT__DUT__DOT__valid0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1305__t_valid0,
                      32,vlSelf->top__DOT__DUT__DOT__valid0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 951, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid1 
                       == __Vtask_top__DOT__test_outputs__1305__t_valid1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1305__t_valid1,
                          32,vlSelf->top__DOT__DUT__DOT__valid1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1305__t_valid1,
                      32,vlSelf->top__DOT__DUT__DOT__valid1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 957, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__flush_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1305__t_flush_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.flush_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__1305__t_flush_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.flush_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__1305__t_flush_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 963, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0U == vlSelf->top__DOT__DUT__DOT__dirty0) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1305__t_flush_way_sel)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("flush_way_sel is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1305__t_flush_way_sel,
                          1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("flush_way_sel is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1305__t_flush_way_sel,
                      1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 969, "");
        }
    }
    vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__delay__1356__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__1356__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__1356__unnamedblk6__DOT__i, __Vtask_top__DOT__delay__1356__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_CacheAltDpath.v", 
                                           730);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__1356__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__1356__unnamedblk6__DOT__i);
    }
    vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       539);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_top__DOT__set_inputs__1357__t_way_select = 1U;
    __Vtask_top__DOT__set_inputs__1357__t_cache_type = 0U;
    __Vtask_top__DOT__set_inputs__1357__t_cache_data = 0U;
    __Vtask_top__DOT__set_inputs__1357__t_mem_type = 1U;
    __Vtask_top__DOT__set_inputs__1357__t_mem_data = 0xffffffffU;
    __Vtask_top__DOT__set_inputs__1357__t_mem_addr = 0xfffffffU;
    __Vtask_top__DOT__set_inputs__1357__t_state = 2U;
    __Vtask_top__DOT__set_inputs__1357__t_valid_set = 0U;
    __Vtask_top__DOT__set_inputs__1357__t_dirty_set = 0U;
    __Vtask_top__DOT__set_inputs__1357__t_clean_set = 1U;
    __Vtask_top__DOT__set_inputs__1357__t_mem_action = 1U;
    __Vtask_top__DOT__set_inputs__1357__t_read_word_sel = 1U;
    __Vtask_top__DOT__set_inputs__1357__t_write_word_sel = 0U;
    __Vtask_top__DOT__set_inputs__1357__t_index_sel = 0U;
    __Vtask_top__DOT__set_inputs__1357__t_darray_wen = 0U;
    __Vtask_top__DOT__set_inputs__1357__t_darray_en = 1U;
    __Vtask_top__DOT__set_inputs__1357__t_write_data_sel = 0U;
    __Vtask_top__DOT__set_inputs__1357__t_count_reset = 0U;
    __Vtask_top__DOT__set_inputs__1357__t_resp_count_en = 1U;
    __Vtask_top__DOT__set_inputs__1357__t_req_count_en = 1U;
    __Vtask_top__DOT__set_inputs__1357__t_tarray_wen = 0U;
    __Vtask_top__DOT__set_inputs__1357__t_tarray_en = 0U;
    __Vtask_top__DOT__set_inputs__1357__t_input_en = 0U;
    __Vtask_top__DOT__set_inputs__1357__t_flush_done = 0U;
    __Vtask_top__DOT__set_inputs__1357__t_flush = 0U;
    vlSelf->top__DOT__flush = __Vtask_top__DOT__set_inputs__1357__t_flush;
    vlSelf->top__DOT__flush_done = __Vtask_top__DOT__set_inputs__1357__t_flush_done;
    vlSelf->top__DOT__input_en = __Vtask_top__DOT__set_inputs__1357__t_input_en;
    vlSelf->top__DOT__tarray_en = __Vtask_top__DOT__set_inputs__1357__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = __Vtask_top__DOT__set_inputs__1357__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = __Vtask_top__DOT__set_inputs__1357__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = __Vtask_top__DOT__set_inputs__1357__t_resp_count_en;
    vlSelf->top__DOT__count_reset = __Vtask_top__DOT__set_inputs__1357__t_count_reset;
    vlSelf->top__DOT__write_data_sel = __Vtask_top__DOT__set_inputs__1357__t_write_data_sel;
    vlSelf->top__DOT__darray_en = __Vtask_top__DOT__set_inputs__1357__t_darray_en;
    vlSelf->top__DOT__darray_wen = __Vtask_top__DOT__set_inputs__1357__t_darray_wen;
    vlSelf->top__DOT__index_sel = __Vtask_top__DOT__set_inputs__1357__t_index_sel;
    vlSelf->top__DOT__write_word_sel = __Vtask_top__DOT__set_inputs__1357__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = __Vtask_top__DOT__set_inputs__1357__t_read_word_sel;
    vlSelf->top__DOT__mem_action = __Vtask_top__DOT__set_inputs__1357__t_mem_action;
    vlSelf->top__DOT__clean_set = __Vtask_top__DOT__set_inputs__1357__t_clean_set;
    vlSelf->top__DOT__dirty_set = __Vtask_top__DOT__set_inputs__1357__t_dirty_set;
    vlSelf->top__DOT__valid_set = __Vtask_top__DOT__set_inputs__1357__t_valid_set;
    vlSelf->top__DOT__state = __Vtask_top__DOT__set_inputs__1357__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (__Vtask_top__DOT__set_inputs__1357__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (__Vtask_top__DOT__set_inputs__1357__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = __Vtask_top__DOT__set_inputs__1357__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(__Vtask_top__DOT__set_inputs__1357__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(__Vtask_top__DOT__set_inputs__1357__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(__Vtask_top__DOT__set_inputs__1357__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = __Vtask_top__DOT__set_inputs__1357__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\nMem ready to receive and respond\n");
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       547);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_top__DOT__test_outputs__1358__t_flush_way_sel = 1U;
    __Vtask_top__DOT__test_outputs__1358__t_flush_index = 0U;
    __Vtask_top__DOT__test_outputs__1358__t_valid1 = 0x4000000U;
    __Vtask_top__DOT__test_outputs__1358__t_valid0 = 0x80000000U;
    __Vtask_top__DOT__test_outputs__1358__t_dirty1 = 0U;
    __Vtask_top__DOT__test_outputs__1358__t_dirty0 = 0U;
    __Vtask_top__DOT__test_outputs__1358__t_write_data = 0xffffffffU;
    __Vtask_top__DOT__test_outputs__1358__t_read_word_offset = 1U;
    __Vtask_top__DOT__test_outputs__1358__t_write_word_offset = 8U;
    __Vtask_top__DOT__test_outputs__1358__t_d_index = 0x1aU;
    __Vtask_top__DOT__test_outputs__1358__t_cache_req_msg_data = 0xffffffffU;
    __Vtask_top__DOT__test_outputs__1358__t_cache_req_msg_addr = 0x1684U;
    __Vtask_top__DOT__test_outputs__1358__t_cache_req_msg_type_ = 1U;
    __Vtask_top__DOT__test_outputs__1358__t_memresp_msg_data = 0xffffffffU;
    __Vtask_top__DOT__test_outputs__1358__t_memresp_msg_type_ = 1U;
    __Vtask_top__DOT__test_outputs__1358__t_all_flushed = 1U;
    __Vtask_top__DOT__test_outputs__1358__t_resp_count_done = 0U;
    __Vtask_top__DOT__test_outputs__1358__t_req_count_done = 0U;
    __Vtask_top__DOT__test_outputs__1358__t_incoming_mem_type = 1U;
    __Vtask_top__DOT__test_outputs__1358__t_line1_valid = 1U;
    __Vtask_top__DOT__test_outputs__1358__t_line0_valid = 0U;
    __Vtask_top__DOT__test_outputs__1358__t_line1_dirty = 0U;
    __Vtask_top__DOT__test_outputs__1358__t_line0_dirty = 0U;
    __Vtask_top__DOT__test_outputs__1358__t_tarray1_match = 0U;
    __Vtask_top__DOT__test_outputs__1358__t_tarray0_match = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray0_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1358__t_tarray0_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray0_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1358__t_tarray0_match,
                          1,(IData)(vlSelf->top__DOT__tarray0_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray0_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1358__t_tarray0_match,
                      1,(IData)(vlSelf->top__DOT__tarray0_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 825, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray1_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1358__t_tarray1_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray1_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1358__t_tarray1_match,
                          1,(IData)(vlSelf->top__DOT__tarray1_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray1_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1358__t_tarray1_match,
                      1,(IData)(vlSelf->top__DOT__tarray1_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 831, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1358__t_line0_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1358__t_line0_dirty,
                          1,(IData)(vlSelf->top__DOT__line0_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1358__t_line0_dirty,
                      1,(IData)(vlSelf->top__DOT__line0_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 837, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1358__t_line1_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1358__t_line1_dirty,
                          1,(IData)(vlSelf->top__DOT__line1_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1358__t_line1_dirty,
                      1,(IData)(vlSelf->top__DOT__line1_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 843, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1358__t_line0_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1358__t_line0_valid,
                          1,(IData)(vlSelf->top__DOT__line0_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1358__t_line0_valid,
                      1,(IData)(vlSelf->top__DOT__line0_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 849, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1358__t_line1_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1358__t_line1_valid,
                          1,(IData)(vlSelf->top__DOT__line1_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1358__t_line1_valid,
                      1,(IData)(vlSelf->top__DOT__line1_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 855, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__1358__t_incoming_mem_type)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("incoming_mem_type is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1358__t_incoming_mem_type,
                          1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("incoming_mem_type is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1358__t_incoming_mem_type,
                      1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 861, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1358__t_req_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("req_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1358__t_req_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("req_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1358__t_req_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 867, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1358__t_resp_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("resp_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1358__t_resp_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("resp_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1358__t_resp_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 873, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__all_flushed) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1358__t_all_flushed)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("all_flushed is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1358__t_all_flushed,
                          1,(IData)(vlSelf->top__DOT__all_flushed));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("all_flushed is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1358__t_all_flushed,
                      1,(IData)(vlSelf->top__DOT__all_flushed));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 879, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                      >> 0x2cU))) == (IData)(__Vtask_top__DOT__test_outputs__1358__t_memresp_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__1358__t_memresp_msg_type_,
                          3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                           >> 0x2cU))));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__1358__t_memresp_msg_type_,
                      3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                       >> 0x2cU))));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 885, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__memresp_msg) 
                       == __Vtask_top__DOT__test_outputs__1358__t_memresp_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1358__t_memresp_msg_data,
                          32,(IData)(vlSelf->top__DOT__memresp_msg));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1358__t_memresp_msg_data,
                      32,(IData)(vlSelf->top__DOT__memresp_msg));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 891, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__1358__t_cache_req_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__1358__t_cache_req_msg_type_,
                          3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__1358__t_cache_req_msg_type_,
                      3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 897, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((((vlSelf->top__DOT__cache_req_msg[2U] 
                         << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                      >> 2U)) == __Vtask_top__DOT__test_outputs__1358__t_cache_req_msg_addr))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.addr is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1358__t_cache_req_msg_addr,
                          32,((vlSelf->top__DOT__cache_req_msg[2U] 
                               << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                            >> 2U)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.addr is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1358__t_cache_req_msg_addr,
                      32,((vlSelf->top__DOT__cache_req_msg[2U] 
                           << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                        >> 2U)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 903, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__cache_req_msg[0U] 
                       == __Vtask_top__DOT__test_outputs__1358__t_cache_req_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1358__t_cache_req_msg_data,
                          32,vlSelf->top__DOT__cache_req_msg[0U]);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1358__t_cache_req_msg_data,
                      32,vlSelf->top__DOT__cache_req_msg[0U]);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 909, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__d_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1358__t_d_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.d_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__1358__t_d_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.d_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__1358__t_d_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 915, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1358__t_write_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__1358__t_write_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__1358__t_write_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 921, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1358__t_read_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.read_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__1358__t_read_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.read_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__1358__t_read_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 927, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__write_data 
                       == __Vtask_top__DOT__test_outputs__1358__t_write_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1358__t_write_data,
                          32,vlSelf->top__DOT__DUT__DOT__write_data);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1358__t_write_data,
                      32,vlSelf->top__DOT__DUT__DOT__write_data);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 933, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty0 
                       == __Vtask_top__DOT__test_outputs__1358__t_dirty0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1358__t_dirty0,
                          32,vlSelf->top__DOT__DUT__DOT__dirty0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1358__t_dirty0,
                      32,vlSelf->top__DOT__DUT__DOT__dirty0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 939, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty1 
                       == __Vtask_top__DOT__test_outputs__1358__t_dirty1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1358__t_dirty1,
                          32,vlSelf->top__DOT__DUT__DOT__dirty1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1358__t_dirty1,
                      32,vlSelf->top__DOT__DUT__DOT__dirty1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 945, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid0 
                       == __Vtask_top__DOT__test_outputs__1358__t_valid0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1358__t_valid0,
                          32,vlSelf->top__DOT__DUT__DOT__valid0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1358__t_valid0,
                      32,vlSelf->top__DOT__DUT__DOT__valid0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 951, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid1 
                       == __Vtask_top__DOT__test_outputs__1358__t_valid1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1358__t_valid1,
                          32,vlSelf->top__DOT__DUT__DOT__valid1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1358__t_valid1,
                      32,vlSelf->top__DOT__DUT__DOT__valid1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 957, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__flush_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1358__t_flush_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.flush_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__1358__t_flush_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.flush_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__1358__t_flush_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 963, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0U == vlSelf->top__DOT__DUT__DOT__dirty0) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1358__t_flush_way_sel)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("flush_way_sel is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1358__t_flush_way_sel,
                          1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("flush_way_sel is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1358__t_flush_way_sel,
                      1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 969, "");
        }
    }
    vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\nEvict cycle 1\n");
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       555);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_top__DOT__test_outputs__1409__t_flush_way_sel = 1U;
    __Vtask_top__DOT__test_outputs__1409__t_flush_index = 0U;
    __Vtask_top__DOT__test_outputs__1409__t_valid1 = 0x4000000U;
    __Vtask_top__DOT__test_outputs__1409__t_valid0 = 0x80000000U;
    __Vtask_top__DOT__test_outputs__1409__t_dirty1 = 0U;
    __Vtask_top__DOT__test_outputs__1409__t_dirty0 = 0U;
    __Vtask_top__DOT__test_outputs__1409__t_write_data = 0xffffffffU;
    __Vtask_top__DOT__test_outputs__1409__t_read_word_offset = 2U;
    __Vtask_top__DOT__test_outputs__1409__t_write_word_offset = 8U;
    __Vtask_top__DOT__test_outputs__1409__t_d_index = 0x1aU;
    __Vtask_top__DOT__test_outputs__1409__t_cache_req_msg_data = 0xffffffffU;
    __Vtask_top__DOT__test_outputs__1409__t_cache_req_msg_addr = 0x1688U;
    __Vtask_top__DOT__test_outputs__1409__t_cache_req_msg_type_ = 1U;
    __Vtask_top__DOT__test_outputs__1409__t_memresp_msg_data = 0xffffffffU;
    __Vtask_top__DOT__test_outputs__1409__t_memresp_msg_type_ = 1U;
    __Vtask_top__DOT__test_outputs__1409__t_all_flushed = 1U;
    __Vtask_top__DOT__test_outputs__1409__t_resp_count_done = 0U;
    __Vtask_top__DOT__test_outputs__1409__t_req_count_done = 0U;
    __Vtask_top__DOT__test_outputs__1409__t_incoming_mem_type = 1U;
    __Vtask_top__DOT__test_outputs__1409__t_line1_valid = 1U;
    __Vtask_top__DOT__test_outputs__1409__t_line0_valid = 0U;
    __Vtask_top__DOT__test_outputs__1409__t_line1_dirty = 0U;
    __Vtask_top__DOT__test_outputs__1409__t_line0_dirty = 0U;
    __Vtask_top__DOT__test_outputs__1409__t_tarray1_match = 0U;
    __Vtask_top__DOT__test_outputs__1409__t_tarray0_match = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray0_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1409__t_tarray0_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray0_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1409__t_tarray0_match,
                          1,(IData)(vlSelf->top__DOT__tarray0_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray0_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1409__t_tarray0_match,
                      1,(IData)(vlSelf->top__DOT__tarray0_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 825, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray1_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1409__t_tarray1_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray1_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1409__t_tarray1_match,
                          1,(IData)(vlSelf->top__DOT__tarray1_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray1_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1409__t_tarray1_match,
                      1,(IData)(vlSelf->top__DOT__tarray1_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 831, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1409__t_line0_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1409__t_line0_dirty,
                          1,(IData)(vlSelf->top__DOT__line0_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1409__t_line0_dirty,
                      1,(IData)(vlSelf->top__DOT__line0_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 837, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1409__t_line1_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1409__t_line1_dirty,
                          1,(IData)(vlSelf->top__DOT__line1_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1409__t_line1_dirty,
                      1,(IData)(vlSelf->top__DOT__line1_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 843, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1409__t_line0_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1409__t_line0_valid,
                          1,(IData)(vlSelf->top__DOT__line0_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1409__t_line0_valid,
                      1,(IData)(vlSelf->top__DOT__line0_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 849, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1409__t_line1_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1409__t_line1_valid,
                          1,(IData)(vlSelf->top__DOT__line1_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1409__t_line1_valid,
                      1,(IData)(vlSelf->top__DOT__line1_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 855, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__1409__t_incoming_mem_type)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("incoming_mem_type is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1409__t_incoming_mem_type,
                          1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("incoming_mem_type is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1409__t_incoming_mem_type,
                      1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 861, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1409__t_req_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("req_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1409__t_req_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("req_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1409__t_req_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 867, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1409__t_resp_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("resp_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1409__t_resp_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("resp_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1409__t_resp_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 873, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__all_flushed) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1409__t_all_flushed)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("all_flushed is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1409__t_all_flushed,
                          1,(IData)(vlSelf->top__DOT__all_flushed));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("all_flushed is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1409__t_all_flushed,
                      1,(IData)(vlSelf->top__DOT__all_flushed));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 879, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                      >> 0x2cU))) == (IData)(__Vtask_top__DOT__test_outputs__1409__t_memresp_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__1409__t_memresp_msg_type_,
                          3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                           >> 0x2cU))));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__1409__t_memresp_msg_type_,
                      3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                       >> 0x2cU))));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 885, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__memresp_msg) 
                       == __Vtask_top__DOT__test_outputs__1409__t_memresp_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1409__t_memresp_msg_data,
                          32,(IData)(vlSelf->top__DOT__memresp_msg));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1409__t_memresp_msg_data,
                      32,(IData)(vlSelf->top__DOT__memresp_msg));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 891, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__1409__t_cache_req_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__1409__t_cache_req_msg_type_,
                          3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__1409__t_cache_req_msg_type_,
                      3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 897, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((((vlSelf->top__DOT__cache_req_msg[2U] 
                         << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                      >> 2U)) == __Vtask_top__DOT__test_outputs__1409__t_cache_req_msg_addr))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.addr is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1409__t_cache_req_msg_addr,
                          32,((vlSelf->top__DOT__cache_req_msg[2U] 
                               << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                            >> 2U)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.addr is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1409__t_cache_req_msg_addr,
                      32,((vlSelf->top__DOT__cache_req_msg[2U] 
                           << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                        >> 2U)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 903, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__cache_req_msg[0U] 
                       == __Vtask_top__DOT__test_outputs__1409__t_cache_req_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1409__t_cache_req_msg_data,
                          32,vlSelf->top__DOT__cache_req_msg[0U]);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1409__t_cache_req_msg_data,
                      32,vlSelf->top__DOT__cache_req_msg[0U]);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 909, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__d_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1409__t_d_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.d_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__1409__t_d_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.d_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__1409__t_d_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 915, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1409__t_write_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__1409__t_write_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__1409__t_write_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 921, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1409__t_read_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.read_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__1409__t_read_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.read_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__1409__t_read_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 927, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__write_data 
                       == __Vtask_top__DOT__test_outputs__1409__t_write_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1409__t_write_data,
                          32,vlSelf->top__DOT__DUT__DOT__write_data);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1409__t_write_data,
                      32,vlSelf->top__DOT__DUT__DOT__write_data);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 933, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty0 
                       == __Vtask_top__DOT__test_outputs__1409__t_dirty0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1409__t_dirty0,
                          32,vlSelf->top__DOT__DUT__DOT__dirty0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1409__t_dirty0,
                      32,vlSelf->top__DOT__DUT__DOT__dirty0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 939, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty1 
                       == __Vtask_top__DOT__test_outputs__1409__t_dirty1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1409__t_dirty1,
                          32,vlSelf->top__DOT__DUT__DOT__dirty1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1409__t_dirty1,
                      32,vlSelf->top__DOT__DUT__DOT__dirty1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 945, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid0 
                       == __Vtask_top__DOT__test_outputs__1409__t_valid0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1409__t_valid0,
                          32,vlSelf->top__DOT__DUT__DOT__valid0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1409__t_valid0,
                      32,vlSelf->top__DOT__DUT__DOT__valid0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 951, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid1 
                       == __Vtask_top__DOT__test_outputs__1409__t_valid1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1409__t_valid1,
                          32,vlSelf->top__DOT__DUT__DOT__valid1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1409__t_valid1,
                      32,vlSelf->top__DOT__DUT__DOT__valid1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 957, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__flush_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1409__t_flush_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.flush_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__1409__t_flush_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.flush_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__1409__t_flush_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 963, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0U == vlSelf->top__DOT__DUT__DOT__dirty0) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1409__t_flush_way_sel)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("flush_way_sel is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1409__t_flush_way_sel,
                          1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("flush_way_sel is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1409__t_flush_way_sel,
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
                                                       561);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       562);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       563);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       564);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       565);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       566);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       567);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       568);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       569);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       570);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       571);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       572);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("\nEvict cycle 14\n");
    __Vtask_top__DOT__test_outputs__1460__t_flush_way_sel = 1U;
    __Vtask_top__DOT__test_outputs__1460__t_flush_index = 0U;
    __Vtask_top__DOT__test_outputs__1460__t_valid1 = 0x4000000U;
    __Vtask_top__DOT__test_outputs__1460__t_valid0 = 0x80000000U;
    __Vtask_top__DOT__test_outputs__1460__t_dirty1 = 0U;
    __Vtask_top__DOT__test_outputs__1460__t_dirty0 = 0U;
    __Vtask_top__DOT__test_outputs__1460__t_write_data = 0xffffffffU;
    __Vtask_top__DOT__test_outputs__1460__t_read_word_offset = 0xeU;
    __Vtask_top__DOT__test_outputs__1460__t_write_word_offset = 8U;
    __Vtask_top__DOT__test_outputs__1460__t_d_index = 0x1aU;
    __Vtask_top__DOT__test_outputs__1460__t_cache_req_msg_data = 0xffffffffU;
    __Vtask_top__DOT__test_outputs__1460__t_cache_req_msg_addr = 0x16b8U;
    __Vtask_top__DOT__test_outputs__1460__t_cache_req_msg_type_ = 1U;
    __Vtask_top__DOT__test_outputs__1460__t_memresp_msg_data = 0xffffffffU;
    __Vtask_top__DOT__test_outputs__1460__t_memresp_msg_type_ = 1U;
    __Vtask_top__DOT__test_outputs__1460__t_all_flushed = 1U;
    __Vtask_top__DOT__test_outputs__1460__t_resp_count_done = 0U;
    __Vtask_top__DOT__test_outputs__1460__t_req_count_done = 0U;
    __Vtask_top__DOT__test_outputs__1460__t_incoming_mem_type = 1U;
    __Vtask_top__DOT__test_outputs__1460__t_line1_valid = 1U;
    __Vtask_top__DOT__test_outputs__1460__t_line0_valid = 0U;
    __Vtask_top__DOT__test_outputs__1460__t_line1_dirty = 0U;
    __Vtask_top__DOT__test_outputs__1460__t_line0_dirty = 0U;
    __Vtask_top__DOT__test_outputs__1460__t_tarray1_match = 0U;
    __Vtask_top__DOT__test_outputs__1460__t_tarray0_match = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray0_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1460__t_tarray0_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray0_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1460__t_tarray0_match,
                          1,(IData)(vlSelf->top__DOT__tarray0_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray0_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1460__t_tarray0_match,
                      1,(IData)(vlSelf->top__DOT__tarray0_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 825, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray1_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1460__t_tarray1_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray1_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1460__t_tarray1_match,
                          1,(IData)(vlSelf->top__DOT__tarray1_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray1_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1460__t_tarray1_match,
                      1,(IData)(vlSelf->top__DOT__tarray1_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 831, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1460__t_line0_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1460__t_line0_dirty,
                          1,(IData)(vlSelf->top__DOT__line0_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1460__t_line0_dirty,
                      1,(IData)(vlSelf->top__DOT__line0_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 837, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1460__t_line1_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1460__t_line1_dirty,
                          1,(IData)(vlSelf->top__DOT__line1_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1460__t_line1_dirty,
                      1,(IData)(vlSelf->top__DOT__line1_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 843, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1460__t_line0_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1460__t_line0_valid,
                          1,(IData)(vlSelf->top__DOT__line0_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1460__t_line0_valid,
                      1,(IData)(vlSelf->top__DOT__line0_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 849, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1460__t_line1_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1460__t_line1_valid,
                          1,(IData)(vlSelf->top__DOT__line1_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1460__t_line1_valid,
                      1,(IData)(vlSelf->top__DOT__line1_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 855, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__1460__t_incoming_mem_type)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("incoming_mem_type is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1460__t_incoming_mem_type,
                          1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("incoming_mem_type is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1460__t_incoming_mem_type,
                      1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 861, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1460__t_req_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("req_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1460__t_req_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("req_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1460__t_req_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 867, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1460__t_resp_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("resp_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1460__t_resp_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("resp_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1460__t_resp_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 873, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__all_flushed) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1460__t_all_flushed)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("all_flushed is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1460__t_all_flushed,
                          1,(IData)(vlSelf->top__DOT__all_flushed));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("all_flushed is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1460__t_all_flushed,
                      1,(IData)(vlSelf->top__DOT__all_flushed));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 879, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                      >> 0x2cU))) == (IData)(__Vtask_top__DOT__test_outputs__1460__t_memresp_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__1460__t_memresp_msg_type_,
                          3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                           >> 0x2cU))));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__1460__t_memresp_msg_type_,
                      3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                       >> 0x2cU))));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 885, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__memresp_msg) 
                       == __Vtask_top__DOT__test_outputs__1460__t_memresp_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1460__t_memresp_msg_data,
                          32,(IData)(vlSelf->top__DOT__memresp_msg));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1460__t_memresp_msg_data,
                      32,(IData)(vlSelf->top__DOT__memresp_msg));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 891, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__1460__t_cache_req_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__1460__t_cache_req_msg_type_,
                          3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__1460__t_cache_req_msg_type_,
                      3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 897, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((((vlSelf->top__DOT__cache_req_msg[2U] 
                         << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                      >> 2U)) == __Vtask_top__DOT__test_outputs__1460__t_cache_req_msg_addr))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.addr is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1460__t_cache_req_msg_addr,
                          32,((vlSelf->top__DOT__cache_req_msg[2U] 
                               << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                            >> 2U)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.addr is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1460__t_cache_req_msg_addr,
                      32,((vlSelf->top__DOT__cache_req_msg[2U] 
                           << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                        >> 2U)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 903, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__cache_req_msg[0U] 
                       == __Vtask_top__DOT__test_outputs__1460__t_cache_req_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1460__t_cache_req_msg_data,
                          32,vlSelf->top__DOT__cache_req_msg[0U]);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1460__t_cache_req_msg_data,
                      32,vlSelf->top__DOT__cache_req_msg[0U]);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 909, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__d_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1460__t_d_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.d_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__1460__t_d_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.d_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__1460__t_d_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 915, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1460__t_write_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__1460__t_write_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__1460__t_write_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 921, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1460__t_read_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.read_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__1460__t_read_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.read_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__1460__t_read_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 927, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__write_data 
                       == __Vtask_top__DOT__test_outputs__1460__t_write_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1460__t_write_data,
                          32,vlSelf->top__DOT__DUT__DOT__write_data);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1460__t_write_data,
                      32,vlSelf->top__DOT__DUT__DOT__write_data);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 933, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty0 
                       == __Vtask_top__DOT__test_outputs__1460__t_dirty0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1460__t_dirty0,
                          32,vlSelf->top__DOT__DUT__DOT__dirty0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1460__t_dirty0,
                      32,vlSelf->top__DOT__DUT__DOT__dirty0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 939, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty1 
                       == __Vtask_top__DOT__test_outputs__1460__t_dirty1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1460__t_dirty1,
                          32,vlSelf->top__DOT__DUT__DOT__dirty1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1460__t_dirty1,
                      32,vlSelf->top__DOT__DUT__DOT__dirty1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 945, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid0 
                       == __Vtask_top__DOT__test_outputs__1460__t_valid0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1460__t_valid0,
                          32,vlSelf->top__DOT__DUT__DOT__valid0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1460__t_valid0,
                      32,vlSelf->top__DOT__DUT__DOT__valid0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 951, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid1 
                       == __Vtask_top__DOT__test_outputs__1460__t_valid1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1460__t_valid1,
                          32,vlSelf->top__DOT__DUT__DOT__valid1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1460__t_valid1,
                      32,vlSelf->top__DOT__DUT__DOT__valid1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 957, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__flush_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1460__t_flush_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.flush_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__1460__t_flush_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.flush_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__1460__t_flush_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 963, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0U == vlSelf->top__DOT__DUT__DOT__dirty0) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1460__t_flush_way_sel)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("flush_way_sel is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1460__t_flush_way_sel,
                          1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("flush_way_sel is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1460__t_flush_way_sel,
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
                                                       581);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("\nEvict cycle 15\n");
    __Vtask_top__DOT__test_outputs__1511__t_flush_way_sel = 1U;
    __Vtask_top__DOT__test_outputs__1511__t_flush_index = 0U;
    __Vtask_top__DOT__test_outputs__1511__t_valid1 = 0x4000000U;
    __Vtask_top__DOT__test_outputs__1511__t_valid0 = 0x80000000U;
    __Vtask_top__DOT__test_outputs__1511__t_dirty1 = 0U;
    __Vtask_top__DOT__test_outputs__1511__t_dirty0 = 0U;
    __Vtask_top__DOT__test_outputs__1511__t_write_data = 0xffffffffU;
    __Vtask_top__DOT__test_outputs__1511__t_read_word_offset = 0xfU;
    __Vtask_top__DOT__test_outputs__1511__t_write_word_offset = 8U;
    __Vtask_top__DOT__test_outputs__1511__t_d_index = 0x1aU;
    __Vtask_top__DOT__test_outputs__1511__t_cache_req_msg_data = 0xffffffffU;
    __Vtask_top__DOT__test_outputs__1511__t_cache_req_msg_addr = 0x16bcU;
    __Vtask_top__DOT__test_outputs__1511__t_cache_req_msg_type_ = 1U;
    __Vtask_top__DOT__test_outputs__1511__t_memresp_msg_data = 0xffffffffU;
    __Vtask_top__DOT__test_outputs__1511__t_memresp_msg_type_ = 1U;
    __Vtask_top__DOT__test_outputs__1511__t_all_flushed = 1U;
    __Vtask_top__DOT__test_outputs__1511__t_resp_count_done = 0U;
    __Vtask_top__DOT__test_outputs__1511__t_req_count_done = 0U;
    __Vtask_top__DOT__test_outputs__1511__t_incoming_mem_type = 1U;
    __Vtask_top__DOT__test_outputs__1511__t_line1_valid = 1U;
    __Vtask_top__DOT__test_outputs__1511__t_line0_valid = 0U;
    __Vtask_top__DOT__test_outputs__1511__t_line1_dirty = 0U;
    __Vtask_top__DOT__test_outputs__1511__t_line0_dirty = 0U;
    __Vtask_top__DOT__test_outputs__1511__t_tarray1_match = 0U;
    __Vtask_top__DOT__test_outputs__1511__t_tarray0_match = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray0_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1511__t_tarray0_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray0_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1511__t_tarray0_match,
                          1,(IData)(vlSelf->top__DOT__tarray0_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray0_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1511__t_tarray0_match,
                      1,(IData)(vlSelf->top__DOT__tarray0_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 825, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__tarray1_match) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1511__t_tarray1_match)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("tarray1_match is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1511__t_tarray1_match,
                          1,(IData)(vlSelf->top__DOT__tarray1_match));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("tarray1_match is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1511__t_tarray1_match,
                      1,(IData)(vlSelf->top__DOT__tarray1_match));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 831, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1511__t_line0_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1511__t_line0_dirty,
                          1,(IData)(vlSelf->top__DOT__line0_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1511__t_line0_dirty,
                      1,(IData)(vlSelf->top__DOT__line0_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 837, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_dirty) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1511__t_line1_dirty)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_dirty is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1511__t_line1_dirty,
                          1,(IData)(vlSelf->top__DOT__line1_dirty));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_dirty is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1511__t_line1_dirty,
                      1,(IData)(vlSelf->top__DOT__line1_dirty));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 843, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line0_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1511__t_line0_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line0_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1511__t_line0_valid,
                          1,(IData)(vlSelf->top__DOT__line0_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line0_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1511__t_line0_valid,
                      1,(IData)(vlSelf->top__DOT__line0_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 849, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__line1_valid) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1511__t_line1_valid)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("line1_valid is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1511__t_line1_valid,
                          1,(IData)(vlSelf->top__DOT__line1_valid));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("line1_valid is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1511__t_line1_valid,
                      1,(IData)(vlSelf->top__DOT__line1_valid));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 855, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__1511__t_incoming_mem_type)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("incoming_mem_type is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1511__t_incoming_mem_type,
                          1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("incoming_mem_type is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1511__t_incoming_mem_type,
                      1,(1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 861, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1511__t_req_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("req_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1511__t_req_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("req_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1511__t_req_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 867, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1511__t_resp_count_done)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("resp_count_done is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1511__t_resp_count_done,
                          1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("resp_count_done is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1511__t_resp_count_done,
                      1,(0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 873, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__all_flushed) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1511__t_all_flushed)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("all_flushed is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1511__t_all_flushed,
                          1,(IData)(vlSelf->top__DOT__all_flushed));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("all_flushed is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1511__t_all_flushed,
                      1,(IData)(vlSelf->top__DOT__all_flushed));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 879, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                      >> 0x2cU))) == (IData)(__Vtask_top__DOT__test_outputs__1511__t_memresp_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__1511__t_memresp_msg_type_,
                          3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                           >> 0x2cU))));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__1511__t_memresp_msg_type_,
                      3,(7U & (IData)((vlSelf->top__DOT__memresp_msg 
                                       >> 0x2cU))));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 885, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__memresp_msg) 
                       == __Vtask_top__DOT__test_outputs__1511__t_memresp_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("memresp_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1511__t_memresp_msg_data,
                          32,(IData)(vlSelf->top__DOT__memresp_msg));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("memresp_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1511__t_memresp_msg_data,
                      32,(IData)(vlSelf->top__DOT__memresp_msg));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 891, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                              >> 0xaU)) == (IData)(__Vtask_top__DOT__test_outputs__1511__t_cache_req_msg_type_)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.type_ is correct.  Expected: %x, Actual: %x\n",
                          3,__Vtask_top__DOT__test_outputs__1511__t_cache_req_msg_type_,
                          3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                                   >> 0xaU)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.type_ is incorrect.  Expected: %x, Actual: %x\n",
                      3,__Vtask_top__DOT__test_outputs__1511__t_cache_req_msg_type_,
                      3,(7U & (vlSelf->top__DOT__cache_req_msg[2U] 
                               >> 0xaU)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 897, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((((vlSelf->top__DOT__cache_req_msg[2U] 
                         << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                      >> 2U)) == __Vtask_top__DOT__test_outputs__1511__t_cache_req_msg_addr))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.addr is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1511__t_cache_req_msg_addr,
                          32,((vlSelf->top__DOT__cache_req_msg[2U] 
                               << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                            >> 2U)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.addr is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1511__t_cache_req_msg_addr,
                      32,((vlSelf->top__DOT__cache_req_msg[2U] 
                           << 0x1eU) | (vlSelf->top__DOT__cache_req_msg[1U] 
                                        >> 2U)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 903, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__cache_req_msg[0U] 
                       == __Vtask_top__DOT__test_outputs__1511__t_cache_req_msg_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("cache_req_msg.data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1511__t_cache_req_msg_data,
                          32,vlSelf->top__DOT__cache_req_msg[0U]);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("cache_req_msg.data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1511__t_cache_req_msg_data,
                      32,vlSelf->top__DOT__cache_req_msg[0U]);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 909, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__d_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1511__t_d_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.d_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__1511__t_d_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.d_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__1511__t_d_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__d_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 915, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1511__t_write_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__1511__t_write_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__1511__t_write_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 921, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1511__t_read_word_offset)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.read_word_offset is correct.  Expected: %x, Actual: %x\n",
                          4,__Vtask_top__DOT__test_outputs__1511__t_read_word_offset,
                          4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.read_word_offset is incorrect.  Expected: %x, Actual: %x\n",
                      4,__Vtask_top__DOT__test_outputs__1511__t_read_word_offset,
                      4,(IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 927, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__write_data 
                       == __Vtask_top__DOT__test_outputs__1511__t_write_data))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.write_data is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1511__t_write_data,
                          32,vlSelf->top__DOT__DUT__DOT__write_data);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.write_data is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1511__t_write_data,
                      32,vlSelf->top__DOT__DUT__DOT__write_data);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 933, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty0 
                       == __Vtask_top__DOT__test_outputs__1511__t_dirty0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1511__t_dirty0,
                          32,vlSelf->top__DOT__DUT__DOT__dirty0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1511__t_dirty0,
                      32,vlSelf->top__DOT__DUT__DOT__dirty0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 939, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__dirty1 
                       == __Vtask_top__DOT__test_outputs__1511__t_dirty1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.dirty1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1511__t_dirty1,
                          32,vlSelf->top__DOT__DUT__DOT__dirty1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.dirty1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1511__t_dirty1,
                      32,vlSelf->top__DOT__DUT__DOT__dirty1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 945, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid0 
                       == __Vtask_top__DOT__test_outputs__1511__t_valid0))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid0 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1511__t_valid0,
                          32,vlSelf->top__DOT__DUT__DOT__valid0);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid0 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1511__t_valid0,
                      32,vlSelf->top__DOT__DUT__DOT__valid0);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 951, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->top__DOT__DUT__DOT__valid1 
                       == __Vtask_top__DOT__test_outputs__1511__t_valid1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.valid1 is correct.  Expected: %x, Actual: %x\n",
                          32,__Vtask_top__DOT__test_outputs__1511__t_valid1,
                          32,vlSelf->top__DOT__DUT__DOT__valid1);
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.valid1 is incorrect.  Expected: %x, Actual: %x\n",
                      32,__Vtask_top__DOT__test_outputs__1511__t_valid1,
                      32,vlSelf->top__DOT__DUT__DOT__valid1);
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 957, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__flush_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1511__t_flush_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("DUT.flush_index is correct.  Expected: %x, Actual: %x\n",
                          5,__Vtask_top__DOT__test_outputs__1511__t_flush_index,
                          5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("DUT.flush_index is incorrect.  Expected: %x, Actual: %x\n",
                      5,__Vtask_top__DOT__test_outputs__1511__t_flush_index,
                      5,(IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 963, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0U == vlSelf->top__DOT__DUT__DOT__dirty0) 
                       == (IData)(__Vtask_top__DOT__test_outputs__1511__t_flush_way_sel)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("flush_way_sel is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__1511__t_flush_way_sel,
                          1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("flush_way_sel is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__1511__t_flush_way_sel,
                      1,(0U == vlSelf->top__DOT__DUT__DOT__dirty0));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_CacheAltDpath.v", 969, "");
        }
    }
    vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\n---------------------------------------\nUnit Test 4: Flush\n---------------------------------------\n");
    vlSelf->top__DOT__reset = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       600);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reset = 0U;
    VL_WRITEF("\nFill dirty and valid arrays for flush\n");
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       606);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       612);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk1__DOT__i = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       606);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr = 0x40U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       612);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr = 0x40U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk1__DOT__i = 2U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       606);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr = 0x80U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       612);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr = 0x80U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk1__DOT__i = 3U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       606);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr = 0xc0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       612);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr = 0xc0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk1__DOT__i = 4U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       606);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr = 0x100U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       612);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr = 0x100U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk1__DOT__i = 5U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       606);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr = 0x140U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       612);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr = 0x140U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk1__DOT__i = 6U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       606);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr = 0x180U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       612);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr = 0x180U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk1__DOT__i = 7U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       606);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr = 0x1c0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       612);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr = 0x1c0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk1__DOT__i = 8U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       606);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr = 0x200U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       612);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr = 0x200U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk1__DOT__i = 9U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       606);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr = 0x240U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       612);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr = 0x240U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk1__DOT__i = 0xaU;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       606);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr = 0x280U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       612);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr = 0x280U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk1__DOT__i = 0xbU;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       606);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr = 0x2c0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       612);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr = 0x2c0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk1__DOT__i = 0xcU;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       606);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr = 0x300U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       612);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr = 0x300U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk1__DOT__i = 0xdU;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       606);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr = 0x340U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       612);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr = 0x340U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk1__DOT__i = 0xeU;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       606);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr = 0x380U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       612);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr = 0x380U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk1__DOT__i = 0xfU;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       606);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr = 0x3c0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       612);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr = 0x3c0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk1__DOT__i = 0x10U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       606);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr = 0x400U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       612);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr = 0x400U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk1__DOT__i = 0x11U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       606);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr = 0x440U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       612);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr = 0x440U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk1__DOT__i = 0x12U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       606);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr = 0x480U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       612);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr = 0x480U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk1__DOT__i = 0x13U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       606);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr = 0x4c0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       612);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr = 0x4c0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk1__DOT__i = 0x14U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       606);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr = 0x500U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       612);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr = 0x500U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk1__DOT__i = 0x15U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       606);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr = 0x540U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       612);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr = 0x540U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk1__DOT__i = 0x16U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       606);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr = 0x580U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       612);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr = 0x580U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk1__DOT__i = 0x17U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       606);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr = 0x5c0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       612);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr = 0x5c0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk1__DOT__i = 0x18U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       606);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr = 0x600U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       612);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr = 0x600U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk1__DOT__i = 0x19U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       606);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr = 0x640U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       612);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr = 0x640U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_dirty_set;
    vlSelf->top__DOT__valid_set = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_valid_set;
    vlSelf->top__DOT__state = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_state;
    vlSelf->top__DOT__memreq_msg[1U] = ((3U & vlSelf->top__DOT__memreq_msg[1U]) 
                                        | (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                           << 2U));
    vlSelf->top__DOT__memreq_msg[2U] = ((0x1ffcU & 
                                         vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & (vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_addr 
                                              >> 0x1eU)));
    vlSelf->top__DOT__memreq_msg[0U] = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_data;
    vlSelf->top__DOT__memreq_msg[2U] = ((0x3ffU & vlSelf->top__DOT__memreq_msg[2U]) 
                                        | (0x1fffU 
                                           & ((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_mem_type) 
                                              << 0xaU)));
    vlSelf->top__DOT__cache_resp_msg = ((0x7fff00000000ULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | (IData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_data)));
    vlSelf->top__DOT__cache_resp_msg = ((0xfffffffffffULL 
                                         & vlSelf->top__DOT__cache_resp_msg) 
                                        | ((QData)((IData)(vlSelf->__Vtask_top__DOT__set_inputs__1563__t_cache_type)) 
                                           << 0x2cU));
    vlSelf->top__DOT__way_select = vlSelf->__Vtask_top__DOT__set_inputs__1563__t_way_select;
    vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk1__DOT__i = 0x1aU;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_CacheAltDpath.v", 
                                                       606);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_way_select = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_cache_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_type = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_data = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_addr = 0x680U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_state = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_valid_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en = 1U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done = 0U;
    vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush = 0U;
    vlSelf->top__DOT__flush = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush;
    vlSelf->top__DOT__flush_done = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_flush_done;
    vlSelf->top__DOT__input_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_input_en;
    vlSelf->top__DOT__tarray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_en;
    vlSelf->top__DOT__tarray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_tarray_wen;
    vlSelf->top__DOT__req_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_req_count_en;
    vlSelf->top__DOT__resp_count_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_resp_count_en;
    vlSelf->top__DOT__count_reset = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_count_reset;
    vlSelf->top__DOT__write_data_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_data_sel;
    vlSelf->top__DOT__darray_en = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_en;
    vlSelf->top__DOT__darray_wen = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_darray_wen;
    vlSelf->top__DOT__index_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_index_sel;
    vlSelf->top__DOT__write_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_write_word_sel;
    vlSelf->top__DOT__read_word_sel = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_read_word_sel;
    vlSelf->top__DOT__mem_action = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_mem_action;
    vlSelf->top__DOT__clean_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_clean_set;
    vlSelf->top__DOT__dirty_set = vlSelf->__Vtask_top__DOT__set_inputs__1562__t_dirty_set;
    vlSelf->__Vm_traceActivity[2U] = 1U;
}
