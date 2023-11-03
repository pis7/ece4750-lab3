// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__7(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__7\n"); );
    // Init
    CData/*0:0*/ top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h93c28c56__0;
    top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h93c28c56__0 = 0;
    // Body
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_mngr2proc_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
           & ((~ (IData)(vlSelf->top__DOT__mngr2proc_val)) 
              & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mngr2proc_rdy_D)));
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
        = ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D))
            ? vlSelf->top__DOT__mngr2proc_msg : ((1U 
                                                  == (IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D))
                                                  ? 1U
                                                  : 0U));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_mngr2proc_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_mngr2proc_D))) {
        vlSymsp->__Vcoverage[1961].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_mngr2proc_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_mngr2proc_D;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_mngr2proc_D) 
              | (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_hazard_D)));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2548].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2549].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2550].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2551].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2552].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2553].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2554].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2555].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2556].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2557].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2558].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2559].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2560].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2561].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2562].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2563].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2564].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2565].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2566].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2567].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2568].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2569].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2570].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2571].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2572].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2573].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2574].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2575].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2576].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2577].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2578].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2579].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D = 
        ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D))
          ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D
          : ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D))
              ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_out_D
              : ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D))
                  ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D
                  : 0U)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_D))) {
        vlSymsp->__Vcoverage[1836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_D;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_ha20c3f05__0 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_D) 
           | (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h5633cb1e__0));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2516].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2517].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2518].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2519].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2520].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2521].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2522].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2523].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2524].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2525].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2526].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2527].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2528].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2529].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2530].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2531].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2532].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2533].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2534].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2535].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2536].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2537].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2538].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2539].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2540].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2541].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2542].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2543].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2544].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2545].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2546].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2547].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__b_mux_sel)
            ? ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__b_mux_sel)
                ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D
                : 0U) : vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__r_shift_out);
    vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
        = (((QData)((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D)) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D)));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_ha20c3f05__0));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg)))) {
        vlSymsp->__Vcoverage[3050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[3051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[3052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[3053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[3054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[3055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[3056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[3057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[3058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[3059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[3060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[3061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[3062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[3063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[3064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[3065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[3066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[3067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[3068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[3069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[3070].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[3071].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[3072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[3073].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[3076].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[3077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[3078].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[3079].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[3080].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[3081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[3082].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[3083].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[3084].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[3085].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[3086].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[3087].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[3088].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[3089].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[3090].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[3091].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[3092].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[3093].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[3094].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[3095].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x2eU))))) {
        vlSymsp->__Vcoverage[3096].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x2fU))))) {
        vlSymsp->__Vcoverage[3097].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x30U))))) {
        vlSymsp->__Vcoverage[3098].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x31U))))) {
        vlSymsp->__Vcoverage[3099].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x32U))))) {
        vlSymsp->__Vcoverage[3100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x33U))))) {
        vlSymsp->__Vcoverage[3101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x34U))))) {
        vlSymsp->__Vcoverage[3102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x35U))))) {
        vlSymsp->__Vcoverage[3103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x36U))))) {
        vlSymsp->__Vcoverage[3104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x37U))))) {
        vlSymsp->__Vcoverage[3105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x38U))))) {
        vlSymsp->__Vcoverage[3106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x39U))))) {
        vlSymsp->__Vcoverage[3107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x3aU))))) {
        vlSymsp->__Vcoverage[3108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x3bU))))) {
        vlSymsp->__Vcoverage[3109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x3cU))))) {
        vlSymsp->__Vcoverage[3110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x3dU))))) {
        vlSymsp->__Vcoverage[3111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
                                              >> 0x3eU))))) {
        vlSymsp->__Vcoverage[3112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[3113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__imul__istream_msg 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_D))) {
        vlSymsp->__Vcoverage[1841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_D;
    }
    vlSelf->top__DOT__DUT__DOT__reg_en_D = (1U & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_D)) 
                                                  | (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_D)));
    top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h93c28c56__0 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_D)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__reg_en_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__reg_en_D))) {
        vlSymsp->__Vcoverage[1349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__reg_en_D 
            = vlSelf->top__DOT__DUT__DOT__reg_en_D;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_D 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_D)) 
           & (IData)(top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h93c28c56__0));
    vlSelf->top__DOT__mngr2proc_rdy = ((IData)(top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h93c28c56__0) 
                                       & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mngr2proc_rdy_D));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__osquash_D 
        = ((IData)(top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h93c28c56__0) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_D));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__next_val_D))) {
        vlSymsp->__Vcoverage[1970].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__next_val_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_D;
    }
    vlSelf->top__DOT__DUT__DOT__imul_req_val_D = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_D) 
                                                  & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mul_D));
    if (((IData)(vlSelf->top__DOT__mngr2proc_rdy) ^ (IData)(vlSelf->top__DOT____Vtogcov__mngr2proc_rdy))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_rdy 
            = vlSelf->top__DOT__mngr2proc_rdy;
    }
    vlSelf->top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay 
        = ((IData)(vlSelf->top__DOT__src__DOT__src_val) 
           & ((IData)(vlSelf->top__DOT__mngr2proc_rdy) 
              & (0U == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__osquash_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__osquash_D))) {
        vlSymsp->__Vcoverage[1845].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__osquash_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__osquash_D;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_F) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__osquash_D) 
              | (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__osquash_X)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imul_req_val_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imul_req_val_D))) {
        vlSymsp->__Vcoverage[1358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imul_req_val_D 
            = vlSelf->top__DOT__DUT__DOT__imul_req_val_D;
    }
    if ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__state))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imul_req_val_D)))) {
            vlSymsp->__Vcoverage[3443].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__DUT__DOT__imul_req_val_D) {
            vlSymsp->__Vcoverage[3442].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) {
        if (vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) {
            if ((((IData)(vlSelf->top__DOT__src__DOT__src_val) 
                  & (IData)(vlSelf->top__DOT__mngr2proc_rdy)) 
                 & (0U == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay))) {
                vlSymsp->__Vcoverage[727].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ (((IData)(vlSelf->top__DOT__src__DOT__src_val) 
                           & (IData)(vlSelf->top__DOT__mngr2proc_rdy)) 
                          & (0U == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay))))) {
                vlSymsp->__Vcoverage[728].fetch_add(1, std::memory_order_relaxed);
            }
            vlSelf->top__DOT__src__DOT__src_rdy = ((IData)(vlSelf->top__DOT__mngr2proc_rdy) 
                                                   & (0U 
                                                      == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
        } else {
            vlSelf->top__DOT__src__DOT__src_rdy = 0U;
        }
    } else {
        vlSelf->top__DOT__src__DOT__src_rdy = ((IData)(vlSelf->top__DOT__mngr2proc_rdy) 
                                               & (0U 
                                                  == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__state))) {
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__nextState 
            = ((IData)(vlSelf->top__DOT__DUT__DOT__imul_req_val_D)
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__state))) {
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__nextState 
            = ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__done)
                ? 2U : 1U);
    } else if (VL_LIKELY((2U == (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__state)))) {
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__nextState 
            = ((IData)(vlSelf->top__DOT__DUT__DOT__imul_resp_rdy_X)
                ? 0U : 2U);
    } else {
        VL_STOP_MT("../lab1_imul/IntMulAlt.v", 315, "");
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__nextState = 0U;
    }
    if (((IData)(vlSelf->top__DOT__src__DOT__src_rdy) 
         ^ (IData)(vlSelf->top__DOT__src__DOT____Vtogcov__src_rdy))) {
        vlSymsp->__Vcoverage[513].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_rdy 
            = vlSelf->top__DOT__src__DOT__src_rdy;
    }
    vlSelf->top__DOT__src__DOT__src__DOT__index_en 
        = ((IData)(vlSelf->top__DOT__src__DOT__src_val) 
           & (IData)(vlSelf->top__DOT__src__DOT__src_rdy));
    if ((1U & (~ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state)))) {
        if (((IData)(vlSelf->top__DOT__src__DOT__src_val) 
             & (~ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay)))) {
            vlSymsp->__Vcoverage[724].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__src__DOT__src_val) 
                      & (~ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay)))))) {
            vlSymsp->__Vcoverage[725].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay) 
         ^ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[718].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__zero_cycle_delay 
            = vlSelf->top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay;
    }
    if (vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) {
        vlSelf->top__DOT__src__DOT__msg_delay__DOT__state_next = 1U;
        if (vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) {
            vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_en 
                = (0U < vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay);
            if ((((IData)(vlSelf->top__DOT__src__DOT__src_val) 
                  & (IData)(vlSelf->top__DOT__mngr2proc_rdy)) 
                 & (0U == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay))) {
                vlSelf->top__DOT__src__DOT__msg_delay__DOT__state_next = 0U;
            }
        } else {
            vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_en = 0U;
        }
    } else {
        vlSelf->top__DOT__src__DOT__msg_delay__DOT__state_next = 0U;
        if (((IData)(vlSelf->top__DOT__src__DOT__src_val) 
             & (~ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay)))) {
            vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_en = 1U;
            vlSelf->top__DOT__src__DOT__msg_delay__DOT__state_next = 1U;
        } else {
            vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_en = 0U;
        }
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_respstream_drop))) {
        vlSymsp->__Vcoverage[1166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_respstream_drop 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__nextState) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT____Vtogcov__nextState)))) {
        vlSymsp->__Vcoverage[3435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT____Vtogcov__nextState 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT____Vtogcov__nextState)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__nextState)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__nextState) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT____Vtogcov__nextState)))) {
        vlSymsp->__Vcoverage[3436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT____Vtogcov__nextState 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT____Vtogcov__nextState)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__nextState)));
    }
    if (((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_en) 
         ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_en))) {
        vlSymsp->__Vcoverage[547].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_en 
            = vlSelf->top__DOT__src__DOT__src__DOT__index_en;
    }
    if (((IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_en) 
         ^ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_en 
            = vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_en;
    }
    if (((IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state_next) 
         ^ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[719].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__state_next 
            = vlSelf->top__DOT__src__DOT__msg_delay__DOT__state_next;
    }
}
