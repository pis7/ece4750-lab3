// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__9(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__9\n"); );
    // Body
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6096].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6097].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6098].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6099].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[6113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6070].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6071].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6073].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6074].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6075].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6076].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6078].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6079].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6080].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[6081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6018].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6019].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6020].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6021].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6022].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6023].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6024].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6025].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6026].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6027].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6028].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6029].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6030].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6031].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6032].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6033].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6034].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6035].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6036].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[6049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6509].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6510].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6511].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6512].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6513].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6514].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6515].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6516].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6517].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6518].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6519].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6520].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6521].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6522].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6523].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6524].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6525].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6526].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6527].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6528].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6529].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6530].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6531].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6532].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6533].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6534].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6535].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6536].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6537].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6538].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[6539].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6485].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6497].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[6507].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6445].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6446].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6452].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[6475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[6443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6402].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6403].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6404].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6405].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6406].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[6411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[6379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[6347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[6315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6778].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6779].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6780].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6781].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6782].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6783].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6784].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6785].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6786].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6787].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6788].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6789].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((4U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__read_word_offset))) {
        if ((2U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__read_word_offset))) {
            if ((1U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__read_word_offset))) {
                vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower 
                    = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in7;
                vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper 
                    = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7;
                vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower 
                    = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7;
                vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper 
                    = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7;
            } else {
                vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower 
                    = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in6;
                vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper 
                    = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6;
                vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower 
                    = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6;
                vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper 
                    = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6;
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__read_word_offset))) {
            vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower 
                = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in5;
            vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper 
                = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5;
            vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower 
                = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5;
            vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper 
                = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5;
        } else {
            vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower 
                = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in4;
            vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper 
                = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4;
            vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower 
                = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4;
            vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper 
                = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4;
        }
    } else if ((2U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__read_word_offset))) {
        if ((1U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__read_word_offset))) {
            vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower 
                = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in3;
            vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper 
                = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3;
            vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower 
                = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3;
            vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper 
                = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3;
        } else {
            vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower 
                = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in2;
            vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper 
                = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2;
            vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower 
                = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2;
            vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper 
                = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2;
        }
    } else if ((1U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__read_word_offset))) {
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower 
            = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1;
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper 
            = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1;
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower 
            = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1;
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper 
            = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1;
    } else {
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower 
            = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0;
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper 
            = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0;
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower 
            = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0;
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper 
            = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0;
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6790].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6791].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6792].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6793].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6794].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6795].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6796].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6797].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6798].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6799].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6800].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6801].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6802].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6803].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6804].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6805].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6806].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6807].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[6808].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[6809].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6746].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6747].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6748].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6749].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6750].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6751].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6752].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6753].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6754].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6755].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6756].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6757].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6758].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6759].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6760].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6761].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6762].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6763].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6764].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6765].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6766].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6767].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6768].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6769].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6770].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6771].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6772].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6773].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6774].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6775].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[6776].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[6777].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6714].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6715].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6716].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6717].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6718].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6719].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6720].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6721].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6722].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6723].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6724].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6725].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6726].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6727].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6728].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6729].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6730].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6731].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6732].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6733].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6734].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6735].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6736].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6737].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6738].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6739].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6740].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6741].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6742].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6743].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6744].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[6745].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6682].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6683].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6684].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6686].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6687].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6688].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6692].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6693].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6694].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6695].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6696].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6697].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6698].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6699].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6700].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6701].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6702].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6704].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6705].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6706].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6707].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6708].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6709].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6710].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6711].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6712].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[6713].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6669].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6670].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6674].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6680].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[6681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6619].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6620].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6621].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6622].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6623].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6624].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6625].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6626].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[6649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6586].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6587].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6588].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6589].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6590].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6591].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6592].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6593].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6594].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6595].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6596].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6597].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6598].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6599].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6600].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6601].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6602].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6603].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6604].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6605].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6606].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6608].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6609].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6610].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6611].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6612].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6613].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6614].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6615].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6616].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[6617].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6554].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6555].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6556].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6557].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6558].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6559].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6560].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6561].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6562].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6563].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6564].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6565].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6566].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6567].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6568].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6569].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6570].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6571].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6572].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6573].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6574].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6575].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6576].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6577].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6578].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6579].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6580].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6581].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6582].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6583].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6584].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[6585].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[7044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[7045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[7046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[7047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[7048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[7049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[7050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[7051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[7052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[7053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[7054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[7055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[7056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[7057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[7058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[7059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[7060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[7061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[7062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[7063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[7064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[7065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[7066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[7067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[7068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[7069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[7070].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[7071].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[7072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[7073].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[7074].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[7075].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[7012].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[7013].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[7014].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[7015].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[7016].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[7017].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[7018].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[7019].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[7020].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[7021].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[7022].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[7023].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[7024].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[7025].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[7026].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[7027].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[7028].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[7029].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[7030].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[7031].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[7032].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[7033].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[7034].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[7035].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[7036].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[7037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[7038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[7039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[7040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[7041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[7042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[7043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6980].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6981].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6982].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6983].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6984].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6985].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6986].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6987].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6988].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6989].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6990].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6991].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6992].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6993].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6994].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6995].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6996].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6997].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6998].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[6999].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[7000].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[7001].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[7002].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[7003].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[7004].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[7005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[7006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[7007].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[7008].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[7009].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[7010].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[7011].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6948].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6949].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6950].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6951].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6952].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6953].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6954].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6955].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6956].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6957].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6958].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6959].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6960].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6961].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6962].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6963].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6964].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6965].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6966].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6967].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6968].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6969].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6970].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6971].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6972].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6973].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6974].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6975].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6976].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6977].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[6978].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[6979].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6916].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6917].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6918].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6919].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6920].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6921].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6922].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6923].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6924].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6925].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6926].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6927].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6928].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6929].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6930].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6931].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6932].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6933].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6934].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6935].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6936].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6937].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6938].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6939].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6940].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6941].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6942].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6943].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6944].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6945].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[6946].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[6947].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6900].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6902].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6903].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6904].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6905].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6906].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6907].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6908].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6909].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6910].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6911].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6912].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6913].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[6914].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[6915].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6857].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6859].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6862].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6866].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6867].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6868].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6869].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6870].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6871].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6872].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6873].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6874].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6875].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6876].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6877].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6878].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6879].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6880].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6881].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[6882].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[6883].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6820].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6821].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6822].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6823].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6824].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6845].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6848].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6849].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[6851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0));
    }
    if (((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__resp_count_en) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT____Vtogcov__resp_count_en))) {
        vlSymsp->__Vcoverage[5233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT____Vtogcov__resp_count_en 
            = vlSelf->top__DOT__cache__DOT__dcache__DOT__resp_count_en;
    }
    if (((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__req_count_en) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT____Vtogcov__req_count_en))) {
        vlSymsp->__Vcoverage[5232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT____Vtogcov__req_count_en 
            = vlSelf->top__DOT__cache__DOT__dcache__DOT__req_count_en;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state)))) {
        if (((IData)(vlSelf->top__DOT__cache1_req_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay)))) {
            vlSymsp->__Vcoverage[7611].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__cache1_req_val) 
                      & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay)))))) {
            vlSymsp->__Vcoverage[7612].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[7605].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__zero_cycle_delay 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay;
    }
    if (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state) {
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next = 1U;
        if (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state) {
            vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en 
                = (0U < vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay);
            if ((((IData)(vlSelf->top__DOT__cache1_req_val) 
                  & (IData)(vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy)) 
                 & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay))) {
                vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next = 0U;
            }
        } else {
            vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en = 0U;
        }
    } else {
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next = 0U;
        if (((IData)(vlSelf->top__DOT__cache1_req_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay)))) {
            vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en = 1U;
            vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next = 1U;
        } else {
            vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en = 0U;
        }
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq1_val) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_val))) {
        vlSymsp->__Vcoverage[7183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_val 
            = vlSelf->top__DOT__mem__DOT__mem_memreq1_val;
    }
    if (vlSelf->top__DOT__mem__DOT__mem_memreq1_val) {
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_ 
            = vlSelf->top__DOT__cache__DOT__dcache__DOT__mem_action;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
            = vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy;
    } else {
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_ = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq = 0U;
    }
    if (((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__resp_count_en) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__resp_count_en))) {
        vlSymsp->__Vcoverage[4163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__resp_count_en 
            = vlSelf->top__DOT__cache__DOT__icache__DOT__resp_count_en;
    }
    if (((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__req_count_en) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__req_count_en))) {
        vlSymsp->__Vcoverage[4162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__req_count_en 
            = vlSelf->top__DOT__cache__DOT__icache__DOT__req_count_en;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state)))) {
        if (((IData)(vlSelf->top__DOT__cache0_req_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay)))) {
            vlSymsp->__Vcoverage[7468].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__cache0_req_val) 
                      & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay)))))) {
            vlSymsp->__Vcoverage[7469].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[7462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__zero_cycle_delay 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay;
    }
    if (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state) {
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next = 1U;
        if (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state) {
            vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en 
                = (0U < vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay);
            if ((((IData)(vlSelf->top__DOT__cache0_req_val) 
                  & (IData)(vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy)) 
                 & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay))) {
                vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next = 0U;
            }
        } else {
            vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en = 0U;
        }
    } else {
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next = 0U;
        if (((IData)(vlSelf->top__DOT__cache0_req_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay)))) {
            vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en = 1U;
            vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next = 1U;
        } else {
            vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en = 0U;
        }
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq0_val) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_val))) {
        vlSymsp->__Vcoverage[7104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_val 
            = vlSelf->top__DOT__mem__DOT__mem_memreq0_val;
    }
    if (vlSelf->top__DOT__mem__DOT__mem_memreq0_val) {
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_ 
            = vlSelf->top__DOT__cache__DOT__icache__DOT__mem_action;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
            = vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy;
    } else {
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_ = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq = 0U;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__test) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__test)))) {
        vlSymsp->__Vcoverage[9146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__test 
            = ((2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__test)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__test)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__test) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__test)))) {
        vlSymsp->__Vcoverage[9147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__test 
            = ((1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__test)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__test)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[9148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__len 
            = ((2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__len)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__len)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[9149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__len 
            = ((1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__len)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__len)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[9135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_ 
            = ((6U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[9136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_ 
            = ((5U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[9137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_ 
            = ((3U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[9138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque 
            = ((0xfeU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[9139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque 
            = ((0xfdU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[9140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque 
            = ((0xfbU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[9141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque 
            = ((0xf7U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[9142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque 
            = ((0xefU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[9143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque 
            = ((0xdfU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[9144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque 
            = ((0xbfU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[9145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque 
            = ((0x7fU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque)));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[5475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (1U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[5476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (2U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[5477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (4U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[5478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (8U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[5479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[5480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[5481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[5482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[5483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[5484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[5485].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[5486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[5487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[5488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[5489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[5490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[5491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[5492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[5493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[5494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[5495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[5496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[5497].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[5498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[5499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[5500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[5501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[5502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[5503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[5504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[5505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if (((vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data 
        = ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__write_data_sel)
            ? ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__write_data_sel)
                ? vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data
                : 0U) : vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U]);
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[534].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x6fffffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[535].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x5fffffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__cache1_resp_msg 
                  ^ vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[536].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x3fffffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[537].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fefffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[538].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[539].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[540].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[541].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7effffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[542].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7dffffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[543].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7bffffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[544].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x77ffffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[545].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[546].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[547].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[548].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__cache1_resp_msg) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__cache1_resp_msg)))) {
        vlSymsp->__Vcoverage[549].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__cache1_resp_msg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[550].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[551].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[552].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[553].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffffffffefULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[554].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[555].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[556].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[557].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[558].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[559].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[560].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[561].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffffffefffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[562].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[563].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[564].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[565].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[566].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[567].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[568].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[569].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffffefffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[570].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[571].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[572].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[573].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[574].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[575].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[576].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[577].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffefffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[578].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[579].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[580].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__test) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__test)))) {
        vlSymsp->__Vcoverage[9088].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__test 
            = ((2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__test)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__test)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__test) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__test)))) {
        vlSymsp->__Vcoverage[9089].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__test 
            = ((1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__test)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__test)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[9090].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__len 
            = ((2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__len)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__len)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[9091].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__len 
            = ((1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__len)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__len)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[9077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_ 
            = ((6U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[9078].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_ 
            = ((5U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[9079].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_ 
            = ((3U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[9080].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque 
            = ((0xfeU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[9081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque 
            = ((0xfdU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[9082].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque 
            = ((0xfbU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[9083].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque 
            = ((0xf7U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[9084].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque 
            = ((0xefU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[9085].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque 
            = ((0xdfU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[9086].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque 
            = ((0xbfU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[9087].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque 
            = ((0x7fU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque)));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[4383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (1U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[4384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (2U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[4385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (4U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[4386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (8U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[4387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[4388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[4389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[4390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[4391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[4392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[4393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[4394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[4395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[4396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[4397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[4398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[4399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[4400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[4401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[4402].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[4403].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[4404].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[4405].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[4406].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[4407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[4408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[4409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[4410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[4411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[4412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data))) {
        vlSymsp->__Vcoverage[4413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if (((vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
          ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_resp_data) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data 
        = ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__write_data_sel)
            ? ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__write_data_sel)
                ? vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data
                : 0U) : vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__incoming_msg[0U]);
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[406].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x6fffffffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x5fffffffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__cache0_resp_msg 
                  ^ vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x3fffffffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fefffffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7effffffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7dffffffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7bffffffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x77ffffffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__cache0_resp_msg) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__cache0_resp_msg)))) {
        vlSymsp->__Vcoverage[421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__cache0_resp_msg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fffffffffefULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fffffffefffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fffffefffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[445].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[446].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fffefffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[452].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if (((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__hit_write) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT____Vtogcov__hit_write))) {
        vlSymsp->__Vcoverage[4178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT____Vtogcov__hit_write 
            = vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__hit_write;
    }
    if ((4U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__state))) {
        if ((2U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__state))) {
            vlSelf->top__DOT__cache__DOT__icache__DOT__dirty_set = 0U;
            vlSelf->top__DOT__cache__DOT__icache__DOT__darray_wen = 0U;
        } else if ((1U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__state))) {
            vlSelf->top__DOT__cache__DOT__icache__DOT__dirty_set = 0U;
            vlSelf->top__DOT__cache__DOT__icache__DOT__darray_wen = 0U;
        } else {
            vlSelf->__Vtask_top__DOT__cache__DOT__icache__DOT__ctrl__DOT__tab__135__t_dirty_set 
                = (1U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__incoming_msg[2U] 
                         >> 0xaU));
            vlSelf->top__DOT__cache__DOT__icache__DOT__dirty_set 
                = vlSelf->__Vtask_top__DOT__cache__DOT__icache__DOT__ctrl__DOT__tab__135__t_dirty_set;
            vlSelf->__Vtask_top__DOT__cache__DOT__icache__DOT__ctrl__DOT__tab__135__t_darray_wen 
                = (1U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__incoming_msg[2U] 
                         >> 0xaU));
            vlSelf->top__DOT__cache__DOT__icache__DOT__darray_wen 
                = vlSelf->__Vtask_top__DOT__cache__DOT__icache__DOT__ctrl__DOT__tab__135__t_darray_wen;
        }
    } else if ((2U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__state))) {
        vlSelf->top__DOT__cache__DOT__icache__DOT__dirty_set = 0U;
        if ((1U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__state))) {
            vlSelf->__Vtask_top__DOT__cache__DOT__icache__DOT__ctrl__DOT__tab__136__t_darray_wen 
                = ((IData)(vlSelf->top__DOT__cache0_resp_val) 
                   & (0x10U != (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__resp_word)));
            vlSelf->top__DOT__cache__DOT__icache__DOT__darray_wen 
                = vlSelf->__Vtask_top__DOT__cache__DOT__icache__DOT__ctrl__DOT__tab__136__t_darray_wen;
        } else {
            vlSelf->top__DOT__cache__DOT__icache__DOT__darray_wen = 0U;
        }
    } else if ((1U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__state))) {
        vlSelf->__Vtask_top__DOT__cache__DOT__icache__DOT__ctrl__DOT__tab__138__t_dirty_set 
            = vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__hit_write;
        vlSelf->top__DOT__cache__DOT__icache__DOT__dirty_set 
            = vlSelf->__Vtask_top__DOT__cache__DOT__icache__DOT__ctrl__DOT__tab__138__t_dirty_set;
        vlSelf->__Vtask_top__DOT__cache__DOT__icache__DOT__ctrl__DOT__tab__138__t_darray_wen 
            = vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__hit_write;
        vlSelf->top__DOT__cache__DOT__icache__DOT__darray_wen 
            = vlSelf->__Vtask_top__DOT__cache__DOT__icache__DOT__ctrl__DOT__tab__138__t_darray_wen;
    } else {
        vlSelf->top__DOT__cache__DOT__icache__DOT__dirty_set = 0U;
        vlSelf->top__DOT__cache__DOT__icache__DOT__darray_wen = 0U;
    }
    if (((IData)(vlSelf->top__DOT__imem_respstream_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_respstream_val))) {
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_val 
            = vlSelf->top__DOT__imem_respstream_val;
    }
    if (vlSelf->top__DOT__cache__DOT__icache__DOT__darray_en) {
        vlSymsp->__Vcoverage[4511].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__darray_en)))) {
        vlSymsp->__Vcoverage[4512].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__darray_en) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__darray_en))) {
        vlSymsp->__Vcoverage[4166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__darray_en 
            = vlSelf->top__DOT__cache__DOT__icache__DOT__darray_en;
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower))) {
        vlSymsp->__Vcoverage[4415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower) 
               | (1U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower))) {
        vlSymsp->__Vcoverage[4416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower) 
               | (2U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower))) {
        vlSymsp->__Vcoverage[4417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower) 
               | (4U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower))) {
        vlSymsp->__Vcoverage[4418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower) 
               | (8U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower))) {
        vlSymsp->__Vcoverage[4419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower))) {
        vlSymsp->__Vcoverage[4420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower))) {
        vlSymsp->__Vcoverage[4421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower))) {
        vlSymsp->__Vcoverage[4422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower))) {
        vlSymsp->__Vcoverage[4423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower))) {
        vlSymsp->__Vcoverage[4424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower))) {
        vlSymsp->__Vcoverage[4425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower))) {
        vlSymsp->__Vcoverage[4426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower))) {
        vlSymsp->__Vcoverage[4427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower))) {
        vlSymsp->__Vcoverage[4428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower))) {
        vlSymsp->__Vcoverage[4429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower))) {
        vlSymsp->__Vcoverage[4430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower))) {
        vlSymsp->__Vcoverage[4431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower))) {
        vlSymsp->__Vcoverage[4432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower))) {
        vlSymsp->__Vcoverage[4433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower))) {
        vlSymsp->__Vcoverage[4434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower))) {
        vlSymsp->__Vcoverage[4435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower))) {
        vlSymsp->__Vcoverage[4436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower))) {
        vlSymsp->__Vcoverage[4437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower))) {
        vlSymsp->__Vcoverage[4438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower))) {
        vlSymsp->__Vcoverage[4439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower))) {
        vlSymsp->__Vcoverage[4440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower))) {
        vlSymsp->__Vcoverage[4441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower))) {
        vlSymsp->__Vcoverage[4442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower))) {
        vlSymsp->__Vcoverage[4443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower))) {
        vlSymsp->__Vcoverage[4444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower))) {
        vlSymsp->__Vcoverage[4445].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower));
    }
    if (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower 
          ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4446].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_lower) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper))) {
        vlSymsp->__Vcoverage[4447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper) 
               | (1U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper))) {
        vlSymsp->__Vcoverage[4448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper) 
               | (2U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper))) {
        vlSymsp->__Vcoverage[4449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper) 
               | (4U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper))) {
        vlSymsp->__Vcoverage[4450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper) 
               | (8U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper))) {
        vlSymsp->__Vcoverage[4451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper))) {
        vlSymsp->__Vcoverage[4452].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper))) {
        vlSymsp->__Vcoverage[4453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper))) {
        vlSymsp->__Vcoverage[4454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper))) {
        vlSymsp->__Vcoverage[4455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper))) {
        vlSymsp->__Vcoverage[4456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper))) {
        vlSymsp->__Vcoverage[4457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper))) {
        vlSymsp->__Vcoverage[4458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper))) {
        vlSymsp->__Vcoverage[4459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper))) {
        vlSymsp->__Vcoverage[4460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper))) {
        vlSymsp->__Vcoverage[4461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper))) {
        vlSymsp->__Vcoverage[4462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper))) {
        vlSymsp->__Vcoverage[4463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper))) {
        vlSymsp->__Vcoverage[4464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper))) {
        vlSymsp->__Vcoverage[4465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper))) {
        vlSymsp->__Vcoverage[4466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper))) {
        vlSymsp->__Vcoverage[4467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper))) {
        vlSymsp->__Vcoverage[4468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper))) {
        vlSymsp->__Vcoverage[4469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper))) {
        vlSymsp->__Vcoverage[4470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper))) {
        vlSymsp->__Vcoverage[4471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper))) {
        vlSymsp->__Vcoverage[4472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper))) {
        vlSymsp->__Vcoverage[4473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper))) {
        vlSymsp->__Vcoverage[4474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper))) {
        vlSymsp->__Vcoverage[4475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper))) {
        vlSymsp->__Vcoverage[4476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper))) {
        vlSymsp->__Vcoverage[4477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper));
    }
    if (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper 
          ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__word_out_upper) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper));
    }
    vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out 
        = ((8U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_word_offset))
            ? ((8U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_word_offset))
                ? vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper
                : 0U) : vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower);
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__write_en) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[8248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__write_en;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__write_en) 
              | (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if (((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__hit_write) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT____Vtogcov__hit_write))) {
        vlSymsp->__Vcoverage[5251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT____Vtogcov__hit_write 
            = vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__hit_write;
    }
    if ((4U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state))) {
        if ((2U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state))) {
            vlSelf->top__DOT__cache__DOT__dcache__DOT__dirty_set = 0U;
            vlSelf->top__DOT__cache__DOT__dcache__DOT__darray_wen = 0U;
        } else if ((1U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state))) {
            vlSelf->top__DOT__cache__DOT__dcache__DOT__dirty_set = 0U;
            vlSelf->top__DOT__cache__DOT__dcache__DOT__darray_wen = 0U;
        } else {
            vlSelf->__Vtask_top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__tab__143__t_dirty_set 
                = (1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[2U] 
                         >> 0xaU));
            vlSelf->top__DOT__cache__DOT__dcache__DOT__dirty_set 
                = vlSelf->__Vtask_top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__tab__143__t_dirty_set;
            vlSelf->__Vtask_top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__tab__143__t_darray_wen 
                = (1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[2U] 
                         >> 0xaU));
            vlSelf->top__DOT__cache__DOT__dcache__DOT__darray_wen 
                = vlSelf->__Vtask_top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__tab__143__t_darray_wen;
        }
    } else if ((2U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state))) {
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dirty_set = 0U;
        if ((1U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state))) {
            vlSelf->__Vtask_top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__tab__144__t_darray_wen 
                = ((IData)(vlSelf->top__DOT__cache1_resp_val) 
                   & (0x10U != (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__resp_word)));
            vlSelf->top__DOT__cache__DOT__dcache__DOT__darray_wen 
                = vlSelf->__Vtask_top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__tab__144__t_darray_wen;
        } else {
            vlSelf->top__DOT__cache__DOT__dcache__DOT__darray_wen = 0U;
        }
    } else if ((1U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state))) {
        vlSelf->__Vtask_top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__tab__146__t_dirty_set 
            = vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__hit_write;
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dirty_set 
            = vlSelf->__Vtask_top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__tab__146__t_dirty_set;
        vlSelf->__Vtask_top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__tab__146__t_darray_wen 
            = vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__hit_write;
        vlSelf->top__DOT__cache__DOT__dcache__DOT__darray_wen 
            = vlSelf->__Vtask_top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__tab__146__t_darray_wen;
    } else {
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dirty_set = 0U;
        vlSelf->top__DOT__cache__DOT__dcache__DOT__darray_wen = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dmem_respstream_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__dmem_respstream_val))) {
        vlSymsp->__Vcoverage[325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_val 
            = vlSelf->top__DOT__dmem_respstream_val;
    }
    if (vlSelf->top__DOT__cache__DOT__dcache__DOT__darray_en) {
        vlSymsp->__Vcoverage[5731].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__darray_en)))) {
        vlSymsp->__Vcoverage[5732].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__darray_en) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT____Vtogcov__darray_en))) {
        vlSymsp->__Vcoverage[5236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT____Vtogcov__darray_en 
            = vlSelf->top__DOT__cache__DOT__dcache__DOT__darray_en;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass))) {
        vlSymsp->__Vcoverage[8313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)) 
           & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower))) {
        vlSymsp->__Vcoverage[5507].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower))) {
        vlSymsp->__Vcoverage[5508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower))) {
        vlSymsp->__Vcoverage[5509].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower))) {
        vlSymsp->__Vcoverage[5510].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower))) {
        vlSymsp->__Vcoverage[5511].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower))) {
        vlSymsp->__Vcoverage[5512].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower))) {
        vlSymsp->__Vcoverage[5513].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower))) {
        vlSymsp->__Vcoverage[5514].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower))) {
        vlSymsp->__Vcoverage[5515].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower))) {
        vlSymsp->__Vcoverage[5516].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower))) {
        vlSymsp->__Vcoverage[5517].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower))) {
        vlSymsp->__Vcoverage[5518].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower))) {
        vlSymsp->__Vcoverage[5519].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower))) {
        vlSymsp->__Vcoverage[5520].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower))) {
        vlSymsp->__Vcoverage[5521].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower))) {
        vlSymsp->__Vcoverage[5522].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower))) {
        vlSymsp->__Vcoverage[5523].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower))) {
        vlSymsp->__Vcoverage[5524].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower))) {
        vlSymsp->__Vcoverage[5525].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower))) {
        vlSymsp->__Vcoverage[5526].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower))) {
        vlSymsp->__Vcoverage[5527].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower))) {
        vlSymsp->__Vcoverage[5528].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower))) {
        vlSymsp->__Vcoverage[5529].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower))) {
        vlSymsp->__Vcoverage[5530].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower))) {
        vlSymsp->__Vcoverage[5531].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower))) {
        vlSymsp->__Vcoverage[5532].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower))) {
        vlSymsp->__Vcoverage[5533].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower))) {
        vlSymsp->__Vcoverage[5534].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower))) {
        vlSymsp->__Vcoverage[5535].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower))) {
        vlSymsp->__Vcoverage[5536].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower))) {
        vlSymsp->__Vcoverage[5537].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5538].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_lower) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper))) {
        vlSymsp->__Vcoverage[5539].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper))) {
        vlSymsp->__Vcoverage[5540].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper))) {
        vlSymsp->__Vcoverage[5541].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper))) {
        vlSymsp->__Vcoverage[5542].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper))) {
        vlSymsp->__Vcoverage[5543].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper))) {
        vlSymsp->__Vcoverage[5544].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper))) {
        vlSymsp->__Vcoverage[5545].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper))) {
        vlSymsp->__Vcoverage[5546].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper))) {
        vlSymsp->__Vcoverage[5547].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper))) {
        vlSymsp->__Vcoverage[5548].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper))) {
        vlSymsp->__Vcoverage[5549].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper))) {
        vlSymsp->__Vcoverage[5550].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper))) {
        vlSymsp->__Vcoverage[5551].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper))) {
        vlSymsp->__Vcoverage[5552].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper))) {
        vlSymsp->__Vcoverage[5553].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper))) {
        vlSymsp->__Vcoverage[5554].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper))) {
        vlSymsp->__Vcoverage[5555].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper))) {
        vlSymsp->__Vcoverage[5556].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper))) {
        vlSymsp->__Vcoverage[5557].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper))) {
        vlSymsp->__Vcoverage[5558].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper))) {
        vlSymsp->__Vcoverage[5559].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper))) {
        vlSymsp->__Vcoverage[5560].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper))) {
        vlSymsp->__Vcoverage[5561].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper))) {
        vlSymsp->__Vcoverage[5562].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper))) {
        vlSymsp->__Vcoverage[5563].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper))) {
        vlSymsp->__Vcoverage[5564].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper))) {
        vlSymsp->__Vcoverage[5565].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper))) {
        vlSymsp->__Vcoverage[5566].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper))) {
        vlSymsp->__Vcoverage[5567].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper))) {
        vlSymsp->__Vcoverage[5568].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper))) {
        vlSymsp->__Vcoverage[5569].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5570].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word0_out_upper) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper));
    }
    if ((8U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__read_word_offset))) {
        if ((8U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__read_word_offset))) {
            vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out 
                = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper;
            vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out 
                = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper;
        } else {
            vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out = 0U;
            vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out = 0U;
        }
    } else {
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out 
            = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower;
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out 
            = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower;
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower))) {
        vlSymsp->__Vcoverage[5603].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower))) {
        vlSymsp->__Vcoverage[5604].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower))) {
        vlSymsp->__Vcoverage[5605].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower))) {
        vlSymsp->__Vcoverage[5606].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower))) {
        vlSymsp->__Vcoverage[5607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower))) {
        vlSymsp->__Vcoverage[5608].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower))) {
        vlSymsp->__Vcoverage[5609].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower))) {
        vlSymsp->__Vcoverage[5610].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower))) {
        vlSymsp->__Vcoverage[5611].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower))) {
        vlSymsp->__Vcoverage[5612].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower))) {
        vlSymsp->__Vcoverage[5613].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower))) {
        vlSymsp->__Vcoverage[5614].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower))) {
        vlSymsp->__Vcoverage[5615].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower))) {
        vlSymsp->__Vcoverage[5616].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower))) {
        vlSymsp->__Vcoverage[5617].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower))) {
        vlSymsp->__Vcoverage[5618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower))) {
        vlSymsp->__Vcoverage[5619].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower))) {
        vlSymsp->__Vcoverage[5620].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower))) {
        vlSymsp->__Vcoverage[5621].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower))) {
        vlSymsp->__Vcoverage[5622].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower))) {
        vlSymsp->__Vcoverage[5623].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower))) {
        vlSymsp->__Vcoverage[5624].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower))) {
        vlSymsp->__Vcoverage[5625].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower))) {
        vlSymsp->__Vcoverage[5626].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower))) {
        vlSymsp->__Vcoverage[5627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower))) {
        vlSymsp->__Vcoverage[5628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower))) {
        vlSymsp->__Vcoverage[5629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower))) {
        vlSymsp->__Vcoverage[5630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower))) {
        vlSymsp->__Vcoverage[5631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower))) {
        vlSymsp->__Vcoverage[5632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower))) {
        vlSymsp->__Vcoverage[5633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_lower) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper))) {
        vlSymsp->__Vcoverage[5635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper))) {
        vlSymsp->__Vcoverage[5636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper))) {
        vlSymsp->__Vcoverage[5637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper))) {
        vlSymsp->__Vcoverage[5638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper))) {
        vlSymsp->__Vcoverage[5639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper))) {
        vlSymsp->__Vcoverage[5640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper))) {
        vlSymsp->__Vcoverage[5641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper))) {
        vlSymsp->__Vcoverage[5642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper))) {
        vlSymsp->__Vcoverage[5643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper))) {
        vlSymsp->__Vcoverage[5644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper))) {
        vlSymsp->__Vcoverage[5645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper))) {
        vlSymsp->__Vcoverage[5646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper))) {
        vlSymsp->__Vcoverage[5647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper))) {
        vlSymsp->__Vcoverage[5648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper))) {
        vlSymsp->__Vcoverage[5649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper))) {
        vlSymsp->__Vcoverage[5650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper))) {
        vlSymsp->__Vcoverage[5651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper))) {
        vlSymsp->__Vcoverage[5652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper))) {
        vlSymsp->__Vcoverage[5653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper))) {
        vlSymsp->__Vcoverage[5654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper))) {
        vlSymsp->__Vcoverage[5655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper))) {
        vlSymsp->__Vcoverage[5656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper))) {
        vlSymsp->__Vcoverage[5657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper))) {
        vlSymsp->__Vcoverage[5658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper))) {
        vlSymsp->__Vcoverage[5659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper))) {
        vlSymsp->__Vcoverage[5660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper))) {
        vlSymsp->__Vcoverage[5661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper))) {
        vlSymsp->__Vcoverage[5662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper))) {
        vlSymsp->__Vcoverage[5663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper))) {
        vlSymsp->__Vcoverage[5664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper))) {
        vlSymsp->__Vcoverage[5665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__word1_out_upper) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[7540].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_en 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[7606].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__state_next 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[8478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_ 
            = ((6U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[8479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_ 
            = ((5U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[8480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_ 
            = ((3U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_)));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[8240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[7397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_en 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[7463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__state_next 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[8368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_ 
            = ((6U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[8369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_ 
            = ((5U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[8370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_ 
            = ((3U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_)));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[8231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq)));
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[5427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[5428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[5429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[5430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[5431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[5432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[5433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[5434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[5435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[5436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[5437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[5438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[5439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[5440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[5441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[5442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[5443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[5444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[5445].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[5446].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[5447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[5448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[5449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[5450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[5451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[5452].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[5453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[5454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[5455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[5456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[5457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[4339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (1U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[4340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (2U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[4341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (4U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[4342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (8U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[4343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[4344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[4345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[4346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[4347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[4348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[4349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[4350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[4351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[4352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[4353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[4354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[4355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[4356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[4357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[4358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[4359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[4360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[4361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[4362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[4363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[4364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[4365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[4366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[4367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[4368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[4369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data));
    }
    if (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data 
          ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_data) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data));
    }
    if (((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dirty_set) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__dirty_set))) {
        vlSymsp->__Vcoverage[4170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__dirty_set 
            = vlSelf->top__DOT__cache__DOT__icache__DOT__dirty_set;
    }
    if (((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__darray_wen) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__darray_wen))) {
        vlSymsp->__Vcoverage[4167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__darray_wen 
            = vlSelf->top__DOT__cache__DOT__icache__DOT__darray_wen;
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out))) {
        vlSymsp->__Vcoverage[4479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out) 
               | (1U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out))) {
        vlSymsp->__Vcoverage[4480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out) 
               | (2U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out))) {
        vlSymsp->__Vcoverage[4481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out) 
               | (4U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out))) {
        vlSymsp->__Vcoverage[4482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out) 
               | (8U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out))) {
        vlSymsp->__Vcoverage[4483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out))) {
        vlSymsp->__Vcoverage[4484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out))) {
        vlSymsp->__Vcoverage[4485].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out))) {
        vlSymsp->__Vcoverage[4486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out))) {
        vlSymsp->__Vcoverage[4487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out))) {
        vlSymsp->__Vcoverage[4488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out))) {
        vlSymsp->__Vcoverage[4489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out))) {
        vlSymsp->__Vcoverage[4490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out))) {
        vlSymsp->__Vcoverage[4491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out))) {
        vlSymsp->__Vcoverage[4492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out))) {
        vlSymsp->__Vcoverage[4493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out))) {
        vlSymsp->__Vcoverage[4494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out))) {
        vlSymsp->__Vcoverage[4495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out))) {
        vlSymsp->__Vcoverage[4496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out))) {
        vlSymsp->__Vcoverage[4497].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out))) {
        vlSymsp->__Vcoverage[4498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out))) {
        vlSymsp->__Vcoverage[4499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out))) {
        vlSymsp->__Vcoverage[4500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out))) {
        vlSymsp->__Vcoverage[4501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out))) {
        vlSymsp->__Vcoverage[4502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out))) {
        vlSymsp->__Vcoverage[4503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out))) {
        vlSymsp->__Vcoverage[4504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out))) {
        vlSymsp->__Vcoverage[4505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out))) {
        vlSymsp->__Vcoverage[4506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out))) {
        vlSymsp->__Vcoverage[4507].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out))) {
        vlSymsp->__Vcoverage[4508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out))) {
        vlSymsp->__Vcoverage[4509].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out));
    }
    if (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out 
          ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4510].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__data_word_mux_out) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[8250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
    if (((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dirty_set) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT____Vtogcov__dirty_set))) {
        vlSymsp->__Vcoverage[5243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT____Vtogcov__dirty_set 
            = vlSelf->top__DOT__cache__DOT__dcache__DOT__dirty_set;
    }
    if (((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__darray_wen) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT____Vtogcov__darray_wen))) {
        vlSymsp->__Vcoverage[5237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT____Vtogcov__darray_wen 
            = vlSelf->top__DOT__cache__DOT__dcache__DOT__darray_wen;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__write_en) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[8308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__write_en;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__write_en) 
              | (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out))) {
        vlSymsp->__Vcoverage[5571].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out))) {
        vlSymsp->__Vcoverage[5572].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out))) {
        vlSymsp->__Vcoverage[5573].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out))) {
        vlSymsp->__Vcoverage[5574].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out))) {
        vlSymsp->__Vcoverage[5575].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out))) {
        vlSymsp->__Vcoverage[5576].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out))) {
        vlSymsp->__Vcoverage[5577].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out))) {
        vlSymsp->__Vcoverage[5578].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out))) {
        vlSymsp->__Vcoverage[5579].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out))) {
        vlSymsp->__Vcoverage[5580].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out))) {
        vlSymsp->__Vcoverage[5581].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out))) {
        vlSymsp->__Vcoverage[5582].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out))) {
        vlSymsp->__Vcoverage[5583].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out))) {
        vlSymsp->__Vcoverage[5584].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out))) {
        vlSymsp->__Vcoverage[5585].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out))) {
        vlSymsp->__Vcoverage[5586].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out))) {
        vlSymsp->__Vcoverage[5587].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out))) {
        vlSymsp->__Vcoverage[5588].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out))) {
        vlSymsp->__Vcoverage[5589].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out))) {
        vlSymsp->__Vcoverage[5590].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out))) {
        vlSymsp->__Vcoverage[5591].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out))) {
        vlSymsp->__Vcoverage[5592].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out))) {
        vlSymsp->__Vcoverage[5593].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out))) {
        vlSymsp->__Vcoverage[5594].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out))) {
        vlSymsp->__Vcoverage[5595].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out))) {
        vlSymsp->__Vcoverage[5596].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out))) {
        vlSymsp->__Vcoverage[5597].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out))) {
        vlSymsp->__Vcoverage[5598].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out))) {
        vlSymsp->__Vcoverage[5599].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out))) {
        vlSymsp->__Vcoverage[5600].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out))) {
        vlSymsp->__Vcoverage[5601].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5602].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data0_word_mux_out) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out))) {
        vlSymsp->__Vcoverage[5667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out))) {
        vlSymsp->__Vcoverage[5668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out))) {
        vlSymsp->__Vcoverage[5669].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out))) {
        vlSymsp->__Vcoverage[5670].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out))) {
        vlSymsp->__Vcoverage[5671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out))) {
        vlSymsp->__Vcoverage[5672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out))) {
        vlSymsp->__Vcoverage[5673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out))) {
        vlSymsp->__Vcoverage[5674].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out))) {
        vlSymsp->__Vcoverage[5675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out))) {
        vlSymsp->__Vcoverage[5676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out))) {
        vlSymsp->__Vcoverage[5677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out))) {
        vlSymsp->__Vcoverage[5678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out))) {
        vlSymsp->__Vcoverage[5679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out))) {
        vlSymsp->__Vcoverage[5680].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out))) {
        vlSymsp->__Vcoverage[5681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out))) {
        vlSymsp->__Vcoverage[5682].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out))) {
        vlSymsp->__Vcoverage[5683].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out))) {
        vlSymsp->__Vcoverage[5684].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out))) {
        vlSymsp->__Vcoverage[5685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out))) {
        vlSymsp->__Vcoverage[5686].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out))) {
        vlSymsp->__Vcoverage[5687].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out))) {
        vlSymsp->__Vcoverage[5688].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out))) {
        vlSymsp->__Vcoverage[5689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out))) {
        vlSymsp->__Vcoverage[5690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out))) {
        vlSymsp->__Vcoverage[5691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out))) {
        vlSymsp->__Vcoverage[5692].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out))) {
        vlSymsp->__Vcoverage[5693].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out))) {
        vlSymsp->__Vcoverage[5694].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out))) {
        vlSymsp->__Vcoverage[5695].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out))) {
        vlSymsp->__Vcoverage[5696].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out))) {
        vlSymsp->__Vcoverage[5697].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5698].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__data1_word_mux_out) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_pipe))) {
        vlSymsp->__Vcoverage[8244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_pipe 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe)) 
               & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq))) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              | (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_pipe))) {
        vlSymsp->__Vcoverage[8235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_pipe 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe)) 
               & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq))) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              | (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[8310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[8241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[8232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
}
