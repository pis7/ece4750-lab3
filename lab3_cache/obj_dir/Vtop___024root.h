// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vtop___024unit;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtop___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(linetrace,0,0);
        CData/*0:0*/ top__DOT__reset;
        CData/*0:0*/ top__DOT__memreq_val;
        CData/*0:0*/ top__DOT__memreq_rdy;
        CData/*0:0*/ top__DOT__memresp_val;
        CData/*0:0*/ top__DOT__memresp_rdy;
        CData/*0:0*/ top__DOT__cache_req_val;
        CData/*0:0*/ top__DOT__cache_req_rdy;
        CData/*0:0*/ top__DOT__cache_resp_val;
        CData/*0:0*/ top__DOT__cache_resp_rdy;
        CData/*0:0*/ top__DOT__flush;
        CData/*0:0*/ top__DOT__all_flushed;
        CData/*0:0*/ top__DOT__flush_done;
        CData/*0:0*/ top__DOT__tarray0_match;
        CData/*0:0*/ top__DOT__tarray1_match;
        CData/*0:0*/ top__DOT__line0_dirty;
        CData/*0:0*/ top__DOT__line1_dirty;
        CData/*0:0*/ top__DOT__line0_valid;
        CData/*0:0*/ top__DOT__line1_valid;
        CData/*0:0*/ top__DOT__input_en;
        CData/*0:0*/ top__DOT__tarray_en;
        CData/*0:0*/ top__DOT__tarray_wen;
        CData/*0:0*/ top__DOT__req_count_en;
        CData/*0:0*/ top__DOT__resp_count_en;
        CData/*0:0*/ top__DOT__count_reset;
        CData/*0:0*/ top__DOT__write_data_sel;
        CData/*0:0*/ top__DOT__darray_en;
        CData/*0:0*/ top__DOT__darray_wen;
        CData/*0:0*/ top__DOT__index_sel;
        CData/*0:0*/ top__DOT__write_word_sel;
        CData/*0:0*/ top__DOT__read_word_sel;
        CData/*0:0*/ top__DOT__mem_action;
        CData/*0:0*/ top__DOT__way_select;
        CData/*0:0*/ top__DOT__clean_set;
        CData/*0:0*/ top__DOT__dirty_set;
        CData/*0:0*/ top__DOT__valid_set;
        CData/*2:0*/ top__DOT__state;
        CData/*0:0*/ top__DOT____Vtogcov__clk;
        CData/*0:0*/ top__DOT____Vtogcov__linetrace;
        CData/*0:0*/ top__DOT____Vtogcov__reset;
        CData/*0:0*/ top__DOT____Vtogcov__memreq_val;
        CData/*0:0*/ top__DOT____Vtogcov__memreq_rdy;
        CData/*0:0*/ top__DOT____Vtogcov__memresp_val;
        CData/*0:0*/ top__DOT____Vtogcov__memresp_rdy;
        CData/*0:0*/ top__DOT____Vtogcov__cache_req_val;
        CData/*0:0*/ top__DOT____Vtogcov__cache_req_rdy;
        CData/*0:0*/ top__DOT____Vtogcov__cache_resp_val;
        CData/*0:0*/ top__DOT____Vtogcov__cache_resp_rdy;
        CData/*0:0*/ top__DOT____Vtogcov__flush;
        CData/*0:0*/ top__DOT____Vtogcov__all_flushed;
        CData/*0:0*/ top__DOT____Vtogcov__flush_done;
        CData/*0:0*/ top__DOT____Vtogcov__tarray0_match;
        CData/*0:0*/ top__DOT____Vtogcov__tarray1_match;
        CData/*0:0*/ top__DOT____Vtogcov__line0_dirty;
        CData/*0:0*/ top__DOT____Vtogcov__line1_dirty;
        CData/*0:0*/ top__DOT____Vtogcov__line0_valid;
        CData/*0:0*/ top__DOT____Vtogcov__line1_valid;
        CData/*0:0*/ top__DOT____Vtogcov__incoming_mem_type;
        CData/*0:0*/ top__DOT____Vtogcov__req_count_done;
        CData/*0:0*/ top__DOT____Vtogcov__resp_count_done;
        CData/*0:0*/ top__DOT____Vtogcov__flush_way_sel;
        CData/*0:0*/ top__DOT____Vtogcov__input_en;
        CData/*0:0*/ top__DOT____Vtogcov__tarray_en;
    };
    struct {
        CData/*0:0*/ top__DOT____Vtogcov__tarray_wen;
        CData/*0:0*/ top__DOT____Vtogcov__req_count_en;
        CData/*0:0*/ top__DOT____Vtogcov__resp_count_en;
        CData/*0:0*/ top__DOT____Vtogcov__count_reset;
        CData/*0:0*/ top__DOT____Vtogcov__write_data_sel;
        CData/*0:0*/ top__DOT____Vtogcov__darray_en;
        CData/*0:0*/ top__DOT____Vtogcov__darray_wen;
        CData/*0:0*/ top__DOT____Vtogcov__index_sel;
        CData/*0:0*/ top__DOT____Vtogcov__write_word_sel;
        CData/*0:0*/ top__DOT____Vtogcov__read_word_sel;
        CData/*0:0*/ top__DOT____Vtogcov__mem_action;
        CData/*0:0*/ top__DOT____Vtogcov__way_select;
        CData/*0:0*/ top__DOT____Vtogcov__clean_set;
        CData/*0:0*/ top__DOT____Vtogcov__dirty_set;
        CData/*0:0*/ top__DOT____Vtogcov__valid_set;
        CData/*2:0*/ top__DOT____Vtogcov__state;
        CData/*4:0*/ top__DOT__DUT__DOT__d_index;
        CData/*3:0*/ top__DOT__DUT__DOT__write_word_offset;
        CData/*4:0*/ top__DOT__DUT__DOT__flush_index;
        CData/*3:0*/ top__DOT__DUT__DOT__read_word_offset;
        CData/*4:0*/ top__DOT__DUT__DOT__req_inc_out;
        CData/*4:0*/ top__DOT__DUT__DOT__req_word;
        CData/*4:0*/ top__DOT__DUT__DOT__resp_inc_out;
        CData/*4:0*/ top__DOT__DUT__DOT__resp_word;
        CData/*4:0*/ top__DOT__DUT__DOT__flush0_index;
        CData/*4:0*/ top__DOT__DUT__DOT__flush1_index;
        CData/*4:0*/ top__DOT__DUT__DOT____Vtogcov__d_index;
        CData/*3:0*/ top__DOT__DUT__DOT____Vtogcov__write_word_offset;
        CData/*4:0*/ top__DOT__DUT__DOT____Vtogcov__flush_index;
        CData/*3:0*/ top__DOT__DUT__DOT____Vtogcov__read_word_offset;
        CData/*4:0*/ top__DOT__DUT__DOT____Vtogcov__req_inc_out;
        CData/*4:0*/ top__DOT__DUT__DOT____Vtogcov__req_word;
        CData/*4:0*/ top__DOT__DUT__DOT____Vtogcov__resp_inc_out;
        CData/*4:0*/ top__DOT__DUT__DOT____Vtogcov__resp_word;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__all1_flushed;
        CData/*4:0*/ top__DOT__DUT__DOT____Vtogcov__flush0_index;
        CData/*4:0*/ top__DOT__DUT__DOT____Vtogcov__flush1_index;
        CData/*0:0*/ __Vtask_top__DOT__test_outputs__994__t_line1_valid;
        CData/*0:0*/ __Vtask_top__DOT__test_outputs__994__t_incoming_mem_type;
        CData/*0:0*/ __Vtask_top__DOT__test_outputs__994__t_req_count_done;
        CData/*0:0*/ __Vtask_top__DOT__test_outputs__994__t_resp_count_done;
        CData/*0:0*/ __Vtask_top__DOT__test_outputs__994__t_all_flushed;
        CData/*2:0*/ __Vtask_top__DOT__test_outputs__994__t_memresp_msg_type_;
        CData/*2:0*/ __Vtask_top__DOT__test_outputs__994__t_cache_req_msg_type_;
        CData/*4:0*/ __Vtask_top__DOT__test_outputs__994__t_d_index;
        CData/*3:0*/ __Vtask_top__DOT__test_outputs__994__t_write_word_offset;
        CData/*3:0*/ __Vtask_top__DOT__test_outputs__994__t_read_word_offset;
        CData/*4:0*/ __Vtask_top__DOT__test_outputs__994__t_flush_index;
        CData/*0:0*/ __Vtask_top__DOT__test_outputs__994__t_flush_way_sel;
        CData/*0:0*/ __Vtask_top__DOT__set_inputs__1562__t_flush;
        CData/*0:0*/ __Vtask_top__DOT__set_inputs__1562__t_flush_done;
        CData/*0:0*/ __Vtask_top__DOT__set_inputs__1562__t_input_en;
        CData/*0:0*/ __Vtask_top__DOT__set_inputs__1562__t_tarray_en;
        CData/*0:0*/ __Vtask_top__DOT__set_inputs__1562__t_tarray_wen;
        CData/*0:0*/ __Vtask_top__DOT__set_inputs__1562__t_req_count_en;
        CData/*0:0*/ __Vtask_top__DOT__set_inputs__1562__t_resp_count_en;
        CData/*0:0*/ __Vtask_top__DOT__set_inputs__1562__t_count_reset;
        CData/*0:0*/ __Vtask_top__DOT__set_inputs__1562__t_write_data_sel;
        CData/*0:0*/ __Vtask_top__DOT__set_inputs__1562__t_darray_en;
        CData/*0:0*/ __Vtask_top__DOT__set_inputs__1562__t_darray_wen;
        CData/*0:0*/ __Vtask_top__DOT__set_inputs__1562__t_index_sel;
        CData/*0:0*/ __Vtask_top__DOT__set_inputs__1562__t_write_word_sel;
        CData/*0:0*/ __Vtask_top__DOT__set_inputs__1562__t_read_word_sel;
        CData/*0:0*/ __Vtask_top__DOT__set_inputs__1562__t_mem_action;
    };
    struct {
        CData/*0:0*/ __Vtask_top__DOT__set_inputs__1562__t_clean_set;
        CData/*0:0*/ __Vtask_top__DOT__set_inputs__1562__t_dirty_set;
        CData/*0:0*/ __Vtask_top__DOT__set_inputs__1562__t_valid_set;
        CData/*2:0*/ __Vtask_top__DOT__set_inputs__1562__t_state;
        CData/*2:0*/ __Vtask_top__DOT__set_inputs__1562__t_mem_type;
        CData/*2:0*/ __Vtask_top__DOT__set_inputs__1562__t_cache_type;
        CData/*0:0*/ __Vtask_top__DOT__set_inputs__1562__t_way_select;
        CData/*0:0*/ __Vtask_top__DOT__set_inputs__1563__t_flush;
        CData/*0:0*/ __Vtask_top__DOT__set_inputs__1563__t_flush_done;
        CData/*0:0*/ __Vtask_top__DOT__set_inputs__1563__t_input_en;
        CData/*0:0*/ __Vtask_top__DOT__set_inputs__1563__t_tarray_en;
        CData/*0:0*/ __Vtask_top__DOT__set_inputs__1563__t_tarray_wen;
        CData/*0:0*/ __Vtask_top__DOT__set_inputs__1563__t_req_count_en;
        CData/*0:0*/ __Vtask_top__DOT__set_inputs__1563__t_resp_count_en;
        CData/*0:0*/ __Vtask_top__DOT__set_inputs__1563__t_count_reset;
        CData/*0:0*/ __Vtask_top__DOT__set_inputs__1563__t_write_data_sel;
        CData/*0:0*/ __Vtask_top__DOT__set_inputs__1563__t_darray_en;
        CData/*0:0*/ __Vtask_top__DOT__set_inputs__1563__t_darray_wen;
        CData/*0:0*/ __Vtask_top__DOT__set_inputs__1563__t_index_sel;
        CData/*0:0*/ __Vtask_top__DOT__set_inputs__1563__t_write_word_sel;
        CData/*0:0*/ __Vtask_top__DOT__set_inputs__1563__t_read_word_sel;
        CData/*0:0*/ __Vtask_top__DOT__set_inputs__1563__t_mem_action;
        CData/*0:0*/ __Vtask_top__DOT__set_inputs__1563__t_clean_set;
        CData/*0:0*/ __Vtask_top__DOT__set_inputs__1563__t_dirty_set;
        CData/*0:0*/ __Vtask_top__DOT__set_inputs__1563__t_valid_set;
        CData/*2:0*/ __Vtask_top__DOT__set_inputs__1563__t_state;
        CData/*2:0*/ __Vtask_top__DOT__set_inputs__1563__t_mem_type;
        CData/*2:0*/ __Vtask_top__DOT__set_inputs__1563__t_cache_type;
        CData/*0:0*/ __Vtask_top__DOT__set_inputs__1563__t_way_select;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ top__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ top__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ top__DOT__unnamedblk3__DOT__i;
        IData/*31:0*/ top__DOT__unnamedblk4__DOT__i;
        IData/*31:0*/ top__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j;
        VlWide<3>/*76:0*/ top__DOT__DUT__DOT__incoming_msg;
        IData/*31:0*/ top__DOT__DUT__DOT__write_data;
        IData/*31:0*/ top__DOT__DUT__DOT__word0_out_lower;
        IData/*31:0*/ top__DOT__DUT__DOT__word0_out_upper;
        IData/*31:0*/ top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7;
        IData/*31:0*/ top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6;
        IData/*31:0*/ top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5;
        IData/*31:0*/ top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4;
        IData/*31:0*/ top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3;
        IData/*31:0*/ top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2;
        IData/*31:0*/ top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1;
        IData/*31:0*/ top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0;
        IData/*31:0*/ top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7;
        IData/*31:0*/ top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6;
        IData/*31:0*/ top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5;
        IData/*31:0*/ top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4;
        IData/*31:0*/ top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3;
        IData/*31:0*/ top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2;
        IData/*31:0*/ top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1;
        IData/*31:0*/ top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0;
        IData/*31:0*/ top__DOT__DUT__DOT__data0_word_mux_out;
        IData/*31:0*/ top__DOT__DUT__DOT__word1_out_lower;
        IData/*31:0*/ top__DOT__DUT__DOT__word1_out_upper;
        IData/*31:0*/ top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7;
        IData/*31:0*/ top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6;
        IData/*31:0*/ top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5;
        IData/*31:0*/ top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4;
        IData/*31:0*/ top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3;
    };
    struct {
        IData/*31:0*/ top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in2;
        IData/*31:0*/ top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in1;
        IData/*31:0*/ top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in0;
        IData/*31:0*/ top__DOT__DUT__DOT____Vcellinp__word1_out_upper_eight_mux__in7;
        IData/*31:0*/ top__DOT__DUT__DOT____Vcellinp__word1_out_upper_eight_mux__in6;
        IData/*31:0*/ top__DOT__DUT__DOT____Vcellinp__word1_out_upper_eight_mux__in5;
        IData/*31:0*/ top__DOT__DUT__DOT____Vcellinp__word1_out_upper_eight_mux__in4;
        IData/*31:0*/ top__DOT__DUT__DOT____Vcellinp__word1_out_upper_eight_mux__in3;
        IData/*31:0*/ top__DOT__DUT__DOT____Vcellinp__word1_out_upper_eight_mux__in2;
        IData/*31:0*/ top__DOT__DUT__DOT____Vcellinp__word1_out_upper_eight_mux__in1;
        IData/*31:0*/ top__DOT__DUT__DOT____Vcellinp__word1_out_upper_eight_mux__in0;
        IData/*31:0*/ top__DOT__DUT__DOT__data1_word_mux_out;
        IData/*31:0*/ top__DOT__DUT__DOT__way_data_out;
        IData/*31:0*/ top__DOT__DUT__DOT__cache_data_out;
        IData/*31:0*/ top__DOT__DUT__DOT__dirty0;
        IData/*31:0*/ top__DOT__DUT__DOT__dirty1;
        IData/*31:0*/ top__DOT__DUT__DOT__valid0;
        IData/*31:0*/ top__DOT__DUT__DOT__valid1;
        IData/*31:0*/ top__DOT__DUT__DOT__req_addr_mem;
        IData/*31:0*/ top__DOT__DUT__DOT____Vtogcov__address;
        IData/*31:0*/ top__DOT__DUT__DOT____Vtogcov__proc_write_data;
        VlWide<3>/*76:0*/ top__DOT__DUT__DOT____Vtogcov__incoming_msg;
        IData/*20:0*/ top__DOT__DUT__DOT____Vtogcov__mem_req_tag;
        IData/*31:0*/ top__DOT__DUT__DOT____Vtogcov__write_data;
        IData/*31:0*/ top__DOT__DUT__DOT____Vtogcov__word0_out_lower;
        IData/*31:0*/ top__DOT__DUT__DOT____Vtogcov__word0_out_upper;
        IData/*31:0*/ top__DOT__DUT__DOT____Vtogcov__data0_word_mux_out;
        IData/*31:0*/ top__DOT__DUT__DOT____Vtogcov__word1_out_lower;
        IData/*31:0*/ top__DOT__DUT__DOT____Vtogcov__word1_out_upper;
        IData/*31:0*/ top__DOT__DUT__DOT____Vtogcov__data1_word_mux_out;
        IData/*31:0*/ top__DOT__DUT__DOT____Vtogcov__way_data_out;
        IData/*31:0*/ top__DOT__DUT__DOT____Vtogcov__cache_data_out;
        IData/*31:0*/ top__DOT__DUT__DOT____Vtogcov__dirty0;
        IData/*31:0*/ top__DOT__DUT__DOT____Vtogcov__dirty1;
        IData/*31:0*/ top__DOT__DUT__DOT____Vtogcov__valid0;
        IData/*31:0*/ top__DOT__DUT__DOT____Vtogcov__valid1;
        IData/*31:0*/ top__DOT__DUT__DOT____Vtogcov__req_addr_mem;
        IData/*31:0*/ top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0;
        IData/*31:0*/ top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1;
        IData/*31:0*/ top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2;
        IData/*31:0*/ top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3;
        IData/*31:0*/ top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4;
        IData/*31:0*/ top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5;
        IData/*31:0*/ top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6;
        IData/*31:0*/ top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7;
        IData/*31:0*/ top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0;
        IData/*31:0*/ top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1;
        IData/*31:0*/ top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2;
        IData/*31:0*/ top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3;
        IData/*31:0*/ top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4;
        IData/*31:0*/ top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5;
        IData/*31:0*/ top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6;
        IData/*31:0*/ top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7;
        IData/*31:0*/ top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0;
        IData/*31:0*/ top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1;
        IData/*31:0*/ top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2;
        IData/*31:0*/ top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3;
        IData/*31:0*/ top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4;
        IData/*31:0*/ top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5;
        IData/*31:0*/ top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6;
        IData/*31:0*/ top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7;
        IData/*31:0*/ top__DOT__DUT__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0;
        IData/*31:0*/ top__DOT__DUT__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1;
        IData/*31:0*/ top__DOT__DUT__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2;
    };
    struct {
        IData/*31:0*/ top__DOT__DUT__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3;
        IData/*31:0*/ top__DOT__DUT__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4;
        IData/*31:0*/ top__DOT__DUT__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5;
        IData/*31:0*/ top__DOT__DUT__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6;
        IData/*31:0*/ top__DOT__DUT__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7;
        IData/*31:0*/ __Vtask_top__DOT__test_outputs__994__t_memresp_msg_data;
        IData/*31:0*/ __Vtask_top__DOT__test_outputs__994__t_cache_req_msg_addr;
        IData/*31:0*/ __Vtask_top__DOT__test_outputs__994__t_cache_req_msg_data;
        IData/*31:0*/ __Vtask_top__DOT__test_outputs__994__t_write_data;
        IData/*31:0*/ __Vtask_top__DOT__test_outputs__994__t_dirty0;
        IData/*31:0*/ __Vtask_top__DOT__test_outputs__994__t_dirty1;
        IData/*31:0*/ __Vtask_top__DOT__test_outputs__994__t_valid0;
        IData/*31:0*/ __Vtask_top__DOT__test_outputs__994__t_valid1;
        IData/*31:0*/ __Vtask_top__DOT__set_inputs__1562__t_mem_addr;
        IData/*31:0*/ __Vtask_top__DOT__set_inputs__1562__t_mem_data;
        IData/*31:0*/ __Vtask_top__DOT__set_inputs__1562__t_cache_data;
        IData/*31:0*/ __Vtask_top__DOT__set_inputs__1563__t_mem_addr;
        IData/*31:0*/ __Vtask_top__DOT__set_inputs__1563__t_mem_data;
        IData/*31:0*/ __Vtask_top__DOT__set_inputs__1563__t_cache_data;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        VlWide<3>/*76:0*/ top__DOT__memreq_msg;
        QData/*46:0*/ top__DOT__memresp_msg;
        VlWide<3>/*76:0*/ top__DOT__cache_req_msg;
        QData/*46:0*/ top__DOT__cache_resp_msg;
        VlWide<3>/*76:0*/ top__DOT____Vtogcov__memreq_msg;
        QData/*46:0*/ top__DOT____Vtogcov__memresp_msg;
        VlWide<3>/*76:0*/ top__DOT____Vtogcov__cache_req_msg;
        QData/*46:0*/ top__DOT____Vtogcov__cache_resp_msg;
        VlUnpacked<IData/*20:0*/, 32> top__DOT__DUT__DOT__tag0;
        VlUnpacked<IData/*20:0*/, 32> top__DOT__DUT__DOT__tag1;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 16>, 32> top__DOT__DUT__DOT__data0;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 16>, 32> top__DOT__DUT__DOT__data1;
        VlUnpacked<CData/*0:0*/, 7> __Vm_traceActivity;
    };
    VlTriggerScheduler __VtrigSched_h3d404bd2__0;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
