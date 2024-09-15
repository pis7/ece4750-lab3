// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSymsp->__Vcoverage[722].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[905].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[983].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[990].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[994].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[998].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1002].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1268].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1534].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1538].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1804].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[2070].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[2074].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[2078].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[2088].fetch_add(1, std::memory_order_relaxed);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->top__DOT__darray_en) {
        vlSymsp->__Vcoverage[720].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__darray_en)))) {
        vlSymsp->__Vcoverage[721].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__flush)))) {
        vlSymsp->__Vcoverage[903].fetch_add(1, std::memory_order_relaxed);
        if ((1U & (~ ((2U == (IData)(vlSelf->top__DOT__state)) 
                      & (~ (IData)(vlSelf->top__DOT__way_select)))))) {
            if (((2U == (IData)(vlSelf->top__DOT__state)) 
                 & (IData)(vlSelf->top__DOT__way_select))) {
                vlSymsp->__Vcoverage[898].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ ((2U == (IData)(vlSelf->top__DOT__state)) 
                          & (IData)(vlSelf->top__DOT__way_select))))) {
                vlSymsp->__Vcoverage[899].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if (((2U == (IData)(vlSelf->top__DOT__state)) 
             & (~ (IData)(vlSelf->top__DOT__way_select)))) {
            vlSymsp->__Vcoverage[900].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ vlSelf->top__DOT__DUT__DOT__dirty1))) {
        if ((1U & (~ (vlSelf->top__DOT__DUT__DOT__dirty1 
                      >> 1U)))) {
            if ((1U & (~ (vlSelf->top__DOT__DUT__DOT__dirty1 
                          >> 2U)))) {
                if ((1U & (~ (vlSelf->top__DOT__DUT__DOT__dirty1 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__DUT__DOT__dirty1 
                                  >> 4U)))) {
                        if ((1U & (~ (vlSelf->top__DOT__DUT__DOT__dirty1 
                                      >> 5U)))) {
                            if ((1U & (~ (vlSelf->top__DOT__DUT__DOT__dirty1 
                                          >> 6U)))) {
                                if ((1U & (~ (vlSelf->top__DOT__DUT__DOT__dirty1 
                                              >> 7U)))) {
                                    if ((0x100U & vlSelf->top__DOT__DUT__DOT__dirty1)) {
                                        vlSymsp->__Vcoverage[974].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    if ((1U & (~ (vlSelf->top__DOT__DUT__DOT__dirty1 
                                                  >> 8U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->top__DOT__DUT__DOT__dirty1 
                                                    >> 9U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->top__DOT__DUT__DOT__dirty1 
                                                     >> 0xaU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->top__DOT__DUT__DOT__dirty1 
                                                         >> 0xbU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->top__DOT__DUT__DOT__dirty1 
                                                             >> 0xcU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->top__DOT__DUT__DOT__dirty1 
                                                                 >> 0xdU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->top__DOT__DUT__DOT__dirty1 
                                                                     >> 0xeU)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->top__DOT__DUT__DOT__dirty1 
                                                                         >> 0xfU)))) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->top__DOT__DUT__DOT__dirty1 
                                                                             >> 0x10U)))) {
                                                                        if (
                                                                            (0x20000U 
                                                                             & vlSelf->top__DOT__DUT__DOT__dirty1)) {
                                                                            vlSymsp->__Vcoverage[965].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dirty1 
                                                                                >> 0x11U)))) {
                                                                            if (
                                                                                (0x40000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dirty1)) {
                                                                                vlSymsp->__Vcoverage[964].fetch_add(1, std::memory_order_relaxed);
                                                                            }
                                                                            if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dirty1 
                                                                                >> 0x12U)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dirty1 
                                                                                >> 0x13U)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dirty1 
                                                                                >> 0x14U)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dirty1 
                                                                                >> 0x15U)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dirty1 
                                                                                >> 0x16U)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dirty1 
                                                                                >> 0x17U)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dirty1 
                                                                                >> 0x18U)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dirty1 
                                                                                >> 0x19U)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dirty1 
                                                                                >> 0x1aU)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dirty1 
                                                                                >> 0x1bU)))) {
                                                                                if (
                                                                                (0x10000000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dirty1)) {
                                                                                vlSymsp->__Vcoverage[954].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dirty1 
                                                                                >> 0x1cU)))) {
                                                                                if (
                                                                                (0x20000000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dirty1)) {
                                                                                vlSymsp->__Vcoverage[953].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dirty1 
                                                                                >> 0x1dU)))) {
                                                                                if (
                                                                                (0x40000000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dirty1)) {
                                                                                vlSymsp->__Vcoverage[952].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dirty1 
                                                                                >> 0x1eU)))) {
                                                                                if (
                                                                                (vlSelf->top__DOT__DUT__DOT__dirty1 
                                                                                >> 0x1fU)) {
                                                                                vlSymsp->__Vcoverage[950].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dirty1 
                                                                                >> 0x1fU)))) {
                                                                                vlSymsp->__Vcoverage[951].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x8000000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dirty1)) {
                                                                                vlSymsp->__Vcoverage[955].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x4000000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dirty1)) {
                                                                                vlSymsp->__Vcoverage[956].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x2000000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dirty1)) {
                                                                                vlSymsp->__Vcoverage[957].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x1000000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dirty1)) {
                                                                                vlSymsp->__Vcoverage[958].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x800000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dirty1)) {
                                                                                vlSymsp->__Vcoverage[959].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x400000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dirty1)) {
                                                                                vlSymsp->__Vcoverage[960].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x200000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dirty1)) {
                                                                                vlSymsp->__Vcoverage[961].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x100000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dirty1)) {
                                                                                vlSymsp->__Vcoverage[962].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x80000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dirty1)) {
                                                                                vlSymsp->__Vcoverage[963].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                    if (
                                                                        (0x10000U 
                                                                         & vlSelf->top__DOT__DUT__DOT__dirty1)) {
                                                                        vlSymsp->__Vcoverage[966].fetch_add(1, std::memory_order_relaxed);
                                                                    }
                                                                }
                                                                if (
                                                                    (0x8000U 
                                                                     & vlSelf->top__DOT__DUT__DOT__dirty1)) {
                                                                    vlSymsp->__Vcoverage[967].fetch_add(1, std::memory_order_relaxed);
                                                                }
                                                            }
                                                            if (
                                                                (0x4000U 
                                                                 & vlSelf->top__DOT__DUT__DOT__dirty1)) {
                                                                vlSymsp->__Vcoverage[968].fetch_add(1, std::memory_order_relaxed);
                                                            }
                                                        }
                                                        if (
                                                            (0x2000U 
                                                             & vlSelf->top__DOT__DUT__DOT__dirty1)) {
                                                            vlSymsp->__Vcoverage[969].fetch_add(1, std::memory_order_relaxed);
                                                        }
                                                    }
                                                    if (
                                                        (0x1000U 
                                                         & vlSelf->top__DOT__DUT__DOT__dirty1)) {
                                                        vlSymsp->__Vcoverage[970].fetch_add(1, std::memory_order_relaxed);
                                                    }
                                                }
                                                if (
                                                    (0x800U 
                                                     & vlSelf->top__DOT__DUT__DOT__dirty1)) {
                                                    vlSymsp->__Vcoverage[971].fetch_add(1, std::memory_order_relaxed);
                                                }
                                            }
                                            if ((0x400U 
                                                 & vlSelf->top__DOT__DUT__DOT__dirty1)) {
                                                vlSymsp->__Vcoverage[972].fetch_add(1, std::memory_order_relaxed);
                                            }
                                        }
                                        if ((0x200U 
                                             & vlSelf->top__DOT__DUT__DOT__dirty1)) {
                                            vlSymsp->__Vcoverage[973].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    }
                                }
                                if ((0x80U & vlSelf->top__DOT__DUT__DOT__dirty1)) {
                                    vlSymsp->__Vcoverage[975].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((0x40U & vlSelf->top__DOT__DUT__DOT__dirty1)) {
                                vlSymsp->__Vcoverage[976].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((0x20U & vlSelf->top__DOT__DUT__DOT__dirty1)) {
                            vlSymsp->__Vcoverage[977].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((0x10U & vlSelf->top__DOT__DUT__DOT__dirty1)) {
                        vlSymsp->__Vcoverage[978].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((8U & vlSelf->top__DOT__DUT__DOT__dirty1)) {
                    vlSymsp->__Vcoverage[979].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((4U & vlSelf->top__DOT__DUT__DOT__dirty1)) {
                vlSymsp->__Vcoverage[980].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((2U & vlSelf->top__DOT__DUT__DOT__dirty1)) {
            vlSymsp->__Vcoverage[981].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & vlSelf->top__DOT__DUT__DOT__dirty1)) {
        vlSymsp->__Vcoverage[982].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__flush1_index = 0U;
    } else {
        vlSelf->top__DOT__DUT__DOT__flush1_index = 
            ((2U & vlSelf->top__DOT__DUT__DOT__dirty1)
              ? 1U : ((4U & vlSelf->top__DOT__DUT__DOT__dirty1)
                       ? 2U : ((8U & vlSelf->top__DOT__DUT__DOT__dirty1)
                                ? 3U : ((0x10U & vlSelf->top__DOT__DUT__DOT__dirty1)
                                         ? 4U : ((0x20U 
                                                  & vlSelf->top__DOT__DUT__DOT__dirty1)
                                                  ? 5U
                                                  : 
                                                 ((0x40U 
                                                   & vlSelf->top__DOT__DUT__DOT__dirty1)
                                                   ? 6U
                                                   : 
                                                  ((0x80U 
                                                    & vlSelf->top__DOT__DUT__DOT__dirty1)
                                                    ? 7U
                                                    : 
                                                   ((0x100U 
                                                     & vlSelf->top__DOT__DUT__DOT__dirty1)
                                                     ? 8U
                                                     : 
                                                    ((0x200U 
                                                      & vlSelf->top__DOT__DUT__DOT__dirty1)
                                                      ? 9U
                                                      : 
                                                     ((0x400U 
                                                       & vlSelf->top__DOT__DUT__DOT__dirty1)
                                                       ? 0xaU
                                                       : 
                                                      ((0x800U 
                                                        & vlSelf->top__DOT__DUT__DOT__dirty1)
                                                        ? 0xbU
                                                        : 
                                                       ((0x1000U 
                                                         & vlSelf->top__DOT__DUT__DOT__dirty1)
                                                         ? 0xcU
                                                         : 
                                                        ((0x2000U 
                                                          & vlSelf->top__DOT__DUT__DOT__dirty1)
                                                          ? 0xdU
                                                          : 
                                                         ((0x4000U 
                                                           & vlSelf->top__DOT__DUT__DOT__dirty1)
                                                           ? 0xeU
                                                           : 
                                                          ((0x8000U 
                                                            & vlSelf->top__DOT__DUT__DOT__dirty1)
                                                            ? 0xfU
                                                            : 
                                                           ((0x10000U 
                                                             & vlSelf->top__DOT__DUT__DOT__dirty1)
                                                             ? 0x10U
                                                             : 
                                                            ((0x20000U 
                                                              & vlSelf->top__DOT__DUT__DOT__dirty1)
                                                              ? 0x11U
                                                              : 
                                                             ((0x40000U 
                                                               & vlSelf->top__DOT__DUT__DOT__dirty1)
                                                               ? 0x12U
                                                               : 
                                                              ((0x80000U 
                                                                & vlSelf->top__DOT__DUT__DOT__dirty1)
                                                                ? 0x13U
                                                                : 
                                                               ((0x100000U 
                                                                 & vlSelf->top__DOT__DUT__DOT__dirty1)
                                                                 ? 0x14U
                                                                 : 
                                                                ((0x200000U 
                                                                  & vlSelf->top__DOT__DUT__DOT__dirty1)
                                                                  ? 0x15U
                                                                  : 
                                                                 ((0x400000U 
                                                                   & vlSelf->top__DOT__DUT__DOT__dirty1)
                                                                   ? 0x16U
                                                                   : 
                                                                  ((0x800000U 
                                                                    & vlSelf->top__DOT__DUT__DOT__dirty1)
                                                                    ? 0x17U
                                                                    : 
                                                                   ((0x1000000U 
                                                                     & vlSelf->top__DOT__DUT__DOT__dirty1)
                                                                     ? 0x18U
                                                                     : 
                                                                    ((0x2000000U 
                                                                      & vlSelf->top__DOT__DUT__DOT__dirty1)
                                                                      ? 0x19U
                                                                      : 
                                                                     ((0x4000000U 
                                                                       & vlSelf->top__DOT__DUT__DOT__dirty1)
                                                                       ? 0x1aU
                                                                       : 
                                                                      ((0x8000000U 
                                                                        & vlSelf->top__DOT__DUT__DOT__dirty1)
                                                                        ? 0x1bU
                                                                        : 
                                                                       ((0x10000000U 
                                                                         & vlSelf->top__DOT__DUT__DOT__dirty1)
                                                                         ? 0x1cU
                                                                         : 
                                                                        ((0x20000000U 
                                                                          & vlSelf->top__DOT__DUT__DOT__dirty1)
                                                                          ? 0x1dU
                                                                          : 
                                                                         ((0x40000000U 
                                                                           & vlSelf->top__DOT__DUT__DOT__dirty1)
                                                                           ? 0x1eU
                                                                           : 
                                                                          ((vlSelf->top__DOT__DUT__DOT__dirty1 
                                                                            >> 0x1fU)
                                                                            ? 0x1fU
                                                                            : 0U)))))))))))))))))))))))))))))));
    }
    if ((1U & (~ vlSelf->top__DOT__DUT__DOT__dirty0))) {
        if ((1U & (~ (vlSelf->top__DOT__DUT__DOT__dirty0 
                      >> 1U)))) {
            if ((1U & (~ (vlSelf->top__DOT__DUT__DOT__dirty0 
                          >> 2U)))) {
                if ((1U & (~ (vlSelf->top__DOT__DUT__DOT__dirty0 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__DUT__DOT__dirty0 
                                  >> 4U)))) {
                        if ((1U & (~ (vlSelf->top__DOT__DUT__DOT__dirty0 
                                      >> 5U)))) {
                            if ((1U & (~ (vlSelf->top__DOT__DUT__DOT__dirty0 
                                          >> 6U)))) {
                                if ((1U & (~ (vlSelf->top__DOT__DUT__DOT__dirty0 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelf->top__DOT__DUT__DOT__dirty0 
                                                  >> 8U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->top__DOT__DUT__DOT__dirty0 
                                                    >> 9U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->top__DOT__DUT__DOT__dirty0 
                                                     >> 0xaU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->top__DOT__DUT__DOT__dirty0 
                                                         >> 0xbU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->top__DOT__DUT__DOT__dirty0 
                                                             >> 0xcU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->top__DOT__DUT__DOT__dirty0 
                                                                 >> 0xdU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->top__DOT__DUT__DOT__dirty0 
                                                                     >> 0xeU)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->top__DOT__DUT__DOT__dirty0 
                                                                         >> 0xfU)))) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->top__DOT__DUT__DOT__dirty0 
                                                                             >> 0x10U)))) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dirty0 
                                                                                >> 0x11U)))) {
                                                                            if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dirty0 
                                                                                >> 0x12U)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dirty0 
                                                                                >> 0x13U)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dirty0 
                                                                                >> 0x14U)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dirty0 
                                                                                >> 0x15U)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dirty0 
                                                                                >> 0x16U)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dirty0 
                                                                                >> 0x17U)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dirty0 
                                                                                >> 0x18U)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dirty0 
                                                                                >> 0x19U)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dirty0 
                                                                                >> 0x1aU)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dirty0 
                                                                                >> 0x1bU)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dirty0 
                                                                                >> 0x1cU)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dirty0 
                                                                                >> 0x1dU)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dirty0 
                                                                                >> 0x1eU)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dirty0 
                                                                                >> 0x1fU)))) {
                                                                                vlSymsp->__Vcoverage[918].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                if (
                                                                                (vlSelf->top__DOT__DUT__DOT__dirty0 
                                                                                >> 0x1fU)) {
                                                                                vlSymsp->__Vcoverage[917].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x40000000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dirty0)) {
                                                                                vlSymsp->__Vcoverage[919].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x20000000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dirty0)) {
                                                                                vlSymsp->__Vcoverage[920].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x10000000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dirty0)) {
                                                                                vlSymsp->__Vcoverage[921].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x8000000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dirty0)) {
                                                                                vlSymsp->__Vcoverage[922].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x4000000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dirty0)) {
                                                                                vlSymsp->__Vcoverage[923].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x2000000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dirty0)) {
                                                                                vlSymsp->__Vcoverage[924].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x1000000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dirty0)) {
                                                                                vlSymsp->__Vcoverage[925].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x800000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dirty0)) {
                                                                                vlSymsp->__Vcoverage[926].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x400000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dirty0)) {
                                                                                vlSymsp->__Vcoverage[927].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x200000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dirty0)) {
                                                                                vlSymsp->__Vcoverage[928].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x100000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dirty0)) {
                                                                                vlSymsp->__Vcoverage[929].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x80000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dirty0)) {
                                                                                vlSymsp->__Vcoverage[930].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                            }
                                                                            if (
                                                                                (0x40000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dirty0)) {
                                                                                vlSymsp->__Vcoverage[931].fetch_add(1, std::memory_order_relaxed);
                                                                            }
                                                                        }
                                                                        if (
                                                                            (0x20000U 
                                                                             & vlSelf->top__DOT__DUT__DOT__dirty0)) {
                                                                            vlSymsp->__Vcoverage[932].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                    if (
                                                                        (0x10000U 
                                                                         & vlSelf->top__DOT__DUT__DOT__dirty0)) {
                                                                        vlSymsp->__Vcoverage[933].fetch_add(1, std::memory_order_relaxed);
                                                                    }
                                                                }
                                                                if (
                                                                    (0x8000U 
                                                                     & vlSelf->top__DOT__DUT__DOT__dirty0)) {
                                                                    vlSymsp->__Vcoverage[934].fetch_add(1, std::memory_order_relaxed);
                                                                }
                                                            }
                                                            if (
                                                                (0x4000U 
                                                                 & vlSelf->top__DOT__DUT__DOT__dirty0)) {
                                                                vlSymsp->__Vcoverage[935].fetch_add(1, std::memory_order_relaxed);
                                                            }
                                                        }
                                                        if (
                                                            (0x2000U 
                                                             & vlSelf->top__DOT__DUT__DOT__dirty0)) {
                                                            vlSymsp->__Vcoverage[936].fetch_add(1, std::memory_order_relaxed);
                                                        }
                                                    }
                                                    if (
                                                        (0x1000U 
                                                         & vlSelf->top__DOT__DUT__DOT__dirty0)) {
                                                        vlSymsp->__Vcoverage[937].fetch_add(1, std::memory_order_relaxed);
                                                    }
                                                }
                                                if (
                                                    (0x800U 
                                                     & vlSelf->top__DOT__DUT__DOT__dirty0)) {
                                                    vlSymsp->__Vcoverage[938].fetch_add(1, std::memory_order_relaxed);
                                                }
                                            }
                                            if ((0x400U 
                                                 & vlSelf->top__DOT__DUT__DOT__dirty0)) {
                                                vlSymsp->__Vcoverage[939].fetch_add(1, std::memory_order_relaxed);
                                            }
                                        }
                                        if ((0x200U 
                                             & vlSelf->top__DOT__DUT__DOT__dirty0)) {
                                            vlSymsp->__Vcoverage[940].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    }
                                    if ((0x100U & vlSelf->top__DOT__DUT__DOT__dirty0)) {
                                        vlSymsp->__Vcoverage[941].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                                if ((0x80U & vlSelf->top__DOT__DUT__DOT__dirty0)) {
                                    vlSymsp->__Vcoverage[942].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((0x40U & vlSelf->top__DOT__DUT__DOT__dirty0)) {
                                vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((0x20U & vlSelf->top__DOT__DUT__DOT__dirty0)) {
                            vlSymsp->__Vcoverage[944].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((0x10U & vlSelf->top__DOT__DUT__DOT__dirty0)) {
                        vlSymsp->__Vcoverage[945].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((8U & vlSelf->top__DOT__DUT__DOT__dirty0)) {
                    vlSymsp->__Vcoverage[946].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((4U & vlSelf->top__DOT__DUT__DOT__dirty0)) {
                vlSymsp->__Vcoverage[947].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((2U & vlSelf->top__DOT__DUT__DOT__dirty0)) {
            vlSymsp->__Vcoverage[948].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & vlSelf->top__DOT__DUT__DOT__dirty0)) {
        vlSymsp->__Vcoverage[949].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__flush0_index = 0U;
    } else {
        vlSelf->top__DOT__DUT__DOT__flush0_index = 
            ((2U & vlSelf->top__DOT__DUT__DOT__dirty0)
              ? 1U : ((4U & vlSelf->top__DOT__DUT__DOT__dirty0)
                       ? 2U : ((8U & vlSelf->top__DOT__DUT__DOT__dirty0)
                                ? 3U : ((0x10U & vlSelf->top__DOT__DUT__DOT__dirty0)
                                         ? 4U : ((0x20U 
                                                  & vlSelf->top__DOT__DUT__DOT__dirty0)
                                                  ? 5U
                                                  : 
                                                 ((0x40U 
                                                   & vlSelf->top__DOT__DUT__DOT__dirty0)
                                                   ? 6U
                                                   : 
                                                  ((0x80U 
                                                    & vlSelf->top__DOT__DUT__DOT__dirty0)
                                                    ? 7U
                                                    : 
                                                   ((0x100U 
                                                     & vlSelf->top__DOT__DUT__DOT__dirty0)
                                                     ? 8U
                                                     : 
                                                    ((0x200U 
                                                      & vlSelf->top__DOT__DUT__DOT__dirty0)
                                                      ? 9U
                                                      : 
                                                     ((0x400U 
                                                       & vlSelf->top__DOT__DUT__DOT__dirty0)
                                                       ? 0xaU
                                                       : 
                                                      ((0x800U 
                                                        & vlSelf->top__DOT__DUT__DOT__dirty0)
                                                        ? 0xbU
                                                        : 
                                                       ((0x1000U 
                                                         & vlSelf->top__DOT__DUT__DOT__dirty0)
                                                         ? 0xcU
                                                         : 
                                                        ((0x2000U 
                                                          & vlSelf->top__DOT__DUT__DOT__dirty0)
                                                          ? 0xdU
                                                          : 
                                                         ((0x4000U 
                                                           & vlSelf->top__DOT__DUT__DOT__dirty0)
                                                           ? 0xeU
                                                           : 
                                                          ((0x8000U 
                                                            & vlSelf->top__DOT__DUT__DOT__dirty0)
                                                            ? 0xfU
                                                            : 
                                                           ((0x10000U 
                                                             & vlSelf->top__DOT__DUT__DOT__dirty0)
                                                             ? 0x10U
                                                             : 
                                                            ((0x20000U 
                                                              & vlSelf->top__DOT__DUT__DOT__dirty0)
                                                              ? 0x11U
                                                              : 
                                                             ((0x40000U 
                                                               & vlSelf->top__DOT__DUT__DOT__dirty0)
                                                               ? 0x12U
                                                               : 
                                                              ((0x80000U 
                                                                & vlSelf->top__DOT__DUT__DOT__dirty0)
                                                                ? 0x13U
                                                                : 
                                                               ((0x100000U 
                                                                 & vlSelf->top__DOT__DUT__DOT__dirty0)
                                                                 ? 0x14U
                                                                 : 
                                                                ((0x200000U 
                                                                  & vlSelf->top__DOT__DUT__DOT__dirty0)
                                                                  ? 0x15U
                                                                  : 
                                                                 ((0x400000U 
                                                                   & vlSelf->top__DOT__DUT__DOT__dirty0)
                                                                   ? 0x16U
                                                                   : 
                                                                  ((0x800000U 
                                                                    & vlSelf->top__DOT__DUT__DOT__dirty0)
                                                                    ? 0x17U
                                                                    : 
                                                                   ((0x1000000U 
                                                                     & vlSelf->top__DOT__DUT__DOT__dirty0)
                                                                     ? 0x18U
                                                                     : 
                                                                    ((0x2000000U 
                                                                      & vlSelf->top__DOT__DUT__DOT__dirty0)
                                                                      ? 0x19U
                                                                      : 
                                                                     ((0x4000000U 
                                                                       & vlSelf->top__DOT__DUT__DOT__dirty0)
                                                                       ? 0x1aU
                                                                       : 
                                                                      ((0x8000000U 
                                                                        & vlSelf->top__DOT__DUT__DOT__dirty0)
                                                                        ? 0x1bU
                                                                        : 
                                                                       ((0x10000000U 
                                                                         & vlSelf->top__DOT__DUT__DOT__dirty0)
                                                                         ? 0x1cU
                                                                         : 
                                                                        ((0x20000000U 
                                                                          & vlSelf->top__DOT__DUT__DOT__dirty0)
                                                                          ? 0x1dU
                                                                          : 
                                                                         ((0x40000000U 
                                                                           & vlSelf->top__DOT__DUT__DOT__dirty0)
                                                                           ? 0x1eU
                                                                           : 
                                                                          ((vlSelf->top__DOT__DUT__DOT__dirty0 
                                                                            >> 0x1fU)
                                                                            ? 0x1fU
                                                                            : 0U)))))))))))))))))))))))))))))));
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__index_sel)))) {
        vlSymsp->__Vcoverage[987].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__write_word_sel) {
        if (vlSelf->top__DOT__write_word_sel) {
            vlSymsp->__Vcoverage[992].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__DUT__DOT__write_word_offset 
                = (0xfU & (IData)(vlSelf->top__DOT__DUT__DOT__resp_word));
        } else {
            vlSelf->top__DOT__DUT__DOT__write_word_offset 
                = (0xfU & 0U);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__write_word_sel)))) {
            vlSymsp->__Vcoverage[993].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->top__DOT__DUT__DOT__write_word_offset 
            = (0xfU & ((vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                        << 0x1cU) | (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                                     >> 4U)));
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__write_word_sel)))) {
        vlSymsp->__Vcoverage[991].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__read_word_sel) {
        if (vlSelf->top__DOT__read_word_sel) {
            vlSymsp->__Vcoverage[996].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__DUT__DOT__read_word_offset 
                = (0xfU & (IData)(vlSelf->top__DOT__DUT__DOT__req_word));
        } else {
            vlSelf->top__DOT__DUT__DOT__read_word_offset 
                = (0xfU & 0U);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__read_word_sel)))) {
            vlSymsp->__Vcoverage[997].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->top__DOT__DUT__DOT__read_word_offset 
            = (0xfU & ((vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                        << 0x1cU) | (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                                     >> 4U)));
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__read_word_sel)))) {
        vlSymsp->__Vcoverage[995].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__write_data_sel) {
        if (vlSelf->top__DOT__write_data_sel) {
            vlSymsp->__Vcoverage[1000].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__DUT__DOT__write_data 
                = (IData)(vlSelf->top__DOT__cache_resp_msg);
        } else {
            vlSelf->top__DOT__DUT__DOT__write_data = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__write_data_sel)))) {
            vlSymsp->__Vcoverage[1001].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->top__DOT__DUT__DOT__write_data = vlSelf->top__DOT__DUT__DOT__incoming_msg[0U];
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__write_data_sel)))) {
        vlSymsp->__Vcoverage[999].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__way_select) {
        if (vlSelf->top__DOT__way_select) {
            vlSymsp->__Vcoverage[2076].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__way_select)))) {
            vlSymsp->__Vcoverage[2077].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__way_select)))) {
        vlSymsp->__Vcoverage[2075].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0U == vlSelf->top__DOT__DUT__DOT__dirty0)) {
        if ((0U == vlSelf->top__DOT__DUT__DOT__dirty0)) {
            vlSymsp->__Vcoverage[2086].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__DUT__DOT__flush_index 
                = vlSelf->top__DOT__DUT__DOT__flush1_index;
        } else {
            vlSelf->top__DOT__DUT__DOT__flush_index = 0U;
        }
        if ((0U != vlSelf->top__DOT__DUT__DOT__dirty0)) {
            vlSymsp->__Vcoverage[2087].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->top__DOT__DUT__DOT__flush_index = vlSelf->top__DOT__DUT__DOT__flush0_index;
    }
    if (vlSelf->top__DOT__index_sel) {
        if (vlSelf->top__DOT__index_sel) {
            vlSymsp->__Vcoverage[988].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__DUT__DOT__d_index = (0x1fU 
                                                   & (IData)(vlSelf->top__DOT__DUT__DOT__flush_index));
        } else {
            vlSelf->top__DOT__DUT__DOT__d_index = (0x1fU 
                                                   & 0U);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__index_sel)))) {
            vlSymsp->__Vcoverage[989].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->top__DOT__DUT__DOT__d_index = (0x1fU 
                                               & ((vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                                                   << 0x18U) 
                                                  | (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                                                     >> 8U)));
    }
    if (vlSelf->top__DOT__flush) {
        vlSymsp->__Vcoverage[904].fetch_add(1, std::memory_order_relaxed);
        if (vlSelf->top__DOT__way_select) {
            vlSymsp->__Vcoverage[902].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                = ((vlSelf->top__DOT__DUT__DOT__tag1
                    [vlSelf->top__DOT__DUT__DOT__flush_index] 
                    << 0xbU) | (((IData)(vlSelf->top__DOT__DUT__DOT__flush_index) 
                                 << 6U) | (0x3cU & 
                                           ((IData)(vlSelf->top__DOT__DUT__DOT__req_word) 
                                            << 2U))));
        } else {
            vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                = ((vlSelf->top__DOT__DUT__DOT__tag0
                    [vlSelf->top__DOT__DUT__DOT__flush_index] 
                    << 0xbU) | (((IData)(vlSelf->top__DOT__DUT__DOT__flush_index) 
                                 << 6U) | (0x3cU & 
                                           ((IData)(vlSelf->top__DOT__DUT__DOT__req_word) 
                                            << 2U))));
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__way_select)))) {
            vlSymsp->__Vcoverage[901].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->top__DOT__DUT__DOT__req_addr_mem = 
            (((2U == (IData)(vlSelf->top__DOT__state)) 
              & (~ (IData)(vlSelf->top__DOT__way_select)))
              ? ((vlSelf->top__DOT__DUT__DOT__tag0[
                  (0x1fU & (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                            >> 8U))] << 0xbU) | ((0x7c0U 
                                                  & (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                                                     >> 2U)) 
                                                 | ((0x3cU 
                                                     & ((IData)(vlSelf->top__DOT__DUT__DOT__req_word) 
                                                        << 2U)) 
                                                    | (3U 
                                                       & (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                                                          >> 2U)))))
              : (((2U == (IData)(vlSelf->top__DOT__state)) 
                  & (IData)(vlSelf->top__DOT__way_select))
                  ? ((vlSelf->top__DOT__DUT__DOT__tag1
                      [(0x1fU & (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                                 >> 8U))] << 0xbU) 
                     | ((0x7c0U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                                   >> 2U)) | ((0x3cU 
                                               & ((IData)(vlSelf->top__DOT__DUT__DOT__req_word) 
                                                  << 2U)) 
                                              | (3U 
                                                 & (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                                                    >> 2U)))))
                  : ((0xfffff800U & ((vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                                      << 0x1eU) | (0x3ffff800U 
                                                   & (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                                                      >> 2U)))) 
                     | ((0x7c0U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                                   >> 2U)) | ((0x3cU 
                                               & ((IData)(vlSelf->top__DOT__DUT__DOT__req_word) 
                                                  << 2U)) 
                                              | (3U 
                                                 & (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                                                    >> 2U)))))));
    }
    if ((0U != vlSelf->top__DOT__DUT__DOT__dirty0)) {
        vlSymsp->__Vcoverage[2085].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->top__DOT____Vtogcov__clk))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->linetrace) ^ (IData)(vlSelf->top__DOT____Vtogcov__linetrace))) {
        vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__linetrace = vlSelf->linetrace;
    }
    if (((IData)(vlSelf->top__DOT__reset) ^ (IData)(vlSelf->top__DOT____Vtogcov__reset))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reset = vlSelf->top__DOT__reset;
    }
    if (((IData)(vlSelf->top__DOT__memreq_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__memreq_val))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_val = vlSelf->top__DOT__memreq_val;
    }
    if (((IData)(vlSelf->top__DOT__memreq_rdy) ^ (IData)(vlSelf->top__DOT____Vtogcov__memreq_rdy))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_rdy = vlSelf->top__DOT__memreq_rdy;
    }
    if (((IData)(vlSelf->top__DOT__memresp_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__memresp_val))) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memresp_val = vlSelf->top__DOT__memresp_val;
    }
    if (((IData)(vlSelf->top__DOT__memresp_rdy) ^ (IData)(vlSelf->top__DOT____Vtogcov__memresp_rdy))) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memresp_rdy = vlSelf->top__DOT__memresp_rdy;
    }
    if (((IData)(vlSelf->top__DOT__cache_req_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__cache_req_val))) {
        vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_val 
            = vlSelf->top__DOT__cache_req_val;
    }
    if (((IData)(vlSelf->top__DOT__cache_req_rdy) ^ (IData)(vlSelf->top__DOT____Vtogcov__cache_req_rdy))) {
        vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_rdy 
            = vlSelf->top__DOT__cache_req_rdy;
    }
    if (((IData)(vlSelf->top__DOT__cache_resp_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__cache_resp_val))) {
        vlSymsp->__Vcoverage[210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_val 
            = vlSelf->top__DOT__cache_resp_val;
    }
    if (((IData)(vlSelf->top__DOT__cache_resp_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__cache_resp_rdy))) {
        vlSymsp->__Vcoverage[211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_rdy 
            = vlSelf->top__DOT__cache_resp_rdy;
    }
    if (((IData)(vlSelf->top__DOT__flush) ^ (IData)(vlSelf->top__DOT____Vtogcov__flush))) {
        vlSymsp->__Vcoverage[259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__flush = vlSelf->top__DOT__flush;
    }
    if (((IData)(vlSelf->top__DOT__flush_done) ^ (IData)(vlSelf->top__DOT____Vtogcov__flush_done))) {
        vlSymsp->__Vcoverage[261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__flush_done = vlSelf->top__DOT__flush_done;
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                >> 0xaU) ^ (IData)(vlSelf->top__DOT____Vtogcov__incoming_mem_type)))) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__incoming_mem_type 
            = (1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                     >> 0xaU));
    }
    if (((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word)) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__req_count_done))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__req_count_done 
            = (0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word));
    }
    if (((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__resp_count_done))) {
        vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__resp_count_done 
            = (0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word));
    }
    if (((0U == vlSelf->top__DOT__DUT__DOT__dirty0) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__flush_way_sel))) {
        vlSymsp->__Vcoverage[271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__flush_way_sel 
            = (0U == vlSelf->top__DOT__DUT__DOT__dirty0);
    }
    if (((IData)(vlSelf->top__DOT__input_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__input_en))) {
        vlSymsp->__Vcoverage[272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__input_en = vlSelf->top__DOT__input_en;
    }
    if (((IData)(vlSelf->top__DOT__tarray_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__tarray_en))) {
        vlSymsp->__Vcoverage[273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__tarray_en = vlSelf->top__DOT__tarray_en;
    }
    if (((IData)(vlSelf->top__DOT__tarray_wen) ^ (IData)(vlSelf->top__DOT____Vtogcov__tarray_wen))) {
        vlSymsp->__Vcoverage[274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__tarray_wen = vlSelf->top__DOT__tarray_wen;
    }
    if (((IData)(vlSelf->top__DOT__req_count_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__req_count_en))) {
        vlSymsp->__Vcoverage[275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__req_count_en = vlSelf->top__DOT__req_count_en;
    }
    if (((IData)(vlSelf->top__DOT__resp_count_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__resp_count_en))) {
        vlSymsp->__Vcoverage[276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__resp_count_en 
            = vlSelf->top__DOT__resp_count_en;
    }
    if (((IData)(vlSelf->top__DOT__count_reset) ^ (IData)(vlSelf->top__DOT____Vtogcov__count_reset))) {
        vlSymsp->__Vcoverage[277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__count_reset = vlSelf->top__DOT__count_reset;
    }
    if (((IData)(vlSelf->top__DOT__write_data_sel) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__write_data_sel))) {
        vlSymsp->__Vcoverage[278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__write_data_sel 
            = vlSelf->top__DOT__write_data_sel;
    }
    if (((IData)(vlSelf->top__DOT__darray_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__darray_en))) {
        vlSymsp->__Vcoverage[279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__darray_en = vlSelf->top__DOT__darray_en;
    }
    if (((IData)(vlSelf->top__DOT__darray_wen) ^ (IData)(vlSelf->top__DOT____Vtogcov__darray_wen))) {
        vlSymsp->__Vcoverage[280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__darray_wen = vlSelf->top__DOT__darray_wen;
    }
    if (((IData)(vlSelf->top__DOT__index_sel) ^ (IData)(vlSelf->top__DOT____Vtogcov__index_sel))) {
        vlSymsp->__Vcoverage[281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__index_sel = vlSelf->top__DOT__index_sel;
    }
    if (((IData)(vlSelf->top__DOT__write_word_sel) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__write_word_sel))) {
        vlSymsp->__Vcoverage[282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__write_word_sel 
            = vlSelf->top__DOT__write_word_sel;
    }
    if (((IData)(vlSelf->top__DOT__read_word_sel) ^ (IData)(vlSelf->top__DOT____Vtogcov__read_word_sel))) {
        vlSymsp->__Vcoverage[283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__read_word_sel 
            = vlSelf->top__DOT__read_word_sel;
    }
    if (((IData)(vlSelf->top__DOT__mem_action) ^ (IData)(vlSelf->top__DOT____Vtogcov__mem_action))) {
        vlSymsp->__Vcoverage[284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mem_action = vlSelf->top__DOT__mem_action;
    }
    if (((IData)(vlSelf->top__DOT__way_select) ^ (IData)(vlSelf->top__DOT____Vtogcov__way_select))) {
        vlSymsp->__Vcoverage[285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__way_select = vlSelf->top__DOT__way_select;
    }
    if (((IData)(vlSelf->top__DOT__clean_set) ^ (IData)(vlSelf->top__DOT____Vtogcov__clean_set))) {
        vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__clean_set = vlSelf->top__DOT__clean_set;
    }
    if (((IData)(vlSelf->top__DOT__dirty_set) ^ (IData)(vlSelf->top__DOT____Vtogcov__dirty_set))) {
        vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dirty_set = vlSelf->top__DOT__dirty_set;
    }
    if (((IData)(vlSelf->top__DOT__valid_set) ^ (IData)(vlSelf->top__DOT____Vtogcov__valid_set))) {
        vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__valid_set = vlSelf->top__DOT__valid_set;
    }
    if (((0U == vlSelf->top__DOT__DUT__DOT__dirty1) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__all1_flushed))) {
        vlSymsp->__Vcoverage[906].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__all1_flushed 
            = (0U == vlSelf->top__DOT__DUT__DOT__dirty1);
    }
    vlSelf->top__DOT__DUT__DOT__req_inc_out = (0x1fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
    vlSelf->top__DOT__DUT__DOT__resp_inc_out = (0x1fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
    if ((1U & ((IData)(vlSelf->top__DOT__state) ^ (IData)(vlSelf->top__DOT____Vtogcov__state)))) {
        vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__state = ((6U & (IData)(vlSelf->top__DOT____Vtogcov__state)) 
                                              | (1U 
                                                 & (IData)(vlSelf->top__DOT__state)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__state) ^ (IData)(vlSelf->top__DOT____Vtogcov__state)))) {
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__state = ((5U & (IData)(vlSelf->top__DOT____Vtogcov__state)) 
                                              | (2U 
                                                 & (IData)(vlSelf->top__DOT__state)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__state) ^ (IData)(vlSelf->top__DOT____Vtogcov__state)))) {
        vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__state = ((3U & (IData)(vlSelf->top__DOT____Vtogcov__state)) 
                                              | (4U 
                                                 & (IData)(vlSelf->top__DOT__state)));
    }
    if ((1U & (((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__req_word)) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__req_inc_out)))) {
        vlSymsp->__Vcoverage[723].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__req_inc_out 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__req_inc_out)) 
               | (1U & ((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__req_word))));
    }
    if ((1U & ((0xfU & (((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__req_word)) 
                        >> 1U)) ^ ((IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__req_inc_out) 
                                   >> 1U)))) {
        vlSymsp->__Vcoverage[724].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__req_inc_out 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__req_inc_out)) 
               | (2U & ((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__req_word))));
    }
    if ((1U & ((7U & (((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__req_word)) 
                      >> 2U)) ^ ((IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__req_inc_out) 
                                 >> 2U)))) {
        vlSymsp->__Vcoverage[725].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__req_inc_out 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__req_inc_out)) 
               | (4U & ((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__req_word))));
    }
    if ((1U & ((3U & (((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__req_word)) 
                      >> 3U)) ^ ((IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__req_inc_out) 
                                 >> 3U)))) {
        vlSymsp->__Vcoverage[726].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__req_inc_out 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__req_inc_out)) 
               | (8U & ((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__req_word))));
    }
    if ((1U & ((1U & (((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__req_word)) 
                      >> 4U)) ^ ((IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__req_inc_out) 
                                 >> 4U)))) {
        vlSymsp->__Vcoverage[727].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__req_inc_out 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__req_inc_out)) 
               | (0x10U & ((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__req_word))));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__req_word) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__req_word)))) {
        vlSymsp->__Vcoverage[728].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__req_word 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__req_word)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__req_word) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__req_word)))) {
        vlSymsp->__Vcoverage[729].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__req_word 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__req_word)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__req_word) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__req_word)))) {
        vlSymsp->__Vcoverage[730].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__req_word 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__req_word)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__req_word) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__req_word)))) {
        vlSymsp->__Vcoverage[731].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__req_word 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__req_word)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__req_word) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__req_word)))) {
        vlSymsp->__Vcoverage[732].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__req_word 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__req_word)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__req_word)));
    }
    if ((1U & (((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__resp_inc_out)))) {
        vlSymsp->__Vcoverage[733].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__resp_inc_out 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__resp_inc_out)) 
               | (1U & ((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__resp_word))));
    }
    if ((1U & ((0xfU & (((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)) 
                        >> 1U)) ^ ((IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__resp_inc_out) 
                                   >> 1U)))) {
        vlSymsp->__Vcoverage[734].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__resp_inc_out 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__resp_inc_out)) 
               | (2U & ((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__resp_word))));
    }
    if ((1U & ((7U & (((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)) 
                      >> 2U)) ^ ((IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__resp_inc_out) 
                                 >> 2U)))) {
        vlSymsp->__Vcoverage[735].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__resp_inc_out 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__resp_inc_out)) 
               | (4U & ((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__resp_word))));
    }
    if ((1U & ((3U & (((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)) 
                      >> 3U)) ^ ((IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__resp_inc_out) 
                                 >> 3U)))) {
        vlSymsp->__Vcoverage[736].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__resp_inc_out 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__resp_inc_out)) 
               | (8U & ((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__resp_word))));
    }
    if ((1U & ((1U & (((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)) 
                      >> 4U)) ^ ((IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__resp_inc_out) 
                                 >> 4U)))) {
        vlSymsp->__Vcoverage[737].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__resp_inc_out 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__resp_inc_out)) 
               | (0x10U & ((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__resp_word))));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__resp_word) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__resp_word)))) {
        vlSymsp->__Vcoverage[738].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__resp_word 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__resp_word)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__resp_word) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__resp_word)))) {
        vlSymsp->__Vcoverage[739].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__resp_word 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__resp_word)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__resp_word) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__resp_word)))) {
        vlSymsp->__Vcoverage[740].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__resp_word 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__resp_word)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__resp_word) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__resp_word)))) {
        vlSymsp->__Vcoverage[741].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__resp_word 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__resp_word)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__resp_word) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__resp_word)))) {
        vlSymsp->__Vcoverage[742].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__resp_word 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__resp_word)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)));
    }
    vlSelf->top__DOT__tarray0_match = ((0x1fffffU & 
                                        ((vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                                          << 0x13U) 
                                         | (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                                            >> 0xdU))) 
                                       == vlSelf->top__DOT__DUT__DOT__tag0
                                       [(0x1fU & (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                                                  >> 8U))]);
    vlSelf->top__DOT__tarray1_match = ((0x1fffffU & 
                                        ((vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                                          << 0x13U) 
                                         | (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                                            >> 0xdU))) 
                                       == vlSelf->top__DOT__DUT__DOT__tag1
                                       [(0x1fU & (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                                                  >> 8U))]);
    vlSelf->top__DOT__line0_dirty = (1U & (vlSelf->top__DOT__DUT__DOT__dirty0 
                                           >> (0x1fU 
                                               & (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                                                  >> 8U))));
    vlSelf->top__DOT__line1_dirty = (1U & (vlSelf->top__DOT__DUT__DOT__dirty1 
                                           >> (0x1fU 
                                               & (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                                                  >> 8U))));
    vlSelf->top__DOT__line0_valid = (1U & (vlSelf->top__DOT__DUT__DOT__valid0 
                                           >> (0x1fU 
                                               & (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                                                  >> 8U))));
    vlSelf->top__DOT__line1_valid = (1U & (vlSelf->top__DOT__DUT__DOT__valid1 
                                           >> (0x1fU 
                                               & (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                                                  >> 8U))));
    vlSelf->top__DOT__all_flushed = ((0U == vlSelf->top__DOT__DUT__DOT__dirty0) 
                                     & (0U == vlSelf->top__DOT__DUT__DOT__dirty1));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__incoming_msg[1U]))) {
        vlSymsp->__Vcoverage[366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__incoming_msg[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__incoming_msg[1U]) 
               | (1U & vlSelf->top__DOT__DUT__DOT__incoming_msg[1U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__incoming_msg[1U]))) {
        vlSymsp->__Vcoverage[367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__incoming_msg[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__incoming_msg[1U]) 
               | (2U & vlSelf->top__DOT__DUT__DOT__incoming_msg[1U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__incoming_msg[2U]))) {
        vlSymsp->__Vcoverage[368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__incoming_msg[2U] 
            = ((0x1ffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__incoming_msg[2U]) 
               | (4U & vlSelf->top__DOT__DUT__DOT__incoming_msg[2U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__incoming_msg[2U]))) {
        vlSymsp->__Vcoverage[369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__incoming_msg[2U] 
            = ((0x1ff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__incoming_msg[2U]) 
               | (8U & vlSelf->top__DOT__DUT__DOT__incoming_msg[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__incoming_msg[2U]))) {
        vlSymsp->__Vcoverage[370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__incoming_msg[2U] 
            = ((0x1fefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__incoming_msg[2U]) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__incoming_msg[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__incoming_msg[2U]))) {
        vlSymsp->__Vcoverage[371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__incoming_msg[2U] 
            = ((0x1fdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__incoming_msg[2U]) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__incoming_msg[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__incoming_msg[2U]))) {
        vlSymsp->__Vcoverage[372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__incoming_msg[2U] 
            = ((0x1fbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__incoming_msg[2U]) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__incoming_msg[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__incoming_msg[2U]))) {
        vlSymsp->__Vcoverage[373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__incoming_msg[2U] 
            = ((0x1f7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__incoming_msg[2U]) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__incoming_msg[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__incoming_msg[2U]))) {
        vlSymsp->__Vcoverage[374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__incoming_msg[2U] 
            = ((0x1effU & vlSelf->top__DOT__DUT__DOT____Vtogcov__incoming_msg[2U]) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__incoming_msg[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__incoming_msg[2U]))) {
        vlSymsp->__Vcoverage[375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__incoming_msg[2U] 
            = ((0x1dffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__incoming_msg[2U]) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__incoming_msg[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__incoming_msg[2U]))) {
        vlSymsp->__Vcoverage[376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__incoming_msg[2U] 
            = ((0x17ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__incoming_msg[2U]) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__incoming_msg[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__incoming_msg[2U]))) {
        vlSymsp->__Vcoverage[377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__incoming_msg[2U] 
            = ((0xfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__incoming_msg[2U]) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__incoming_msg[2U]));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                >> 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__address))) {
        vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__address) 
               | (1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                        >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                >> 3U) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
                          >> 1U)))) {
        vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__address) 
               | (2U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                        >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                >> 4U) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
                          >> 2U)))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__address) 
               | (4U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                        >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                >> 5U) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
                          >> 3U)))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__address) 
               | (8U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                        >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                >> 6U) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
                          >> 4U)))) {
        vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__address) 
               | (0x10U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                           >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                >> 7U) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
                          >> 5U)))) {
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__address) 
               | (0x20U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                           >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                >> 8U) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
                          >> 6U)))) {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__address) 
               | (0x40U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                           >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                >> 9U) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
                          >> 7U)))) {
        vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__address) 
               | (0x80U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                           >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                >> 0xaU) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
                            >> 8U)))) {
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__address) 
               | (0x100U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                            >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                >> 0xbU) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
                            >> 9U)))) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__address) 
               | (0x200U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                            >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                >> 0xcU) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
                            >> 0xaU)))) {
        vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__address) 
               | (0x400U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                            >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                >> 0xdU) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
                            >> 0xbU)))) {
        vlSymsp->__Vcoverage[313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__address) 
               | (0x800U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                            >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                >> 0xeU) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
                            >> 0xcU)))) {
        vlSymsp->__Vcoverage[314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__address) 
               | (0x1000U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                             >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                >> 0xfU) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
                            >> 0xdU)))) {
        vlSymsp->__Vcoverage[315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__address) 
               | (0x2000U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                             >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                >> 0x10U) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
                             >> 0xeU)))) {
        vlSymsp->__Vcoverage[316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__address) 
               | (0x4000U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                             >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                >> 0x11U) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
                             >> 0xfU)))) {
        vlSymsp->__Vcoverage[317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__address) 
               | (0x8000U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                             >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                >> 0x12U) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
                             >> 0x10U)))) {
        vlSymsp->__Vcoverage[318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__address) 
               | (0x10000U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                              >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                >> 0x13U) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
                             >> 0x11U)))) {
        vlSymsp->__Vcoverage[319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__address) 
               | (0x20000U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                              >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                >> 0x14U) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
                             >> 0x12U)))) {
        vlSymsp->__Vcoverage[320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__address) 
               | (0x40000U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                              >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                >> 0x15U) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
                             >> 0x13U)))) {
        vlSymsp->__Vcoverage[321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__address) 
               | (0x80000U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                              >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                >> 0x16U) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
                             >> 0x14U)))) {
        vlSymsp->__Vcoverage[322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__address) 
               | (0x100000U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                               >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                >> 0x17U) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
                             >> 0x15U)))) {
        vlSymsp->__Vcoverage[323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__address) 
               | (0x200000U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                               >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                >> 0x18U) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
                             >> 0x16U)))) {
        vlSymsp->__Vcoverage[324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__address) 
               | (0x400000U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                               >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                >> 0x19U) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
                             >> 0x17U)))) {
        vlSymsp->__Vcoverage[325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__address) 
               | (0x800000U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                               >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                >> 0x1aU) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
                             >> 0x18U)))) {
        vlSymsp->__Vcoverage[326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__address) 
               | (0x1000000U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                                >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                >> 0x1bU) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
                             >> 0x19U)))) {
        vlSymsp->__Vcoverage[327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__address) 
               | (0x2000000U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                                >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                >> 0x1cU) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
                             >> 0x1aU)))) {
        vlSymsp->__Vcoverage[328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__address) 
               | (0x4000000U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                                >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                >> 0x1dU) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
                             >> 0x1bU)))) {
        vlSymsp->__Vcoverage[329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__address) 
               | (0x8000000U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                                >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                >> 0x1eU) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
                             >> 0x1cU)))) {
        vlSymsp->__Vcoverage[330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__address) 
               | (0x10000000U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                                 >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                >> 0x1fU) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
                             >> 0x1dU)))) {
        vlSymsp->__Vcoverage[331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__address) 
               | (0x20000000U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                                 >> 2U)));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
               ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
                  >> 0x1eU)))) {
        vlSymsp->__Vcoverage[332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__address) 
               | (0x40000000U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                                 << 0x1eU)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                >> 1U) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
                          >> 0x1fU)))) {
        vlSymsp->__Vcoverage[333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__address 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__address) 
               | (0x80000000U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                                 << 0x1eU)));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[0U] 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data) 
               | (1U & vlSelf->top__DOT__DUT__DOT__incoming_msg[0U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[0U] 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data) 
               | (2U & vlSelf->top__DOT__DUT__DOT__incoming_msg[0U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[0U] 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data) 
               | (4U & vlSelf->top__DOT__DUT__DOT__incoming_msg[0U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[0U] 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data) 
               | (8U & vlSelf->top__DOT__DUT__DOT__incoming_msg[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[0U] 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__incoming_msg[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[0U] 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__incoming_msg[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[0U] 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__incoming_msg[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[0U] 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__incoming_msg[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[0U] 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__incoming_msg[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[0U] 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__incoming_msg[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[0U] 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__incoming_msg[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[0U] 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__incoming_msg[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[0U] 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__incoming_msg[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[0U] 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__incoming_msg[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[0U] 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__incoming_msg[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[0U] 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__incoming_msg[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[0U] 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__incoming_msg[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[0U] 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__incoming_msg[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[0U] 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__incoming_msg[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[0U] 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__incoming_msg[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[0U] 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__incoming_msg[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[0U] 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__incoming_msg[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[0U] 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__incoming_msg[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[0U] 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__incoming_msg[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[0U] 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__incoming_msg[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[0U] 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__incoming_msg[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[0U] 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__incoming_msg[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[0U] 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__incoming_msg[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[0U] 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__incoming_msg[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[0U] 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__incoming_msg[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[0U] 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__incoming_msg[0U]));
    }
    if (((vlSelf->top__DOT__DUT__DOT__incoming_msg[0U] 
          ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc_write_data) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__incoming_msg[0U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dirty0 ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[743].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dirty0));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dirty0 ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[744].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dirty0));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dirty0 ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[745].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dirty0));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dirty0 ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[746].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dirty0));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dirty0 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[747].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dirty0));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dirty0 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[748].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dirty0));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dirty0 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[749].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dirty0));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dirty0 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[750].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dirty0));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dirty0 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[751].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dirty0));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dirty0 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[752].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dirty0));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dirty0 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[753].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dirty0));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dirty0 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[754].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dirty0));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dirty0 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[755].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dirty0));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dirty0 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[756].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dirty0));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dirty0 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[757].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dirty0));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dirty0 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[758].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dirty0));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dirty0 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[759].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dirty0));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dirty0 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[760].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dirty0));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dirty0 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[761].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dirty0));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dirty0 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[762].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dirty0));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dirty0 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[763].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dirty0));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dirty0 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[764].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dirty0));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dirty0 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[765].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dirty0));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dirty0 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[766].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dirty0));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dirty0 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[767].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dirty0));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dirty0 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[768].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dirty0));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dirty0 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[769].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dirty0));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dirty0 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[770].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dirty0));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dirty0 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[771].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dirty0));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dirty0 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[772].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dirty0));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dirty0 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[773].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dirty0));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dirty0 ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[774].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty0) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dirty0));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dirty1 ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1))) {
        vlSymsp->__Vcoverage[775].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dirty1));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dirty1 ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1))) {
        vlSymsp->__Vcoverage[776].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dirty1));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dirty1 ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1))) {
        vlSymsp->__Vcoverage[777].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dirty1));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dirty1 ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1))) {
        vlSymsp->__Vcoverage[778].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dirty1));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dirty1 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1))) {
        vlSymsp->__Vcoverage[779].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dirty1));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dirty1 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1))) {
        vlSymsp->__Vcoverage[780].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dirty1));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dirty1 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1))) {
        vlSymsp->__Vcoverage[781].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dirty1));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dirty1 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1))) {
        vlSymsp->__Vcoverage[782].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dirty1));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dirty1 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1))) {
        vlSymsp->__Vcoverage[783].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dirty1));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dirty1 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1))) {
        vlSymsp->__Vcoverage[784].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dirty1));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dirty1 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1))) {
        vlSymsp->__Vcoverage[785].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dirty1));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dirty1 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1))) {
        vlSymsp->__Vcoverage[786].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dirty1));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dirty1 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1))) {
        vlSymsp->__Vcoverage[787].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dirty1));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dirty1 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1))) {
        vlSymsp->__Vcoverage[788].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dirty1));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dirty1 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1))) {
        vlSymsp->__Vcoverage[789].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dirty1));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dirty1 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1))) {
        vlSymsp->__Vcoverage[790].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dirty1));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dirty1 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1))) {
        vlSymsp->__Vcoverage[791].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dirty1));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dirty1 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1))) {
        vlSymsp->__Vcoverage[792].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dirty1));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dirty1 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1))) {
        vlSymsp->__Vcoverage[793].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dirty1));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dirty1 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1))) {
        vlSymsp->__Vcoverage[794].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dirty1));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dirty1 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1))) {
        vlSymsp->__Vcoverage[795].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dirty1));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dirty1 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1))) {
        vlSymsp->__Vcoverage[796].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dirty1));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dirty1 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1))) {
        vlSymsp->__Vcoverage[797].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dirty1));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dirty1 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1))) {
        vlSymsp->__Vcoverage[798].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dirty1));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dirty1 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1))) {
        vlSymsp->__Vcoverage[799].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dirty1));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dirty1 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1))) {
        vlSymsp->__Vcoverage[800].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dirty1));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dirty1 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1))) {
        vlSymsp->__Vcoverage[801].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dirty1));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dirty1 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1))) {
        vlSymsp->__Vcoverage[802].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dirty1));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dirty1 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1))) {
        vlSymsp->__Vcoverage[803].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dirty1));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dirty1 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1))) {
        vlSymsp->__Vcoverage[804].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dirty1));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dirty1 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1))) {
        vlSymsp->__Vcoverage[805].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dirty1));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dirty1 ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[806].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dirty1) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dirty1));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__valid0 ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0))) {
        vlSymsp->__Vcoverage[818].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0) 
               | (1U & vlSelf->top__DOT__DUT__DOT__valid0));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__valid0 ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0))) {
        vlSymsp->__Vcoverage[819].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0) 
               | (2U & vlSelf->top__DOT__DUT__DOT__valid0));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__valid0 ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0))) {
        vlSymsp->__Vcoverage[820].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0) 
               | (4U & vlSelf->top__DOT__DUT__DOT__valid0));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__valid0 ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0))) {
        vlSymsp->__Vcoverage[821].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0) 
               | (8U & vlSelf->top__DOT__DUT__DOT__valid0));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__valid0 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0))) {
        vlSymsp->__Vcoverage[822].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__valid0));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__valid0 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0))) {
        vlSymsp->__Vcoverage[823].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__valid0));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__valid0 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0))) {
        vlSymsp->__Vcoverage[824].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__valid0));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__valid0 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0))) {
        vlSymsp->__Vcoverage[825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__valid0));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__valid0 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0))) {
        vlSymsp->__Vcoverage[826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__valid0));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__valid0 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0))) {
        vlSymsp->__Vcoverage[827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__valid0));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__valid0 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0))) {
        vlSymsp->__Vcoverage[828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__valid0));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__valid0 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0))) {
        vlSymsp->__Vcoverage[829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__valid0));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__valid0 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0))) {
        vlSymsp->__Vcoverage[830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__valid0));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__valid0 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0))) {
        vlSymsp->__Vcoverage[831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__valid0));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__valid0 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0))) {
        vlSymsp->__Vcoverage[832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__valid0));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__valid0 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0))) {
        vlSymsp->__Vcoverage[833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__valid0));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__valid0 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0))) {
        vlSymsp->__Vcoverage[834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__valid0));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__valid0 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0))) {
        vlSymsp->__Vcoverage[835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__valid0));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__valid0 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0))) {
        vlSymsp->__Vcoverage[836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__valid0));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__valid0 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0))) {
        vlSymsp->__Vcoverage[837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__valid0));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__valid0 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0))) {
        vlSymsp->__Vcoverage[838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__valid0));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__valid0 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0))) {
        vlSymsp->__Vcoverage[839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__valid0));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__valid0 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0))) {
        vlSymsp->__Vcoverage[840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__valid0));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__valid0 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0))) {
        vlSymsp->__Vcoverage[841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__valid0));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__valid0 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0))) {
        vlSymsp->__Vcoverage[842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__valid0));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__valid0 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0))) {
        vlSymsp->__Vcoverage[843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__valid0));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__valid0 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0))) {
        vlSymsp->__Vcoverage[844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__valid0));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__valid0 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0))) {
        vlSymsp->__Vcoverage[845].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__valid0));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__valid0 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0))) {
        vlSymsp->__Vcoverage[846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__valid0));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__valid0 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0))) {
        vlSymsp->__Vcoverage[847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__valid0));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__valid0 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0))) {
        vlSymsp->__Vcoverage[848].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__valid0));
    }
    if (((vlSelf->top__DOT__DUT__DOT__valid0 ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[849].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid0) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__valid0));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__valid1 ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1))) {
        vlSymsp->__Vcoverage[850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1) 
               | (1U & vlSelf->top__DOT__DUT__DOT__valid1));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__valid1 ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1))) {
        vlSymsp->__Vcoverage[851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1) 
               | (2U & vlSelf->top__DOT__DUT__DOT__valid1));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__valid1 ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1))) {
        vlSymsp->__Vcoverage[852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1) 
               | (4U & vlSelf->top__DOT__DUT__DOT__valid1));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__valid1 ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1))) {
        vlSymsp->__Vcoverage[853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1) 
               | (8U & vlSelf->top__DOT__DUT__DOT__valid1));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__valid1 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1))) {
        vlSymsp->__Vcoverage[854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__valid1));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__valid1 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1))) {
        vlSymsp->__Vcoverage[855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__valid1));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__valid1 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1))) {
        vlSymsp->__Vcoverage[856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__valid1));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__valid1 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1))) {
        vlSymsp->__Vcoverage[857].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__valid1));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__valid1 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1))) {
        vlSymsp->__Vcoverage[858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__valid1));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__valid1 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1))) {
        vlSymsp->__Vcoverage[859].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__valid1));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__valid1 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1))) {
        vlSymsp->__Vcoverage[860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__valid1));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__valid1 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1))) {
        vlSymsp->__Vcoverage[861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__valid1));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__valid1 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1))) {
        vlSymsp->__Vcoverage[862].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__valid1));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__valid1 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1))) {
        vlSymsp->__Vcoverage[863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__valid1));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__valid1 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1))) {
        vlSymsp->__Vcoverage[864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__valid1));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__valid1 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1))) {
        vlSymsp->__Vcoverage[865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__valid1));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__valid1 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1))) {
        vlSymsp->__Vcoverage[866].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__valid1));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__valid1 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1))) {
        vlSymsp->__Vcoverage[867].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__valid1));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__valid1 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1))) {
        vlSymsp->__Vcoverage[868].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__valid1));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__valid1 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1))) {
        vlSymsp->__Vcoverage[869].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__valid1));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__valid1 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1))) {
        vlSymsp->__Vcoverage[870].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__valid1));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__valid1 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1))) {
        vlSymsp->__Vcoverage[871].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__valid1));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__valid1 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1))) {
        vlSymsp->__Vcoverage[872].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__valid1));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__valid1 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1))) {
        vlSymsp->__Vcoverage[873].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__valid1));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__valid1 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1))) {
        vlSymsp->__Vcoverage[874].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__valid1));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__valid1 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1))) {
        vlSymsp->__Vcoverage[875].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__valid1));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__valid1 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1))) {
        vlSymsp->__Vcoverage[876].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__valid1));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__valid1 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1))) {
        vlSymsp->__Vcoverage[877].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__valid1));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__valid1 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1))) {
        vlSymsp->__Vcoverage[878].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__valid1));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__valid1 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1))) {
        vlSymsp->__Vcoverage[879].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__valid1));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__valid1 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1))) {
        vlSymsp->__Vcoverage[880].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__valid1));
    }
    if (((vlSelf->top__DOT__DUT__DOT__valid1 ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[881].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__valid1) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__valid1));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache_resp_msg 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache_resp_msg 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg 
            = ((0x6fffffffffffULL & vlSelf->top__DOT____Vtogcov__cache_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache_resp_msg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache_resp_msg 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache_resp_msg 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg 
            = ((0x5fffffffffffULL & vlSelf->top__DOT____Vtogcov__cache_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache_resp_msg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__cache_resp_msg 
                  ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg 
            = ((0x3fffffffffffULL & vlSelf->top__DOT____Vtogcov__cache_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache_resp_msg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache_resp_msg 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache_resp_msg 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg 
            = ((0x7fefffffffffULL & vlSelf->top__DOT____Vtogcov__cache_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache_resp_msg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache_resp_msg 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache_resp_msg 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT____Vtogcov__cache_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache_resp_msg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache_resp_msg 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache_resp_msg 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT____Vtogcov__cache_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache_resp_msg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache_resp_msg 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache_resp_msg 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT____Vtogcov__cache_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache_resp_msg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache_resp_msg 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache_resp_msg 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg 
            = ((0x7effffffffffULL & vlSelf->top__DOT____Vtogcov__cache_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache_resp_msg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache_resp_msg 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache_resp_msg 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg 
            = ((0x7dffffffffffULL & vlSelf->top__DOT____Vtogcov__cache_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache_resp_msg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache_resp_msg 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache_resp_msg 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg 
            = ((0x7bffffffffffULL & vlSelf->top__DOT____Vtogcov__cache_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache_resp_msg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache_resp_msg 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache_resp_msg 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg 
            = ((0x77ffffffffffULL & vlSelf->top__DOT____Vtogcov__cache_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache_resp_msg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache_resp_msg 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache_resp_msg 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT____Vtogcov__cache_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache_resp_msg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache_resp_msg 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache_resp_msg 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT____Vtogcov__cache_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache_resp_msg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache_resp_msg 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache_resp_msg 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT____Vtogcov__cache_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache_resp_msg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache_resp_msg 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache_resp_msg 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT____Vtogcov__cache_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache_resp_msg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__cache_resp_msg) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__cache_resp_msg)))) {
        vlSymsp->__Vcoverage[227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT____Vtogcov__cache_resp_msg) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__cache_resp_msg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache_resp_msg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache_resp_msg 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT____Vtogcov__cache_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache_resp_msg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache_resp_msg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache_resp_msg 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT____Vtogcov__cache_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache_resp_msg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache_resp_msg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache_resp_msg 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT____Vtogcov__cache_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache_resp_msg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache_resp_msg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache_resp_msg 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg 
            = ((0x7fffffffffefULL & vlSelf->top__DOT____Vtogcov__cache_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache_resp_msg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache_resp_msg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache_resp_msg 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT____Vtogcov__cache_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache_resp_msg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache_resp_msg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache_resp_msg 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT____Vtogcov__cache_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache_resp_msg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache_resp_msg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache_resp_msg 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT____Vtogcov__cache_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache_resp_msg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache_resp_msg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache_resp_msg 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT____Vtogcov__cache_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache_resp_msg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache_resp_msg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache_resp_msg 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT____Vtogcov__cache_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache_resp_msg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache_resp_msg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache_resp_msg 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT____Vtogcov__cache_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache_resp_msg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache_resp_msg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache_resp_msg 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT____Vtogcov__cache_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache_resp_msg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache_resp_msg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache_resp_msg 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg 
            = ((0x7fffffffefffULL & vlSelf->top__DOT____Vtogcov__cache_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache_resp_msg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache_resp_msg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache_resp_msg 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT____Vtogcov__cache_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache_resp_msg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache_resp_msg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache_resp_msg 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT____Vtogcov__cache_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache_resp_msg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache_resp_msg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache_resp_msg 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT____Vtogcov__cache_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache_resp_msg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache_resp_msg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache_resp_msg 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT____Vtogcov__cache_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache_resp_msg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache_resp_msg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache_resp_msg 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT____Vtogcov__cache_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache_resp_msg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache_resp_msg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache_resp_msg 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT____Vtogcov__cache_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache_resp_msg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache_resp_msg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache_resp_msg 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT____Vtogcov__cache_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache_resp_msg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache_resp_msg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache_resp_msg 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg 
            = ((0x7fffffefffffULL & vlSelf->top__DOT____Vtogcov__cache_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache_resp_msg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache_resp_msg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache_resp_msg 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT____Vtogcov__cache_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache_resp_msg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache_resp_msg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache_resp_msg 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT____Vtogcov__cache_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache_resp_msg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache_resp_msg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache_resp_msg 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT____Vtogcov__cache_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache_resp_msg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache_resp_msg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache_resp_msg 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT____Vtogcov__cache_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache_resp_msg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache_resp_msg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache_resp_msg 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT____Vtogcov__cache_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache_resp_msg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache_resp_msg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache_resp_msg 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT____Vtogcov__cache_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache_resp_msg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache_resp_msg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache_resp_msg 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT____Vtogcov__cache_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache_resp_msg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache_resp_msg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache_resp_msg 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg 
            = ((0x7fffefffffffULL & vlSelf->top__DOT____Vtogcov__cache_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache_resp_msg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache_resp_msg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache_resp_msg 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT____Vtogcov__cache_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache_resp_msg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache_resp_msg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache_resp_msg 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT____Vtogcov__cache_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache_resp_msg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache_resp_msg 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache_resp_msg 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT____Vtogcov__cache_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache_resp_msg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((0x400U & (vlSelf->top__DOT__memreq_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__memreq_msg[2U]))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[2U] 
            = ((0x1bffU & vlSelf->top__DOT____Vtogcov__memreq_msg[2U]) 
               | (0x400U & vlSelf->top__DOT__memreq_msg[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__memreq_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__memreq_msg[2U]))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[2U] 
            = ((0x17ffU & vlSelf->top__DOT____Vtogcov__memreq_msg[2U]) 
               | (0x800U & vlSelf->top__DOT__memreq_msg[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__memreq_msg[2U] 
                    ^ vlSelf->top__DOT____Vtogcov__memreq_msg[2U]))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[2U] 
            = ((0xfffU & vlSelf->top__DOT____Vtogcov__memreq_msg[2U]) 
               | (0x1000U & vlSelf->top__DOT__memreq_msg[2U]));
    }
    if ((4U & (vlSelf->top__DOT__memreq_msg[2U] ^ vlSelf->top__DOT____Vtogcov__memreq_msg[2U]))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[2U] 
            = ((0x1ffbU & vlSelf->top__DOT____Vtogcov__memreq_msg[2U]) 
               | (4U & vlSelf->top__DOT__memreq_msg[2U]));
    }
    if ((8U & (vlSelf->top__DOT__memreq_msg[2U] ^ vlSelf->top__DOT____Vtogcov__memreq_msg[2U]))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[2U] 
            = ((0x1ff7U & vlSelf->top__DOT____Vtogcov__memreq_msg[2U]) 
               | (8U & vlSelf->top__DOT__memreq_msg[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__memreq_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__memreq_msg[2U]))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[2U] 
            = ((0x1fefU & vlSelf->top__DOT____Vtogcov__memreq_msg[2U]) 
               | (0x10U & vlSelf->top__DOT__memreq_msg[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__memreq_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__memreq_msg[2U]))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[2U] 
            = ((0x1fdfU & vlSelf->top__DOT____Vtogcov__memreq_msg[2U]) 
               | (0x20U & vlSelf->top__DOT__memreq_msg[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__memreq_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__memreq_msg[2U]))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[2U] 
            = ((0x1fbfU & vlSelf->top__DOT____Vtogcov__memreq_msg[2U]) 
               | (0x40U & vlSelf->top__DOT__memreq_msg[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__memreq_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__memreq_msg[2U]))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[2U] 
            = ((0x1f7fU & vlSelf->top__DOT____Vtogcov__memreq_msg[2U]) 
               | (0x80U & vlSelf->top__DOT__memreq_msg[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__memreq_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__memreq_msg[2U]))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[2U] 
            = ((0x1effU & vlSelf->top__DOT____Vtogcov__memreq_msg[2U]) 
               | (0x100U & vlSelf->top__DOT__memreq_msg[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__memreq_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__memreq_msg[2U]))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[2U] 
            = ((0x1dffU & vlSelf->top__DOT____Vtogcov__memreq_msg[2U]) 
               | (0x200U & vlSelf->top__DOT__memreq_msg[2U]));
    }
    if ((4U & (vlSelf->top__DOT__memreq_msg[1U] ^ vlSelf->top__DOT____Vtogcov__memreq_msg[1U]))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__memreq_msg[1U]) 
               | (4U & vlSelf->top__DOT__memreq_msg[1U]));
    }
    if ((8U & (vlSelf->top__DOT__memreq_msg[1U] ^ vlSelf->top__DOT____Vtogcov__memreq_msg[1U]))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__memreq_msg[1U]) 
               | (8U & vlSelf->top__DOT__memreq_msg[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__memreq_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__memreq_msg[1U]))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[1U] 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__memreq_msg[1U]) 
               | (0x10U & vlSelf->top__DOT__memreq_msg[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__memreq_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__memreq_msg[1U]))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__memreq_msg[1U]) 
               | (0x20U & vlSelf->top__DOT__memreq_msg[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__memreq_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__memreq_msg[1U]))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__memreq_msg[1U]) 
               | (0x40U & vlSelf->top__DOT__memreq_msg[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__memreq_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__memreq_msg[1U]))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__memreq_msg[1U]) 
               | (0x80U & vlSelf->top__DOT__memreq_msg[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__memreq_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__memreq_msg[1U]))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__memreq_msg[1U]) 
               | (0x100U & vlSelf->top__DOT__memreq_msg[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__memreq_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__memreq_msg[1U]))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__memreq_msg[1U]) 
               | (0x200U & vlSelf->top__DOT__memreq_msg[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__memreq_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__memreq_msg[1U]))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__memreq_msg[1U]) 
               | (0x400U & vlSelf->top__DOT__memreq_msg[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__memreq_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__memreq_msg[1U]))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__memreq_msg[1U]) 
               | (0x800U & vlSelf->top__DOT__memreq_msg[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__memreq_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__memreq_msg[1U]))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[1U] 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__memreq_msg[1U]) 
               | (0x1000U & vlSelf->top__DOT__memreq_msg[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__memreq_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__memreq_msg[1U]))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__memreq_msg[1U]) 
               | (0x2000U & vlSelf->top__DOT__memreq_msg[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__memreq_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__memreq_msg[1U]))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__memreq_msg[1U]) 
               | (0x4000U & vlSelf->top__DOT__memreq_msg[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__memreq_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__memreq_msg[1U]))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__memreq_msg[1U]) 
               | (0x8000U & vlSelf->top__DOT__memreq_msg[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__memreq_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__memreq_msg[1U]))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__memreq_msg[1U]) 
               | (0x10000U & vlSelf->top__DOT__memreq_msg[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__memreq_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__memreq_msg[1U]))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__memreq_msg[1U]) 
               | (0x20000U & vlSelf->top__DOT__memreq_msg[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__memreq_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__memreq_msg[1U]))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__memreq_msg[1U]) 
               | (0x40000U & vlSelf->top__DOT__memreq_msg[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__memreq_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__memreq_msg[1U]))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__memreq_msg[1U]) 
               | (0x80000U & vlSelf->top__DOT__memreq_msg[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__memreq_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__memreq_msg[1U]))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[1U] 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__memreq_msg[1U]) 
               | (0x100000U & vlSelf->top__DOT__memreq_msg[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__memreq_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__memreq_msg[1U]))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__memreq_msg[1U]) 
               | (0x200000U & vlSelf->top__DOT__memreq_msg[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__memreq_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__memreq_msg[1U]))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__memreq_msg[1U]) 
               | (0x400000U & vlSelf->top__DOT__memreq_msg[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__memreq_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__memreq_msg[1U]))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__memreq_msg[1U]) 
               | (0x800000U & vlSelf->top__DOT__memreq_msg[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__memreq_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__memreq_msg[1U]))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__memreq_msg[1U]) 
               | (0x1000000U & vlSelf->top__DOT__memreq_msg[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__memreq_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__memreq_msg[1U]))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__memreq_msg[1U]) 
               | (0x2000000U & vlSelf->top__DOT__memreq_msg[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__memreq_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__memreq_msg[1U]))) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__memreq_msg[1U]) 
               | (0x4000000U & vlSelf->top__DOT__memreq_msg[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__memreq_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__memreq_msg[1U]))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__memreq_msg[1U]) 
               | (0x8000000U & vlSelf->top__DOT__memreq_msg[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__memreq_msg[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__memreq_msg[1U]))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[1U] 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__memreq_msg[1U]) 
               | (0x10000000U & vlSelf->top__DOT__memreq_msg[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__memreq_msg[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__memreq_msg[1U]))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__memreq_msg[1U]) 
               | (0x20000000U & vlSelf->top__DOT__memreq_msg[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__memreq_msg[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__memreq_msg[1U]))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__memreq_msg[1U]) 
               | (0x40000000U & vlSelf->top__DOT__memreq_msg[1U]));
    }
    if (((vlSelf->top__DOT__memreq_msg[1U] ^ vlSelf->top__DOT____Vtogcov__memreq_msg[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__memreq_msg[1U]) 
               | (0x80000000U & vlSelf->top__DOT__memreq_msg[1U]));
    }
    if ((1U & (vlSelf->top__DOT__memreq_msg[2U] ^ vlSelf->top__DOT____Vtogcov__memreq_msg[2U]))) {
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[2U] 
            = ((0x1ffeU & vlSelf->top__DOT____Vtogcov__memreq_msg[2U]) 
               | (1U & vlSelf->top__DOT__memreq_msg[2U]));
    }
    if ((2U & (vlSelf->top__DOT__memreq_msg[2U] ^ vlSelf->top__DOT____Vtogcov__memreq_msg[2U]))) {
        vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[2U] 
            = ((0x1ffdU & vlSelf->top__DOT____Vtogcov__memreq_msg[2U]) 
               | (2U & vlSelf->top__DOT__memreq_msg[2U]));
    }
    if ((1U & (vlSelf->top__DOT__memreq_msg[1U] ^ vlSelf->top__DOT____Vtogcov__memreq_msg[1U]))) {
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__memreq_msg[1U]) 
               | (1U & vlSelf->top__DOT__memreq_msg[1U]));
    }
    if ((2U & (vlSelf->top__DOT__memreq_msg[1U] ^ vlSelf->top__DOT____Vtogcov__memreq_msg[1U]))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__memreq_msg[1U]) 
               | (2U & vlSelf->top__DOT__memreq_msg[1U]));
    }
    if ((1U & (vlSelf->top__DOT__memreq_msg[0U] ^ vlSelf->top__DOT____Vtogcov__memreq_msg[0U]))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__memreq_msg[0U]) 
               | (1U & vlSelf->top__DOT__memreq_msg[0U]));
    }
    if ((2U & (vlSelf->top__DOT__memreq_msg[0U] ^ vlSelf->top__DOT____Vtogcov__memreq_msg[0U]))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__memreq_msg[0U]) 
               | (2U & vlSelf->top__DOT__memreq_msg[0U]));
    }
    if ((4U & (vlSelf->top__DOT__memreq_msg[0U] ^ vlSelf->top__DOT____Vtogcov__memreq_msg[0U]))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__memreq_msg[0U]) 
               | (4U & vlSelf->top__DOT__memreq_msg[0U]));
    }
    if ((8U & (vlSelf->top__DOT__memreq_msg[0U] ^ vlSelf->top__DOT____Vtogcov__memreq_msg[0U]))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__memreq_msg[0U]) 
               | (8U & vlSelf->top__DOT__memreq_msg[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__memreq_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__memreq_msg[0U]))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[0U] 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__memreq_msg[0U]) 
               | (0x10U & vlSelf->top__DOT__memreq_msg[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__memreq_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__memreq_msg[0U]))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__memreq_msg[0U]) 
               | (0x20U & vlSelf->top__DOT__memreq_msg[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__memreq_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__memreq_msg[0U]))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__memreq_msg[0U]) 
               | (0x40U & vlSelf->top__DOT__memreq_msg[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__memreq_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__memreq_msg[0U]))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__memreq_msg[0U]) 
               | (0x80U & vlSelf->top__DOT__memreq_msg[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__memreq_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__memreq_msg[0U]))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__memreq_msg[0U]) 
               | (0x100U & vlSelf->top__DOT__memreq_msg[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__memreq_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__memreq_msg[0U]))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__memreq_msg[0U]) 
               | (0x200U & vlSelf->top__DOT__memreq_msg[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__memreq_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__memreq_msg[0U]))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__memreq_msg[0U]) 
               | (0x400U & vlSelf->top__DOT__memreq_msg[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__memreq_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__memreq_msg[0U]))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__memreq_msg[0U]) 
               | (0x800U & vlSelf->top__DOT__memreq_msg[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__memreq_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__memreq_msg[0U]))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[0U] 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__memreq_msg[0U]) 
               | (0x1000U & vlSelf->top__DOT__memreq_msg[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__memreq_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__memreq_msg[0U]))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__memreq_msg[0U]) 
               | (0x2000U & vlSelf->top__DOT__memreq_msg[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__memreq_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__memreq_msg[0U]))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__memreq_msg[0U]) 
               | (0x4000U & vlSelf->top__DOT__memreq_msg[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__memreq_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__memreq_msg[0U]))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__memreq_msg[0U]) 
               | (0x8000U & vlSelf->top__DOT__memreq_msg[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__memreq_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__memreq_msg[0U]))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__memreq_msg[0U]) 
               | (0x10000U & vlSelf->top__DOT__memreq_msg[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__memreq_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__memreq_msg[0U]))) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__memreq_msg[0U]) 
               | (0x20000U & vlSelf->top__DOT__memreq_msg[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__memreq_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__memreq_msg[0U]))) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__memreq_msg[0U]) 
               | (0x40000U & vlSelf->top__DOT__memreq_msg[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__memreq_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__memreq_msg[0U]))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__memreq_msg[0U]) 
               | (0x80000U & vlSelf->top__DOT__memreq_msg[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__memreq_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__memreq_msg[0U]))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[0U] 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__memreq_msg[0U]) 
               | (0x100000U & vlSelf->top__DOT__memreq_msg[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__memreq_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__memreq_msg[0U]))) {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__memreq_msg[0U]) 
               | (0x200000U & vlSelf->top__DOT__memreq_msg[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__memreq_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__memreq_msg[0U]))) {
        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__memreq_msg[0U]) 
               | (0x400000U & vlSelf->top__DOT__memreq_msg[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__memreq_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__memreq_msg[0U]))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__memreq_msg[0U]) 
               | (0x800000U & vlSelf->top__DOT__memreq_msg[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__memreq_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__memreq_msg[0U]))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__memreq_msg[0U]) 
               | (0x1000000U & vlSelf->top__DOT__memreq_msg[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__memreq_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__memreq_msg[0U]))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__memreq_msg[0U]) 
               | (0x2000000U & vlSelf->top__DOT__memreq_msg[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__memreq_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__memreq_msg[0U]))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__memreq_msg[0U]) 
               | (0x4000000U & vlSelf->top__DOT__memreq_msg[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__memreq_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__memreq_msg[0U]))) {
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__memreq_msg[0U]) 
               | (0x8000000U & vlSelf->top__DOT__memreq_msg[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__memreq_msg[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__memreq_msg[0U]))) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[0U] 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__memreq_msg[0U]) 
               | (0x10000000U & vlSelf->top__DOT__memreq_msg[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__memreq_msg[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__memreq_msg[0U]))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__memreq_msg[0U]) 
               | (0x20000000U & vlSelf->top__DOT__memreq_msg[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__memreq_msg[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__memreq_msg[0U]))) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__memreq_msg[0U]) 
               | (0x40000000U & vlSelf->top__DOT__memreq_msg[0U]));
    }
    if (((vlSelf->top__DOT__memreq_msg[0U] ^ vlSelf->top__DOT____Vtogcov__memreq_msg[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__memreq_msg[0U]) 
               | (0x80000000U & vlSelf->top__DOT__memreq_msg[0U]));
    }
    if (((IData)(vlSelf->top__DOT__tarray0_match) ^ (IData)(vlSelf->top__DOT____Vtogcov__tarray0_match))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__tarray0_match 
            = vlSelf->top__DOT__tarray0_match;
    }
    if (((IData)(vlSelf->top__DOT__tarray1_match) ^ (IData)(vlSelf->top__DOT____Vtogcov__tarray1_match))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__tarray1_match 
            = vlSelf->top__DOT__tarray1_match;
    }
    if (((IData)(vlSelf->top__DOT__line0_dirty) ^ (IData)(vlSelf->top__DOT____Vtogcov__line0_dirty))) {
        vlSymsp->__Vcoverage[264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__line0_dirty = vlSelf->top__DOT__line0_dirty;
    }
    if (((IData)(vlSelf->top__DOT__line1_dirty) ^ (IData)(vlSelf->top__DOT____Vtogcov__line1_dirty))) {
        vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__line1_dirty = vlSelf->top__DOT__line1_dirty;
    }
    if (((IData)(vlSelf->top__DOT__line0_valid) ^ (IData)(vlSelf->top__DOT____Vtogcov__line0_valid))) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__line0_valid = vlSelf->top__DOT__line0_valid;
    }
    if (((IData)(vlSelf->top__DOT__line1_valid) ^ (IData)(vlSelf->top__DOT____Vtogcov__line1_valid))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__line1_valid = vlSelf->top__DOT__line1_valid;
    }
    if (((IData)(vlSelf->top__DOT__all_flushed) ^ (IData)(vlSelf->top__DOT____Vtogcov__all_flushed))) {
        vlSymsp->__Vcoverage[260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__all_flushed = vlSelf->top__DOT__all_flushed;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_offset)))) {
        vlSymsp->__Vcoverage[412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_offset 
            = ((0xeU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_offset)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_offset)))) {
        vlSymsp->__Vcoverage[413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_offset 
            = ((0xdU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_offset)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_offset)))) {
        vlSymsp->__Vcoverage[414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_offset 
            = ((0xbU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_offset)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_offset)))) {
        vlSymsp->__Vcoverage[415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_offset 
            = ((7U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_offset)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__write_word_offset)));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__write_data 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data) 
               | (1U & vlSelf->top__DOT__DUT__DOT__write_data));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__write_data 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data) 
               | (2U & vlSelf->top__DOT__DUT__DOT__write_data));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__write_data 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data) 
               | (4U & vlSelf->top__DOT__DUT__DOT__write_data));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__write_data 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data) 
               | (8U & vlSelf->top__DOT__DUT__DOT__write_data));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__write_data 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__write_data));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__write_data 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__write_data));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__write_data 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__write_data));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__write_data 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__write_data));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__write_data 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__write_data));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__write_data 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__write_data));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__write_data 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__write_data));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__write_data 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__write_data));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__write_data 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__write_data));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__write_data 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__write_data));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__write_data 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__write_data));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__write_data 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__write_data));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__write_data 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__write_data));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__write_data 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__write_data));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__write_data 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__write_data));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__write_data 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__write_data));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__write_data 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__write_data));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__write_data 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__write_data));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__write_data 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__write_data));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__write_data 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__write_data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__write_data 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__write_data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__write_data 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__write_data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__write_data 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__write_data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__write_data 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__write_data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__write_data 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__write_data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__write_data 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[445].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__write_data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__write_data 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data))) {
        vlSymsp->__Vcoverage[446].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__write_data));
    }
    if (((vlSelf->top__DOT__DUT__DOT__write_data ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__write_data) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__write_data));
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset)))) {
                vlSymsp->__Vcoverage[1261].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[1527].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[1797].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[2063].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset))) {
                vlSymsp->__Vcoverage[1262].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[1528].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[1798].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[2064].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset)))) {
                vlSymsp->__Vcoverage[1259].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[1525].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[1795].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[2061].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset))) {
                vlSymsp->__Vcoverage[1260].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[1526].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[1796].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[2062].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if ((8U & (IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset))) {
        if ((8U & (IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset))) {
            vlSymsp->__Vcoverage[1536].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[2072].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset) 
                      >> 3U)))) {
            vlSymsp->__Vcoverage[1537].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[2073].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset) 
                  >> 3U)))) {
        vlSymsp->__Vcoverage[1535].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2071].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__read_word_offset)))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__read_word_offset 
            = ((0xeU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__read_word_offset)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__read_word_offset)))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__read_word_offset 
            = ((0xdU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__read_word_offset)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__read_word_offset)))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__read_word_offset 
            = ((0xbU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__read_word_offset)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__read_word_offset)))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__read_word_offset 
            = ((7U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__read_word_offset)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__flush1_index) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__flush1_index)))) {
        vlSymsp->__Vcoverage[912].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__flush1_index 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__flush1_index)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__flush1_index)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__flush1_index) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__flush1_index)))) {
        vlSymsp->__Vcoverage[913].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__flush1_index 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__flush1_index)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__flush1_index)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__flush1_index) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__flush1_index)))) {
        vlSymsp->__Vcoverage[914].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__flush1_index 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__flush1_index)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__flush1_index)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__flush1_index) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__flush1_index)))) {
        vlSymsp->__Vcoverage[915].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__flush1_index 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__flush1_index)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__flush1_index)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__flush1_index) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__flush1_index)))) {
        vlSymsp->__Vcoverage[916].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__flush1_index 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__flush1_index)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__flush1_index)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__flush0_index) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__flush0_index)))) {
        vlSymsp->__Vcoverage[907].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__flush0_index 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__flush0_index)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__flush0_index)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__flush0_index) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__flush0_index)))) {
        vlSymsp->__Vcoverage[908].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__flush0_index 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__flush0_index)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__flush0_index)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__flush0_index) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__flush0_index)))) {
        vlSymsp->__Vcoverage[909].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__flush0_index 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__flush0_index)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__flush0_index)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__flush0_index) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__flush0_index)))) {
        vlSymsp->__Vcoverage[910].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__flush0_index 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__flush0_index)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__flush0_index)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__flush0_index) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__flush0_index)))) {
        vlSymsp->__Vcoverage[911].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__flush0_index 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__flush0_index)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__flush0_index)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__flush_index) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__flush_index)))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__flush_index 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__flush_index)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__flush_index)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__flush_index) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__flush_index)))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__flush_index 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__flush_index)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__flush_index)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__flush_index) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__flush_index)))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__flush_index 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__flush_index)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__flush_index)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__flush_index) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__flush_index)))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__flush_index 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__flush_index)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__flush_index)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__flush_index) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__flush_index)))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__flush_index 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__flush_index)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__flush_index)));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__req_addr_mem 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__req_addr_mem))) {
        vlSymsp->__Vcoverage[887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__req_addr_mem 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__req_addr_mem) 
               | (1U & vlSelf->top__DOT__DUT__DOT__req_addr_mem));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__req_addr_mem 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__req_addr_mem))) {
        vlSymsp->__Vcoverage[888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__req_addr_mem 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__req_addr_mem) 
               | (2U & vlSelf->top__DOT__DUT__DOT__req_addr_mem));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__req_addr_mem 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__req_addr_mem))) {
        vlSymsp->__Vcoverage[889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__req_addr_mem 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__req_addr_mem) 
               | (4U & vlSelf->top__DOT__DUT__DOT__req_addr_mem));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__req_addr_mem 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__req_addr_mem))) {
        vlSymsp->__Vcoverage[890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__req_addr_mem 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__req_addr_mem) 
               | (8U & vlSelf->top__DOT__DUT__DOT__req_addr_mem));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__req_addr_mem))) {
        vlSymsp->__Vcoverage[891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__req_addr_mem 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__req_addr_mem) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__req_addr_mem));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__req_addr_mem))) {
        vlSymsp->__Vcoverage[892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__req_addr_mem 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__req_addr_mem) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__req_addr_mem));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__req_addr_mem))) {
        vlSymsp->__Vcoverage[893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__req_addr_mem 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__req_addr_mem) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__req_addr_mem));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__req_addr_mem))) {
        vlSymsp->__Vcoverage[894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__req_addr_mem 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__req_addr_mem) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__req_addr_mem));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__req_addr_mem))) {
        vlSymsp->__Vcoverage[895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__req_addr_mem 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__req_addr_mem) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__req_addr_mem));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__req_addr_mem))) {
        vlSymsp->__Vcoverage[896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__req_addr_mem 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__req_addr_mem) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__req_addr_mem));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__req_addr_mem))) {
        vlSymsp->__Vcoverage[897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__req_addr_mem 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__req_addr_mem) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__req_addr_mem));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                >> 0xbU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag))) {
        vlSymsp->__Vcoverage[378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag 
            = ((0x1ffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag) 
               | (1U & (vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                        >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                >> 0xcU) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag 
                            >> 1U)))) {
        vlSymsp->__Vcoverage[379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag 
            = ((0x1ffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag) 
               | (2U & (vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                        >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                >> 0xdU) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag 
                            >> 2U)))) {
        vlSymsp->__Vcoverage[380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag 
            = ((0x1ffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag) 
               | (4U & (vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                        >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                >> 0xeU) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag 
                            >> 3U)))) {
        vlSymsp->__Vcoverage[381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag 
            = ((0x1ffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag) 
               | (8U & (vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                        >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                >> 0xfU) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag 
                            >> 4U)))) {
        vlSymsp->__Vcoverage[382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag 
            = ((0x1fffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag) 
               | (0x10U & (vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                           >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                >> 0x10U) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag 
                             >> 5U)))) {
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag 
            = ((0x1fffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag) 
               | (0x20U & (vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                           >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                >> 0x11U) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag 
                             >> 6U)))) {
        vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag 
            = ((0x1fffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag) 
               | (0x40U & (vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                           >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                >> 0x12U) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag 
                             >> 7U)))) {
        vlSymsp->__Vcoverage[385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag 
            = ((0x1fff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag) 
               | (0x80U & (vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                           >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                >> 0x13U) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag 
                             >> 8U)))) {
        vlSymsp->__Vcoverage[386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag 
            = ((0x1ffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag) 
               | (0x100U & (vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                            >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                >> 0x14U) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag 
                             >> 9U)))) {
        vlSymsp->__Vcoverage[387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag 
            = ((0x1ffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag) 
               | (0x200U & (vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                            >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                >> 0x15U) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag 
                             >> 0xaU)))) {
        vlSymsp->__Vcoverage[388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag 
            = ((0x1ffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag) 
               | (0x400U & (vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                            >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                >> 0x16U) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag 
                             >> 0xbU)))) {
        vlSymsp->__Vcoverage[389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag 
            = ((0x1ff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag) 
               | (0x800U & (vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                            >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                >> 0x17U) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag 
                             >> 0xcU)))) {
        vlSymsp->__Vcoverage[390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag 
            = ((0x1fefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag) 
               | (0x1000U & (vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                             >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                >> 0x18U) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag 
                             >> 0xdU)))) {
        vlSymsp->__Vcoverage[391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag 
            = ((0x1fdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag) 
               | (0x2000U & (vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                             >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                >> 0x19U) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag 
                             >> 0xeU)))) {
        vlSymsp->__Vcoverage[392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag 
            = ((0x1fbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag) 
               | (0x4000U & (vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                             >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                >> 0x1aU) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag 
                             >> 0xfU)))) {
        vlSymsp->__Vcoverage[393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag 
            = ((0x1f7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag) 
               | (0x8000U & (vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                             >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                >> 0x1bU) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag 
                             >> 0x10U)))) {
        vlSymsp->__Vcoverage[394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag 
            = ((0x1effffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag) 
               | (0x10000U & (vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                              >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                >> 0x1cU) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag 
                             >> 0x11U)))) {
        vlSymsp->__Vcoverage[395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag 
            = ((0x1dffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag) 
               | (0x20000U & (vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                              >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                >> 0x1dU) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag 
                             >> 0x12U)))) {
        vlSymsp->__Vcoverage[396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag 
            = ((0x1bffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag) 
               | (0x40000U & (vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                              >> 0xbU)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                >> 0x1eU) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag 
                             >> 0x13U)))) {
        vlSymsp->__Vcoverage[397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag 
            = ((0x17ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag) 
               | (0x80000U & (vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                              >> 0xbU)));
    }
    if (((vlSelf->top__DOT__DUT__DOT__req_addr_mem 
          >> 0x1fU) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag 
                       >> 0x14U))) {
        vlSymsp->__Vcoverage[398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag 
            = ((0xfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_tag) 
               | (0x100000U & (vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                               >> 0xbU)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__d_index) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__d_index)))) {
        vlSymsp->__Vcoverage[407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__d_index 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__d_index)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__d_index)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__d_index) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__d_index)))) {
        vlSymsp->__Vcoverage[408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__d_index 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__d_index)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__d_index)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__d_index) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__d_index)))) {
        vlSymsp->__Vcoverage[409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__d_index 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__d_index)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__d_index)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__d_index) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__d_index)))) {
        vlSymsp->__Vcoverage[410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__d_index 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__d_index)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__d_index)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__d_index) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__d_index)))) {
        vlSymsp->__Vcoverage[411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__d_index 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__d_index)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__d_index)));
    }
    vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7 
        = vlSelf->top__DOT__DUT__DOT__data0[vlSelf->top__DOT__DUT__DOT__d_index]
        [7U];
    vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6 
        = vlSelf->top__DOT__DUT__DOT__data0[vlSelf->top__DOT__DUT__DOT__d_index]
        [6U];
    vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5 
        = vlSelf->top__DOT__DUT__DOT__data0[vlSelf->top__DOT__DUT__DOT__d_index]
        [5U];
    vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4 
        = vlSelf->top__DOT__DUT__DOT__data0[vlSelf->top__DOT__DUT__DOT__d_index]
        [4U];
    vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3 
        = vlSelf->top__DOT__DUT__DOT__data0[vlSelf->top__DOT__DUT__DOT__d_index]
        [3U];
    vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
        = vlSelf->top__DOT__DUT__DOT__data0[vlSelf->top__DOT__DUT__DOT__d_index]
        [2U];
    vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
        = vlSelf->top__DOT__DUT__DOT__data0[vlSelf->top__DOT__DUT__DOT__d_index]
        [1U];
    vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
        = vlSelf->top__DOT__DUT__DOT__data0[vlSelf->top__DOT__DUT__DOT__d_index]
        [0U];
    vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
        = vlSelf->top__DOT__DUT__DOT__data0[vlSelf->top__DOT__DUT__DOT__d_index]
        [0xfU];
    vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
        = vlSelf->top__DOT__DUT__DOT__data0[vlSelf->top__DOT__DUT__DOT__d_index]
        [0xeU];
    vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
        = vlSelf->top__DOT__DUT__DOT__data0[vlSelf->top__DOT__DUT__DOT__d_index]
        [0xdU];
    vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
        = vlSelf->top__DOT__DUT__DOT__data0[vlSelf->top__DOT__DUT__DOT__d_index]
        [0xcU];
    vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
        = vlSelf->top__DOT__DUT__DOT__data0[vlSelf->top__DOT__DUT__DOT__d_index]
        [0xbU];
    vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
        = vlSelf->top__DOT__DUT__DOT__data0[vlSelf->top__DOT__DUT__DOT__d_index]
        [0xaU];
    vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
        = vlSelf->top__DOT__DUT__DOT__data0[vlSelf->top__DOT__DUT__DOT__d_index]
        [9U];
    vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
        = vlSelf->top__DOT__DUT__DOT__data0[vlSelf->top__DOT__DUT__DOT__d_index]
        [8U];
    vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
        = vlSelf->top__DOT__DUT__DOT__data1[vlSelf->top__DOT__DUT__DOT__d_index]
        [7U];
    vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
        = vlSelf->top__DOT__DUT__DOT__data1[vlSelf->top__DOT__DUT__DOT__d_index]
        [6U];
    vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
        = vlSelf->top__DOT__DUT__DOT__data1[vlSelf->top__DOT__DUT__DOT__d_index]
        [5U];
    vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
        = vlSelf->top__DOT__DUT__DOT__data1[vlSelf->top__DOT__DUT__DOT__d_index]
        [4U];
    vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
        = vlSelf->top__DOT__DUT__DOT__data1[vlSelf->top__DOT__DUT__DOT__d_index]
        [3U];
    vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
        = vlSelf->top__DOT__DUT__DOT__data1[vlSelf->top__DOT__DUT__DOT__d_index]
        [2U];
    vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in1 
        = vlSelf->top__DOT__DUT__DOT__data1[vlSelf->top__DOT__DUT__DOT__d_index]
        [1U];
    vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in0 
        = vlSelf->top__DOT__DUT__DOT__data1[vlSelf->top__DOT__DUT__DOT__d_index]
        [0U];
    vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_upper_eight_mux__in7 
        = vlSelf->top__DOT__DUT__DOT__data1[vlSelf->top__DOT__DUT__DOT__d_index]
        [0xfU];
    vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_upper_eight_mux__in6 
        = vlSelf->top__DOT__DUT__DOT__data1[vlSelf->top__DOT__DUT__DOT__d_index]
        [0xeU];
    vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_upper_eight_mux__in5 
        = vlSelf->top__DOT__DUT__DOT__data1[vlSelf->top__DOT__DUT__DOT__d_index]
        [0xdU];
    vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_upper_eight_mux__in4 
        = vlSelf->top__DOT__DUT__DOT__data1[vlSelf->top__DOT__DUT__DOT__d_index]
        [0xcU];
    vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_upper_eight_mux__in3 
        = vlSelf->top__DOT__DUT__DOT__data1[vlSelf->top__DOT__DUT__DOT__d_index]
        [0xbU];
    vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_upper_eight_mux__in2 
        = vlSelf->top__DOT__DUT__DOT__data1[vlSelf->top__DOT__DUT__DOT__d_index]
        [0xaU];
    vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_upper_eight_mux__in1 
        = vlSelf->top__DOT__DUT__DOT__data1[vlSelf->top__DOT__DUT__DOT__d_index]
        [9U];
    vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_upper_eight_mux__in0 
        = vlSelf->top__DOT__DUT__DOT__data1[vlSelf->top__DOT__DUT__DOT__d_index]
        [8U];
    if ((1U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (1U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (2U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (4U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (8U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7));
    }
    if ((4U & (IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset))) {
                vlSymsp->__Vcoverage[1264].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[1530].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[1800].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[2066].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset)))) {
                vlSymsp->__Vcoverage[1263].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[1529].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[1799].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[2065].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset)))) {
                vlSymsp->__Vcoverage[1265].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[1531].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[1801].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[2067].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset))) {
                vlSymsp->__Vcoverage[1266].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[1532].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[1802].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[2068].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__DUT__DOT__word0_out_lower 
                    = vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7;
                vlSelf->top__DOT__DUT__DOT__word0_out_upper 
                    = vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7;
            } else {
                vlSelf->top__DOT__DUT__DOT__word0_out_lower 
                    = vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6;
                vlSelf->top__DOT__DUT__DOT__word0_out_upper 
                    = vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6;
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset))) {
            vlSelf->top__DOT__DUT__DOT__word0_out_lower 
                = vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5;
            vlSelf->top__DOT__DUT__DOT__word0_out_upper 
                = vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5;
        } else {
            vlSelf->top__DOT__DUT__DOT__word0_out_lower 
                = vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4;
            vlSelf->top__DOT__DUT__DOT__word0_out_upper 
                = vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4;
        }
    } else if ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset))) {
        if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset))) {
            vlSelf->top__DOT__DUT__DOT__word0_out_lower 
                = vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3;
            vlSelf->top__DOT__DUT__DOT__word0_out_upper 
                = vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3;
        } else {
            vlSelf->top__DOT__DUT__DOT__word0_out_lower 
                = vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2;
            vlSelf->top__DOT__DUT__DOT__word0_out_upper 
                = vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2;
        }
    } else if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset))) {
        vlSelf->top__DOT__DUT__DOT__word0_out_lower 
            = vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1;
        vlSelf->top__DOT__DUT__DOT__word0_out_upper 
            = vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1;
    } else {
        vlSelf->top__DOT__DUT__DOT__word0_out_lower 
            = vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0;
        vlSelf->top__DOT__DUT__DOT__word0_out_upper 
            = vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0;
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7 
                        ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7 
                        ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7 
                        ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7));
    }
    if (((vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7 
          ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (1U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (2U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (4U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (8U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6 
                        ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6 
                        ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6 
                        ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6));
    }
    if (((vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6 
          ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (1U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (2U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (4U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (8U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5 
                        ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5 
                        ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5 
                        ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5));
    }
    if (((vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5 
          ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (1U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (2U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (4U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (8U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4 
                        ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4 
                        ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4 
                        ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4));
    }
    if (((vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4 
          ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1099].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (1U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (2U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (4U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (8U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3 
                        ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3 
                        ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3 
                        ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3));
    }
    if (((vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3 
          ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (1U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (2U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (4U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1070].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (8U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1071].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1073].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1074].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1075].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1076].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1078].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1079].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1080].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1082].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1083].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1084].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1085].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1086].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1087].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1088].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1089].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1090].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1091].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1092].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1093].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1094].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
                        ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1095].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
                        ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1096].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
                        ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1097].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if (((vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2 
          ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1098].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1035].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (1U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1036].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (2U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (4U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (8U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                        ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                        ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
                        ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if (((vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1 
          ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in1) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1003].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (1U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1004].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (2U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (4U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (8U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1007].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1008].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1009].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1010].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1011].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1012].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1013].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1014].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1015].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1016].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1017].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1018].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1019].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1020].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1021].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1022].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1023].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1024].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1025].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1026].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1027].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1028].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1029].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1030].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                        ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1031].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                        ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1032].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
                        ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1033].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if (((vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0 
          ^ vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1034].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_lower_eight_mux__DOT____Vtogcov__in0) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (1U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (2U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (4U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (8U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1497].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1507].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1509].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1510].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1511].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1512].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1513].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1514].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1515].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1516].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1517].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1518].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1519].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1520].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                        ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1521].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                        ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1522].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
                        ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1523].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if (((vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7 
          ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1524].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in7) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (1U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (2U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (4U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (8U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1485].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                        ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                        ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
                        ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if (((vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6 
          ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in6) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (1U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (2U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (4U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (8U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1445].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1446].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1452].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                        ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                        ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
                        ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if (((vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5 
          ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in5) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (1U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (2U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (4U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (8U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1402].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1403].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1404].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1405].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1406].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                        ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                        ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
                        ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if (((vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4 
          ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in4) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (1U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (2U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (4U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (8U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                        ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                        ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
                        ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if (((vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3 
          ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in3) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (1U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (2U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (4U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (8U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                        ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                        ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
                        ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if (((vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2 
          ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in2) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (1U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (2U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (4U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (8U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                        ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                        ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
                        ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if (((vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1 
          ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in1) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (1U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (2U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (4U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
               ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (8U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                  ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                   ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                    ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                     ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                      ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                       ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                        ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                        ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
                        ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if (((vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0 
          ^ vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__word0_out_upper_eight_mux__DOT____Vtogcov__in0) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
               ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1763].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (1U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
               ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (2U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
               ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1765].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (4U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
               ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1766].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (8U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                  ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1767].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                  ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1768].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                  ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1769].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                  ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1770].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                   ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1771].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                   ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1772].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                   ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1773].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                   ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1774].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                    ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1775].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                    ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1776].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                    ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1777].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                    ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1778].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                     ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1779].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                     ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1780].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                     ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1781].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                     ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1782].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                      ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1783].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                      ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1784].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                      ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1785].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                      ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1786].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                       ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1787].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                       ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1788].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                       ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1789].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                       ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1790].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                        ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1791].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                        ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1792].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
                        ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[1793].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if (((vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7 
          ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1794].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in7) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
               ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1731].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (1U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
               ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1732].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (2U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
               ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1733].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (4U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
               ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1734].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (8U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                  ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1735].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                  ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1736].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                  ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1737].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                  ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1738].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                   ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1739].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                   ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1740].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                   ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1741].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                   ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1742].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                    ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1743].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                    ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1744].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                    ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1745].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                    ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1746].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                     ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1747].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                     ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1748].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                     ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1749].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                     ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1750].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                      ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1751].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                      ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1752].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                      ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1753].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                      ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1754].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                       ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1755].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                       ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1756].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                       ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1757].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                       ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1758].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                        ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1759].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                        ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1760].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
                        ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[1761].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if (((vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6 
          ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1762].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in6) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
               ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1699].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (1U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
               ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1700].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (2U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
               ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1701].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (4U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
               ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1702].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (8U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                  ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                  ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1704].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                  ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1705].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                  ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1706].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                   ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1707].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                   ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1708].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                   ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1709].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                   ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1710].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                    ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1711].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                    ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1712].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                    ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1713].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                    ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1714].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                     ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1715].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                     ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1716].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                     ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1717].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                     ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1718].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                      ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1719].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                      ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1720].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                      ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1721].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                      ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1722].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                       ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1723].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                       ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1724].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                       ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1725].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                       ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1726].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                        ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1727].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                        ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1728].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
                        ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[1729].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if (((vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5 
          ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1730].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in5) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
               ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (1U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
               ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (2U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
               ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1669].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (4U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
               ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1670].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (8U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                  ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                  ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                  ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                  ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1674].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                   ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                   ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                   ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                   ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                    ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                    ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1680].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                    ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                    ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1682].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                     ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1683].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                     ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1684].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                     ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                     ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1686].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                      ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1687].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                      ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1688].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                      ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                      ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                       ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                       ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1692].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                       ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1693].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                       ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1694].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                        ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1695].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                        ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1696].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
                        ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[1697].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if (((vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4 
          ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1698].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in4) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
               ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (1U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
               ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (2U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
               ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (4U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
               ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (8U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                  ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                  ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                  ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                  ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                   ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                   ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                   ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                   ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                    ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                    ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                    ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                    ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                     ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                     ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                     ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                     ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                      ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                      ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                      ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                      ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                       ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                       ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                       ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                       ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                        ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                        ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
                        ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[1665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if (((vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3 
          ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in3) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
               ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1603].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (1U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
               ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1604].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (2U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
               ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1605].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (4U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
               ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1606].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (8U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
                  ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
                  ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1608].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
                  ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1609].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
                  ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1610].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
                   ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1611].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
                   ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1612].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
                   ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1613].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
                   ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1614].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
                    ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1615].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
                    ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1616].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
                    ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1617].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
                    ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
                     ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1619].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in2 
                     ^ vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[1620].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__word1_out_lower_eight_mux__DOT____Vtogcov__in2) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in2));
    }
}
