// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__13(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__13\n"); );
    // Body
    if (vlSelf->top__DOT__reset) {
        vlSymsp->__Vcoverage[4189].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[5268].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
        vlSymsp->__Vcoverage[4190].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[5269].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__mem_clear) {
        vlSymsp->__Vcoverage[8101].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem_clear)))) {
        if (vlSelf->top__DOT__reset) {
            vlSymsp->__Vcoverage[8100].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
            if (vlSelf->top__DOT__reset) {
                vlSymsp->__Vcoverage[8099].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
                vlSymsp->__Vcoverage[8098].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if (((IData)(vlSelf->top__DOT__reset) ^ (IData)(vlSelf->top__DOT____Vtogcov__reset))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reset = vlSelf->top__DOT__reset;
    }
    if (((IData)(vlSelf->top__DOT__mem_clear) ^ (IData)(vlSelf->top__DOT____Vtogcov__mem_clear))) {
        vlSymsp->__Vcoverage[619].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mem_clear = vlSelf->top__DOT__mem_clear;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset)))) {
        vlSymsp->__Vcoverage[7928].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset 
            = ((2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset)))) {
        vlSymsp->__Vcoverage[7929].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset 
            = ((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max) 
               ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[684].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max 
            = ((0xeU & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)) 
               | (1U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max) 
               ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max 
            = ((0xdU & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)) 
               | (2U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max) 
               ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[686].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max 
            = ((0xbU & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)) 
               | (4U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max) 
               ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[687].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max 
            = ((7U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)) 
               | (8U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[1076].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max 
            = ((0xeU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)) 
               | (1U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[1077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max 
            = ((0xdU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)) 
               | (2U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[1078].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max 
            = ((0xbU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)) 
               | (4U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[1079].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max 
            = ((7U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)) 
               | (8U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[7902].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xffeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[7903].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xffdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[7904].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xffbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[7905].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xff7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[7906].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xfefU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[7907].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xfdfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[7908].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xfbfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[7909].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xf7fU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[7910].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xeffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x100U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[7911].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xdffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x200U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[7912].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xbffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x400U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[7913].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0x7ffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x800U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__14(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__14\n"); );
    // Body
    if (vlSelf->top__DOT__flush) {
        vlSymsp->__Vcoverage[4621].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[5919].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__flush)))) {
        vlSymsp->__Vcoverage[4620].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[5918].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__flush) ^ (IData)(vlSelf->top__DOT____Vtogcov__flush))) {
        vlSymsp->__Vcoverage[620].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__flush = vlSelf->top__DOT__flush;
    }
    if (((IData)(vlSelf->top__DOT__cpu_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__cpu_en))) {
        vlSymsp->__Vcoverage[622].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cpu_en = vlSelf->top__DOT__cpu_en;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[7806].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[7807].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[7808].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[7809].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[7810].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[7811].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[7812].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[7813].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[7814].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[7815].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[7816].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[7817].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[7818].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[7819].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[7820].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[7821].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[7822].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[7823].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[7824].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[7825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[7826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[7827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[7828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[7829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[7830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[7831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[7832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[7833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[7834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[7835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[7836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[7837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    if (vlSelf->top__DOT__mem_clear) {
        if (vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared) {
            vlSymsp->__Vcoverage[8079].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared)))) {
            vlSymsp->__Vcoverage[8078].fetch_add(1, std::memory_order_relaxed);
        }
    }
    vlSelf->top__DOT__src__DOT__src__DOT__done_next 
        = ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index) 
           == (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max));
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem_clear)))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
                if (vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en1_M) {
                    vlSymsp->__Vcoverage[8096].fetch_add(1, std::memory_order_relaxed);
                    if ((3U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                      >> 0xaU)))) {
                        vlSymsp->__Vcoverage[8092].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((3U != (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                      >> 0xaU)))) {
                        if ((4U != (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                          >> 0xaU)))) {
                            if ((5U != (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                              >> 0xaU)))) {
                                vlSymsp->__Vcoverage[8095].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((5U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                              >> 0xaU)))) {
                                vlSymsp->__Vcoverage[8094].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((4U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                          >> 0xaU)))) {
                            vlSymsp->__Vcoverage[8093].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en1_M)))) {
                    vlSymsp->__Vcoverage[8097].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__write_en1_M)))) {
                    vlSymsp->__Vcoverage[8085].fetch_add(1, std::memory_order_relaxed);
                }
                if (vlSelf->top__DOT__mem__DOT__mem__DOT__write_en1_M) {
                    vlSymsp->__Vcoverage[8084].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en0_M)))) {
                    vlSymsp->__Vcoverage[8091].fetch_add(1, std::memory_order_relaxed);
                }
                if (vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en0_M) {
                    vlSymsp->__Vcoverage[8090].fetch_add(1, std::memory_order_relaxed);
                    if ((3U != (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                      >> 0xaU)))) {
                        if ((4U != (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                          >> 0xaU)))) {
                            if ((5U != (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                              >> 0xaU)))) {
                                vlSymsp->__Vcoverage[8089].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((5U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                              >> 0xaU)))) {
                                vlSymsp->__Vcoverage[8088].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((4U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                          >> 0xaU)))) {
                            vlSymsp->__Vcoverage[8087].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((3U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                      >> 0xaU)))) {
                        vlSymsp->__Vcoverage[8086].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__write_en0_M)))) {
                    vlSymsp->__Vcoverage[8082].fetch_add(1, std::memory_order_relaxed);
                }
                if (vlSelf->top__DOT__mem__DOT__mem__DOT__write_en0_M) {
                    vlSymsp->__Vcoverage[8081].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    vlSelf->top__DOT__snk_done = ((~ (IData)(vlSelf->top__DOT__src__DOT__src__DOT__reset_reg)) 
                                  & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index) 
                                     == (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max)));
    __Vilp = 0x508U;
    while ((__Vilp <= 0xfffU)) {
        vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[__Vilp] 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__m
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__2\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    __Vilp = 0U;
    while ((__Vilp <= 0x507U)) {
        vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[__Vilp] 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__m
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if (vlSelf->top__DOT__mem_clear) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared)))) {
            vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i = 0U;
            while (VL_GTS_III(32, 0x1000U, vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i)) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i)] = 0U;
                vlSymsp->__Vcoverage[8077].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i 
                    = ((IData)(1U) + vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i);
            }
        }
    } else if (vlSelf->top__DOT__reset) {
        __Vilp = 0U;
        while ((__Vilp <= 0xfffU)) {
            vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[__Vilp] 
                = vlSelf->top__DOT__mem__DOT__mem__DOT__m_load
                [__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
        if (vlSelf->top__DOT__mem__DOT__mem__DOT__write_en0_M) {
            vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i = 0U;
            while ((vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i 
                    < (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_msg_len_modified_M))) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                                 >> 4U))] 
                    = (((~ ((IData)(0xffU) << (0x1fU 
                                               & ((0x18U 
                                                   & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                      << 1U)) 
                                                  + 
                                                  (vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i 
                                                   << 3U))))) 
                        & vlSelf->top__DOT__mem__DOT__mem__DOT__m_next
                        [(0xfffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                    >> 4U))]) | (0xffffffffULL 
                                                 & ((0xffU 
                                                     & (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i)))
                                                          ? 0U
                                                          : 
                                                         (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[
                                                          (((IData)(7U) 
                                                            + 
                                                            (0x1fU 
                                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i))) 
                                                           >> 5U)] 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i))))) 
                                                        | (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                                                           >> 
                                                           (0x1fU 
                                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i))))) 
                                                    << 
                                                    (0x1fU 
                                                     & ((0x18U 
                                                         & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                            << 1U)) 
                                                        + 
                                                        (vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i 
                                                         << 3U))))));
                vlSymsp->__Vcoverage[8080].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i 
                    = ((IData)(1U) + vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i);
            }
        }
        if (vlSelf->top__DOT__mem__DOT__mem__DOT__write_en1_M) {
            vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i = 0U;
            while ((vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i 
                    < (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_msg_len_modified_M))) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                                 >> 4U))] 
                    = (((~ ((IData)(0xffU) << (0x1fU 
                                               & ((0x18U 
                                                   & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                      << 1U)) 
                                                  + 
                                                  (vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i 
                                                   << 3U))))) 
                        & vlSelf->top__DOT__mem__DOT__mem__DOT__m_next
                        [(0xfffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                    >> 4U))]) | (0xffffffffULL 
                                                 & ((0xffU 
                                                     & (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i)))
                                                          ? 0U
                                                          : 
                                                         (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[
                                                          (((IData)(7U) 
                                                            + 
                                                            (0x1fU 
                                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i))) 
                                                           >> 5U)] 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i))))) 
                                                        | (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                                                           >> 
                                                           (0x1fU 
                                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i))))) 
                                                    << 
                                                    (0x1fU 
                                                     & ((0x18U 
                                                         & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                            << 1U)) 
                                                        + 
                                                        (vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i 
                                                         << 3U))))));
                vlSymsp->__Vcoverage[8083].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i 
                    = ((IData)(1U) + vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i);
            }
        }
        if (vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en0_M) {
            if ((3U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                              >> 0xaU)))) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                                 >> 4U))] 
                    = (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       + vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M);
            } else if ((4U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                     >> 0xaU)))) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                                 >> 4U))] 
                    = (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M);
            } else if ((5U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                     >> 0xaU)))) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                                 >> 4U))] 
                    = (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       | vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M);
            }
        }
        if (vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en1_M) {
            if ((3U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                              >> 0xaU)))) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                                 >> 4U))] 
                    = (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       + vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M);
            } else if ((4U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                     >> 0xaU)))) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                                 >> 4U))] 
                    = (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M);
            } else if ((5U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                     >> 0xaU)))) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                                 >> 4U))] 
                    = (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       | vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M);
            }
        }
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__3\n"); );
    // Body
    if (((IData)(vlSelf->top__DOT__src__DOT__src__DOT__done_next) 
         ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__done_next))) {
        vlSymsp->__Vcoverage[726].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__done_next 
            = vlSelf->top__DOT__src__DOT__src__DOT__done_next;
    }
    if (((IData)(vlSelf->top__DOT__snk_done) ^ (IData)(vlSelf->top__DOT____Vtogcov__snk_done))) {
        vlSymsp->__Vcoverage[618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__snk_done = vlSelf->top__DOT__snk_done;
    }
    vlSelf->top__DOT__sink__DOT__sink_rdy = (1U & (
                                                   (~ (IData)(vlSelf->top__DOT__src__DOT__src__DOT__reset_reg)) 
                                                   & (~ (IData)(vlSelf->top__DOT__snk_done))));
    if (((IData)(vlSelf->top__DOT__sink__DOT__sink_rdy) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT____Vtogcov__sink_rdy))) {
        vlSymsp->__Vcoverage[890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_rdy 
            = vlSelf->top__DOT__sink__DOT__sink_rdy;
    }
    vlSelf->top__DOT__proc2mngr_rdy = ((IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state)
                                        ? ((IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state) 
                                           & ((IData)(vlSelf->top__DOT__sink__DOT__sink_rdy) 
                                              & (0U 
                                                 == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay)))
                                        : ((IData)(vlSelf->top__DOT__sink__DOT__sink_rdy) 
                                           & (0U == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num)));
    if (((IData)(vlSelf->top__DOT__proc2mngr_rdy) ^ (IData)(vlSelf->top__DOT____Vtogcov__proc2mngr_rdy))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_rdy 
            = vlSelf->top__DOT__proc2mngr_rdy;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__4\n"); );
    // Body
    if ((1U & (~ ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__state))) {
                if (vlSelf->top__DOT__flush) {
                    vlSymsp->__Vcoverage[4201].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__flush)))) {
                    if ((1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__hit)))) {
                        vlSymsp->__Vcoverage[4200].fetch_add(1, std::memory_order_relaxed);
                        if (vlSelf->top__DOT__cache__DOT__icache__DOT__line_dirty) {
                            vlSymsp->__Vcoverage[4197].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__line_dirty)))) {
                            vlSymsp->__Vcoverage[4198].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if (vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__hit) {
                        vlSymsp->__Vcoverage[4199].fetch_add(1, std::memory_order_relaxed);
                    }
                }
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__state)))) {
                if (vlSelf->top__DOT__flush) {
                    vlSymsp->__Vcoverage[4193].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    if ((4U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__state))) {
                if ((1U & (~ ((0U == vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty) 
                              & (~ (IData)(vlSelf->top__DOT__flush)))))) {
                    vlSymsp->__Vcoverage[4214].fetch_add(1, std::memory_order_relaxed);
                }
                if (((0U == vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty) 
                     & (~ (IData)(vlSelf->top__DOT__flush)))) {
                    vlSymsp->__Vcoverage[4213].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state))) {
                if (vlSelf->top__DOT__flush) {
                    vlSymsp->__Vcoverage[5282].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__flush)))) {
                    if (vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__hit) {
                        vlSymsp->__Vcoverage[5280].fetch_add(1, std::memory_order_relaxed);
                        if (vlSelf->top__DOT__cache__DOT__dcache__DOT__tarray0_match) {
                            vlSymsp->__Vcoverage[5276].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__tarray0_match)))) {
                            vlSymsp->__Vcoverage[5277].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__hit)))) {
                        vlSymsp->__Vcoverage[5281].fetch_add(1, std::memory_order_relaxed);
                        if ((((~ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__lru)) 
                              & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__line0_dirty)) 
                             | ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__lru) 
                                & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__line1_dirty)))) {
                            vlSymsp->__Vcoverage[5278].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (~ (((~ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__lru)) 
                                       & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__line0_dirty)) 
                                      | ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__lru) 
                                         & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__line1_dirty)))))) {
                            vlSymsp->__Vcoverage[5279].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state)))) {
                if (vlSelf->top__DOT__flush) {
                    vlSymsp->__Vcoverage[5272].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    if ((4U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state))) {
                if (((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__all_flushed) 
                     & (~ (IData)(vlSelf->top__DOT__flush)))) {
                    vlSymsp->__Vcoverage[5298].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__all_flushed) 
                              & (~ (IData)(vlSelf->top__DOT__flush)))))) {
                    vlSymsp->__Vcoverage[5299].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
        vlSelf->top__DOT__cache__DOT__dcache__DOT__way_select 
            = (1U & ((~ ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state) 
                         >> 1U)) & ((1U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state))
                                     ? (0U == vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0)
                                     : (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__lru))));
    } else {
        vlSelf->top__DOT__cache__DOT__dcache__DOT__way_select 
            = (1U & ((2U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state))
                      ? (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__lru)
                      : ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state) 
                         & ((~ (IData)(vlSelf->top__DOT__flush)) 
                            & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__hit)
                                ? (~ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__tarray0_match))
                                : (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__lru))))));
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__flush)))) {
        if ((2U == (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__state))) {
            vlSymsp->__Vcoverage[4618].fetch_add(1, std::memory_order_relaxed);
        }
        if ((2U != (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__state))) {
            vlSymsp->__Vcoverage[4619].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((2U == (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state)) 
                      & (~ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__way_select)))))) {
            if (((2U == (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state)) 
                 & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__way_select))) {
                vlSymsp->__Vcoverage[5913].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ ((2U == (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state)) 
                          & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__way_select))))) {
                vlSymsp->__Vcoverage[5914].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if (((2U == (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state)) 
             & (~ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__way_select)))) {
            vlSymsp->__Vcoverage[5915].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (vlSelf->top__DOT__flush) {
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
            = ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag
                [vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__flush_index] 
                << 0xbU) | (((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__flush_index) 
                             << 6U) | (0x3cU & ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_word) 
                                                << 2U))));
        if (vlSelf->top__DOT__cache__DOT__dcache__DOT__way_select) {
            vlSymsp->__Vcoverage[5917].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                = ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag1
                    [vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__flush_index] 
                    << 0xbU) | (((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__flush_index) 
                                 << 6U) | (0x3cU & 
                                           ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_word) 
                                            << 2U))));
        } else {
            vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                = ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag0
                    [vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__flush_index] 
                    << 0xbU) | (((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__flush_index) 
                                 << 6U) | (0x3cU & 
                                           ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_word) 
                                            << 2U))));
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__way_select)))) {
            vlSymsp->__Vcoverage[5916].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
            = ((2U == (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__state))
                ? ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag
                    [(0x1fU & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__incoming_msg[1U] 
                               >> 8U))] << 0xbU) | 
                   ((0x7c0U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__incoming_msg[1U] 
                               >> 2U)) | ((0x3cU & 
                                           ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_word) 
                                            << 2U)) 
                                          | (3U & (
                                                   vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__incoming_msg[1U] 
                                                   >> 2U)))))
                : ((0xfffff800U & ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__incoming_msg[2U] 
                                    << 0x1eU) | (0x3ffff800U 
                                                 & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__incoming_msg[1U] 
                                                    >> 2U)))) 
                   | ((0x7c0U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__incoming_msg[1U] 
                                 >> 2U)) | ((0x3cU 
                                             & ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_word) 
                                                << 2U)) 
                                            | (3U & 
                                               (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__incoming_msg[1U] 
                                                >> 2U))))));
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
            = (((2U == (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state)) 
                & (~ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__way_select)))
                ? ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag0
                    [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                               >> 8U))] << 0xbU) | 
                   ((0x7c0U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                               >> 2U)) | ((0x3cU & 
                                           ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_word) 
                                            << 2U)) 
                                          | (3U & (
                                                   vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                                                   >> 2U)))))
                : (((2U == (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state)) 
                    & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__way_select))
                    ? ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag1
                        [(0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                                   >> 8U))] << 0xbU) 
                       | ((0x7c0U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                                     >> 2U)) | ((0x3cU 
                                                 & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_word) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                                                      >> 2U)))))
                    : ((0xfffff800U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[2U] 
                                        << 0x1eU) | 
                                       (0x3ffff800U 
                                        & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                                           >> 2U)))) 
                       | ((0x7c0U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                                     >> 2U)) | ((0x3cU 
                                                 & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_word) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                                                      >> 2U)))))));
    }
    if (((IData)(vlSelf->top__DOT__mngr2proc_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__mngr2proc_val))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_val 
            = vlSelf->top__DOT__mngr2proc_val;
    }
    vlSelf->top__DOT__mngr2proc_msg = ((IData)(vlSelf->top__DOT__mngr2proc_val)
                                        ? vlSelf->top__DOT__src__DOT__src_msg
                                        : 0U);
    if ((1U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__req_addr_mem))) {
        vlSymsp->__Vcoverage[4607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__req_addr_mem 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__req_addr_mem) 
               | (1U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__req_addr_mem))) {
        vlSymsp->__Vcoverage[4608].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__req_addr_mem 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__req_addr_mem) 
               | (2U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__req_addr_mem))) {
        vlSymsp->__Vcoverage[4609].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__req_addr_mem 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__req_addr_mem) 
               | (4U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__req_addr_mem))) {
        vlSymsp->__Vcoverage[4610].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__req_addr_mem 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__req_addr_mem) 
               | (8U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__req_addr_mem))) {
        vlSymsp->__Vcoverage[4611].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__req_addr_mem 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__req_addr_mem) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__req_addr_mem))) {
        vlSymsp->__Vcoverage[4612].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__req_addr_mem 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__req_addr_mem) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__req_addr_mem))) {
        vlSymsp->__Vcoverage[4613].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__req_addr_mem 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__req_addr_mem) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__req_addr_mem))) {
        vlSymsp->__Vcoverage[4614].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__req_addr_mem 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__req_addr_mem) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__req_addr_mem))) {
        vlSymsp->__Vcoverage[4615].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__req_addr_mem 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__req_addr_mem) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__req_addr_mem))) {
        vlSymsp->__Vcoverage[4616].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__req_addr_mem 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__req_addr_mem) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__req_addr_mem))) {
        vlSymsp->__Vcoverage[4617].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__req_addr_mem 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__req_addr_mem) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
                >> 0xbU) ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag))) {
        vlSymsp->__Vcoverage[4304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
            = ((0x1ffffeU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag) 
               | (1U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
                        >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
                >> 0xcU) ^ (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
                            >> 1U)))) {
        vlSymsp->__Vcoverage[4305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
            = ((0x1ffffdU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag) 
               | (2U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
                        >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
                >> 0xdU) ^ (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
                            >> 2U)))) {
        vlSymsp->__Vcoverage[4306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
            = ((0x1ffffbU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag) 
               | (4U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
                        >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
                >> 0xeU) ^ (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
                            >> 3U)))) {
        vlSymsp->__Vcoverage[4307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
            = ((0x1ffff7U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag) 
               | (8U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
                        >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
                >> 0xfU) ^ (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
                            >> 4U)))) {
        vlSymsp->__Vcoverage[4308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
            = ((0x1fffefU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag) 
               | (0x10U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
                           >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
                >> 0x10U) ^ (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
                             >> 5U)))) {
        vlSymsp->__Vcoverage[4309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
            = ((0x1fffdfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag) 
               | (0x20U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
                           >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
                >> 0x11U) ^ (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
                             >> 6U)))) {
        vlSymsp->__Vcoverage[4310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
            = ((0x1fffbfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag) 
               | (0x40U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
                           >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
                >> 0x12U) ^ (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
                             >> 7U)))) {
        vlSymsp->__Vcoverage[4311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
            = ((0x1fff7fU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag) 
               | (0x80U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
                           >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
                >> 0x13U) ^ (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
                             >> 8U)))) {
        vlSymsp->__Vcoverage[4312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
            = ((0x1ffeffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag) 
               | (0x100U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
                            >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
                >> 0x14U) ^ (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
                             >> 9U)))) {
        vlSymsp->__Vcoverage[4313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
            = ((0x1ffdffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag) 
               | (0x200U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
                            >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
                >> 0x15U) ^ (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
                             >> 0xaU)))) {
        vlSymsp->__Vcoverage[4314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
            = ((0x1ffbffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag) 
               | (0x400U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
                            >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
                >> 0x16U) ^ (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
                             >> 0xbU)))) {
        vlSymsp->__Vcoverage[4315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
            = ((0x1ff7ffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag) 
               | (0x800U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
                            >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
                >> 0x17U) ^ (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
                             >> 0xcU)))) {
        vlSymsp->__Vcoverage[4316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
            = ((0x1fefffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag) 
               | (0x1000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
                             >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
                >> 0x18U) ^ (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
                             >> 0xdU)))) {
        vlSymsp->__Vcoverage[4317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
            = ((0x1fdfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag) 
               | (0x2000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
                             >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
                >> 0x19U) ^ (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
                             >> 0xeU)))) {
        vlSymsp->__Vcoverage[4318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
            = ((0x1fbfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag) 
               | (0x4000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
                             >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
                >> 0x1aU) ^ (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
                             >> 0xfU)))) {
        vlSymsp->__Vcoverage[4319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
            = ((0x1f7fffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag) 
               | (0x8000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
                             >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
                >> 0x1bU) ^ (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
                             >> 0x10U)))) {
        vlSymsp->__Vcoverage[4320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
            = ((0x1effffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag) 
               | (0x10000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
                              >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
                >> 0x1cU) ^ (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
                             >> 0x11U)))) {
        vlSymsp->__Vcoverage[4321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
            = ((0x1dffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag) 
               | (0x20000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
                              >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
                >> 0x1dU) ^ (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
                             >> 0x12U)))) {
        vlSymsp->__Vcoverage[4322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
            = ((0x1bffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag) 
               | (0x40000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
                              >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
                >> 0x1eU) ^ (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
                             >> 0x13U)))) {
        vlSymsp->__Vcoverage[4323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
            = ((0x17ffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag) 
               | (0x80000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
                              >> 0xbU)));
    }
    if (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
          >> 0x1fU) ^ (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
                       >> 0x14U))) {
        vlSymsp->__Vcoverage[4324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
            = ((0xfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__mem_req_tag) 
               | (0x100000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
                               >> 0xbU)));
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq0_val)
            ? vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem
            : 0U);
    if ((1U & (vlSelf->top__DOT__mngr2proc_msg ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (1U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((2U & (vlSelf->top__DOT__mngr2proc_msg ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (2U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((4U & (vlSelf->top__DOT__mngr2proc_msg ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (4U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((8U & (vlSelf->top__DOT__mngr2proc_msg ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (8U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x10U & (vlSelf->top__DOT__mngr2proc_msg ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x10U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x20U & (vlSelf->top__DOT__mngr2proc_msg ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x20U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x40U & (vlSelf->top__DOT__mngr2proc_msg ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x40U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x80U & (vlSelf->top__DOT__mngr2proc_msg ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x80U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x100U & (vlSelf->top__DOT__mngr2proc_msg 
                   ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x100U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x200U & (vlSelf->top__DOT__mngr2proc_msg 
                   ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x200U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x400U & (vlSelf->top__DOT__mngr2proc_msg 
                   ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x400U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x800U & (vlSelf->top__DOT__mngr2proc_msg 
                   ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x800U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x1000U & (vlSelf->top__DOT__mngr2proc_msg 
                    ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x1000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x2000U & (vlSelf->top__DOT__mngr2proc_msg 
                    ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x2000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x4000U & (vlSelf->top__DOT__mngr2proc_msg 
                    ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x4000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x8000U & (vlSelf->top__DOT__mngr2proc_msg 
                    ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x8000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x10000U & (vlSelf->top__DOT__mngr2proc_msg 
                     ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x10000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x20000U & (vlSelf->top__DOT__mngr2proc_msg 
                     ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x20000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x40000U & (vlSelf->top__DOT__mngr2proc_msg 
                     ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x40000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x80000U & (vlSelf->top__DOT__mngr2proc_msg 
                     ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x80000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x100000U & (vlSelf->top__DOT__mngr2proc_msg 
                      ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x100000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x200000U & (vlSelf->top__DOT__mngr2proc_msg 
                      ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x200000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x400000U & (vlSelf->top__DOT__mngr2proc_msg 
                      ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x400000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x800000U & (vlSelf->top__DOT__mngr2proc_msg 
                      ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x800000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mngr2proc_msg 
                       ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x1000000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mngr2proc_msg 
                       ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x2000000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mngr2proc_msg 
                       ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x4000000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mngr2proc_msg 
                       ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x8000000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mngr2proc_msg 
                        ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x10000000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mngr2proc_msg 
                        ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x20000000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mngr2proc_msg 
                        ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x40000000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if (((vlSelf->top__DOT__mngr2proc_msg ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x80000000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if (vlSelf->top__DOT__cache__DOT__dcache__DOT__way_select) {
        if (vlSelf->top__DOT__cache__DOT__dcache__DOT__way_select) {
            vlSymsp->__Vcoverage[7091].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out 
                = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out;
        } else {
            vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__way_select)))) {
            vlSymsp->__Vcoverage[7092].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out 
            = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__way_select)))) {
        vlSymsp->__Vcoverage[7090].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__way_select) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT____Vtogcov__way_select))) {
        vlSymsp->__Vcoverage[5241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT____Vtogcov__way_select 
            = vlSelf->top__DOT__cache__DOT__dcache__DOT__way_select;
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[8402].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_addr_mem))) {
        vlSymsp->__Vcoverage[5902].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_addr_mem 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_addr_mem) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_addr_mem))) {
        vlSymsp->__Vcoverage[5903].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_addr_mem 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_addr_mem) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_addr_mem))) {
        vlSymsp->__Vcoverage[5904].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_addr_mem 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_addr_mem) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_addr_mem))) {
        vlSymsp->__Vcoverage[5905].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_addr_mem 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_addr_mem) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_addr_mem))) {
        vlSymsp->__Vcoverage[5906].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_addr_mem 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_addr_mem) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_addr_mem))) {
        vlSymsp->__Vcoverage[5907].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_addr_mem 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_addr_mem) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_addr_mem))) {
        vlSymsp->__Vcoverage[5908].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_addr_mem 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_addr_mem) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_addr_mem))) {
        vlSymsp->__Vcoverage[5909].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_addr_mem 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_addr_mem) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_addr_mem))) {
        vlSymsp->__Vcoverage[5910].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_addr_mem 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_addr_mem) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_addr_mem))) {
        vlSymsp->__Vcoverage[5911].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_addr_mem 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_addr_mem) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_addr_mem))) {
        vlSymsp->__Vcoverage[5912].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_addr_mem 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_addr_mem) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                >> 0xbU) ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag))) {
        vlSymsp->__Vcoverage[5389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
            = ((0x1ffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag) 
               | (1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                        >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                >> 0xcU) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
                            >> 1U)))) {
        vlSymsp->__Vcoverage[5390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
            = ((0x1ffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag) 
               | (2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                        >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                >> 0xdU) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
                            >> 2U)))) {
        vlSymsp->__Vcoverage[5391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
            = ((0x1ffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag) 
               | (4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                        >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                >> 0xeU) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
                            >> 3U)))) {
        vlSymsp->__Vcoverage[5392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
            = ((0x1ffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag) 
               | (8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                        >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                >> 0xfU) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
                            >> 4U)))) {
        vlSymsp->__Vcoverage[5393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
            = ((0x1fffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag) 
               | (0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                           >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                >> 0x10U) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
                             >> 5U)))) {
        vlSymsp->__Vcoverage[5394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
            = ((0x1fffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag) 
               | (0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                           >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                >> 0x11U) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
                             >> 6U)))) {
        vlSymsp->__Vcoverage[5395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
            = ((0x1fffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag) 
               | (0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                           >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                >> 0x12U) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
                             >> 7U)))) {
        vlSymsp->__Vcoverage[5396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
            = ((0x1fff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag) 
               | (0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                           >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                >> 0x13U) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
                             >> 8U)))) {
        vlSymsp->__Vcoverage[5397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
            = ((0x1ffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag) 
               | (0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                            >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                >> 0x14U) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
                             >> 9U)))) {
        vlSymsp->__Vcoverage[5398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
            = ((0x1ffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag) 
               | (0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                            >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                >> 0x15U) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
                             >> 0xaU)))) {
        vlSymsp->__Vcoverage[5399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
            = ((0x1ffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag) 
               | (0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                            >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                >> 0x16U) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
                             >> 0xbU)))) {
        vlSymsp->__Vcoverage[5400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
            = ((0x1ff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag) 
               | (0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                            >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                >> 0x17U) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
                             >> 0xcU)))) {
        vlSymsp->__Vcoverage[5401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
            = ((0x1fefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag) 
               | (0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                             >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                >> 0x18U) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
                             >> 0xdU)))) {
        vlSymsp->__Vcoverage[5402].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
            = ((0x1fdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag) 
               | (0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                             >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                >> 0x19U) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
                             >> 0xeU)))) {
        vlSymsp->__Vcoverage[5403].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
            = ((0x1fbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag) 
               | (0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                             >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                >> 0x1aU) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
                             >> 0xfU)))) {
        vlSymsp->__Vcoverage[5404].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
            = ((0x1f7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag) 
               | (0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                             >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                >> 0x1bU) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
                             >> 0x10U)))) {
        vlSymsp->__Vcoverage[5405].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
            = ((0x1effffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag) 
               | (0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                              >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                >> 0x1cU) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
                             >> 0x11U)))) {
        vlSymsp->__Vcoverage[5406].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
            = ((0x1dffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag) 
               | (0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                              >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                >> 0x1dU) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
                             >> 0x12U)))) {
        vlSymsp->__Vcoverage[5407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
            = ((0x1bffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag) 
               | (0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                              >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                >> 0x1eU) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
                             >> 0x13U)))) {
        vlSymsp->__Vcoverage[5408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
            = ((0x17ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag) 
               | (0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                              >> 0xbU)));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
          >> 0x1fU) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
                       >> 0x14U))) {
        vlSymsp->__Vcoverage[5409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag 
            = ((0xfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__mem_req_tag) 
               | (0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                               >> 0xbU)));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out))) {
        vlSymsp->__Vcoverage[5699].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out))) {
        vlSymsp->__Vcoverage[5700].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out))) {
        vlSymsp->__Vcoverage[5701].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out))) {
        vlSymsp->__Vcoverage[5702].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out))) {
        vlSymsp->__Vcoverage[5703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out))) {
        vlSymsp->__Vcoverage[5704].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out))) {
        vlSymsp->__Vcoverage[5705].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out))) {
        vlSymsp->__Vcoverage[5706].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out))) {
        vlSymsp->__Vcoverage[5707].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out))) {
        vlSymsp->__Vcoverage[5708].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out))) {
        vlSymsp->__Vcoverage[5709].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out))) {
        vlSymsp->__Vcoverage[5710].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out))) {
        vlSymsp->__Vcoverage[5711].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out))) {
        vlSymsp->__Vcoverage[5712].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out))) {
        vlSymsp->__Vcoverage[5713].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out))) {
        vlSymsp->__Vcoverage[5714].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out))) {
        vlSymsp->__Vcoverage[5715].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out))) {
        vlSymsp->__Vcoverage[5716].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out))) {
        vlSymsp->__Vcoverage[5717].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out))) {
        vlSymsp->__Vcoverage[5718].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out))) {
        vlSymsp->__Vcoverage[5719].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out))) {
        vlSymsp->__Vcoverage[5720].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out))) {
        vlSymsp->__Vcoverage[5721].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out))) {
        vlSymsp->__Vcoverage[5722].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out))) {
        vlSymsp->__Vcoverage[5723].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out))) {
        vlSymsp->__Vcoverage[5724].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out))) {
        vlSymsp->__Vcoverage[5725].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out))) {
        vlSymsp->__Vcoverage[5726].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out))) {
        vlSymsp->__Vcoverage[5727].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out))) {
        vlSymsp->__Vcoverage[5728].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out))) {
        vlSymsp->__Vcoverage[5729].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5730].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__way_data_out) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out));
    }
    vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out 
        = ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__darray_en)
            ? vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out
            : 0U);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq1_val)
            ? vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem
            : 0U);
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8485].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8497].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8507].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8509].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8510].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8511].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[8512].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out));
    }
    vlSelf->top__DOT__cache1_req_msg[0U] = (IData)((QData)((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out)));
    vlSelf->top__DOT__cache1_req_msg[1U] = ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                                             << 2U) 
                                            | (IData)(
                                                      ((QData)((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out)) 
                                                       >> 0x20U)));
    vlSelf->top__DOT__cache1_req_msg[2U] = (((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__mem_action) 
                                             << 0xaU) 
                                            | (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                                               >> 0x1eU));
    if (vlSelf->top__DOT__mem__DOT__mem_memreq1_val) {
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
            = vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out;
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
            = vlSelf->top__DOT__cache1_req_msg[0U];
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
            = vlSelf->top__DOT__cache1_req_msg[1U];
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
            = vlSelf->top__DOT__cache1_req_msg[2U];
    } else {
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] = 0U;
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8513].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8514].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8515].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8516].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8517].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8518].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8519].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8520].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8521].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8522].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8523].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8524].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8525].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8526].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8527].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8528].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8529].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8530].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8531].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8532].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8533].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8534].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8535].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8536].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8537].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8538].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8539].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8540].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8541].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8542].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8543].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[8544].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x400U & (vlSelf->top__DOT__cache1_req_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U] 
            = ((0x1bffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]) 
               | (0x400U & vlSelf->top__DOT__cache1_req_msg[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache1_req_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U] 
            = ((0x17ffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]) 
               | (0x800U & vlSelf->top__DOT__cache1_req_msg[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache1_req_msg[2U] 
                    ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U] 
            = ((0xfffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]) 
               | (0x1000U & vlSelf->top__DOT__cache1_req_msg[2U]));
    }
    if ((4U & (vlSelf->top__DOT__cache1_req_msg[2U] 
               ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U] 
            = ((0x1ffbU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]) 
               | (4U & vlSelf->top__DOT__cache1_req_msg[2U]));
    }
    if ((8U & (vlSelf->top__DOT__cache1_req_msg[2U] 
               ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U] 
            = ((0x1ff7U & vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]) 
               | (8U & vlSelf->top__DOT__cache1_req_msg[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache1_req_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U] 
            = ((0x1fefU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]) 
               | (0x10U & vlSelf->top__DOT__cache1_req_msg[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache1_req_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U] 
            = ((0x1fdfU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]) 
               | (0x20U & vlSelf->top__DOT__cache1_req_msg[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache1_req_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U] 
            = ((0x1fbfU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]) 
               | (0x40U & vlSelf->top__DOT__cache1_req_msg[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache1_req_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U] 
            = ((0x1f7fU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]) 
               | (0x80U & vlSelf->top__DOT__cache1_req_msg[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache1_req_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U] 
            = ((0x1effU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]) 
               | (0x100U & vlSelf->top__DOT__cache1_req_msg[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache1_req_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U] 
            = ((0x1dffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]) 
               | (0x200U & vlSelf->top__DOT__cache1_req_msg[2U]));
    }
    if ((4U & (vlSelf->top__DOT__cache1_req_msg[1U] 
               ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (4U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((8U & (vlSelf->top__DOT__cache1_req_msg[1U] 
               ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (8U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x10U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x20U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x40U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x80U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x100U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x200U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x400U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x800U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x1000U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x2000U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x4000U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x8000U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x10000U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x20000U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x40000U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x80000U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x100000U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[485].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x200000U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x400000U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x800000U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x1000000U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x2000000U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x4000000U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x8000000U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x10000000U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x20000000U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x40000000U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if (((vlSelf->top__DOT__cache1_req_msg[1U] ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x80000000U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((1U & (vlSelf->top__DOT__cache1_req_msg[2U] 
               ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]))) {
        vlSymsp->__Vcoverage[496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U] 
            = ((0x1ffeU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]) 
               | (1U & vlSelf->top__DOT__cache1_req_msg[2U]));
    }
    if ((2U & (vlSelf->top__DOT__cache1_req_msg[2U] 
               ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]))) {
        vlSymsp->__Vcoverage[497].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U] 
            = ((0x1ffdU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]) 
               | (2U & vlSelf->top__DOT__cache1_req_msg[2U]));
    }
    if ((1U & (vlSelf->top__DOT__cache1_req_msg[1U] 
               ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (1U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((2U & (vlSelf->top__DOT__cache1_req_msg[1U] 
               ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (2U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((1U & (vlSelf->top__DOT__cache1_req_msg[0U] 
               ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (1U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((2U & (vlSelf->top__DOT__cache1_req_msg[0U] 
               ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (2U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((4U & (vlSelf->top__DOT__cache1_req_msg[0U] 
               ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (4U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((8U & (vlSelf->top__DOT__cache1_req_msg[0U] 
               ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (8U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x10U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x20U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x40U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[507].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x80U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x100U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[509].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x200U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[510].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x400U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[511].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x800U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[512].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x1000U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[513].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x2000U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[514].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x4000U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[515].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x8000U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[516].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x10000U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[517].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x20000U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[518].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x40000U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[519].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x80000U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[520].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x100000U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[521].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x200000U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[522].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x400000U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[523].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x800000U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[524].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x1000000U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[525].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x2000000U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[526].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x4000000U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[527].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x8000000U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[528].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x10000000U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[529].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x20000000U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[530].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x40000000U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if (((vlSelf->top__DOT__cache1_req_msg[0U] ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[531].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x80000000U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[7185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[7186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[7187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[7188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[7189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[7190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[7191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[7192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[7193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[7194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[7195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[7196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[7197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[7198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[7199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[7200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[7201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[7202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[7203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[7204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[7205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[7206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[7207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[7208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[7209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[7210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[7211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[7212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[7213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[7214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[7215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
          ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[7216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[7217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[7218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[7219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[7220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[7221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[7222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[7223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[7224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[7225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[7226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[7227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[7228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[7229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[7230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[7231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[7232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[7233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[7234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[7235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[7236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[7237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[7238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[7239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[7240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[7241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[7242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[7243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[7244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[7245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[7246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[7247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
          ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[7248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[7249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1ffeU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[7250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1ffdU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[7251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1ffbU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[7252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1ff7U & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[7253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1fefU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[7254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1fdfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[7255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1fbfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[7256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1f7fU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[7257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1effU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[7258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1dffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[7259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1bffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[7260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x17ffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[7261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0xfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__5\n"); );
    // Body
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_M 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_M) 
           & ((~ (IData)(vlSelf->top__DOT__dmem_respstream_val)) 
              & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_M))));
    vlSelf->top__DOT__sink__DOT__sink_val = ((IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state)
                                              ? ((IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state) 
                                                 & ((IData)(vlSelf->top__DOT__proc2mngr_val) 
                                                    & (0U 
                                                       == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay)))
                                              : ((IData)(vlSelf->top__DOT__proc2mngr_val) 
                                                 & (0U 
                                                    == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_M))) {
        vlSymsp->__Vcoverage[1968].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_M 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_M;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hee6d0a3f__0 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_M) 
           | (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_W));
    if (((IData)(vlSelf->top__DOT__sink__DOT__sink_val) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT____Vtogcov__sink_val))) {
        vlSymsp->__Vcoverage[889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_val 
            = vlSelf->top__DOT__sink__DOT__sink_val;
    }
    vlSelf->top__DOT__sink__DOT__sink_msg = ((IData)(vlSelf->top__DOT__sink__DOT__sink_val)
                                              ? vlSelf->top__DOT__proc2mngr_msg
                                              : 0U);
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_M 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_M) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hee6d0a3f__0));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hc697426d__0 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_X) 
           | (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hee6d0a3f__0));
    if ((1U & (vlSelf->top__DOT__sink__DOT__sink_msg 
               ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffffffeU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (1U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((2U & (vlSelf->top__DOT__sink__DOT__sink_msg 
               ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffffffdU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (2U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((4U & (vlSelf->top__DOT__sink__DOT__sink_msg 
               ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffffffbU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (4U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((8U & (vlSelf->top__DOT__sink__DOT__sink_msg 
               ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffffff7U & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (8U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x10U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                  ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffffffefU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x10U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x20U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                  ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffffffdfU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x20U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x40U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                  ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffffffbfU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x40U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x80U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                  ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffffff7fU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x80U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x100U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                   ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffffeffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x100U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x200U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                   ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[900].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffffdffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x200U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x400U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                   ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffffbffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x400U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x800U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                   ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[902].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffff7ffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x800U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x1000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                    ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[903].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffffefffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x1000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x2000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                    ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[904].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffffdfffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x2000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x4000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                    ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[905].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffffbfffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x4000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x8000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                    ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[906].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffff7fffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x8000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x10000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                     ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[907].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffeffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x10000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x20000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                     ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[908].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffdffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x20000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x40000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                     ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[909].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffbffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x40000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x80000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                     ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[910].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfff7ffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x80000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x100000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                      ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[911].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffefffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x100000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x200000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                      ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[912].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffdfffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x200000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x400000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                      ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[913].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffbfffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x400000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x800000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                      ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[914].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xff7fffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x800000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x1000000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                       ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[915].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfeffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x1000000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x2000000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                       ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[916].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfdffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x2000000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x4000000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                       ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[917].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfbffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x4000000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x8000000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                       ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[918].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xf7ffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x8000000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x10000000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                        ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[919].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xefffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x10000000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x20000000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                        ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[920].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xdfffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x20000000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x40000000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                        ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[921].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xbfffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x40000000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if (((vlSelf->top__DOT__sink__DOT__sink_msg ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[922].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0x7fffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x80000000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__reg_en_M)))) {
        vlSymsp->__Vcoverage[1502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__reg_en_M 
            = (1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_M)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_M))) {
        vlSymsp->__Vcoverage[1973].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_M 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_M;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_M 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_M)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_M));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_D_mngr2proc 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_D_mngr2proc) 
              | (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hc697426d__0)));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_X 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hc697426d__0));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__next_val_M))) {
        vlSymsp->__Vcoverage[2207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__next_val_M 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_M;
    }
    vlSelf->top__DOT__dmem_respstream_rdy = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_M) 
                                             & (0U 
                                                != (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_M)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_D_mngr2proc) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_D_mngr2proc))) {
        vlSymsp->__Vcoverage[2092].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_D_mngr2proc 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_D_mngr2proc;
    }
    vlSelf->top__DOT__mngr2proc_rdy = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
                                       & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_D_mngr2proc)) 
                                          & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mngr2proc_rdy_D)));
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__reg_en_X)))) {
        vlSymsp->__Vcoverage[1494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__reg_en_X 
            = (1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_X)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_X))) {
        vlSymsp->__Vcoverage[1972].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_X;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_X 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_X)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X));
    if (((IData)(vlSelf->top__DOT__dmem_respstream_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__dmem_respstream_rdy))) {
        vlSymsp->__Vcoverage[326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_rdy 
            = vlSelf->top__DOT__dmem_respstream_rdy;
    }
    if (((IData)(vlSelf->top__DOT__mngr2proc_rdy) ^ (IData)(vlSelf->top__DOT____Vtogcov__mngr2proc_rdy))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_rdy 
            = vlSelf->top__DOT__mngr2proc_rdy;
    }
    vlSelf->top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay 
        = ((IData)(vlSelf->top__DOT__src__DOT__src_val) 
           & ((IData)(vlSelf->top__DOT__mngr2proc_rdy) 
              & (0U == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__next_val_X))) {
        vlSymsp->__Vcoverage[2159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__next_val_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_X;
    }
    vlSelf->top__DOT__DUT__DOT__imul_ostream_rdy_X 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_X) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mul_X));
    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_val 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_X) 
           & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X)));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__osquash_X 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_X) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_X));
    if ((4U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state)))) {
                if (vlSelf->top__DOT__dmem_respstream_rdy) {
                    vlSymsp->__Vcoverage[5295].fetch_add(1, std::memory_order_relaxed);
                    if (vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__lru) {
                        vlSymsp->__Vcoverage[5294].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__lru)))) {
                        vlSymsp->__Vcoverage[5293].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__dmem_respstream_rdy)))) {
                    vlSymsp->__Vcoverage[5296].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
        if ((2U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state))) {
            vlSelf->top__DOT__cache__DOT__dcache__DOT__input_en = 0U;
        } else if ((1U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state))) {
            vlSelf->top__DOT__cache__DOT__dcache__DOT__input_en 
                = vlSelf->top__DOT__cache__DOT__dcache__DOT__all_flushed;
        } else {
            vlSelf->__Vtask_top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__tab__143__t_input_en 
                = vlSelf->top__DOT__dmem_respstream_rdy;
            vlSelf->top__DOT__cache__DOT__dcache__DOT__input_en 
                = vlSelf->__Vtask_top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__tab__143__t_input_en;
        }
    } else if ((2U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state))) {
        vlSelf->top__DOT__cache__DOT__dcache__DOT__input_en = 0U;
    } else if ((1U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state))) {
        vlSelf->__Vtask_top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__tab__146__t_input_en 
            = ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__hit) 
               & (IData)(vlSelf->top__DOT__dmem_respstream_rdy));
        vlSelf->top__DOT__cache__DOT__dcache__DOT__input_en 
            = vlSelf->__Vtask_top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__tab__146__t_input_en;
    } else {
        vlSelf->top__DOT__cache__DOT__dcache__DOT__input_en = 1U;
    }
    if (((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__input_en) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT____Vtogcov__input_en))) {
        vlSymsp->__Vcoverage[5245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT____Vtogcov__input_en 
            = vlSelf->top__DOT__cache__DOT__dcache__DOT__input_en;
    }
    if ((4U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state))) {
        if ((2U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state))) {
            vlSelf->top__DOT__dmem_reqstream_rdy = 0U;
        } else if ((1U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state))) {
            vlSelf->top__DOT__dmem_reqstream_rdy = vlSelf->top__DOT__cache__DOT__dcache__DOT__all_flushed;
        } else {
            vlSelf->__Vtask_top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__tab__143__t_memreq_rdy 
                = vlSelf->top__DOT__dmem_respstream_rdy;
            vlSelf->top__DOT__dmem_reqstream_rdy = vlSelf->__Vtask_top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__tab__143__t_memreq_rdy;
        }
    } else if ((2U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state))) {
        vlSelf->top__DOT__dmem_reqstream_rdy = 0U;
    } else if ((1U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state))) {
        vlSelf->__Vtask_top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__tab__146__t_memreq_rdy 
            = ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__hit) 
               & (IData)(vlSelf->top__DOT__dmem_respstream_rdy));
        vlSelf->top__DOT__dmem_reqstream_rdy = vlSelf->__Vtask_top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__tab__146__t_memreq_rdy;
    } else {
        vlSelf->top__DOT__dmem_reqstream_rdy = 1U;
    }
    if (((IData)(vlSelf->top__DOT__dmem_reqstream_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__dmem_reqstream_rdy))) {
        vlSymsp->__Vcoverage[277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_rdy 
            = vlSelf->top__DOT__dmem_reqstream_rdy;
    }
    if (vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) {
        if (vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) {
            if ((((IData)(vlSelf->top__DOT__src__DOT__src_val) 
                  & (IData)(vlSelf->top__DOT__mngr2proc_rdy)) 
                 & (0U == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay))) {
                vlSymsp->__Vcoverage[855].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ (((IData)(vlSelf->top__DOT__src__DOT__src_val) 
                           & (IData)(vlSelf->top__DOT__mngr2proc_rdy)) 
                          & (0U == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay))))) {
                vlSymsp->__Vcoverage[856].fetch_add(1, std::memory_order_relaxed);
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
    if (((IData)(vlSelf->top__DOT__src__DOT__src_rdy) 
         ^ (IData)(vlSelf->top__DOT__src__DOT____Vtogcov__src_rdy))) {
        vlSymsp->__Vcoverage[641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_rdy 
            = vlSelf->top__DOT__src__DOT__src_rdy;
    }
    vlSelf->top__DOT__src__DOT__src__DOT__index_en 
        = ((IData)(vlSelf->top__DOT__src__DOT__src_val) 
           & (IData)(vlSelf->top__DOT__src__DOT__src_rdy));
    if ((1U & (~ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state)))) {
        if (((IData)(vlSelf->top__DOT__src__DOT__src_val) 
             & (~ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay)))) {
            vlSymsp->__Vcoverage[852].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__src__DOT__src_val) 
                      & (~ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay)))))) {
            vlSymsp->__Vcoverage[853].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay) 
         ^ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[846].fetch_add(1, std::memory_order_relaxed);
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
    if ((0U != (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__state))) {
            if ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__state))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imul_ostream_rdy_X)))) {
                    vlSymsp->__Vcoverage[3542].fetch_add(1, std::memory_order_relaxed);
                }
                if (vlSelf->top__DOT__DUT__DOT__imul_ostream_rdy_X) {
                    vlSymsp->__Vcoverage[3541].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imul_ostream_rdy_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imul_ostream_rdy_X))) {
        vlSymsp->__Vcoverage[1501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imul_ostream_rdy_X 
            = vlSelf->top__DOT__DUT__DOT__imul_ostream_rdy_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_val) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_val))) {
        vlSymsp->__Vcoverage[1375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_val 
            = vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_val;
    }
    vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_val));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__osquash_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__osquash_X))) {
        vlSymsp->__Vcoverage[1976].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__osquash_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__osquash_X;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__osquash_X));
    if (((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_en) 
         ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_en))) {
        vlSymsp->__Vcoverage[675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_en 
            = vlSelf->top__DOT__src__DOT__src__DOT__index_en;
    }
    if (((IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_en) 
         ^ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[781].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_en 
            = vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_en;
    }
    if (((IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state_next) 
         ^ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__state_next 
            = vlSelf->top__DOT__src__DOT__msg_delay__DOT__state_next;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_enq))) {
        vlSymsp->__Vcoverage[1827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_enq 
            = vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    }
    vlSelf->top__DOT__dmem_reqstream_val = ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
                                            | (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    if ((4U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state)))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__dmem_respstream_rdy) 
                              & (~ (IData)(vlSelf->top__DOT__dmem_reqstream_val)))))) {
                    if ((1U & (~ ((IData)(vlSelf->top__DOT__dmem_respstream_rdy) 
                                  & (IData)(vlSelf->top__DOT__dmem_reqstream_val))))) {
                        vlSymsp->__Vcoverage[5291].fetch_add(1, std::memory_order_relaxed);
                    }
                    if (((IData)(vlSelf->top__DOT__dmem_respstream_rdy) 
                         & (IData)(vlSelf->top__DOT__dmem_reqstream_val))) {
                        vlSymsp->__Vcoverage[5290].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if (((IData)(vlSelf->top__DOT__dmem_respstream_rdy) 
                     & (~ (IData)(vlSelf->top__DOT__dmem_reqstream_val)))) {
                    vlSymsp->__Vcoverage[5292].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__squash_D))) {
        vlSymsp->__Vcoverage[1977].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__squash_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_D;
    }
    if (((IData)(vlSelf->top__DOT__dmem_reqstream_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__dmem_reqstream_val))) {
        vlSymsp->__Vcoverage[276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_val 
            = vlSelf->top__DOT__dmem_reqstream_val;
    }
    vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlSelf->top__DOT__dmem_reqstream_rdy) 
           & (IData)(vlSelf->top__DOT__dmem_reqstream_val));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[1828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq 
            = vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    }
    vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass))) {
        vlSymsp->__Vcoverage[1829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass 
            = vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass;
    }
    vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__write_en) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[1823].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__write_en;
    }
    vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__write_en) 
              | (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[1825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__15(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__15\n"); );
    // Body
    vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out 
        = ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__darray_en)
            ? vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out
            : 0U);
    if ((1U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[3064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (1U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[3065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (2U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[3066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (4U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[3067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (8U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[3068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[3069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[3070].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[3071].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[3072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[3073].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[3076].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[3077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[3078].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[3079].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[3080].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[3081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[3082].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[3083].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[3084].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[3085].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[3086].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[3087].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[3088].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[3089].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[3090].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[3091].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[3092].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[3093].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[3094].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out));
    }
    if (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3095].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out));
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq0_val)
            ? vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out
            : 0U);
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8403].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8404].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8405].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8406].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[8434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__6(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__6\n"); );
    // Init
    CData/*0:0*/ top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h6d19aa0e__0;
    top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h6d19aa0e__0 = 0;
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
    vlSelf->top__DOT__dmem_respstream_msg = (((QData)((IData)(
                                                              (7U 
                                                               & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                                                                  >> 0xaU)))) 
                                              << 0x2cU) 
                                             | (QData)((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out)));
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__wb_result_sel_M)
            ? ((IData)(vlSelf->top__DOT__DUT__DOT__wb_result_sel_M)
                ? vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out
                : 0U) : vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M);
    if ((4U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state))) {
        vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__set_way1 
            = (IData)((((0U == (3U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state))) 
                        & (IData)(vlSelf->top__DOT__dmem_respstream_rdy)) 
                       & (~ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__lru))));
        vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__set_way0 
            = (IData)((((0U == (3U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state))) 
                        & (IData)(vlSelf->top__DOT__dmem_respstream_rdy)) 
                       & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__lru)));
    } else {
        vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__set_way1 
            = (IData)(((((1U == (3U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state))) 
                         & (~ (IData)(vlSelf->top__DOT__flush))) 
                        & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__hit)) 
                       & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__tarray0_match)));
        vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__set_way0 
            = (IData)(((((1U == (3U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state))) 
                         & (~ (IData)(vlSelf->top__DOT__flush))) 
                        & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__hit)) 
                       & (~ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__tarray0_match))));
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__flush)))) {
                    if ((1U & (~ (IData)(vlSelf->top__DOT__dmem_reqstream_val)))) {
                        vlSymsp->__Vcoverage[5271].fetch_add(1, std::memory_order_relaxed);
                    }
                    if (vlSelf->top__DOT__dmem_reqstream_val) {
                        vlSymsp->__Vcoverage[5270].fetch_add(1, std::memory_order_relaxed);
                    }
                }
            }
            if ((1U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__flush)))) {
                    if (vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__hit) {
                        if (((IData)(vlSelf->top__DOT__dmem_respstream_rdy) 
                             & (~ (IData)(vlSelf->top__DOT__dmem_reqstream_val)))) {
                            vlSymsp->__Vcoverage[5274].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (~ ((IData)(vlSelf->top__DOT__dmem_respstream_rdy) 
                                      & (~ (IData)(vlSelf->top__DOT__dmem_reqstream_val)))))) {
                            vlSymsp->__Vcoverage[5275].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_mngr2proc_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_mngr2proc_D))) {
        vlSymsp->__Vcoverage[2071].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_mngr2proc_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_mngr2proc_D;
    }
    top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h6d19aa0e__0 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_mngr2proc_D) 
           | (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_hazard_D));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2733].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2734].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2735].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2736].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2737].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2738].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2739].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2740].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2741].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2742].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2743].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2744].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2745].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2746].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2747].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2748].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2749].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2750].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2751].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2752].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2753].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2754].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2755].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2756].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2757].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2758].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2759].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2760].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2761].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2762].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2763].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2764].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x6fffffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x5fffffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__dmem_respstream_msg 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x3fffffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fefffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7effffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7dffffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7bffffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x77ffffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__dmem_respstream_msg) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__dmem_respstream_msg)))) {
        vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__dmem_respstream_msg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffffffefULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffffefffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffefffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffefffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M))) {
        vlSymsp->__Vcoverage[2573].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M))) {
        vlSymsp->__Vcoverage[2574].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M))) {
        vlSymsp->__Vcoverage[2575].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M))) {
        vlSymsp->__Vcoverage[2576].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M))) {
        vlSymsp->__Vcoverage[2577].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M))) {
        vlSymsp->__Vcoverage[2578].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M))) {
        vlSymsp->__Vcoverage[2579].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M))) {
        vlSymsp->__Vcoverage[2580].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M))) {
        vlSymsp->__Vcoverage[2581].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M))) {
        vlSymsp->__Vcoverage[2582].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M))) {
        vlSymsp->__Vcoverage[2583].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M))) {
        vlSymsp->__Vcoverage[2584].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M))) {
        vlSymsp->__Vcoverage[2585].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M))) {
        vlSymsp->__Vcoverage[2586].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M))) {
        vlSymsp->__Vcoverage[2587].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M))) {
        vlSymsp->__Vcoverage[2588].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M))) {
        vlSymsp->__Vcoverage[2589].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M))) {
        vlSymsp->__Vcoverage[2590].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M))) {
        vlSymsp->__Vcoverage[2591].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M))) {
        vlSymsp->__Vcoverage[2592].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M))) {
        vlSymsp->__Vcoverage[2593].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M))) {
        vlSymsp->__Vcoverage[2594].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M))) {
        vlSymsp->__Vcoverage[2595].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M))) {
        vlSymsp->__Vcoverage[2596].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M))) {
        vlSymsp->__Vcoverage[2597].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M))) {
        vlSymsp->__Vcoverage[2598].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M))) {
        vlSymsp->__Vcoverage[2599].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M))) {
        vlSymsp->__Vcoverage[2600].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M))) {
        vlSymsp->__Vcoverage[2601].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M))) {
        vlSymsp->__Vcoverage[2602].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M))) {
        vlSymsp->__Vcoverage[2603].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2604].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_M) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
        = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__op1_byp_sel_D))
            ? ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__op1_byp_sel_D))
                ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W
                : vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M)
            : ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__op1_byp_sel_D))
                ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X
                : vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
        = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__op2_byp_sel_D))
            ? ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__op2_byp_sel_D))
                ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W
                : vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M)
            : ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__op2_byp_sel_D))
                ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X
                : vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    if (((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__set_way1) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT____Vtogcov__set_way1))) {
        vlSymsp->__Vcoverage[5261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT____Vtogcov__set_way1 
            = vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__set_way1;
    }
    if (((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__set_way0) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT____Vtogcov__set_way0))) {
        vlSymsp->__Vcoverage[5260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT____Vtogcov__set_way0 
            = vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__set_way0;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_D_imul 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
           & (IData)(top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h6d19aa0e__0));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
           & ((IData)(top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h6d19aa0e__0) 
              | (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_imul_D)));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2605].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2606].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2608].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2609].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2610].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2611].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2612].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2613].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2614].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2615].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2616].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2617].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2619].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2620].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2621].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2622].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2623].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2624].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2625].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2626].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D = 
        ((IData)(vlSelf->top__DOT__DUT__DOT__op1_sel_D)
          ? ((IData)(vlSelf->top__DOT__DUT__DOT__op1_sel_D)
              ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D
              : 0U) : vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D);
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2669].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2670].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2674].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2680].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2682].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2683].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2684].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2686].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2687].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2688].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2692].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2693].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2694].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2695].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2696].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2697].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2698].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2699].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2700].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D = 
        ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D))
          ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D
          : ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D))
              ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D
              : ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D))
                  ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D
                  : 0U)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_D_imul) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_D_imul))) {
        vlSymsp->__Vcoverage[2089].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_D_imul 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_D_imul;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_D_imul 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_D_imul) 
              | (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hc697426d__0)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_D))) {
        vlSymsp->__Vcoverage[1966].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_D;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hce5a16ed__0 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_D) 
           | (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hc697426d__0));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__a_mux_sel)
            ? ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__a_mux_sel)
                ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D
                : 0U) : vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__l_shift_out);
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2701].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2702].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2704].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2705].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2706].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2707].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2708].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2709].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2710].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2711].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2712].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2713].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2714].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2715].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2716].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2717].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2718].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2719].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2720].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2721].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2722].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2723].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2724].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2725].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2726].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2727].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2728].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2729].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2730].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2731].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2732].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__b_mux_sel)
            ? ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__b_mux_sel)
                ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D
                : 0U) : vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__r_shift_out);
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
        = (((QData)((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D)) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_D_imul) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_D_imul))) {
        vlSymsp->__Vcoverage[2091].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_D_imul 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_D_imul;
    }
    vlSelf->top__DOT__DUT__DOT__imul_istream_val_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
           & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_D_imul)) 
              & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_D)) 
                 & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mul_D))));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_F_imem 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_F) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hce5a16ed__0));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hce5a16ed__0));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[3313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[3314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[3315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[3316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[3317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[3318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[3319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[3320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[3321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[3322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[3323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[3324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[3325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[3326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[3327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[3328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[3329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[3330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[3331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[3332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[3333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[3334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[3335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[3336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[3337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[3338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[3339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[3340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[3341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[3342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[3343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[3279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D)))) {
        vlSymsp->__Vcoverage[2765].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[2766].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[2767].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[2768].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[2769].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[2770].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[2771].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[2772].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[2773].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[2774].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[2775].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[2776].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[2777].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[2778].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[2779].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[2780].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[2781].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[2782].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[2783].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[2784].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[2785].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[2786].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[2787].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[2788].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[2789].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[2790].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[2791].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[2792].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[2793].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[2794].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[2795].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[2796].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[2797].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[2798].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[2799].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[2800].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[2801].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[2802].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[2803].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[2804].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[2805].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[2806].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[2807].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[2808].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[2809].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[2810].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                              >> 0x2eU))))) {
        vlSymsp->__Vcoverage[2811].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                              >> 0x2fU))))) {
        vlSymsp->__Vcoverage[2812].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                              >> 0x30U))))) {
        vlSymsp->__Vcoverage[2813].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                              >> 0x31U))))) {
        vlSymsp->__Vcoverage[2814].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                              >> 0x32U))))) {
        vlSymsp->__Vcoverage[2815].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                              >> 0x33U))))) {
        vlSymsp->__Vcoverage[2816].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                              >> 0x34U))))) {
        vlSymsp->__Vcoverage[2817].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                              >> 0x35U))))) {
        vlSymsp->__Vcoverage[2818].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                              >> 0x36U))))) {
        vlSymsp->__Vcoverage[2819].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                              >> 0x37U))))) {
        vlSymsp->__Vcoverage[2820].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                              >> 0x38U))))) {
        vlSymsp->__Vcoverage[2821].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                              >> 0x39U))))) {
        vlSymsp->__Vcoverage[2822].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                              >> 0x3aU))))) {
        vlSymsp->__Vcoverage[2823].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                              >> 0x3bU))))) {
        vlSymsp->__Vcoverage[2824].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                              >> 0x3cU))))) {
        vlSymsp->__Vcoverage[2825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                              >> 0x3dU))))) {
        vlSymsp->__Vcoverage[2826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
                                              >> 0x3eU))))) {
        vlSymsp->__Vcoverage[2827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[2828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_istream_msg_D) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imul_istream_val_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imul_istream_val_D))) {
        vlSymsp->__Vcoverage[1493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imul_istream_val_D 
            = vlSelf->top__DOT__DUT__DOT__imul_istream_val_D;
    }
    if ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__state))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imul_istream_val_D)))) {
            vlSymsp->__Vcoverage[3536].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__DUT__DOT__imul_istream_val_D) {
            vlSymsp->__Vcoverage[3535].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__state))) {
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__nextState 
            = ((IData)(vlSelf->top__DOT__DUT__DOT__imul_istream_val_D)
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__state))) {
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__nextState 
            = ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__done)
                ? 2U : 1U);
    } else if (VL_LIKELY((2U == (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__state)))) {
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__nextState 
            = ((IData)(vlSelf->top__DOT__DUT__DOT__imul_ostream_rdy_X)
                ? 0U : 2U);
    } else {
        VL_STOP_MT("../lab1_imul/IntMulAlt.v", 315, "");
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__nextState = 0U;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_F_imem) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_F_imem))) {
        vlSymsp->__Vcoverage[1990].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_F_imem 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_F_imem;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_D))) {
        vlSymsp->__Vcoverage[1971].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_D;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h99c34444__0 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_D)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D));
    vlSelf->top__DOT__DUT__DOT__reg_en_D = (1U & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_D)) 
                                                  | (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_D)));
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__nextState) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT____Vtogcov__nextState)))) {
        vlSymsp->__Vcoverage[3528].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT____Vtogcov__nextState 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT____Vtogcov__nextState)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__nextState)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__nextState) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT____Vtogcov__nextState)))) {
        vlSymsp->__Vcoverage[3529].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT____Vtogcov__nextState 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT____Vtogcov__nextState)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__nextState)));
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__osquash_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h99c34444__0) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_D));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_D 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_D)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h99c34444__0));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__reg_en_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__reg_en_D))) {
        vlSymsp->__Vcoverage[1480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__reg_en_D 
            = vlSelf->top__DOT__DUT__DOT__reg_en_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__osquash_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__osquash_D))) {
        vlSymsp->__Vcoverage[1975].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__osquash_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__osquash_D;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_F) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__osquash_D) 
              | (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__osquash_X)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__next_val_D))) {
        vlSymsp->__Vcoverage[2093].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__next_val_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_respstream_drop))) {
        vlSymsp->__Vcoverage[1294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_respstream_drop 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F;
    }
    vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_rdy 
        = (1U & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_F_imem)) 
                 | (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F)));
    vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_val 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__state)) 
           & ((IData)(vlSelf->top__DOT__imem_respstream_val) 
              & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F))));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_rdy) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_respstream_drop_rdy))) {
        vlSymsp->__Vcoverage[1296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_respstream_drop_rdy 
            = vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_rdy;
    }
    vlSelf->top__DOT__imem_respstream_rdy = ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__state) 
                                             | (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_rdy));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_val) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_respstream_drop_val))) {
        vlSymsp->__Vcoverage[1295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_respstream_drop_val 
            = vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_val;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_F 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_val)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_F));
    if (((IData)(vlSelf->top__DOT__imem_respstream_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_respstream_rdy))) {
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_rdy 
            = vlSelf->top__DOT__imem_respstream_rdy;
    }
    if ((4U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__state))) {
        if ((2U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__state))) {
            vlSelf->top__DOT__cache__DOT__icache__DOT__input_en = 0U;
            vlSelf->top__DOT__imem_reqstream_rdy = 0U;
        } else if ((1U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__state))) {
            vlSelf->top__DOT__cache__DOT__icache__DOT__input_en 
                = (0U == vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty);
            vlSelf->top__DOT__imem_reqstream_rdy = 
                (0U == vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty);
        } else {
            vlSelf->__Vtask_top__DOT__cache__DOT__icache__DOT__ctrl__DOT__tab__135__t_input_en 
                = vlSelf->top__DOT__imem_respstream_rdy;
            vlSelf->top__DOT__cache__DOT__icache__DOT__input_en 
                = vlSelf->__Vtask_top__DOT__cache__DOT__icache__DOT__ctrl__DOT__tab__135__t_input_en;
            vlSelf->__Vtask_top__DOT__cache__DOT__icache__DOT__ctrl__DOT__tab__135__t_memreq_rdy 
                = vlSelf->top__DOT__imem_respstream_rdy;
            vlSelf->top__DOT__imem_reqstream_rdy = vlSelf->__Vtask_top__DOT__cache__DOT__icache__DOT__ctrl__DOT__tab__135__t_memreq_rdy;
        }
    } else if ((2U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__state))) {
        vlSelf->top__DOT__cache__DOT__icache__DOT__input_en = 0U;
        vlSelf->top__DOT__imem_reqstream_rdy = 0U;
    } else if ((1U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__state))) {
        vlSelf->__Vtask_top__DOT__cache__DOT__icache__DOT__ctrl__DOT__tab__138__t_input_en 
            = ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__hit) 
               & (IData)(vlSelf->top__DOT__imem_respstream_rdy));
        vlSelf->top__DOT__cache__DOT__icache__DOT__input_en 
            = vlSelf->__Vtask_top__DOT__cache__DOT__icache__DOT__ctrl__DOT__tab__138__t_input_en;
        vlSelf->__Vtask_top__DOT__cache__DOT__icache__DOT__ctrl__DOT__tab__138__t_memreq_rdy 
            = ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__hit) 
               & (IData)(vlSelf->top__DOT__imem_respstream_rdy));
        vlSelf->top__DOT__imem_reqstream_rdy = vlSelf->__Vtask_top__DOT__cache__DOT__icache__DOT__ctrl__DOT__tab__138__t_memreq_rdy;
    } else {
        vlSelf->top__DOT__cache__DOT__icache__DOT__input_en = 1U;
        vlSelf->top__DOT__imem_reqstream_rdy = 1U;
    }
    vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__istream_go 
        = ((IData)(vlSelf->top__DOT__imem_respstream_rdy) 
           & (IData)(vlSelf->top__DOT__imem_respstream_val));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_F))) {
        vlSymsp->__Vcoverage[1965].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_F 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_F;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_F 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_F) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_F) 
              | (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hce5a16ed__0)));
    if (((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__input_en) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__input_en))) {
        vlSymsp->__Vcoverage[4172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__input_en 
            = vlSelf->top__DOT__cache__DOT__icache__DOT__input_en;
    }
    if (vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__state) {
        if (vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__istream_go) {
            vlSymsp->__Vcoverage[1812].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__istream_go)))) {
            vlSymsp->__Vcoverage[1813].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__next_state = 1U;
        } else {
            vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__next_state = 0U;
        }
    } else {
        vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__next_state 
            = (1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F) 
                     & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__istream_go))));
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__state)))) {
        if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F) 
             & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__istream_go)))) {
            vlSymsp->__Vcoverage[1810].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F) 
                      & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__istream_go)))))) {
            vlSymsp->__Vcoverage[1811].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__istream_go) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT____Vtogcov__istream_go))) {
        vlSymsp->__Vcoverage[1809].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT____Vtogcov__istream_go 
            = vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__istream_go;
    }
    if (((IData)(vlSelf->top__DOT__imem_reqstream_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_reqstream_rdy))) {
        vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_rdy 
            = vlSelf->top__DOT__imem_reqstream_rdy;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_F))) {
        vlSymsp->__Vcoverage[1970].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_F 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_F;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_F 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_F) 
           & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_F)) 
              & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F))));
    vlSelf->top__DOT__DUT__DOT__reg_en_F = (1U & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_F)) 
                                                  | (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__next_state) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT____Vtogcov__next_state))) {
        vlSymsp->__Vcoverage[1808].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT____Vtogcov__next_state 
            = vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__next_state;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__next_val_F))) {
        vlSymsp->__Vcoverage[1992].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__next_val_F 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_F;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__reg_en_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__reg_en_F))) {
        vlSymsp->__Vcoverage[1477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__reg_en_F 
            = vlSelf->top__DOT__DUT__DOT__reg_en_F;
    }
}
