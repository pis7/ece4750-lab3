// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("utb_CacheBaseCtrl.v", 17, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->linetrace = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__memreq_val = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__memreq_rdy = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(77, vlSelf->top__DOT__memreq_msg);
    vlSelf->top__DOT__memresp_val = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__memresp_rdy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__memresp_msg = VL_RAND_RESET_Q(47);
    vlSelf->top__DOT__cache_req_val = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cache_req_rdy = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(77, vlSelf->top__DOT__cache_req_msg);
    vlSelf->top__DOT__cache_resp_val = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cache_resp_rdy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cache_resp_msg = VL_RAND_RESET_Q(47);
    vlSelf->top__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__all_flushed = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__flush_done = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__get_next_flush_line = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__tarray_match = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__line_dirty = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__line_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__req_count_done = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__resp_count_done = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__input_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__tarray_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__tarray_wen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__resp_count_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__req_count_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__count_reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__write_data_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__darray_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__darray_wen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__index_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__write_word_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__read_word_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mem_action = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__clean_set = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dirty_set = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__valid_set = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__linetrace = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__memreq_val = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__memreq_rdy = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(77, vlSelf->top__DOT____Vtogcov__memreq_msg);
    vlSelf->top__DOT____Vtogcov__memresp_val = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__memresp_rdy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__memresp_msg = VL_RAND_RESET_Q(47);
    vlSelf->top__DOT____Vtogcov__cache_req_val = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__cache_req_rdy = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(77, vlSelf->top__DOT____Vtogcov__cache_req_msg);
    vlSelf->top__DOT____Vtogcov__cache_resp_val = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__cache_resp_rdy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__cache_resp_msg = VL_RAND_RESET_Q(47);
    vlSelf->top__DOT____Vtogcov__flush = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__all_flushed = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__flush_done = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__get_next_flush_line = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__tarray_match = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__line_dirty = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__line_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__req_count_done = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__resp_count_done = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__input_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__tarray_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__tarray_wen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__resp_count_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__req_count_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__count_reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__write_data_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__darray_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__darray_wen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__index_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__write_word_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__read_word_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__mem_action = VL_RAND_RESET_I(3);
    vlSelf->top__DOT____Vtogcov__clean_set = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__dirty_set = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__valid_set = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__hit_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__req_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__counts_done = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__inc_req_not_done = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__inc_resp_not_done = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__int_flush_done = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__int_not_flush_done = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__DUT__DOT__nextState = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__hit_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__req_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__counts_done = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__inc_req_not_done = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__inc_resp_not_done = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__int_flush_done = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__int_not_flush_done = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__state = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__nextState = VL_RAND_RESET_I(3);
    vlSelf->__Vtask_top__DOT__DUT__DOT__tab__390__t_cache_req_val = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_top__DOT__DUT__DOT__tab__390__t_req_count_en = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_top__DOT__DUT__DOT__tab__390__t_resp_count_en = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_top__DOT__DUT__DOT__tab__390__t_count_reset = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_top__DOT__DUT__DOT__tab__390__t_flush_done = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_top__DOT__DUT__DOT__tab__390__t_get_next_flush_line = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_top__DOT__DUT__DOT__tab__391__t_darray_wen = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_top__DOT__DUT__DOT__tab__391__t_dirty_set = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_top__DOT__DUT__DOT__tab__391__t_input_en = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_top__DOT__DUT__DOT__tab__392__t_cache_req_val = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_top__DOT__DUT__DOT__tab__392__t_tarray_wen = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_top__DOT__DUT__DOT__tab__392__t_req_count_en = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_top__DOT__DUT__DOT__tab__392__t_resp_count_en = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_top__DOT__DUT__DOT__tab__392__t_count_reset = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_top__DOT__DUT__DOT__tab__392__t_darray_wen = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_top__DOT__DUT__DOT__tab__393__t_cache_req_val = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_top__DOT__DUT__DOT__tab__393__t_req_count_en = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_top__DOT__DUT__DOT__tab__393__t_resp_count_en = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_top__DOT__DUT__DOT__tab__393__t_count_reset = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_top__DOT__DUT__DOT__tab__394__t_memresp_val = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_top__DOT__DUT__DOT__tab__394__t_darray_en = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_top__DOT__DUT__DOT__tab__394__t_darray_wen = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_top__DOT__DUT__DOT__tab__394__t_dirty_set = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_top__DOT__DUT__DOT__tab__394__t_input_en = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
