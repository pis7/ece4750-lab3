// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__7(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__7\n"); );
    // Body
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memory_cleared))) {
        vlSymsp->__Vcoverage[5958].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memory_cleared 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state)))) {
        vlSymsp->__Vcoverage[904].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[909].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state) {
        if (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state) {
            vlSymsp->__Vcoverage[907].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[910].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                = (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                   - (IData)(1U));
        } else {
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state)))) {
            vlSymsp->__Vcoverage[911].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
            = ((0U < vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num)
                ? (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                   - (IData)(1U)) : vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num);
    }
    if (((IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__state))) {
        vlSymsp->__Vcoverage[898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__state 
            = vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state;
    }
    if ((1U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[796].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffffeU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (1U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((2U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[797].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffffdU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (2U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((4U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[798].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffffbU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (4U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((8U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[799].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffff7U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (8U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x10U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[800].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffffefU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x10U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x20U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[801].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffffdfU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x20U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x40U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[802].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffffbfU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x40U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x80U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[803].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffff7fU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x80U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x100U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[804].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffeffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x100U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x200U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[805].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffdffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x200U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x400U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[806].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffbffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x400U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x800U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[807].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffff7ffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x800U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x1000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[808].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffefffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x1000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x2000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[809].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffdfffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x2000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x4000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[810].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffbfffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x4000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x8000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[811].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffff7fffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x8000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x10000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[812].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffeffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x10000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x20000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[813].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffdffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x20000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x40000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[814].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffbffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x40000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x80000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[815].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfff7ffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x80000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x100000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[816].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffefffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x100000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x200000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[817].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffdfffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x200000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x400000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[818].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffbfffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x400000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x800000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[819].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xff7fffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x800000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x1000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[820].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfeffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x1000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x2000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[821].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfdffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x2000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x4000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[822].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfbffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x4000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x8000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[823].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xf7ffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x8000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x10000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                        ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[824].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xefffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x10000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x20000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                        ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xdfffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x20000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x40000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                        ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xbfffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x40000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if (((vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
          ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0x7fffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x80000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if (((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__failed) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__failed))) {
        vlSymsp->__Vcoverage[991].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__failed 
            = vlSelf->top__DOT__sink__DOT__sink__DOT__failed;
    }
    if (((IData)(vlSelf->top__DOT__reset) | (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_en))) {
        vlSelf->top__DOT__sink__DOT__sink__DOT__index 
            = ((IData)(vlSelf->top__DOT__reset) ? 0U
                : (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_next));
    }
    if ((1U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffffeU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (1U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((2U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffffdU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (2U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((4U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[866].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffffbU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (4U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((8U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[867].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffff7U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (8U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x10U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[868].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffffefU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x10U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x20U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[869].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffffdfU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x20U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x40U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[870].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffffbfU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x40U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x80U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[871].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffff7fU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x80U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x100U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[872].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffeffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x100U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x200U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[873].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffdffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x200U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x400U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[874].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffbffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x400U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x800U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[875].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffff7ffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x800U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x1000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[876].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffefffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x1000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x2000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[877].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffdfffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x2000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x4000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[878].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffbfffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x4000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x8000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[879].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffff7fffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x8000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x10000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[880].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffeffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x10000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x20000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[881].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffdffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x20000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x40000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[882].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffbffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x40000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x80000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[883].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfff7ffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x80000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x100000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffefffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x100000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x200000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffdfffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x200000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x400000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffbfffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x400000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x800000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xff7fffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x800000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x1000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfeffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x1000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x2000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfdffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x2000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x4000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfbffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x4000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x8000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xf7ffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x8000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x10000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                        ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xefffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x10000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x20000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                        ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xdfffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x20000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x40000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                        ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xbfffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x40000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if (((vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
          ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0x7fffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x80000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__state))) {
        vlSymsp->__Vcoverage[6696].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__state 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state;
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6594].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (1U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6595].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (2U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6596].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (4U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6597].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (8U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6598].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6599].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6600].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6601].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6602].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6603].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6604].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6605].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6606].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6608].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6609].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6610].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6611].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6612].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6613].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6614].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6615].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6616].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6617].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6619].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6620].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6621].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                        ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6622].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                        ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6623].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                        ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6624].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if (((vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
          ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[6625].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (1U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (2U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (4U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (8U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6669].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6670].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6674].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6680].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6682].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6683].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6684].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6686].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6687].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6688].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                        ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                        ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                        ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6692].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if (((vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
          ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[6693].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__state))) {
        vlSymsp->__Vcoverage[5347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__state 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state)))) {
        vlSymsp->__Vcoverage[5496].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[5501].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__state))) {
        vlSymsp->__Vcoverage[5490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__state 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state;
    }
    vlSelf->top__DOT__src__DOT__src__DOT__index_next 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)));
    if ((1U & (((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)) 
               ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next)))) {
        vlSymsp->__Vcoverage[548].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next 
            = ((0xeU & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next)) 
               | (1U & ((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index))));
    }
    if ((1U & ((7U & (((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)) 
                      >> 1U)) ^ ((IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next) 
                                 >> 1U)))) {
        vlSymsp->__Vcoverage[549].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next 
            = ((0xdU & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next)) 
               | (2U & ((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index))));
    }
    if ((1U & ((3U & (((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)) 
                      >> 2U)) ^ ((IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next) 
                                 >> 2U)))) {
        vlSymsp->__Vcoverage[550].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next 
            = ((0xbU & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next)) 
               | (4U & ((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index))));
    }
    if ((1U & ((1U & (((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)) 
                      >> 3U)) ^ ((IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next) 
                                 >> 3U)))) {
        vlSymsp->__Vcoverage[551].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next 
            = ((7U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next)) 
               | (8U & ((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index))));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index) 
               ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index)))) {
        vlSymsp->__Vcoverage[552].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index 
            = ((0xeU & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index)) 
               | (1U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index) 
               ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index)))) {
        vlSymsp->__Vcoverage[553].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index 
            = ((0xdU & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index)) 
               | (2U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index) 
               ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index)))) {
        vlSymsp->__Vcoverage[554].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index 
            = ((0xbU & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index)) 
               | (4U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index) 
               ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index)))) {
        vlSymsp->__Vcoverage[555].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index 
            = ((7U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index)) 
               | (8U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)));
    }
    vlSelf->top__DOT__src__DOT__src_msg = ((9U >= (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index))
                                            ? vlSelf->top__DOT__src__DOT__src__DOT__m
                                           [vlSelf->top__DOT__src__DOT__src__DOT__index]
                                            : 0U);
    if ((1U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (1U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (2U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (4U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (8U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                        ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                        ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                        ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if (((vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
          ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (1U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (2U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (4U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (8U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5402].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5403].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5404].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5405].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5406].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                        ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                        ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                        ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if (((vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
          ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (1U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (2U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (4U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (8U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                        ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                        ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                        ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if (((vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
          ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (1U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (2U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (4U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (8U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                        ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                        ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5485].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                        ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if (((vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
          ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_val_M))) {
        vlSymsp->__Vcoverage[5531].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_val_M 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full;
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT____Vtogcov__num_free_entries)))) {
        vlSymsp->__Vcoverage[6113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT____Vtogcov__num_free_entries 
            = (1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)))) {
            vlSymsp->__Vcoverage[6188].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
            vlSymsp->__Vcoverage[6189].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_rdy_M)))) {
        vlSymsp->__Vcoverage[5532].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_rdy_M 
            = (1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full))) {
        vlSymsp->__Vcoverage[6132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full));
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore)))) {
        vlSymsp->__Vcoverage[6137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[6138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[6139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[6140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[6141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffffffefULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[6142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[6143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[6144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[6145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[6146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[6147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[6148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[6149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffffefffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[6150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[6151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[6152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[6153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[6154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[6155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[6156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[6157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffefffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[6158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[6159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[6160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[6161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[6162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[6163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[6164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[6165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffefffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[6166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[6167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[6168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[6169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[6170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[6171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[6172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[6173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fefffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[6174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[6175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[6176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[6177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7effffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[6178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7dffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[6179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7bffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[6180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x77ffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[6181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x6fffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[6182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x5fffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[6183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x3fffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state)))) {
        vlSymsp->__Vcoverage[726].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[731].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) 
         ^ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__state))) {
        vlSymsp->__Vcoverage[720].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__state 
            = vlSelf->top__DOT__src__DOT__msg_delay__DOT__state;
    }
    if ((1U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffffeU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (1U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((2U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[619].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffffdU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (2U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((4U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[620].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffffbU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (4U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((8U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[621].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffff7U & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (8U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x10U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[622].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffffefU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x10U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x20U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[623].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffffdfU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x20U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x40U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[624].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffffbfU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x40U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x80U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[625].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffff7fU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x80U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x100U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[626].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffeffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x100U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x200U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffdffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x200U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x400U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffbffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x400U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x800U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffff7ffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x800U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x1000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffefffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x1000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x2000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffdfffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x2000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x4000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffbfffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x4000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x8000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffff7fffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x8000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x10000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffeffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x10000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x20000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffdffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x20000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x40000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffbffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x40000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x80000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfff7ffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x80000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x100000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffefffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x100000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x200000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffdfffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x200000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x400000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffbfffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x400000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x800000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xff7fffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x800000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x1000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfeffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x1000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x2000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfdffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x2000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x4000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfbffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x4000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x8000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xf7ffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x8000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x10000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                        ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xefffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x10000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x20000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                        ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xdfffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x20000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x40000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                        ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xbfffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x40000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if (((vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
          ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0x7fffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x80000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((1U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[686].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffffeU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (1U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((2U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[687].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffffdU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (2U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((4U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[688].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffffbU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (4U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((8U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffff7U & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (8U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x10U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffffefU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x10U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x20U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffffdfU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x20U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x40U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[692].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffffbfU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x40U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x80U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[693].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffff7fU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x80U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x100U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[694].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffeffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x100U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x200U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[695].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffdffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x200U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x400U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[696].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffbffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x400U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x800U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[697].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffff7ffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x800U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x1000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[698].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffefffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x1000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x2000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[699].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffdfffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x2000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x4000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[700].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffbfffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x4000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x8000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[701].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffff7fffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x8000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x10000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[702].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffeffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x10000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x20000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffdffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x20000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x40000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[704].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffbffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x40000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x80000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[705].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfff7ffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x80000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x100000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[706].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffefffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x100000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x200000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[707].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffdfffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x200000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x400000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[708].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffbfffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x400000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x800000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[709].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xff7fffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x800000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x1000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfeffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x1000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x2000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[711].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfdffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x2000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x4000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[712].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfbffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x4000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x8000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[713].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xf7ffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x8000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x10000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                        ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[714].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xefffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x10000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x20000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                        ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[715].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xdfffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x20000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x40000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                        ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[716].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xbfffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x40000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if (((vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
          ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[717].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0x7fffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x80000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore)))) {
        vlSymsp->__Vcoverage[6197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[6198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[6199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[6200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[6201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffffffefULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[6202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[6203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[6204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[6205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[6206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[6207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[6208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[6209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffffefffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[6210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[6211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[6212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[6213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[6214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[6215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[6216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[6217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffefffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[6218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[6219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[6220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[6221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[6222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[6223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[6224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[6225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffefffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[6226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[6227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[6228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[6229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[6230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[6231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[6232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[6233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fefffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[6234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[6235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[6236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[6237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7effffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[6238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7dffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[6239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7bffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[6240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x77ffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[6241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x6fffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[6242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x5fffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[6243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x3fffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_msg_len_modified_M 
        = ((0U == (3U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]))
            ? 4U : (3U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en0_M 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
           & ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
              & ((4U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                               >> 0xaU))) | ((3U == 
                                              (7U & 
                                               (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                                >> 0xaU))) 
                                             | (5U 
                                                == 
                                                (7U 
                                                 & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                                    >> 0xaU)))))));
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5533].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5534].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5535].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5536].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5537].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5538].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5539].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5540].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5541].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5542].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5543].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5544].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5545].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5546].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5547].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5548].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5549].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5550].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5551].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5552].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5553].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5554].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5555].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5556].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5557].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5558].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5559].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5560].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5561].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5562].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5563].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5564].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5565].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5566].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5567].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5568].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5569].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5570].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5571].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5572].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5573].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5574].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5575].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5576].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5577].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5578].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5579].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5580].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5581].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5582].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5583].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5584].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5585].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5586].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5587].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5588].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5589].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5590].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5591].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5592].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5593].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5594].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5595].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5596].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]))) {
        vlSymsp->__Vcoverage[5597].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U] 
            = ((0x1ffeU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]))) {
        vlSymsp->__Vcoverage[5598].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U] 
            = ((0x1ffdU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]))) {
        vlSymsp->__Vcoverage[5599].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U] 
            = ((0x1ffbU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]))) {
        vlSymsp->__Vcoverage[5600].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U] 
            = ((0x1ff7U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]))) {
        vlSymsp->__Vcoverage[5601].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U] 
            = ((0x1fefU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]))) {
        vlSymsp->__Vcoverage[5602].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U] 
            = ((0x1fdfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]))) {
        vlSymsp->__Vcoverage[5603].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U] 
            = ((0x1fbfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]))) {
        vlSymsp->__Vcoverage[5604].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U] 
            = ((0x1f7fU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]))) {
        vlSymsp->__Vcoverage[5605].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U] 
            = ((0x1effU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]))) {
        vlSymsp->__Vcoverage[5606].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U] 
            = ((0x1dffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]))) {
        vlSymsp->__Vcoverage[5607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U] 
            = ((0x1bffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]))) {
        vlSymsp->__Vcoverage[5608].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U] 
            = ((0x17ffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]))) {
        vlSymsp->__Vcoverage[5609].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U] 
            = ((0xfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
        = ((0xfffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp) 
           | ((QData)((IData)((0x7ffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                         >> 2U)))) 
              << 0x24U));
    vlSelf->top__DOT__mem__DOT__mem__DOT__write_en0_M 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
           & ((1U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                            >> 0xaU))) | (2U == (7U 
                                                 & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                                    >> 0xaU)))));
    vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
        = vlSelf->top__DOT__mem__DOT__mem__DOT__m[(0xfffU 
                                                   & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                      >> 4U))];
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state)))) {
        vlSymsp->__Vcoverage[6845].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[6850].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__state))) {
        vlSymsp->__Vcoverage[6839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__state 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state;
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6737].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (1U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6738].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (2U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6739].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (4U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6740].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (8U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6741].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6742].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6743].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6744].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6745].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6746].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6747].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6748].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6749].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6750].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6751].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6752].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6753].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6754].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6755].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6756].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6757].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6758].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6759].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6760].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6761].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6762].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6763].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6764].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                        ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6765].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                        ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6766].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                        ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[6767].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if (((vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
          ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[6768].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6805].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (1U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6806].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (2U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state)))) {
        vlSymsp->__Vcoverage[6702].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[6707].fetch_add(1, std::memory_order_relaxed);
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6807].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (4U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6808].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (8U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6809].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6810].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6811].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6812].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6813].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6814].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6815].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6816].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6817].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6818].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6819].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6820].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6821].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6822].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6823].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6824].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                        ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                        ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                        ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[6835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if (((vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
          ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[6836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_val_M))) {
        vlSymsp->__Vcoverage[5610].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_val_M 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full;
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT____Vtogcov__num_free_entries)))) {
        vlSymsp->__Vcoverage[6122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT____Vtogcov__num_free_entries 
            = (1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    }
    if (((IData)(vlSelf->top__DOT__src_done) ^ (IData)(vlSelf->top__DOT____Vtogcov__src_done))) {
        vlSymsp->__Vcoverage[489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__src_done = vlSelf->top__DOT__src_done;
    }
    vlSelf->top__DOT__src__DOT__src__DOT__reset_reg 
        = vlSelf->top__DOT__reset;
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_msg_len_modified_M 
        = ((0U == (3U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]))
            ? 4U : (3U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5612].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5613].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5614].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5615].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5616].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5617].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5619].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5620].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5621].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5622].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5623].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5624].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5625].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5626].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state) {
        if (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state) {
            vlSymsp->__Vcoverage[5499].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state)))) {
        vlSymsp->__Vcoverage[5353].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[5358].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state)))) {
            vlSymsp->__Vcoverage[5503].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state) {
            vlSymsp->__Vcoverage[5502].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                = (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                   - (IData)(1U));
        } else {
            vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next = 0U;
        }
    } else {
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
            = ((0U < vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num)
                ? (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                   - (IData)(1U)) : vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num);
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[5642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5669].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5670].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[5674].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]))) {
        vlSymsp->__Vcoverage[5676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U] 
            = ((0x1ffeU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]))) {
        vlSymsp->__Vcoverage[5677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U] 
            = ((0x1ffdU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]))) {
        vlSymsp->__Vcoverage[5678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U] 
            = ((0x1ffbU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]))) {
        vlSymsp->__Vcoverage[5679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U] 
            = ((0x1ff7U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]))) {
        vlSymsp->__Vcoverage[5680].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U] 
            = ((0x1fefU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]))) {
        vlSymsp->__Vcoverage[5681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U] 
            = ((0x1fdfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]))) {
        vlSymsp->__Vcoverage[5682].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U] 
            = ((0x1fbfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]))) {
        vlSymsp->__Vcoverage[5683].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U] 
            = ((0x1f7fU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]))) {
        vlSymsp->__Vcoverage[5684].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U] 
            = ((0x1effU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]))) {
        vlSymsp->__Vcoverage[5685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U] 
            = ((0x1dffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]))) {
        vlSymsp->__Vcoverage[5686].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U] 
            = ((0x1bffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]))) {
        vlSymsp->__Vcoverage[5687].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U] 
            = ((0x17ffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]))) {
        vlSymsp->__Vcoverage[5688].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U] 
            = ((0xfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
        = ((0xfffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp) 
           | ((QData)((IData)((0x7ffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                         >> 2U)))) 
              << 0x24U));
    vlSelf->top__DOT__mem__DOT__mem__DOT__write_en1_M 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
           & ((1U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                            >> 0xaU))) | (2U == (7U 
                                                 & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                                    >> 0xaU)))));
    vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
        = vlSelf->top__DOT__mem__DOT__mem__DOT__m[(0xfffU 
                                                   & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                      >> 4U))];
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)))) {
            vlSymsp->__Vcoverage[6248].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
            vlSymsp->__Vcoverage[6249].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_rdy_M)))) {
        vlSymsp->__Vcoverage[5611].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_rdy_M 
            = (1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full))) {
        vlSymsp->__Vcoverage[6192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en1_M 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
           & ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
              & ((4U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                               >> 0xaU))) | ((3U == 
                                              (7U & 
                                               (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                                >> 0xaU))) 
                                             | (5U 
                                                == 
                                                (7U 
                                                 & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                                    >> 0xaU)))))));
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full));
    if ((1U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid))) {
        vlSymsp->__Vcoverage[4334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid) 
               | (1U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid))) {
        vlSymsp->__Vcoverage[4335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid) 
               | (2U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid))) {
        vlSymsp->__Vcoverage[4336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid) 
               | (4U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid))) {
        vlSymsp->__Vcoverage[4337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid) 
               | (8U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid))) {
        vlSymsp->__Vcoverage[4338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid))) {
        vlSymsp->__Vcoverage[4339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid))) {
        vlSymsp->__Vcoverage[4340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid))) {
        vlSymsp->__Vcoverage[4341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid))) {
        vlSymsp->__Vcoverage[4342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid))) {
        vlSymsp->__Vcoverage[4343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid))) {
        vlSymsp->__Vcoverage[4344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid))) {
        vlSymsp->__Vcoverage[4345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid))) {
        vlSymsp->__Vcoverage[4346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid))) {
        vlSymsp->__Vcoverage[4347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid))) {
        vlSymsp->__Vcoverage[4348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid))) {
        vlSymsp->__Vcoverage[4349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid))) {
        vlSymsp->__Vcoverage[4350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid))) {
        vlSymsp->__Vcoverage[4351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid))) {
        vlSymsp->__Vcoverage[4352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid))) {
        vlSymsp->__Vcoverage[4353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid))) {
        vlSymsp->__Vcoverage[4354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid))) {
        vlSymsp->__Vcoverage[4355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid))) {
        vlSymsp->__Vcoverage[4356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid))) {
        vlSymsp->__Vcoverage[4357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid))) {
        vlSymsp->__Vcoverage[4358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid))) {
        vlSymsp->__Vcoverage[4359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid))) {
        vlSymsp->__Vcoverage[4360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid))) {
        vlSymsp->__Vcoverage[4361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid))) {
        vlSymsp->__Vcoverage[4362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid))) {
        vlSymsp->__Vcoverage[4363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid))) {
        vlSymsp->__Vcoverage[4364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid));
    }
    if (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid 
          ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__valid) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid));
    }
    if (((0xfU == (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__inc_word)))) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__count_done))) {
        vlSymsp->__Vcoverage[4050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__count_done 
            = (0xfU == (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__inc_word))));
    }
    vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__inc_out 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__inc_word)));
    if ((1U & ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__inc_word) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__inc_word)))) {
        vlSymsp->__Vcoverage[4158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__inc_word 
            = ((0xeU & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__inc_word)) 
               | (1U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__inc_word)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__inc_word) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__inc_word)))) {
        vlSymsp->__Vcoverage[4159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__inc_word 
            = ((0xdU & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__inc_word)) 
               | (2U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__inc_word)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__inc_word) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__inc_word)))) {
        vlSymsp->__Vcoverage[4160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__inc_word 
            = ((0xbU & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__inc_word)) 
               | (4U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__inc_word)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__inc_word) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__inc_word)))) {
        vlSymsp->__Vcoverage[4161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__inc_word 
            = ((7U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__inc_word)) 
               | (8U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__inc_word)));
    }
    if ((1U & (((IData)(1U) + (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__inc_word)) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__inc_out)))) {
        vlSymsp->__Vcoverage[4293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__inc_out 
            = ((0xeU & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__inc_out)) 
               | (1U & ((IData)(1U) + (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__inc_word))));
    }
    if ((1U & ((7U & (((IData)(1U) + (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__inc_word)) 
                      >> 1U)) ^ ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__inc_out) 
                                 >> 1U)))) {
        vlSymsp->__Vcoverage[4294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__inc_out 
            = ((0xdU & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__inc_out)) 
               | (2U & ((IData)(1U) + (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__inc_word))));
    }
    if ((1U & ((3U & (((IData)(1U) + (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__inc_word)) 
                      >> 2U)) ^ ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__inc_out) 
                                 >> 2U)))) {
        vlSymsp->__Vcoverage[4295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__inc_out 
            = ((0xbU & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__inc_out)) 
               | (4U & ((IData)(1U) + (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__inc_word))));
    }
    if ((1U & ((1U & (((IData)(1U) + (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__inc_word)) 
                      >> 3U)) ^ ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__inc_out) 
                                 >> 3U)))) {
        vlSymsp->__Vcoverage[4296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__inc_out 
            = ((7U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__inc_out)) 
               | (8U & ((IData)(1U) + (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__inc_word))));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT____Vtogcov__state)))) {
        vlSymsp->__Vcoverage[4063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT____Vtogcov__state 
            = ((6U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT____Vtogcov__state)) 
               | (1U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT____Vtogcov__state)))) {
        vlSymsp->__Vcoverage[4064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT____Vtogcov__state 
            = ((5U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT____Vtogcov__state)) 
               | (2U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT____Vtogcov__state)))) {
        vlSymsp->__Vcoverage[4065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT____Vtogcov__state 
            = ((3U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT____Vtogcov__state)) 
               | (4U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state)));
    }
    vlSelf->top__DOT__cache__DOT__icache__DOT__tarray_wen 
        = (IData)((2U == (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state)));
    vlSelf->top__DOT__cache__DOT__icache__DOT__valid_set 
        = (IData)((2U == (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state)));
    vlSelf->top__DOT__cache__DOT__icache__DOT__clean_set 
        = (IData)((2U == (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state)));
    vlSelf->top__DOT__cache__DOT__icache__DOT__word_en_sel 
        = (IData)((2U == (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state)));
    vlSelf->top__DOT__imem_reqstream_rdy = (IData)(
                                                   (0U 
                                                    == (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state)));
    vlSelf->top__DOT__cache__DOT__icache__DOT__write_data_sel 
        = (IData)((2U == (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state)));
    vlSelf->top__DOT__cache__DOT__icache__DOT__tarray_en 
        = (1U & ((~ ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state) 
                     >> 2U)) & ((2U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state))
                                 ? (~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state))
                                 : (~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state)))));
    vlSelf->top__DOT__cache__DOT__icache__DOT__index_sel 
        = (IData)((4U == (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state)));
    if (((0U == vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__all_flushed))) {
        vlSymsp->__Vcoverage[4048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__all_flushed 
            = (0U == vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty);
    }
    vlSelf->top__DOT__cache__DOT__flush_done1 = (IData)(
                                                        (((4U 
                                                           == (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state)) 
                                                          & (0U 
                                                             == vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty)) 
                                                         & ((~ 
                                                             ((0xfU 
                                                               == 
                                                               (0xfU 
                                                                & ((IData)(1U) 
                                                                   + (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__inc_word)))) 
                                                              & (0U 
                                                                 != vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty))) 
                                                            & (0xfU 
                                                               == 
                                                               (0xfU 
                                                                & ((IData)(1U) 
                                                                   + (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__inc_word)))))));
    if ((1U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty))) {
        vlSymsp->__Vcoverage[4297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty) 
               | (1U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty))) {
        vlSymsp->__Vcoverage[4298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty) 
               | (2U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty))) {
        vlSymsp->__Vcoverage[4299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty) 
               | (4U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty))) {
        vlSymsp->__Vcoverage[4300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty) 
               | (8U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty))) {
        vlSymsp->__Vcoverage[4301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty))) {
        vlSymsp->__Vcoverage[4302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty))) {
        vlSymsp->__Vcoverage[4303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty))) {
        vlSymsp->__Vcoverage[4304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty))) {
        vlSymsp->__Vcoverage[4305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty))) {
        vlSymsp->__Vcoverage[4306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty))) {
        vlSymsp->__Vcoverage[4307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty))) {
        vlSymsp->__Vcoverage[4308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty))) {
        vlSymsp->__Vcoverage[4309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty))) {
        vlSymsp->__Vcoverage[4310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty))) {
        vlSymsp->__Vcoverage[4311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty))) {
        vlSymsp->__Vcoverage[4312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty))) {
        vlSymsp->__Vcoverage[4313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty))) {
        vlSymsp->__Vcoverage[4314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty))) {
        vlSymsp->__Vcoverage[4315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty))) {
        vlSymsp->__Vcoverage[4316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty))) {
        vlSymsp->__Vcoverage[4317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty))) {
        vlSymsp->__Vcoverage[4318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty))) {
        vlSymsp->__Vcoverage[4319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty))) {
        vlSymsp->__Vcoverage[4320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty))) {
        vlSymsp->__Vcoverage[4321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty))) {
        vlSymsp->__Vcoverage[4322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty))) {
        vlSymsp->__Vcoverage[4323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty));
    }
    if (vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
        vlSymsp->__Vcoverage[6187].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty))) {
        vlSymsp->__Vcoverage[4324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty))) {
        vlSymsp->__Vcoverage[4325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty))) {
        vlSymsp->__Vcoverage[4326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty))) {
        vlSymsp->__Vcoverage[4327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty));
    }
    if (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
          ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__dirty) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty));
    }
    vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line 
        = (IData)(((4U == (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state)) 
                   & ((0xfU == (0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__inc_word)))) 
                      & (0U != vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty))));
    if ((1U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffffeU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (1U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((2U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffffdU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (2U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((4U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffffbU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (4U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((8U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffff7U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (8U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x10U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffffffefU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x10U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x20U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffffffdfU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x20U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x40U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffffffbfU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x40U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x80U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffffff7fU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x80U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x100U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffeffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x100U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x200U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffdffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x200U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x400U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffbffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x400U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x800U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffff7ffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x800U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x1000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffffefffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x1000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x2000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[845].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffffdfffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x2000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x4000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffffbfffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x4000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x8000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffff7fffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x8000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x10000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[848].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffeffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x10000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x20000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[849].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffdffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x20000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x40000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffbffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x40000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x80000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfff7ffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x80000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x100000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffefffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x100000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x200000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffdfffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x200000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x400000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffbfffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x400000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x800000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xff7fffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x800000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x1000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfeffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x1000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x2000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[857].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfdffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x2000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x4000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfbffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x4000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x8000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[859].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xf7ffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x8000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x10000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                        ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xefffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x10000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x20000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                        ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xdfffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x20000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x40000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                        ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[862].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xbfffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x40000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if (((vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
          ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0x7fffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x80000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state) {
        if (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state) {
            vlSymsp->__Vcoverage[6705].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[6708].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                = (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                   - (IData)(1U));
        } else {
            vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state)))) {
            vlSymsp->__Vcoverage[6709].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
            = ((0U < vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num)
                ? (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                   - (IData)(1U)) : vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num);
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (1U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (2U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (4U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (8U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if (vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) {
        if (vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) {
            vlSymsp->__Vcoverage[729].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[732].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                = (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                   - (IData)(1U));
        } else {
            vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state)))) {
            vlSymsp->__Vcoverage[733].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
            = ((0U < vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num)
                ? (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                   - (IData)(1U)) : vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num);
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                        ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                        ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                        ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if (((vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
          ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[6661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((1U & (vlSelf->top__DOT__src__DOT__src_msg 
               ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[514].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfffffffeU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (1U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((2U & (vlSelf->top__DOT__src__DOT__src_msg 
               ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[515].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfffffffdU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (2U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((4U & (vlSelf->top__DOT__src__DOT__src_msg 
               ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[516].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfffffffbU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (4U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((8U & (vlSelf->top__DOT__src__DOT__src_msg 
               ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[517].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfffffff7U & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (8U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x10U & (vlSelf->top__DOT__src__DOT__src_msg 
                  ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[518].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xffffffefU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x10U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x20U & (vlSelf->top__DOT__src__DOT__src_msg 
                  ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[519].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xffffffdfU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x20U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x40U & (vlSelf->top__DOT__src__DOT__src_msg 
                  ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[520].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xffffffbfU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x40U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x80U & (vlSelf->top__DOT__src__DOT__src_msg 
                  ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[521].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xffffff7fU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x80U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x100U & (vlSelf->top__DOT__src__DOT__src_msg 
                   ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[522].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfffffeffU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x100U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x200U & (vlSelf->top__DOT__src__DOT__src_msg 
                   ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[523].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfffffdffU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x200U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x400U & (vlSelf->top__DOT__src__DOT__src_msg 
                   ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[524].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfffffbffU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x400U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x800U & (vlSelf->top__DOT__src__DOT__src_msg 
                   ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[525].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfffff7ffU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x800U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x1000U & (vlSelf->top__DOT__src__DOT__src_msg 
                    ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[526].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xffffefffU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x1000U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x2000U & (vlSelf->top__DOT__src__DOT__src_msg 
                    ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[527].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xffffdfffU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x2000U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x4000U & (vlSelf->top__DOT__src__DOT__src_msg 
                    ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[528].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xffffbfffU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x4000U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x8000U & (vlSelf->top__DOT__src__DOT__src_msg 
                    ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[529].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xffff7fffU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x8000U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x10000U & (vlSelf->top__DOT__src__DOT__src_msg 
                     ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[530].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfffeffffU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x10000U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x20000U & (vlSelf->top__DOT__src__DOT__src_msg 
                     ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[531].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfffdffffU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x20000U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x40000U & (vlSelf->top__DOT__src__DOT__src_msg 
                     ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[532].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfffbffffU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x40000U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x80000U & (vlSelf->top__DOT__src__DOT__src_msg 
                     ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[533].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfff7ffffU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x80000U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x100000U & (vlSelf->top__DOT__src__DOT__src_msg 
                      ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[534].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xffefffffU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x100000U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x200000U & (vlSelf->top__DOT__src__DOT__src_msg 
                      ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[535].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xffdfffffU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x200000U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x400000U & (vlSelf->top__DOT__src__DOT__src_msg 
                      ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[536].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xffbfffffU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x400000U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x800000U & (vlSelf->top__DOT__src__DOT__src_msg 
                      ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[537].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xff7fffffU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x800000U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x1000000U & (vlSelf->top__DOT__src__DOT__src_msg 
                       ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[538].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfeffffffU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x1000000U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x2000000U & (vlSelf->top__DOT__src__DOT__src_msg 
                       ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[539].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfdffffffU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x2000000U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x4000000U & (vlSelf->top__DOT__src__DOT__src_msg 
                       ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[540].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfbffffffU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x4000000U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x8000000U & (vlSelf->top__DOT__src__DOT__src_msg 
                       ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[541].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xf7ffffffU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x8000000U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x10000000U & (vlSelf->top__DOT__src__DOT__src_msg 
                        ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[542].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xefffffffU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x10000000U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x20000000U & (vlSelf->top__DOT__src__DOT__src_msg 
                        ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[543].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xdfffffffU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x20000000U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x40000000U & (vlSelf->top__DOT__src__DOT__src_msg 
                        ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[544].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xbfffffffU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x40000000U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if (((vlSelf->top__DOT__src__DOT__src_msg ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[545].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0x7fffffffU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x80000000U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state) {
        if (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state) {
            vlSymsp->__Vcoverage[5356].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[5359].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                = (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                   - (IData)(1U));
        } else {
            vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state)))) {
            vlSymsp->__Vcoverage[5360].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
            = ((0U < vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num)
                ? (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                   - (IData)(1U)) : vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num);
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (1U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (2U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (4U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (8U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                        ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                        ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                        ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if (((vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
          ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (1U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (2U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (4U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (8U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5445].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5446].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                        ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5452].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                        ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                        ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if (((vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
          ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[6117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    }
    vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy = (1U 
                                                   & ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
                                                      | (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq)));
    vlSelf->top__DOT__mem__DOT__mem_memresp0_val = 
        ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
         | (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    if ((1U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffffeU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (1U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((2U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffffdU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (2U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((4U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffffbU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (4U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((8U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffff7U & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (8U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x10U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffffffefU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x10U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x20U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffffffdfU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x20U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x40U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffffffbfU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x40U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x80U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffffff7fU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x80U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x100U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffeffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x100U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x200U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffdffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x200U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x400U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffbffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x400U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x800U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffff7ffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x800U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x1000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffffefffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x1000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x2000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffffdfffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x2000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x4000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffffbfffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x4000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x8000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[669].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffff7fffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x8000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x10000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[670].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffeffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x10000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x20000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffdffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x20000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x40000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffbffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x40000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x80000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfff7ffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x80000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x100000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[674].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffefffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x100000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x200000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffdfffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x200000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x400000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffbfffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x400000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x800000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xff7fffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x800000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x1000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfeffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x1000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x2000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfdffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x2000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x4000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[680].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfbffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x4000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x8000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xf7ffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x8000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x10000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                        ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[682].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xefffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x10000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x20000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                        ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[683].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xdfffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x20000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x40000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                        ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[684].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xbfffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x40000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if (((vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
          ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0x7fffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x80000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_msg_len_modified_M) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_len_modified_M)))) {
        vlSymsp->__Vcoverage[5820].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_len_modified_M 
            = ((6U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_len_modified_M)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_msg_len_modified_M)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_msg_len_modified_M) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_len_modified_M)))) {
        vlSymsp->__Vcoverage[5821].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_len_modified_M 
            = ((5U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_len_modified_M)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_msg_len_modified_M)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_msg_len_modified_M) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_len_modified_M)))) {
        vlSymsp->__Vcoverage[5822].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_len_modified_M 
            = ((3U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_len_modified_M)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_msg_len_modified_M)));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en0_M) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__amo_en0_M))) {
        vlSymsp->__Vcoverage[5956].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__amo_en0_M 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en0_M;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__write_en0_M) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__write_en0_M))) {
        vlSymsp->__Vcoverage[5954].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__write_en0_M 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__write_en0_M;
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[5826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[5827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[5828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[5829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[5830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[5831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[5832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[5833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[5834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[5835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[5836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[5837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[5838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[5839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[5840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[5841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state) {
        if (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state) {
            vlSymsp->__Vcoverage[6848].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[6851].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                = (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                   - (IData)(1U));
        } else {
            vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state)))) {
            vlSymsp->__Vcoverage[6852].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
            = ((0U < vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num)
                ? (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                   - (IData)(1U)) : vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num);
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[5842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[5843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[5844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[5845].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[5846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[5847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[5848].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[5849].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[5850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[5851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[5852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[5853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[5854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[5855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[5856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5857].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__write_en0_M)
            ? 0xdeadbeefU : ((0x1fU >= (0x18U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                 << 1U)))
                              ? (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                                 >> (0x18U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                              << 1U)))
                              : 0U));
    if ((1U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6773].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (1U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6774].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (2U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6775].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (4U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6776].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (8U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6777].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6778].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6779].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6780].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6781].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6782].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6783].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6784].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6785].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6786].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6787].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6788].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6789].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6790].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6791].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6792].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6793].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6794].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6795].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6796].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6797].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6798].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6799].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6800].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                        ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6801].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                        ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6802].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                        ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[6803].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if (((vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
          ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[6804].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_msg_len_modified_M) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_len_modified_M)))) {
        vlSymsp->__Vcoverage[5823].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_len_modified_M 
            = ((6U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_len_modified_M)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_msg_len_modified_M)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_msg_len_modified_M) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_len_modified_M)))) {
        vlSymsp->__Vcoverage[5824].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_len_modified_M 
            = ((5U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_len_modified_M)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_msg_len_modified_M)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_msg_len_modified_M) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_len_modified_M)))) {
        vlSymsp->__Vcoverage[5825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_len_modified_M 
            = ((3U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_len_modified_M)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_msg_len_modified_M)));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__write_en1_M) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__write_en1_M))) {
        vlSymsp->__Vcoverage[5955].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__write_en1_M 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__write_en1_M;
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[5890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[5891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[5892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[5893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[5894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[5895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[5896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[5897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[5898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[5899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[5900].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[5901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[5902].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[5903].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[5904].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[5905].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[5906].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[5907].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[5908].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[5909].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[5910].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[5911].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[5912].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[5913].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[5914].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[5915].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[5916].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[5917].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[5918].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[5919].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[5920].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5921].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__write_en1_M)
            ? 0xdeadbeefU : ((0x1fU >= (0x18U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                 << 1U)))
                              ? (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                                 >> (0x18U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                              << 1U)))
                              : 0U));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en1_M) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__amo_en1_M))) {
        vlSymsp->__Vcoverage[5957].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__amo_en1_M 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en1_M;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[6126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    }
    vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy = (1U 
                                                   & ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
                                                      | (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq)));
    vlSelf->top__DOT__cache1_req_rdy = ((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state)
                                         ? ((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state) 
                                            & ((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy) 
                                               & (0U 
                                                  == vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay)))
                                         : ((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy) 
                                            & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num)));
    vlSelf->top__DOT__mem__DOT__mem_memresp1_val = 
        ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
         | (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    vlSelf->top__DOT__cache1_resp_val = ((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state)
                                          ? ((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state) 
                                             & ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val) 
                                                & (0U 
                                                   == vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay)))
                                          : ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val) 
                                             & (0U 
                                                == vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num)));
    if (((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__tarray_wen) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__tarray_wen))) {
        vlSymsp->__Vcoverage[4052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__tarray_wen 
            = vlSelf->top__DOT__cache__DOT__icache__DOT__tarray_wen;
    }
    if (((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__valid_set) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__valid_set))) {
        vlSymsp->__Vcoverage[4062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__valid_set 
            = vlSelf->top__DOT__cache__DOT__icache__DOT__valid_set;
    }
    if (((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__clean_set) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__clean_set))) {
        vlSymsp->__Vcoverage[4060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__clean_set 
            = vlSelf->top__DOT__cache__DOT__icache__DOT__clean_set;
    }
    if (vlSelf->top__DOT__cache__DOT__icache__DOT__word_en_sel) {
        if (vlSelf->top__DOT__cache__DOT__icache__DOT__word_en_sel) {
            vlSymsp->__Vcoverage[4441].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__word_en_sel)))) {
            vlSymsp->__Vcoverage[4442].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__word_en_sel)))) {
        vlSymsp->__Vcoverage[4440].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__word_en_sel) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__word_en_sel))) {
        vlSymsp->__Vcoverage[4059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__word_en_sel 
            = vlSelf->top__DOT__cache__DOT__icache__DOT__word_en_sel;
    }
    if (((IData)(vlSelf->top__DOT__imem_reqstream_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_reqstream_rdy))) {
        vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_rdy 
            = vlSelf->top__DOT__imem_reqstream_rdy;
    }
    if ((4U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state)))) {
                vlSymsp->__Vcoverage[4103].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state))) {
                vlSymsp->__Vcoverage[4104].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((2U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state))) {
            vlSymsp->__Vcoverage[4104].fetch_add(1, std::memory_order_relaxed);
        }
        vlSelf->top__DOT__cache0_resp_rdy = (1U & (IData)(
                                                          (0U 
                                                           == 
                                                           (3U 
                                                            & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state)))));
    } else {
        vlSelf->top__DOT__cache0_resp_rdy = (1U & (
                                                   (2U 
                                                    & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state))
                                                    ? 
                                                   (~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state))
                                                    : (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state)));
    }
    if (((IData)(vlSelf->top__DOT__cache0_resp_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__cache0_resp_rdy))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_rdy 
            = vlSelf->top__DOT__cache0_resp_rdy;
    }
    if (vlSelf->top__DOT__cache__DOT__icache__DOT__write_data_sel) {
        if (vlSelf->top__DOT__cache__DOT__icache__DOT__write_data_sel) {
            vlSymsp->__Vcoverage[4445].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__write_data_sel)))) {
            vlSymsp->__Vcoverage[4446].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__write_data_sel)))) {
        vlSymsp->__Vcoverage[4444].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__write_data_sel) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__write_data_sel))) {
        vlSymsp->__Vcoverage[4055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__write_data_sel 
            = vlSelf->top__DOT__cache__DOT__icache__DOT__write_data_sel;
    }
    vlSelf->top__DOT__cache0_req_val = (1U & ((4U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state))
                                               ? (IData)(
                                                         (0U 
                                                          == 
                                                          (3U 
                                                           & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state))))
                                               : ((2U 
                                                   & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state))
                                                   ? 
                                                  (~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state))
                                                   : (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state))));
    if (((IData)(vlSelf->top__DOT__cache0_req_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__cache0_req_val))) {
        vlSymsp->__Vcoverage[404].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_val 
            = vlSelf->top__DOT__cache0_req_val;
    }
    vlSelf->top__DOT__cache__DOT__icache__DOT__mem_action 
        = ((4U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state))
            ? ((2U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state))
                ? 0U : ((1U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state))
                         ? 0U : 1U)) : ((2U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state))
                                         ? 0U : ((1U 
                                                  & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state))
                                                  ? 1U
                                                  : 0U)));
    if ((1U & ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__mem_action) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__mem_action)))) {
        vlSymsp->__Vcoverage[4045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__mem_action 
            = ((6U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__mem_action)) 
               | (1U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__mem_action)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__mem_action) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__mem_action)))) {
        vlSymsp->__Vcoverage[4046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__mem_action 
            = ((5U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__mem_action)) 
               | (2U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__mem_action)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__mem_action) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__mem_action)))) {
        vlSymsp->__Vcoverage[4047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__mem_action 
            = ((3U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__mem_action)) 
               | (4U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__mem_action)));
    }
    if (((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__tarray_en) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__tarray_en))) {
        vlSymsp->__Vcoverage[4051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__tarray_en 
            = vlSelf->top__DOT__cache__DOT__icache__DOT__tarray_en;
    }
    if (vlSelf->top__DOT__cache__DOT__icache__DOT__index_sel) {
        if (vlSelf->top__DOT__cache__DOT__icache__DOT__index_sel) {
            vlSymsp->__Vcoverage[4437].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__index_sel)))) {
            vlSymsp->__Vcoverage[4438].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__index_sel)))) {
        vlSymsp->__Vcoverage[4436].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__index_sel) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__index_sel))) {
        vlSymsp->__Vcoverage[4058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__index_sel 
            = vlSelf->top__DOT__cache__DOT__icache__DOT__index_sel;
    }
    if ((4U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state)))) {
                if ((1U & (~ ((0xfU == (0xfU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__inc_word)))) 
                              & (0U != vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty))))) {
                    if ((1U & (~ ((0xfU == (0xfU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__inc_word)))) 
                                  & (0U == vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty))))) {
                        vlSymsp->__Vcoverage[4101].fetch_add(1, std::memory_order_relaxed);
                    }
                    if (((0xfU == (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__inc_word)))) 
                         & (0U == vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty))) {
                        vlSymsp->__Vcoverage[4100].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if (((0xfU == (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__inc_word)))) 
                     & (0U != vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty))) {
                    vlSymsp->__Vcoverage[4102].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
        vlSelf->top__DOT__cache__DOT__icache__DOT__count_reset 
            = (1U & (((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state) 
                      >> 1U) | ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state) 
                                | (((0xfU == (0xfU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__inc_word)))) 
                                    & (0U != vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty)) 
                                   | ((0xfU == (0xfU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__inc_word)))) 
                                      & (0U == vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty))))));
    } else {
        vlSelf->top__DOT__cache__DOT__icache__DOT__count_reset 
            = (1U & ((2U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state))
                      ? (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state)
                      : ((~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state)) 
                         | (0xfU == (0xfU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__inc_word)))))));
    }
    if (((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__count_reset) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__count_reset))) {
        vlSymsp->__Vcoverage[4054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__count_reset 
            = vlSelf->top__DOT__cache__DOT__icache__DOT__count_reset;
    }
    if (((IData)(vlSelf->top__DOT__cache__DOT__flush_done1) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT____Vtogcov__flush_done1))) {
        vlSymsp->__Vcoverage[4041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT____Vtogcov__flush_done1 
            = vlSelf->top__DOT__cache__DOT__flush_done1;
    }
    if ((1U & (~ (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                  & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))))) {
        if ((1U & (~ ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                       >> 1U) & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))))) {
            if ((1U & (~ ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                           >> 2U) & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))))) {
                if ((1U & (~ ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                               >> 3U) & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))))) {
                    if ((1U & (~ ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                   >> 4U) & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))))) {
                        if ((1U & (~ ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                       >> 5U) & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))))) {
                            if ((1U & (~ ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                           >> 6U) & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))))) {
                                if ((1U & (~ ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                               >> 7U) 
                                              & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))))) {
                                    if ((1U & (~ ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                   >> 8U) 
                                                  & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))))) {
                                        if ((1U & (~ 
                                                   ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                     >> 9U) 
                                                    & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                      >> 0xaU) 
                                                     & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                          >> 0xbU) 
                                                         & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                              >> 0xcU) 
                                                             & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                  >> 0xdU) 
                                                                 & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                      >> 0xeU) 
                                                                     & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                          >> 0xfU) 
                                                                         & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))))) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                              >> 0x10U) 
                                                                             & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))))) {
                                                                        if (
                                                                            ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                              >> 0x11U) 
                                                                             & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))) {
                                                                            vlSymsp->__Vcoverage[4417].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                                >> 0x11U) 
                                                                                & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))))) {
                                                                            if (
                                                                                (1U 
                                                                                & (~ 
                                                                                ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                                >> 0x12U) 
                                                                                & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                                >> 0x13U) 
                                                                                & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                                >> 0x14U) 
                                                                                & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                                >> 0x15U) 
                                                                                & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                                >> 0x16U) 
                                                                                & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))))) {
                                                                                if (
                                                                                ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                                >> 0x17U) 
                                                                                & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))) {
                                                                                vlSymsp->__Vcoverage[4411].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                                >> 0x17U) 
                                                                                & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))))) {
                                                                                if (
                                                                                ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                                >> 0x18U) 
                                                                                & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))) {
                                                                                vlSymsp->__Vcoverage[4410].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                                >> 0x18U) 
                                                                                & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))))) {
                                                                                if (
                                                                                ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                                >> 0x19U) 
                                                                                & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))) {
                                                                                vlSymsp->__Vcoverage[4409].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                                >> 0x19U) 
                                                                                & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))))) {
                                                                                if (
                                                                                ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                                >> 0x1aU) 
                                                                                & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))) {
                                                                                vlSymsp->__Vcoverage[4408].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                                >> 0x1aU) 
                                                                                & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))))) {
                                                                                if (
                                                                                ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                                >> 0x1bU) 
                                                                                & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))) {
                                                                                vlSymsp->__Vcoverage[4407].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                                >> 0x1bU) 
                                                                                & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))))) {
                                                                                if (
                                                                                ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                                >> 0x1cU) 
                                                                                & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))) {
                                                                                vlSymsp->__Vcoverage[4406].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                                >> 0x1cU) 
                                                                                & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))))) {
                                                                                if (
                                                                                ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                                >> 0x1dU) 
                                                                                & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))) {
                                                                                vlSymsp->__Vcoverage[4405].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                                >> 0x1dU) 
                                                                                & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))))) {
                                                                                if (
                                                                                ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                                >> 0x1eU) 
                                                                                & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))) {
                                                                                vlSymsp->__Vcoverage[4404].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                                >> 0x1eU) 
                                                                                & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))))) {
                                                                                if (
                                                                                ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                                >> 0x1fU) 
                                                                                & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))) {
                                                                                vlSymsp->__Vcoverage[4402].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                                >> 0x1fU) 
                                                                                & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))))) {
                                                                                vlSymsp->__Vcoverage[4403].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                if (
                                                                                ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                                >> 0x16U) 
                                                                                & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))) {
                                                                                vlSymsp->__Vcoverage[4412].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                                >> 0x15U) 
                                                                                & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))) {
                                                                                vlSymsp->__Vcoverage[4413].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                                >> 0x14U) 
                                                                                & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))) {
                                                                                vlSymsp->__Vcoverage[4414].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                                >> 0x13U) 
                                                                                & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))) {
                                                                                vlSymsp->__Vcoverage[4415].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                            }
                                                                            if (
                                                                                ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                                >> 0x12U) 
                                                                                & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))) {
                                                                                vlSymsp->__Vcoverage[4416].fetch_add(1, std::memory_order_relaxed);
                                                                            }
                                                                        }
                                                                    }
                                                                    if (
                                                                        ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                          >> 0x10U) 
                                                                         & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))) {
                                                                        vlSymsp->__Vcoverage[4418].fetch_add(1, std::memory_order_relaxed);
                                                                    }
                                                                }
                                                                if (
                                                                    ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                      >> 0xfU) 
                                                                     & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))) {
                                                                    vlSymsp->__Vcoverage[4419].fetch_add(1, std::memory_order_relaxed);
                                                                }
                                                            }
                                                            if (
                                                                ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                  >> 0xeU) 
                                                                 & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))) {
                                                                vlSymsp->__Vcoverage[4420].fetch_add(1, std::memory_order_relaxed);
                                                            }
                                                        }
                                                        if (
                                                            ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                              >> 0xdU) 
                                                             & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))) {
                                                            vlSymsp->__Vcoverage[4421].fetch_add(1, std::memory_order_relaxed);
                                                        }
                                                    }
                                                    if (
                                                        ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                          >> 0xcU) 
                                                         & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))) {
                                                        vlSymsp->__Vcoverage[4422].fetch_add(1, std::memory_order_relaxed);
                                                    }
                                                }
                                                if (
                                                    ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                      >> 0xbU) 
                                                     & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))) {
                                                    vlSymsp->__Vcoverage[4423].fetch_add(1, std::memory_order_relaxed);
                                                }
                                            }
                                            if (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                  >> 0xaU) 
                                                 & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))) {
                                                vlSymsp->__Vcoverage[4424].fetch_add(1, std::memory_order_relaxed);
                                            }
                                        }
                                        if (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                              >> 9U) 
                                             & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))) {
                                            vlSymsp->__Vcoverage[4425].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    }
                                    if (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                          >> 8U) & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))) {
                                        vlSymsp->__Vcoverage[4426].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                                if (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                      >> 7U) & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))) {
                                    vlSymsp->__Vcoverage[4427].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                  >> 6U) & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))) {
                                vlSymsp->__Vcoverage[4428].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                              >> 5U) & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))) {
                            vlSymsp->__Vcoverage[4429].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                          >> 4U) & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))) {
                        vlSymsp->__Vcoverage[4430].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                      >> 3U) & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))) {
                    vlSymsp->__Vcoverage[4431].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                  >> 2U) & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))) {
                vlSymsp->__Vcoverage[4432].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
              >> 1U) & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))) {
            vlSymsp->__Vcoverage[4433].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
         & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))) {
        vlSymsp->__Vcoverage[4434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__flush_index = 0U;
    } else {
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__flush_index 
            = (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                 >> 1U) & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))
                ? 1U : (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                          >> 2U) & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))
                         ? 2U : (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                   >> 3U) & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))
                                  ? 3U : (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                            >> 4U) 
                                           & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))
                                           ? 4U : (
                                                   ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                     >> 5U) 
                                                    & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))
                                                    ? 5U
                                                    : 
                                                   (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                      >> 6U) 
                                                     & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))
                                                     ? 6U
                                                     : 
                                                    (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                       >> 7U) 
                                                      & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))
                                                      ? 7U
                                                      : 
                                                     (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                        >> 8U) 
                                                       & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))
                                                       ? 8U
                                                       : 
                                                      (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                         >> 9U) 
                                                        & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))
                                                        ? 9U
                                                        : 
                                                       (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                          >> 0xaU) 
                                                         & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))
                                                         ? 0xaU
                                                         : 
                                                        (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                           >> 0xbU) 
                                                          & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))
                                                          ? 0xbU
                                                          : 
                                                         (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                            >> 0xcU) 
                                                           & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))
                                                           ? 0xcU
                                                           : 
                                                          (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                             >> 0xdU) 
                                                            & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))
                                                            ? 0xdU
                                                            : 
                                                           (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                              >> 0xeU) 
                                                             & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))
                                                             ? 0xeU
                                                             : 
                                                            (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                               >> 0xfU) 
                                                              & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))
                                                              ? 0xfU
                                                              : 
                                                             (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                >> 0x10U) 
                                                               & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))
                                                               ? 0x10U
                                                               : 
                                                              (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                 >> 0x11U) 
                                                                & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))
                                                                ? 0x11U
                                                                : 
                                                               (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                  >> 0x12U) 
                                                                 & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))
                                                                 ? 0x12U
                                                                 : 
                                                                (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                   >> 0x13U) 
                                                                  & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))
                                                                  ? 0x13U
                                                                  : 
                                                                 (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                    >> 0x14U) 
                                                                   & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))
                                                                   ? 0x14U
                                                                   : 
                                                                  (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                     >> 0x15U) 
                                                                    & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))
                                                                    ? 0x15U
                                                                    : 
                                                                   (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                      >> 0x16U) 
                                                                     & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))
                                                                     ? 0x16U
                                                                     : 
                                                                    (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                       >> 0x17U) 
                                                                      & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))
                                                                      ? 0x17U
                                                                      : 
                                                                     (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                        >> 0x18U) 
                                                                       & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))
                                                                       ? 0x18U
                                                                       : 
                                                                      (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                         >> 0x19U) 
                                                                        & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))
                                                                        ? 0x19U
                                                                        : 
                                                                       (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                          >> 0x1aU) 
                                                                         & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))
                                                                         ? 0x1aU
                                                                         : 
                                                                        (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                           >> 0x1bU) 
                                                                          & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))
                                                                          ? 0x1bU
                                                                          : 
                                                                         (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                            >> 0x1cU) 
                                                                           & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))
                                                                           ? 0x1cU
                                                                           : 
                                                                          (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                             >> 0x1dU) 
                                                                            & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))
                                                                            ? 0x1dU
                                                                            : 
                                                                           (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                              >> 0x1eU) 
                                                                             & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))
                                                                             ? 0x1eU
                                                                             : 
                                                                            (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty 
                                                                               >> 0x1fU) 
                                                                              & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line))
                                                                              ? 0x1fU
                                                                              : 0U)))))))))))))))))))))))))))))));
    }
    if (((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__get_next_flush_line))) {
        vlSymsp->__Vcoverage[4049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__get_next_flush_line 
            = vlSelf->top__DOT__cache__DOT__icache__DOT__get_next_flush_line;
    }
    vlSelf->top__DOT__sink__DOT__sink__DOT__index_next 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)));
    if ((1U & (((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next)))) {
        vlSymsp->__Vcoverage[940].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next 
            = ((0xeU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next)) 
               | (1U & ((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index))));
    }
    if ((1U & ((7U & (((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)) 
                      >> 1U)) ^ ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next) 
                                 >> 1U)))) {
        vlSymsp->__Vcoverage[941].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next 
            = ((0xdU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next)) 
               | (2U & ((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index))));
    }
    if ((1U & ((3U & (((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)) 
                      >> 2U)) ^ ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next) 
                                 >> 2U)))) {
        vlSymsp->__Vcoverage[942].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next 
            = ((0xbU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next)) 
               | (4U & ((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index))));
    }
    if ((1U & ((1U & (((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)) 
                      >> 3U)) ^ ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next) 
                                 >> 3U)))) {
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next 
            = ((7U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next)) 
               | (8U & ((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index))));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index)))) {
        vlSymsp->__Vcoverage[944].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index 
            = ((0xeU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index)) 
               | (1U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index)))) {
        vlSymsp->__Vcoverage[945].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index 
            = ((0xdU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index)) 
               | (2U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index)))) {
        vlSymsp->__Vcoverage[946].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index 
            = ((0xbU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index)) 
               | (4U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index)))) {
        vlSymsp->__Vcoverage[947].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index 
            = ((7U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index)) 
               | (8U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)));
    }
    vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
        = ((9U >= (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index))
            ? vlSelf->top__DOT__sink__DOT__sink__DOT__m
           [vlSelf->top__DOT__sink__DOT__sink__DOT__index]
            : 0U);
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_rdy))) {
        vlSymsp->__Vcoverage[4988].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_rdy 
            = vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy;
    }
    vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay 
        = ((IData)(vlSelf->top__DOT__cache0_req_val) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy) 
              & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num)));
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state)))) {
        if (((IData)(vlSelf->top__DOT__cache0_req_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay)))) {
            vlSymsp->__Vcoverage[5351].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
        vlSymsp->__Vcoverage[6247].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__cache0_req_val) 
                      & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay)))))) {
            vlSymsp->__Vcoverage[5352].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_val))) {
        vlSymsp->__Vcoverage[5145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_val 
            = vlSelf->top__DOT__mem__DOT__mem_memresp0_val;
    }
    vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__zero_cycle_delay 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
           & ((IData)(vlSelf->top__DOT__cache0_resp_rdy) 
              & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num)));
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state)))) {
        if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__zero_cycle_delay)))) {
            vlSymsp->__Vcoverage[6700].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
                      & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__zero_cycle_delay)))))) {
            vlSymsp->__Vcoverage[6701].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[5858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[5859].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[5860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[5861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[5862].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[5863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[5864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[5865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[5866].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[5867].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[5868].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[5869].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[5870].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[5871].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[5872].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[5873].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[5874].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[5875].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[5876].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[5877].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[5878].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[5879].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[5880].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[5881].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[5882].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[5883].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[5884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[5885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[5886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[5887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[5888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
        = ((0x7ffc00000000ULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp) 
           | (((QData)((IData)((3U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]))) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M))));
    vlSelf->top__DOT__mem__DOT__mem_memresp0_msg = 
        ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)
          ? vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore
          : ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)
              ? 0ULL : vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp));
    if (((IData)(vlSelf->top__DOT__src__DOT__src__DOT__reset_reg) 
         ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__reset_reg))) {
        vlSymsp->__Vcoverage[560].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__reset_reg 
            = vlSelf->top__DOT__src__DOT__src__DOT__reset_reg;
    }
    vlSelf->top__DOT__src__DOT__src_val = (1U & ((~ (IData)(vlSelf->top__DOT__src__DOT__src__DOT__reset_reg)) 
                                                 & (~ (IData)(vlSelf->top__DOT__src_done))));
    vlSelf->top__DOT__mngr2proc_val = ((IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state)
                                        ? ((IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) 
                                           & ((IData)(vlSelf->top__DOT__src__DOT__src_val) 
                                              & (0U 
                                                 == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay)))
                                        : ((IData)(vlSelf->top__DOT__src__DOT__src_val) 
                                           & (0U == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num)));
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[5922].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[5923].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[5924].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[5925].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[5926].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[5927].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[5928].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[5929].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[5930].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[5931].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[5932].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state)))) {
                vlSymsp->__Vcoverage[4091].fetch_add(1, std::memory_order_relaxed);
                if ((0xfU != (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__inc_word))))) {
                    vlSymsp->__Vcoverage[4090].fetch_add(1, std::memory_order_relaxed);
                }
                if ((0xfU == (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__inc_word))))) {
                    vlSymsp->__Vcoverage[4089].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((1U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state))) {
                vlSymsp->__Vcoverage[4097].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state))) {
                vlSymsp->__Vcoverage[4086].fetch_add(1, std::memory_order_relaxed);
                if ((0xfU == (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__inc_word))))) {
                    vlSymsp->__Vcoverage[4084].fetch_add(1, std::memory_order_relaxed);
                }
                if ((0xfU != (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__inc_word))))) {
                    vlSymsp->__Vcoverage[4085].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state)))) {
                vlSymsp->__Vcoverage[4081].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[5933].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[5934].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[5935].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[5936].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[5937].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[5938].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[5939].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[5940].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[5941].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[5942].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[5943].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[5944].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[5945].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[5946].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[5947].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[5948].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[5949].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[5950].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[5951].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[5952].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5953].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
        = ((0x7ffc00000000ULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp) 
           | (((QData)((IData)((3U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]))) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M))));
    vlSelf->top__DOT__mem__DOT__mem_memresp1_msg = 
        ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)
          ? vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore
          : ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)
              ? 0ULL : vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_rdy))) {
        vlSymsp->__Vcoverage[5067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_rdy 
            = vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_val))) {
        vlSymsp->__Vcoverage[5194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_val 
            = vlSelf->top__DOT__mem__DOT__mem_memresp1_val;
    }
    vlSelf->top__DOT__mem__DOT__mem_memresp0_rdy = 
        ((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state)
          ? ((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state) 
             & ((IData)(vlSelf->top__DOT__cache0_resp_rdy) 
                & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay)))
          : ((IData)(vlSelf->top__DOT__cache0_resp_rdy) 
             & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_rdy) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_rdy))) {
        vlSymsp->__Vcoverage[5146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_rdy 
            = vlSelf->top__DOT__mem__DOT__mem_memresp0_rdy;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_rdy) 
           & (IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val));
    vlSelf->top__DOT__mem__DOT__mem_memreq0_val = ((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state)
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state) 
                                                    & ((IData)(vlSelf->top__DOT__cache0_req_val) 
                                                       & (0U 
                                                          == vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay)))
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__cache0_req_val) 
                                                    & (0U 
                                                       == vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq0_val) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_val))) {
        vlSymsp->__Vcoverage[4987].fetch_add(1, std::memory_order_relaxed);
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
    if ((1U & ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__flush_index) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__flush_index)))) {
        vlSymsp->__Vcoverage[4153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__flush_index 
            = ((0x1eU & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__flush_index)) 
               | (1U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__flush_index)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__flush_index) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__flush_index)))) {
        vlSymsp->__Vcoverage[4154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__flush_index 
            = ((0x1dU & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__flush_index)) 
               | (2U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__flush_index)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__flush_index) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__flush_index)))) {
        vlSymsp->__Vcoverage[4155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__flush_index 
            = ((0x1bU & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__flush_index)) 
               | (4U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__flush_index)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__flush_index) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__flush_index)))) {
        vlSymsp->__Vcoverage[4156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__flush_index 
            = ((0x17U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__flush_index)) 
               | (8U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__flush_index)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__flush_index) 
                  ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__flush_index)))) {
        vlSymsp->__Vcoverage[4157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__flush_index 
            = ((0xfU & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__flush_index)) 
               | (0x10U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__flush_index)));
    }
    if ((1U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
               ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[996].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffffffeU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (1U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((2U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
               ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[997].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffffffdU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (2U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((4U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
               ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[998].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffffffbU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (4U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((8U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
               ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[999].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffffff7U & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (8U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x10U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                  ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1000].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffffffefU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x10U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x20U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                  ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1001].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffffffdfU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x20U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x40U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                  ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1002].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffffffbfU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x40U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x80U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                  ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1003].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffffff7fU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x80U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x100U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                   ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1004].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffffeffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x100U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x200U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                   ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffffdffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x200U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x400U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                   ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffffbffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x400U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x800U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                   ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1007].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffff7ffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x800U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x1000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                    ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1008].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffffefffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x1000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x2000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                    ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1009].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffffdfffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x2000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x4000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                    ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1010].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffffbfffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x4000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x8000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                    ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1011].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffff7fffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x8000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x10000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                     ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1012].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffeffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x10000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x20000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                     ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1013].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffdffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x20000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x40000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                     ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1014].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffbffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x40000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x80000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                     ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1015].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfff7ffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x80000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x100000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                      ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1016].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffefffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x100000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x200000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                      ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1017].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffdfffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x200000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x400000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                      ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1018].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffbfffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x400000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x800000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                      ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1019].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xff7fffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x800000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                       ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1020].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfeffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x1000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                       ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1021].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfdffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x2000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                       ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1022].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfbffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x4000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                       ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1023].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xf7ffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x8000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                        ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1024].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xefffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x10000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                        ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1025].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xdfffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x20000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                        ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1026].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xbfffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x40000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if (((vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
          ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1027].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0x7fffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x80000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state) {
        if (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state) {
            if ((((IData)(vlSelf->top__DOT__cache0_req_val) 
                  & (IData)(vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy)) 
                 & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay))) {
                vlSymsp->__Vcoverage[5354].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ (((IData)(vlSelf->top__DOT__cache0_req_val) 
                           & (IData)(vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy)) 
                          & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay))))) {
                vlSymsp->__Vcoverage[5355].fetch_add(1, std::memory_order_relaxed);
            }
            vlSelf->top__DOT__cache0_req_rdy = ((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy) 
                                                & (0U 
                                                   == vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
        } else {
            vlSelf->top__DOT__cache0_req_rdy = 0U;
        }
    } else {
        vlSelf->top__DOT__cache0_req_rdy = ((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy) 
                                            & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if (((IData)(vlSelf->top__DOT__cache0_req_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__cache0_req_rdy))) {
        vlSymsp->__Vcoverage[405].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_rdy 
            = vlSelf->top__DOT__cache0_req_rdy;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[5345].fetch_add(1, std::memory_order_relaxed);
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
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__zero_cycle_delay) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[6694].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__zero_cycle_delay 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__zero_cycle_delay;
    }
    if (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state) {
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next = 1U;
        if (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state) {
            if ((((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
                  & (IData)(vlSelf->top__DOT__cache0_resp_rdy)) 
                 & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay))) {
                vlSymsp->__Vcoverage[6703].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
                           & (IData)(vlSelf->top__DOT__cache0_resp_rdy)) 
                          & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay))))) {
                vlSymsp->__Vcoverage[6704].fetch_add(1, std::memory_order_relaxed);
            }
            vlSelf->top__DOT__cache0_resp_val = ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
                                                 & (0U 
                                                    == vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
        } else {
            vlSelf->top__DOT__cache0_resp_val = 0U;
        }
    } else {
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next = 0U;
        vlSelf->top__DOT__cache0_resp_val = ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
                                             & (0U 
                                                == vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((4U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state)))) {
                if (vlSelf->top__DOT__cache0_resp_val) {
                    vlSymsp->__Vcoverage[4099].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__cache0_resp_val)))) {
                    vlSymsp->__Vcoverage[4098].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
        vlSelf->top__DOT__cache__DOT__icache__DOT__count_en 
            = (IData)(((0U == (3U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state))) 
                       & (IData)(vlSelf->top__DOT__cache0_resp_val)));
    } else {
        vlSelf->top__DOT__cache__DOT__icache__DOT__count_en 
            = ((2U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state))
                ? ((~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state)) 
                   & (IData)(vlSelf->top__DOT__cache0_resp_val))
                : ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state) 
                   & (IData)(vlSelf->top__DOT__cache0_resp_val)));
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state))) {
                if (vlSelf->top__DOT__cache0_resp_val) {
                    vlSymsp->__Vcoverage[4083].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__cache0_resp_val)))) {
                    vlSymsp->__Vcoverage[4082].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
        if ((2U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__cache0_resp_val)))) {
                    vlSymsp->__Vcoverage[4087].fetch_add(1, std::memory_order_relaxed);
                }
                if (vlSelf->top__DOT__cache0_resp_val) {
                    vlSymsp->__Vcoverage[4088].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    if (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state) {
        if (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state) {
            vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_en 
                = (0U < vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay);
            if ((((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
                  & (IData)(vlSelf->top__DOT__cache0_resp_rdy)) 
                 & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay))) {
                vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next = 0U;
            }
        } else {
            vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_en = 0U;
        }
    } else if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
                & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__zero_cycle_delay)))) {
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_en = 1U;
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next = 1U;
    } else {
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_en = 0U;
    }
    if (((IData)(vlSelf->top__DOT__cache0_resp_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__cache0_resp_val))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_val 
            = vlSelf->top__DOT__cache0_resp_val;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M)))) {
        vlSymsp->__Vcoverage[6000].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[6001].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[6002].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[6003].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[6004].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffffffefULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[6005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[6006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[6007].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[6008].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[6009].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[6010].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[6011].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[6012].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffffefffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[6013].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[6014].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[6015].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[6016].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[6017].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[6018].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[6019].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[6020].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffefffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[6021].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[6022].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[6023].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[6024].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[6025].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[6026].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[6027].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[6028].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffefffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[6029].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[6030].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[6031].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[6032].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[6033].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[6034].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[6035].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[6036].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fefffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[6037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[6038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[6039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[6040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7effffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[6041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7dffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[6042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7bffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[6043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x77ffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[6044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x6fffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[6045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x5fffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[6046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x3fffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if (((IData)(vlSelf->top__DOT__src__DOT__src_val) 
         ^ (IData)(vlSelf->top__DOT__src__DOT____Vtogcov__src_val))) {
        vlSymsp->__Vcoverage[512].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_val 
            = vlSelf->top__DOT__src__DOT__src_val;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M)))) {
        vlSymsp->__Vcoverage[6047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[6048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[6049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[6050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[6051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffffffefULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[6052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[6053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[6054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[6055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[6056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[6057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[6058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[6059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffffefffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[6060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[6061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[6062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[6063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[6064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[6065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[6066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[6067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffefffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[6068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[6069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[6070].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[6071].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[6072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[6073].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[6074].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[6075].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffefffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[6076].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[6077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[6078].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[6079].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[6080].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[6081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[6082].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[6083].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fefffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[6084].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[6085].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[6086].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[6087].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7effffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[6088].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7dffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[6089].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7bffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[6090].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x77ffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[6091].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x6fffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[6092].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x5fffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[6093].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x3fffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if (((IData)(vlSelf->top__DOT__cache1_req_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__dmem_reqstream_rdy))) {
        vlSymsp->__Vcoverage[277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_rdy 
            = vlSelf->top__DOT__cache1_req_rdy;
    }
    if (((IData)(vlSelf->top__DOT__cache1_resp_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__dmem_respstream_val))) {
        vlSymsp->__Vcoverage[325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_val 
            = vlSelf->top__DOT__cache1_resp_val;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[6135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[6251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_ 
            = ((6U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[6252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_ 
            = ((5U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[6253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_ 
            = ((3U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_)));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[6114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[5280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_en 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[5346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__state_next 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_en) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[6629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_en 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_en;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[6695].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__state_next 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next;
    }
    if (((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__count_en) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__count_en))) {
        vlSymsp->__Vcoverage[4053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__count_en 
            = vlSelf->top__DOT__cache__DOT__icache__DOT__count_en;
    }
    if (vlSelf->top__DOT__cache0_resp_val) {
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__test 
            = (3U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                             >> 0x22U)));
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__len 
            = (3U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                             >> 0x20U)));
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_ 
            = (7U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                             >> 0x2cU)));
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque 
            = (0xffU & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                >> 0x24U)));
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
            = (IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_msg);
        vlSelf->top__DOT__cache0_resp_msg = vlSelf->top__DOT__mem__DOT__mem_memresp0_msg;
    } else {
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__test = 0U;
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__len = 0U;
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_ = 0U;
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque = 0U;
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data = 0U;
        vlSelf->top__DOT__cache0_resp_msg = 0ULL;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_msg) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg)))) {
        vlSymsp->__Vcoverage[5147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_msg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[5148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[5149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[5150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[5151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffffffefULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[5152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[5153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[5154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[5155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[5156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[5157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[5158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[5159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffffefffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[5160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[5161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[5162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[5163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[5164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[5165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[5166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[5167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffefffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[5168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[5169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[5170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[5171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[5172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[5173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[5174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[5175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffefffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[5176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[5177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[5178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[5179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[5180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[5181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[5182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[5183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fefffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[5184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[5185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[5186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[5187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7effffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[5188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7dffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[5189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7bffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[5190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x77ffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[5191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x6fffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[5192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x5fffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[5193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x3fffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if (vlSelf->top__DOT__cache1_resp_val) {
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__test 
            = (3U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                             >> 0x22U)));
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__len 
            = (3U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                             >> 0x20U)));
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_ 
            = (7U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                             >> 0x2cU)));
    } else {
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__test = 0U;
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__len = 0U;
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_ = 0U;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_msg) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg)))) {
        vlSymsp->__Vcoverage[5196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_msg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[5197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[5198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[5199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[5200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffffffefULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[5201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[5202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[5203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[5204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[5205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[5206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[5207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[5208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffffefffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[5209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[5210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[5211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[5212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[5213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[5214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[5215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[5216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffefffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[5217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[5218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[5219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[5220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[5221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[5222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[5223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[5224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffefffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[5225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[5226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
}
