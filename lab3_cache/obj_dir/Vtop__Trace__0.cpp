// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->top__DOT__reset));
        bufp->chgBit(oldp+1,(vlSelf->top__DOT__memreq_val));
        bufp->chgWData(oldp+2,(vlSelf->top__DOT__memreq_msg),77);
        bufp->chgBit(oldp+5,(vlSelf->top__DOT__memresp_rdy));
        bufp->chgBit(oldp+6,(vlSelf->top__DOT__cache_req_rdy));
        bufp->chgBit(oldp+7,(vlSelf->top__DOT__cache_resp_val));
        bufp->chgBit(oldp+8,(vlSelf->top__DOT__tarray_match));
        bufp->chgBit(oldp+9,(vlSelf->top__DOT__line_dirty));
        bufp->chgBit(oldp+10,(vlSelf->top__DOT__line_valid));
        bufp->chgBit(oldp+11,(vlSelf->top__DOT__req_count_done));
        bufp->chgBit(oldp+12,(vlSelf->top__DOT__resp_count_done));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgBit(oldp+13,(vlSelf->top__DOT__cache_req_val));
        bufp->chgBit(oldp+14,(vlSelf->top__DOT__flush_done));
        bufp->chgBit(oldp+15,(vlSelf->top__DOT__get_next_flush_line));
        bufp->chgBit(oldp+16,(vlSelf->top__DOT__input_en));
        bufp->chgBit(oldp+17,(vlSelf->top__DOT__tarray_wen));
        bufp->chgBit(oldp+18,(vlSelf->top__DOT__resp_count_en));
        bufp->chgBit(oldp+19,(vlSelf->top__DOT__req_count_en));
        bufp->chgBit(oldp+20,(vlSelf->top__DOT__count_reset));
        bufp->chgBit(oldp+21,(vlSelf->top__DOT__darray_en));
        bufp->chgBit(oldp+22,(vlSelf->top__DOT__darray_wen));
        bufp->chgBit(oldp+23,(vlSelf->top__DOT__dirty_set));
        bufp->chgBit(oldp+24,(vlSelf->top__DOT__DUT__DOT__hit));
        bufp->chgBit(oldp+25,(vlSelf->top__DOT__DUT__DOT__hit_write));
        bufp->chgBit(oldp+26,(vlSelf->top__DOT__DUT__DOT__req_write));
        bufp->chgBit(oldp+27,(vlSelf->top__DOT__DUT__DOT__counts_done));
        bufp->chgBit(oldp+28,(vlSelf->top__DOT__DUT__DOT__inc_req_not_done));
        bufp->chgBit(oldp+29,(vlSelf->top__DOT__DUT__DOT__inc_resp_not_done));
        bufp->chgBit(oldp+30,(vlSelf->top__DOT__DUT__DOT__int_flush_done));
        bufp->chgBit(oldp+31,(vlSelf->top__DOT__DUT__DOT__int_not_flush_done));
        bufp->chgCData(oldp+32,(vlSelf->top__DOT__DUT__DOT__nextState),3);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+33,(vlSelf->top__DOT__memreq_rdy));
        bufp->chgBit(oldp+34,(vlSelf->top__DOT__cache_resp_rdy));
        bufp->chgBit(oldp+35,(vlSelf->top__DOT__tarray_en));
        bufp->chgBit(oldp+36,(vlSelf->top__DOT__write_data_sel));
        bufp->chgBit(oldp+37,(vlSelf->top__DOT__index_sel));
        bufp->chgBit(oldp+38,(vlSelf->top__DOT__write_word_sel));
        bufp->chgBit(oldp+39,(vlSelf->top__DOT__read_word_sel));
        bufp->chgCData(oldp+40,(vlSelf->top__DOT__mem_action),3);
        bufp->chgBit(oldp+41,(vlSelf->top__DOT__clean_set));
        bufp->chgBit(oldp+42,(vlSelf->top__DOT__valid_set));
        bufp->chgCData(oldp+43,(vlSelf->top__DOT__DUT__DOT__state),3);
    }
    bufp->chgBit(oldp+44,(vlSelf->clk));
    bufp->chgBit(oldp+45,(vlSelf->linetrace));
    bufp->chgBit(oldp+46,(vlSelf->top__DOT__memresp_val));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
