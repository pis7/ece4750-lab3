// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__10(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__10\n"); );
    // Init
    CData/*0:0*/ __Vdlyvdim0__top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __Vdlyvdim0__top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    VlWide<3>/*76:0*/ __Vdlyvval__top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    VL_ZERO_W(77, __Vdlyvval__top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0);
    CData/*0:0*/ __Vdlyvset__top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __Vdlyvset__top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*0:0*/ __Vdly__top__DOT__DUT__DOT__ctrl__DOT__wb_result_sel_X;
    __Vdly__top__DOT__DUT__DOT__ctrl__DOT__wb_result_sel_X = 0;
    CData/*0:0*/ __Vdly__top__DOT__DUT__DOT__ctrl__DOT__rf_wen_X;
    __Vdly__top__DOT__DUT__DOT__ctrl__DOT__rf_wen_X = 0;
    CData/*0:0*/ __Vdly__top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_M;
    __Vdly__top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_M = 0;
    CData/*0:0*/ __Vdly__top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_M;
    __Vdly__top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_M = 0;
    IData/*31:0*/ __Vdly__top__DOT__DUT__DOT__ctrl__DOT__inst_M;
    __Vdly__top__DOT__DUT__DOT__ctrl__DOT__inst_M = 0;
    CData/*4:0*/ __Vdly__top__DOT__DUT__DOT__rf_waddr_W;
    __Vdly__top__DOT__DUT__DOT__rf_waddr_W = 0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile__v0;
    __Vdlyvdim0__top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile__v0;
    __Vdlyvval__top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile__v0;
    __Vdlyvset__top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile__v0 = 0;
    // Body
    vlSymsp->__Vcoverage[1565].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1567].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1568].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1802].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1822].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1826].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1909].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1917].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1955].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1981].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1996].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[2145].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[2206].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[2246].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3054].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3063].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3098].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3179].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3509].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3514].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3521].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3534].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3592].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3614].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3617].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3620].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3623].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3626].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3650].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3657].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3660].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3957].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[4000].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[4043].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[4086].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[4129].fetch_add(1, std::memory_order_relaxed);
    if (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__write_en) {
        vlSymsp->__Vcoverage[1907].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
            = vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U];
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
            = vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U];
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
            = vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U];
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__write_en)))) {
        vlSymsp->__Vcoverage[1908].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en) {
        vlSymsp->__Vcoverage[1953].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
            = vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en)))) {
        vlSymsp->__Vcoverage[1954].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__write_en)))) {
        vlSymsp->__Vcoverage[1801].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__reset) | (IData)(vlSelf->top__DOT__DUT__DOT__stats_en_wen_W))) {
        vlSymsp->__Vcoverage[3658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
            = ((IData)(vlSelf->top__DOT__reset) ? 0U
                : vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__reset) 
                  | (IData)(vlSelf->top__DOT__DUT__DOT__stats_en_wen_W))))) {
        vlSymsp->__Vcoverage[3659].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__reset) 
                  | (IData)(vlSelf->top__DOT__DUT__DOT__reg_en_D))))) {
        vlSymsp->__Vcoverage[3062].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3097].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & ((IData)(vlSelf->top__DOT__reset) | (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_M))))) {
        vlSymsp->__Vcoverage[3648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
            = ((IData)(vlSelf->top__DOT__reset) ? 0U
                : vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__reset) 
                  | (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_M)))))) {
        vlSymsp->__Vcoverage[3649].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__reset) | (IData)(vlSelf->top__DOT__DUT__DOT__reg_en_F))) {
        vlSymsp->__Vcoverage[3052].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__reset) 
                  | (IData)(vlSelf->top__DOT__DUT__DOT__reg_en_F))))) {
        vlSymsp->__Vcoverage[3053].fetch_add(1, std::memory_order_relaxed);
    }
    __Vdly__top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_M 
        = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_M;
    __Vdly__top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_M 
        = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_M;
    if ((1U & ((IData)(vlSelf->top__DOT__reset) | (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_X))))) {
        vlSymsp->__Vcoverage[3612].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3615].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3618].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3621].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3624].fetch_add(1, std::memory_order_relaxed);
        if (vlSelf->top__DOT__reset) {
            vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data = 0U;
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X = 0U;
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X = 0U;
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X = 0U;
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X = 0U;
        } else {
            vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                = vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D;
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                = vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D;
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                = vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D;
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                = vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D;
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                = vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D;
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__reset) 
                  | (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_X)))))) {
        vlSymsp->__Vcoverage[3613].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3616].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3619].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3622].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3625].fetch_add(1, std::memory_order_relaxed);
    }
    __Vdly__top__DOT__DUT__DOT__ctrl__DOT__wb_result_sel_X 
        = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__wb_result_sel_X;
    if ((1U & (~ ((IData)(vlSelf->top__DOT__reset) 
                  | (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_W)))))) {
        vlSymsp->__Vcoverage[3656].fetch_add(1, std::memory_order_relaxed);
    }
    __Vdly__top__DOT__DUT__DOT__ctrl__DOT__inst_M = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M;
    if (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__result_en) {
        vlSymsp->__Vcoverage[3519].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
            = vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_mux_out;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__result_en)))) {
        vlSymsp->__Vcoverage[3520].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_W)))) {
        vlSymsp->__Vcoverage[3178].fetch_add(1, std::memory_order_relaxed);
    }
    __Vdly__top__DOT__DUT__DOT__ctrl__DOT__rf_wen_X 
        = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_X;
    __Vdly__top__DOT__DUT__DOT__rf_waddr_W = vlSelf->top__DOT__DUT__DOT__rf_waddr_W;
    __Vdlyvset__top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile__v0 = 0U;
    if (vlSelf->top__DOT__DUT__DOT__rf_wen_W) {
        vlSymsp->__Vcoverage[3177].fetch_add(1, std::memory_order_relaxed);
        __Vdlyvval__top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile__v0 
            = vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W;
        __Vdlyvset__top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile__v0 = 1U;
        __Vdlyvdim0__top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile__v0 
            = vlSelf->top__DOT__DUT__DOT__rf_waddr_W;
    }
    __Vdlyvset__top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0U;
    if (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__write_en) {
        vlSymsp->__Vcoverage[1800].fetch_add(1, std::memory_order_relaxed);
        __Vdlyvval__top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[0U] = 0U;
        __Vdlyvval__top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[1U] 
            = (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
               << 2U);
        __Vdlyvval__top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[2U] 
            = (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
               >> 0x1eU);
        __Vdlyvset__top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 1U;
        __Vdlyvdim0__top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
    }
    __Vdly__top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_M 
        = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_M;
    __Vdly__top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_M 
        = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_M;
    __Vdly__top__DOT__DUT__DOT__ctrl__DOT__wb_result_sel_X 
        = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__wb_result_sel_X;
    if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
        vlSymsp->__Vcoverage[1821].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3533].fetch_add(1, std::memory_order_relaxed);
        if (vlSelf->top__DOT__DUT__DOT__reg_en_D) {
            vlSymsp->__Vcoverage[1993].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__reg_en_D)))) {
            vlSymsp->__Vcoverage[1994].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_M) {
            vlSymsp->__Vcoverage[2204].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__DUT__DOT__reg_en_F) {
            vlSymsp->__Vcoverage[1978].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__reg_en_F)))) {
            vlSymsp->__Vcoverage[1979].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_X) {
            vlSymsp->__Vcoverage[2143].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_W) {
            vlSymsp->__Vcoverage[2244].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_M)))) {
            vlSymsp->__Vcoverage[2203].fetch_add(1, std::memory_order_relaxed);
            __Vdly__top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_M 
                = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_X;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_X 
                = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_X;
            __Vdly__top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_M 
                = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_X;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_X 
                = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_X;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_pending_W 
                = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_pending_W;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_F 
                = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_F;
            __Vdly__top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mul_X 
                = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mul_X;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_W 
                = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_W;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_M 
                = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_M;
            vlSelf->top__DOT__DUT__DOT__wb_result_sel_M 
                = vlSelf->top__DOT__DUT__DOT__wb_result_sel_M;
            __Vdly__top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_M 
                = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X;
            vlSelf->top__DOT__DUT__DOT__wb_result_sel_M 
                = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__wb_result_sel_X;
        } else {
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_X 
                = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_X;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_X 
                = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_X;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_pending_W 
                = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_pending_W;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_F 
                = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_F;
            __Vdly__top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mul_X 
                = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mul_X;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_W 
                = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_W;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_M 
                = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_M;
            vlSelf->top__DOT__DUT__DOT__wb_result_sel_M 
                = vlSelf->top__DOT__DUT__DOT__wb_result_sel_M;
        }
        vlSelf->top__DOT__DUT__DOT__ex_result_sel_X 
            = vlSelf->top__DOT__DUT__DOT__ex_result_sel_X;
        __Vdly__top__DOT__DUT__DOT__ctrl__DOT__rf_wen_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_X;
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_M 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_M;
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X;
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_X)))) {
            vlSymsp->__Vcoverage[2142].fetch_add(1, std::memory_order_relaxed);
            __Vdly__top__DOT__DUT__DOT__ctrl__DOT__wb_result_sel_X 
                = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__wb_result_sel_D;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_X 
                = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_D;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_X 
                = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_D;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mul_X 
                = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mul_D;
            vlSelf->top__DOT__DUT__DOT__ex_result_sel_X 
                = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D;
            __Vdly__top__DOT__DUT__DOT__ctrl__DOT__rf_wen_X 
                = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_D;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X 
                = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D;
        }
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_pending_W 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_pending_W;
        __Vdly__top__DOT__DUT__DOT__rf_waddr_W = vlSelf->top__DOT__DUT__DOT__rf_waddr_W;
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_W)))) {
            vlSymsp->__Vcoverage[2243].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_pending_W 
                = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_M;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_W 
                = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_M;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_pending_W 
                = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_M;
            __Vdly__top__DOT__DUT__DOT__rf_waddr_W 
                = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M;
        }
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_M 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_M;
    } else {
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_X;
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_X;
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_pending_W 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_pending_W;
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_F 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_F;
        __Vdly__top__DOT__DUT__DOT__ctrl__DOT__inst_M 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M;
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W;
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mul_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mul_X;
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_W 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_W;
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_M 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_M;
        vlSelf->top__DOT__DUT__DOT__wb_result_sel_M 
            = vlSelf->top__DOT__DUT__DOT__wb_result_sel_M;
        vlSelf->top__DOT__DUT__DOT__ex_result_sel_X 
            = vlSelf->top__DOT__DUT__DOT__ex_result_sel_X;
        __Vdly__top__DOT__DUT__DOT__ctrl__DOT__rf_wen_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_X;
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_M 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_M;
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X;
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_pending_W 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_pending_W;
        __Vdly__top__DOT__DUT__DOT__rf_waddr_W = vlSelf->top__DOT__DUT__DOT__rf_waddr_W;
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_M 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_M;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M 
        = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M;
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X 
        = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X;
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_W = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_W;
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X;
    if (vlSelf->top__DOT__reset) {
        vlSymsp->__Vcoverage[1820].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1980].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1995].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2144].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2205].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2245].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3532].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_F = 0U;
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_M = 0U;
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_W = 0U;
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X = 0U;
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__cycles = 0U;
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__cycles = 0U;
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__cycles = 0U;
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__cycles = 0U;
        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__cycles = 0U;
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__cycles = 0U;
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full = 0U;
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__state = 0U;
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D = 0U;
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = 0U;
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = 0U;
    } else {
        if (vlSelf->top__DOT__DUT__DOT__reg_en_F) {
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_F = 1U;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_M)))) {
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_M 
                = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_X;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_W)))) {
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_W 
                = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_M;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_X)))) {
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X 
                = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_D;
        }
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__cycles 
            = vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__cycles_next;
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__cycles 
            = vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__cycles_next;
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__cycles 
            = vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__cycles_next;
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__cycles 
            = vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__cycles_next;
        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__cycles 
            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__cycles_next;
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__cycles 
            = vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__cycles_next;
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full 
            = (1U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__state 
            = vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__nextState;
        if (vlSelf->top__DOT__DUT__DOT__reg_en_D) {
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D 
                = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_F;
        }
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr 
            = (1U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next));
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr 
            = (1U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next));
    }
    vlSelf->top__DOT__DUT__DOT__alu_fn_X = vlSelf->top__DOT__DUT__DOT__alu_fn_X;
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X;
    if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_M)))) {
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_M 
                = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_X;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M 
                = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X;
        }
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X;
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_X)))) {
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X 
                = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D;
            vlSelf->top__DOT__DUT__DOT__alu_fn_X = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                = vlSelf->top__DOT__DUT__DOT__inst_D;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X 
                = (0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                            >> 7U));
        }
    } else {
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X;
    }
    vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__state 
        = ((~ (IData)(vlSelf->top__DOT__reset)) & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__next_state));
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
        = vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out;
    vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full 
        = ((~ (IData)(vlSelf->top__DOT__reset)) & (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
    vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full 
        = ((~ (IData)(vlSelf->top__DOT__reset)) & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
        = vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out;
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_M 
        = __Vdly__top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_M;
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M = __Vdly__top__DOT__DUT__DOT__ctrl__DOT__inst_M;
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_M 
        = __Vdly__top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_M;
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__wb_result_sel_X 
        = __Vdly__top__DOT__DUT__DOT__ctrl__DOT__wb_result_sel_X;
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_X 
        = __Vdly__top__DOT__DUT__DOT__ctrl__DOT__rf_wen_X;
    vlSelf->top__DOT__DUT__DOT__rf_waddr_W = __Vdly__top__DOT__DUT__DOT__rf_waddr_W;
    if (__Vdlyvset__top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile__v0) {
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[__Vdlyvdim0__top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile__v0] 
            = __Vdlyvval__top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile__v0;
    }
    if (__Vdlyvset__top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0) {
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vdlyvdim0__top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0][0U] 
            = __Vdlyvval__top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[0U];
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vdlyvdim0__top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0][1U] 
            = __Vdlyvval__top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[1U];
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vdlyvdim0__top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0][2U] 
            = __Vdlyvval__top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[2U];
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__proc2mngr_val_X))) {
        vlSymsp->__Vcoverage[2136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__proc2mngr_val_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stats_en_wen_X))) {
        vlSymsp->__Vcoverage[2137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stats_en_wen_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stats_en_wen_M))) {
        vlSymsp->__Vcoverage[2202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stats_en_wen_M 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_M;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_pending_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stats_en_wen_pending_W))) {
        vlSymsp->__Vcoverage[2242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stats_en_wen_pending_W 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_pending_W;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_F))) {
        vlSymsp->__Vcoverage[1960].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_F 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_F;
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (1U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (2U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (4U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (8U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                        ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                        ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                        ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if (((vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
          ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (1U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (2U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (4U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (8U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                        ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                        ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                        ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if (((vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
          ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mul_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__mul_X))) {
        vlSymsp->__Vcoverage[2141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__mul_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mul_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__proc2mngr_val_M))) {
        vlSymsp->__Vcoverage[2201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__proc2mngr_val_M 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_M;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__proc2mngr_val_W))) {
        vlSymsp->__Vcoverage[2240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__proc2mngr_val_W 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_W;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_M)))) {
        vlSymsp->__Vcoverage[2192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_M 
            = ((6U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_M)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_M)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_M)))) {
        vlSymsp->__Vcoverage[2193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_M 
            = ((5U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_M)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_M)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_M)))) {
        vlSymsp->__Vcoverage[2194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_M 
            = ((3U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_M)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_M)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__wb_result_sel_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__wb_result_sel_X))) {
        vlSymsp->__Vcoverage[2129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__wb_result_sel_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__wb_result_sel_X;
    }
    if (vlSelf->top__DOT__DUT__DOT__wb_result_sel_M) {
        if (vlSelf->top__DOT__DUT__DOT__wb_result_sel_M) {
            vlSymsp->__Vcoverage[3652].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__wb_result_sel_M)))) {
            vlSymsp->__Vcoverage[3653].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__wb_result_sel_M)))) {
        vlSymsp->__Vcoverage[3651].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__wb_result_sel_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_sel_M))) {
        vlSymsp->__Vcoverage[1503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_sel_M 
            = vlSelf->top__DOT__DUT__DOT__wb_result_sel_M;
    }
    if ((0U != (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X))) {
        if ((1U != (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X))) {
            if ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X))) {
                vlSymsp->__Vcoverage[3645].fetch_add(1, std::memory_order_relaxed);
            }
            if ((2U != (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X))) {
                vlSymsp->__Vcoverage[3646].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X))) {
            vlSymsp->__Vcoverage[3644].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_X)))) {
        vlSymsp->__Vcoverage[1499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_X 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_X)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_X)))) {
        vlSymsp->__Vcoverage[1500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_X 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_X)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_M))) {
        vlSymsp->__Vcoverage[1963].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_M 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_M;
    }
    if ((1U & (((2U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X))
                 ? 1U : 0U) ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_type)))) {
        vlSymsp->__Vcoverage[1376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_type 
            = ((6U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_type)) 
               | ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X))
                   ? 1U : 0U));
    }
    if ((2U & (((2U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X))
                 ? 1U : 0U) ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_type)))) {
        vlSymsp->__Vcoverage[1377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_type 
            = (5U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_type));
    }
    if ((4U & (((2U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X))
                 ? 1U : 0U) ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_type)))) {
        vlSymsp->__Vcoverage[1378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_type 
            = (3U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_type));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_X)))) {
        vlSymsp->__Vcoverage[2126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_X 
            = ((6U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_X)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_X)))) {
        vlSymsp->__Vcoverage[2127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_X 
            = ((5U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_X)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_X)))) {
        vlSymsp->__Vcoverage[2128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_X 
            = ((3U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_X)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_pending_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_wen_pending_W))) {
        vlSymsp->__Vcoverage[2241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_wen_pending_W 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_pending_W;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_wen_M))) {
        vlSymsp->__Vcoverage[2195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_wen_M 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_M;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_wen_X))) {
        vlSymsp->__Vcoverage[2130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_wen_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_X;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[2196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[2197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[2198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[2199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[2200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_X)))) {
        vlSymsp->__Vcoverage[2138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_X 
            = ((6U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_X)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_X)))) {
        vlSymsp->__Vcoverage[2139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_X 
            = ((5U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_X)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_X)))) {
        vlSymsp->__Vcoverage[2140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_X 
            = ((3U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_X)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_W))) {
        vlSymsp->__Vcoverage[1964].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_W 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_W;
    }
    vlSelf->top__DOT__DUT__DOT__stats_en_wen_W = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_pending_W) 
                                                  & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_W));
    vlSelf->top__DOT__DUT__DOT__rf_wen_W = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_pending_W) 
                                            & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_W));
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X)))) {
        vlSymsp->__Vcoverage[2155].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_X))) {
        vlSymsp->__Vcoverage[1962].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X;
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                    vlSymsp->__Vcoverage[3630].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)))) {
                    vlSymsp->__Vcoverage[3627].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                    vlSymsp->__Vcoverage[3632].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)))) {
                    vlSymsp->__Vcoverage[3631].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
        if ((4U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)))) {
                    vlSymsp->__Vcoverage[3633].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                    vlSymsp->__Vcoverage[3634].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                    vlSymsp->__Vcoverage[3636].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)))) {
                    vlSymsp->__Vcoverage[3635].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X)))) {
        vlSymsp->__Vcoverage[1495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X 
            = ((0xeU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X)))) {
        vlSymsp->__Vcoverage[1496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X 
            = ((0xdU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X)))) {
        vlSymsp->__Vcoverage[1497].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X 
            = ((0xbU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X)))) {
        vlSymsp->__Vcoverage[1498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X 
            = ((7U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[1505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[1506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[1507].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[1508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[1509].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W)));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
               [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
               [0U][0U]))) {
        vlSymsp->__Vcoverage[1646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (1U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
               [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
               [0U][0U]))) {
        vlSymsp->__Vcoverage[1647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (2U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
               [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
               [0U][0U]))) {
        vlSymsp->__Vcoverage[1648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (4U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
               [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
               [0U][0U]))) {
        vlSymsp->__Vcoverage[1649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (8U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                  [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                  [0U][0U]))) {
        vlSymsp->__Vcoverage[1650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x10U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                  [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                  [0U][0U]))) {
        vlSymsp->__Vcoverage[1651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x20U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                  [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                  [0U][0U]))) {
        vlSymsp->__Vcoverage[1652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x40U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                  [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                  [0U][0U]))) {
        vlSymsp->__Vcoverage[1653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x80U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                   [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                   [0U][0U]))) {
        vlSymsp->__Vcoverage[1654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x100U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                   [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                   [0U][0U]))) {
        vlSymsp->__Vcoverage[1655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x200U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                   [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                   [0U][0U]))) {
        vlSymsp->__Vcoverage[1656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x400U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                   [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                   [0U][0U]))) {
        vlSymsp->__Vcoverage[1657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x800U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                    [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                    [0U][0U]))) {
        vlSymsp->__Vcoverage[1658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x1000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                    [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                    [0U][0U]))) {
        vlSymsp->__Vcoverage[1659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x2000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                    [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                    [0U][0U]))) {
        vlSymsp->__Vcoverage[1660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x4000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                    [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                    [0U][0U]))) {
        vlSymsp->__Vcoverage[1661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x8000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                     [0U][0U]))) {
        vlSymsp->__Vcoverage[1662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x10000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                     [0U][0U]))) {
        vlSymsp->__Vcoverage[1663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x20000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                     [0U][0U]))) {
        vlSymsp->__Vcoverage[1664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x40000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                     [0U][0U]))) {
        vlSymsp->__Vcoverage[1665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x80000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                      [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                      [0U][0U]))) {
        vlSymsp->__Vcoverage[1666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x100000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                      [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                      [0U][0U]))) {
        vlSymsp->__Vcoverage[1667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x200000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                      [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                      [0U][0U]))) {
        vlSymsp->__Vcoverage[1668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x400000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                      [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                      [0U][0U]))) {
        vlSymsp->__Vcoverage[1669].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x800000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                       [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                       [0U][0U]))) {
        vlSymsp->__Vcoverage[1670].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x1000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                       [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                       [0U][0U]))) {
        vlSymsp->__Vcoverage[1671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x2000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                       [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                       [0U][0U]))) {
        vlSymsp->__Vcoverage[1672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x4000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                       [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                       [0U][0U]))) {
        vlSymsp->__Vcoverage[1673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x8000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                        [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                        [0U][0U]))) {
        vlSymsp->__Vcoverage[1674].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x10000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                        [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                        [0U][0U]))) {
        vlSymsp->__Vcoverage[1675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x20000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                        [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                        [0U][0U]))) {
        vlSymsp->__Vcoverage[1676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x40000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if (((vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
          [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
          [0U][0U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[1677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x80000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
               [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
               [0U][1U]))) {
        vlSymsp->__Vcoverage[1678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (1U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
               [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
               [0U][1U]))) {
        vlSymsp->__Vcoverage[1679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (2U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
               [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
               [0U][1U]))) {
        vlSymsp->__Vcoverage[1680].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (4U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
               [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
               [0U][1U]))) {
        vlSymsp->__Vcoverage[1681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (8U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                  [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                  [0U][1U]))) {
        vlSymsp->__Vcoverage[1682].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x10U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                  [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                  [0U][1U]))) {
        vlSymsp->__Vcoverage[1683].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x20U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                  [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                  [0U][1U]))) {
        vlSymsp->__Vcoverage[1684].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x40U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                  [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                  [0U][1U]))) {
        vlSymsp->__Vcoverage[1685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x80U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                   [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                   [0U][1U]))) {
        vlSymsp->__Vcoverage[1686].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x100U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                   [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                   [0U][1U]))) {
        vlSymsp->__Vcoverage[1687].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x200U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                   [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                   [0U][1U]))) {
        vlSymsp->__Vcoverage[1688].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x400U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                   [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                   [0U][1U]))) {
        vlSymsp->__Vcoverage[1689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x800U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                    [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                    [0U][1U]))) {
        vlSymsp->__Vcoverage[1690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x1000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                    [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                    [0U][1U]))) {
        vlSymsp->__Vcoverage[1691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x2000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                    [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                    [0U][1U]))) {
        vlSymsp->__Vcoverage[1692].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x4000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                    [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                    [0U][1U]))) {
        vlSymsp->__Vcoverage[1693].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x8000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                     [0U][1U]))) {
        vlSymsp->__Vcoverage[1694].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x10000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                     [0U][1U]))) {
        vlSymsp->__Vcoverage[1695].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x20000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                     [0U][1U]))) {
        vlSymsp->__Vcoverage[1696].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x40000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                     [0U][1U]))) {
        vlSymsp->__Vcoverage[1697].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x80000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                      [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                      [0U][1U]))) {
        vlSymsp->__Vcoverage[1698].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x100000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                      [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                      [0U][1U]))) {
        vlSymsp->__Vcoverage[1699].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x200000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                      [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                      [0U][1U]))) {
        vlSymsp->__Vcoverage[1700].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x400000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                      [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                      [0U][1U]))) {
        vlSymsp->__Vcoverage[1701].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x800000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                       [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                       [0U][1U]))) {
        vlSymsp->__Vcoverage[1702].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x1000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                       [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                       [0U][1U]))) {
        vlSymsp->__Vcoverage[1703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x2000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                       [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                       [0U][1U]))) {
        vlSymsp->__Vcoverage[1704].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x4000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                       [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                       [0U][1U]))) {
        vlSymsp->__Vcoverage[1705].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x8000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                        [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                        [0U][1U]))) {
        vlSymsp->__Vcoverage[1706].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x10000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                        [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                        [0U][1U]))) {
        vlSymsp->__Vcoverage[1707].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x20000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                        [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                        [0U][1U]))) {
        vlSymsp->__Vcoverage[1708].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x40000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if (((vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
          [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
          [0U][1U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[1709].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x80000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
               [0U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
               [0U][2U]))) {
        vlSymsp->__Vcoverage[1710].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][2U] 
            = ((0x1ffeU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][2U]) | (1U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][2U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
               [0U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
               [0U][2U]))) {
        vlSymsp->__Vcoverage[1711].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][2U] 
            = ((0x1ffdU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][2U]) | (2U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][2U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
               [0U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
               [0U][2U]))) {
        vlSymsp->__Vcoverage[1712].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][2U] 
            = ((0x1ffbU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][2U]) | (4U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][2U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
               [0U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
               [0U][2U]))) {
        vlSymsp->__Vcoverage[1713].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][2U] 
            = ((0x1ff7U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][2U]) | (8U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                  [0U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                  [0U][2U]))) {
        vlSymsp->__Vcoverage[1714].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][2U] 
            = ((0x1fefU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][2U]) | (0x10U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                  [0U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                  [0U][2U]))) {
        vlSymsp->__Vcoverage[1715].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][2U] 
            = ((0x1fdfU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][2U]) | (0x20U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                  [0U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                  [0U][2U]))) {
        vlSymsp->__Vcoverage[1716].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][2U] 
            = ((0x1fbfU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][2U]) | (0x40U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                  [0U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                  [0U][2U]))) {
        vlSymsp->__Vcoverage[1717].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][2U] 
            = ((0x1f7fU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][2U]) | (0x80U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                   [0U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                   [0U][2U]))) {
        vlSymsp->__Vcoverage[1718].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][2U] 
            = ((0x1effU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][2U]) | (0x100U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                   [0U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                   [0U][2U]))) {
        vlSymsp->__Vcoverage[1719].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][2U] 
            = ((0x1dffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][2U]) | (0x200U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                   [0U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                   [0U][2U]))) {
        vlSymsp->__Vcoverage[1720].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][2U] 
            = ((0x1bffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][2U]) | (0x400U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                   [0U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                   [0U][2U]))) {
        vlSymsp->__Vcoverage[1721].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][2U] 
            = ((0x17ffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][2U]) | (0x800U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                    [0U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                    [0U][2U]))) {
        vlSymsp->__Vcoverage[1722].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][2U] 
            = ((0xfffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][2U]) | (0x1000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][2U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
               [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
               [1U][0U]))) {
        vlSymsp->__Vcoverage[1723].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (1U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
               [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
               [1U][0U]))) {
        vlSymsp->__Vcoverage[1724].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (2U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
               [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
               [1U][0U]))) {
        vlSymsp->__Vcoverage[1725].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (4U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
               [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
               [1U][0U]))) {
        vlSymsp->__Vcoverage[1726].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (8U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                  [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                  [1U][0U]))) {
        vlSymsp->__Vcoverage[1727].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x10U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                  [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                  [1U][0U]))) {
        vlSymsp->__Vcoverage[1728].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x20U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                  [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                  [1U][0U]))) {
        vlSymsp->__Vcoverage[1729].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x40U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                  [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                  [1U][0U]))) {
        vlSymsp->__Vcoverage[1730].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x80U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                   [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                   [1U][0U]))) {
        vlSymsp->__Vcoverage[1731].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x100U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                   [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                   [1U][0U]))) {
        vlSymsp->__Vcoverage[1732].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x200U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                   [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                   [1U][0U]))) {
        vlSymsp->__Vcoverage[1733].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x400U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                   [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                   [1U][0U]))) {
        vlSymsp->__Vcoverage[1734].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x800U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                    [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                    [1U][0U]))) {
        vlSymsp->__Vcoverage[1735].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x1000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                    [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                    [1U][0U]))) {
        vlSymsp->__Vcoverage[1736].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x2000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                    [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                    [1U][0U]))) {
        vlSymsp->__Vcoverage[1737].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x4000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                    [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                    [1U][0U]))) {
        vlSymsp->__Vcoverage[1738].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x8000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                     [1U][0U]))) {
        vlSymsp->__Vcoverage[1739].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x10000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                     [1U][0U]))) {
        vlSymsp->__Vcoverage[1740].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x20000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                     [1U][0U]))) {
        vlSymsp->__Vcoverage[1741].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x40000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                     [1U][0U]))) {
        vlSymsp->__Vcoverage[1742].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x80000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                      [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                      [1U][0U]))) {
        vlSymsp->__Vcoverage[1743].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x100000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                      [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                      [1U][0U]))) {
        vlSymsp->__Vcoverage[1744].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x200000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                      [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                      [1U][0U]))) {
        vlSymsp->__Vcoverage[1745].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x400000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                      [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                      [1U][0U]))) {
        vlSymsp->__Vcoverage[1746].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x800000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                       [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                       [1U][0U]))) {
        vlSymsp->__Vcoverage[1747].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x1000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                       [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                       [1U][0U]))) {
        vlSymsp->__Vcoverage[1748].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x2000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                       [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                       [1U][0U]))) {
        vlSymsp->__Vcoverage[1749].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x4000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                       [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                       [1U][0U]))) {
        vlSymsp->__Vcoverage[1750].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x8000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                        [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                        [1U][0U]))) {
        vlSymsp->__Vcoverage[1751].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x10000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                        [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                        [1U][0U]))) {
        vlSymsp->__Vcoverage[1752].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x20000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                        [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                        [1U][0U]))) {
        vlSymsp->__Vcoverage[1753].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x40000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if (((vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
          [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
          [1U][0U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[1754].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x80000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
               [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
               [1U][1U]))) {
        vlSymsp->__Vcoverage[1755].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (1U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
               [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
               [1U][1U]))) {
        vlSymsp->__Vcoverage[1756].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (2U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
               [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
               [1U][1U]))) {
        vlSymsp->__Vcoverage[1757].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (4U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
               [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
               [1U][1U]))) {
        vlSymsp->__Vcoverage[1758].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (8U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                  [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                  [1U][1U]))) {
        vlSymsp->__Vcoverage[1759].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x10U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                  [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                  [1U][1U]))) {
        vlSymsp->__Vcoverage[1760].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x20U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                  [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                  [1U][1U]))) {
        vlSymsp->__Vcoverage[1761].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x40U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                  [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                  [1U][1U]))) {
        vlSymsp->__Vcoverage[1762].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x80U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                   [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                   [1U][1U]))) {
        vlSymsp->__Vcoverage[1763].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x100U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                   [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                   [1U][1U]))) {
        vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x200U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                   [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                   [1U][1U]))) {
        vlSymsp->__Vcoverage[1765].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x400U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                   [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                   [1U][1U]))) {
        vlSymsp->__Vcoverage[1766].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x800U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                    [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                    [1U][1U]))) {
        vlSymsp->__Vcoverage[1767].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x1000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                    [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                    [1U][1U]))) {
        vlSymsp->__Vcoverage[1768].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x2000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                    [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                    [1U][1U]))) {
        vlSymsp->__Vcoverage[1769].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x4000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                    [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                    [1U][1U]))) {
        vlSymsp->__Vcoverage[1770].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x8000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                     [1U][1U]))) {
        vlSymsp->__Vcoverage[1771].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x10000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                     [1U][1U]))) {
        vlSymsp->__Vcoverage[1772].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x20000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                     [1U][1U]))) {
        vlSymsp->__Vcoverage[1773].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x40000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                     [1U][1U]))) {
        vlSymsp->__Vcoverage[1774].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x80000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                      [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                      [1U][1U]))) {
        vlSymsp->__Vcoverage[1775].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x100000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                      [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                      [1U][1U]))) {
        vlSymsp->__Vcoverage[1776].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x200000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                      [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                      [1U][1U]))) {
        vlSymsp->__Vcoverage[1777].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x400000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                      [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                      [1U][1U]))) {
        vlSymsp->__Vcoverage[1778].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x800000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                       [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                       [1U][1U]))) {
        vlSymsp->__Vcoverage[1779].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x1000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                       [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                       [1U][1U]))) {
        vlSymsp->__Vcoverage[1780].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x2000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                       [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                       [1U][1U]))) {
        vlSymsp->__Vcoverage[1781].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x4000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                       [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                       [1U][1U]))) {
        vlSymsp->__Vcoverage[1782].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x8000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                        [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                        [1U][1U]))) {
        vlSymsp->__Vcoverage[1783].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x10000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                        [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                        [1U][1U]))) {
        vlSymsp->__Vcoverage[1784].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x20000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                        [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                        [1U][1U]))) {
        vlSymsp->__Vcoverage[1785].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x40000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if (((vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
          [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
          [1U][1U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[1786].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x80000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
               [1U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
               [1U][2U]))) {
        vlSymsp->__Vcoverage[1787].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][2U] 
            = ((0x1ffeU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][2U]) | (1U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][2U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
               [1U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
               [1U][2U]))) {
        vlSymsp->__Vcoverage[1788].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][2U] 
            = ((0x1ffdU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][2U]) | (2U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][2U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
               [1U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
               [1U][2U]))) {
        vlSymsp->__Vcoverage[1789].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][2U] 
            = ((0x1ffbU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][2U]) | (4U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][2U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
               [1U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
               [1U][2U]))) {
        vlSymsp->__Vcoverage[1790].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][2U] 
            = ((0x1ff7U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][2U]) | (8U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                  [1U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                  [1U][2U]))) {
        vlSymsp->__Vcoverage[1791].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][2U] 
            = ((0x1fefU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][2U]) | (0x10U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                  [1U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                  [1U][2U]))) {
        vlSymsp->__Vcoverage[1792].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][2U] 
            = ((0x1fdfU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][2U]) | (0x20U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                  [1U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                  [1U][2U]))) {
        vlSymsp->__Vcoverage[1793].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][2U] 
            = ((0x1fbfU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][2U]) | (0x40U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                  [1U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                  [1U][2U]))) {
        vlSymsp->__Vcoverage[1794].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][2U] 
            = ((0x1f7fU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][2U]) | (0x80U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                   [1U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                   [1U][2U]))) {
        vlSymsp->__Vcoverage[1795].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][2U] 
            = ((0x1effU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][2U]) | (0x100U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                   [1U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                   [1U][2U]))) {
        vlSymsp->__Vcoverage[1796].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][2U] 
            = ((0x1dffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][2U]) | (0x200U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                   [1U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                   [1U][2U]))) {
        vlSymsp->__Vcoverage[1797].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][2U] 
            = ((0x1bffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][2U]) | (0x400U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                   [1U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                   [1U][2U]))) {
        vlSymsp->__Vcoverage[1798].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][2U] 
            = ((0x17ffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][2U]) | (0x800U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                    [1U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                    [1U][2U]))) {
        vlSymsp->__Vcoverage[1799].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][2U] 
            = ((0xfffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][2U]) | (0x1000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][2U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[2094].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (1U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[2095].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (2U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[2096].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (4U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[2097].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (8U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[2098].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[2099].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[2100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[2101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[2102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[2103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[2104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[2105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[2106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[2107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[2108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[2109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[2110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[2111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[2112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[2113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[2114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[2115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[2116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[2117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[2118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[2119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[2120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[2121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                        ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[2122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                        ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[2123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                        ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[2124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if (((vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
          ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[2131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[2132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[2133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[2134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[2135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X)));
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hf1e2f6b3__0 
        = ((0U != (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X)) 
           & (1U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X)));
    if (vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__state) {
        vlSymsp->__Vcoverage[1815].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1818].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__state)))) {
        vlSymsp->__Vcoverage[1814].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1817].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__state) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT____Vtogcov__state))) {
        vlSymsp->__Vcoverage[1807].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT____Vtogcov__state 
            = vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__state;
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)))) {
            vlSymsp->__Vcoverage[1957].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
            vlSymsp->__Vcoverage[1958].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
        vlSymsp->__Vcoverage[1956].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_queue_num_free_entries)))) {
        vlSymsp->__Vcoverage[1443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_queue_num_free_entries 
            = (1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full))) {
        vlSymsp->__Vcoverage[1915].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_W 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_W) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_W) 
              & (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_rdy)))) {
        vlSymsp->__Vcoverage[1261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_rdy 
            = (1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full))) {
        vlSymsp->__Vcoverage[1557].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)))) {
            vlSymsp->__Vcoverage[1911].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
            vlSymsp->__Vcoverage[1912].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
        vlSymsp->__Vcoverage[1910].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_queue_num_free_entries)))) {
        vlSymsp->__Vcoverage[1297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_queue_num_free_entries 
            = (1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full))) {
        vlSymsp->__Vcoverage[1824].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full 
            = vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_dmem_X 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
           & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X)));
    if ((1U & ((IData)(vlSelf->top__DOT__reset) | (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_W))))) {
        vlSymsp->__Vcoverage[3655].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__state) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT____Vtogcov__state)))) {
        vlSymsp->__Vcoverage[3526].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT____Vtogcov__state 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT____Vtogcov__state)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__state)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__state) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT____Vtogcov__state)))) {
        vlSymsp->__Vcoverage[3527].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT____Vtogcov__state 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT____Vtogcov__state)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__state)));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__state))) {
        vlSymsp->__Vcoverage[3537].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3545].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3531].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__reset) | (IData)(vlSelf->top__DOT__DUT__DOT__reg_en_D))) {
        vlSymsp->__Vcoverage[3061].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3096].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__inst_D = ((IData)(vlSelf->top__DOT__reset)
                                               ? 0U
                                               : vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out);
    }
    if ((8U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)))) {
                    vlSymsp->__Vcoverage[3637].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                    vlSymsp->__Vcoverage[3638].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)))) {
                    vlSymsp->__Vcoverage[3639].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                    vlSymsp->__Vcoverage[3628].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
        if ((4U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
            if ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                vlSymsp->__Vcoverage[3641].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                    vlSymsp->__Vcoverage[3640].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)))) {
                    vlSymsp->__Vcoverage[3629].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    if ((0U != (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__state))) {
            if ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__state))) {
                vlSymsp->__Vcoverage[3543].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[3583].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[3531].fetch_add(1, std::memory_order_relaxed);
            }
            if ((2U != (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__state))) {
                vlSymsp->__Vcoverage[3531].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__state))) {
            vlSymsp->__Vcoverage[3540].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[3582].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[3531].fetch_add(1, std::memory_order_relaxed);
            if ((1U & (~ (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                          >> 1U)))) {
                if ((1U & (~ (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                              >> 2U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                      >> 4U)))) {
                            if ((1U & (~ (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                          >> 5U)))) {
                                if ((1U & (~ (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                              >> 6U)))) {
                                    if ((1U & (~ (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                  >> 7U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                    >> 8U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                     >> 9U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                         >> 0xaU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                             >> 0xbU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                 >> 0xcU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                     >> 0xdU)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                         >> 0xeU)))) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                             >> 0xfU)))) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                                >> 0x10U)))) {
                                                                            if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                                >> 0x11U)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                                >> 0x12U)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                                >> 0x13U)))) {
                                                                                if (
                                                                                (0x100000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                                vlSymsp->__Vcoverage[3558].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                                >> 0x14U)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                                >> 0x15U)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                                >> 0x16U)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                                >> 0x17U)))) {
                                                                                if (
                                                                                (0x1000000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                                vlSymsp->__Vcoverage[3554].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                                >> 0x18U)))) {
                                                                                if (
                                                                                (0x2000000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                                vlSymsp->__Vcoverage[3553].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                                >> 0x19U)))) {
                                                                                if (
                                                                                (0x4000000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                                vlSymsp->__Vcoverage[3552].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                                >> 0x1aU)))) {
                                                                                if (
                                                                                (0x8000000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                                vlSymsp->__Vcoverage[3551].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                                >> 0x1bU)))) {
                                                                                if (
                                                                                (0x10000000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                                vlSymsp->__Vcoverage[3550].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                                >> 0x1cU)))) {
                                                                                if (
                                                                                (0x20000000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                                vlSymsp->__Vcoverage[3549].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                                >> 0x1dU)))) {
                                                                                if (
                                                                                (0x40000000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                                vlSymsp->__Vcoverage[3548].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                                >> 0x1eU)))) {
                                                                                if (
                                                                                (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                                >> 0x1fU)) {
                                                                                vlSymsp->__Vcoverage[3546].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                                >> 0x1fU)))) {
                                                                                vlSymsp->__Vcoverage[3547].fetch_add(1, std::memory_order_relaxed);
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
                                                                                (0x800000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                                vlSymsp->__Vcoverage[3555].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x400000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                                vlSymsp->__Vcoverage[3556].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x200000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                                vlSymsp->__Vcoverage[3557].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x80000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                                vlSymsp->__Vcoverage[3559].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x40000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                                vlSymsp->__Vcoverage[3560].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                            }
                                                                            if (
                                                                                (0x20000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                                vlSymsp->__Vcoverage[3561].fetch_add(1, std::memory_order_relaxed);
                                                                            }
                                                                        }
                                                                        if (
                                                                            (0x10000U 
                                                                             & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                            vlSymsp->__Vcoverage[3562].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                    if (
                                                                        (0x8000U 
                                                                         & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                        vlSymsp->__Vcoverage[3563].fetch_add(1, std::memory_order_relaxed);
                                                                    }
                                                                }
                                                                if (
                                                                    (0x4000U 
                                                                     & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                    vlSymsp->__Vcoverage[3564].fetch_add(1, std::memory_order_relaxed);
                                                                }
                                                            }
                                                            if (
                                                                (0x2000U 
                                                                 & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                vlSymsp->__Vcoverage[3565].fetch_add(1, std::memory_order_relaxed);
                                                            }
                                                        }
                                                        if (
                                                            (0x1000U 
                                                             & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                            vlSymsp->__Vcoverage[3566].fetch_add(1, std::memory_order_relaxed);
                                                        }
                                                    }
                                                    if (
                                                        (0x800U 
                                                         & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                        vlSymsp->__Vcoverage[3567].fetch_add(1, std::memory_order_relaxed);
                                                    }
                                                }
                                                if (
                                                    (0x400U 
                                                     & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                    vlSymsp->__Vcoverage[3568].fetch_add(1, std::memory_order_relaxed);
                                                }
                                            }
                                            if ((0x200U 
                                                 & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                vlSymsp->__Vcoverage[3569].fetch_add(1, std::memory_order_relaxed);
                                            }
                                        }
                                        if ((0x100U 
                                             & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                            vlSymsp->__Vcoverage[3570].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    }
                                    if ((0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                        vlSymsp->__Vcoverage[3571].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                                if ((0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                    vlSymsp->__Vcoverage[3572].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                vlSymsp->__Vcoverage[3573].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                            vlSymsp->__Vcoverage[3574].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                        vlSymsp->__Vcoverage[3575].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                    vlSymsp->__Vcoverage[3576].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                vlSymsp->__Vcoverage[3577].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                vlSymsp->__Vcoverage[3581].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out))) {
                if ((0U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                    vlSymsp->__Vcoverage[3578].fetch_add(1, std::memory_order_relaxed);
                }
                if ((0U != vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                    vlSymsp->__Vcoverage[3579].fetch_add(1, std::memory_order_relaxed);
                }
                vlSymsp->__Vcoverage[3580].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) {
        vlSymsp->__Vcoverage[2154].fetch_add(1, std::memory_order_relaxed);
        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X))) {
                if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X))) {
                    vlSymsp->__Vcoverage[2148].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))) {
                    vlSymsp->__Vcoverage[2147].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X))) {
                    vlSymsp->__Vcoverage[2149].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))) {
                    vlSymsp->__Vcoverage[2153].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
        if ((4U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X))) {
                    vlSymsp->__Vcoverage[2150].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))) {
                    vlSymsp->__Vcoverage[2146].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))) {
                    vlSymsp->__Vcoverage[2151].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X))) {
                    vlSymsp->__Vcoverage[2152].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    if ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X))) {
        vlSymsp->__Vcoverage[3643].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__state))) {
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__a_mux_sel = 1U;
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__b_mux_sel = 1U;
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__shamt = 0U;
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__result_mux_sel = 1U;
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__result_en = 1U;
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__add_mux_sel = 1U;
        vlSelf->top__DOT__DUT__DOT__imul_istream_rdy_D = 1U;
        vlSelf->top__DOT__DUT__DOT__imul_ostream_val_X = 0U;
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__done = 0U;
    } else if ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__state))) {
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__unnamedblk1__DOT__temp_shamt 
            = ((2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)
                ? 1U : ((4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)
                         ? 2U : ((8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                  ? 3U : ((0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                           ? 4U : (
                                                   (0x20U 
                                                    & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                    ? 5U
                                                    : 
                                                   ((0x40U 
                                                     & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                     ? 6U
                                                     : 
                                                    ((0x80U 
                                                      & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                      ? 7U
                                                      : 
                                                     ((0x100U 
                                                       & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                       ? 8U
                                                       : 
                                                      ((0x200U 
                                                        & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                        ? 9U
                                                        : 
                                                       ((0x400U 
                                                         & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                         ? 0xaU
                                                         : 
                                                        ((0x800U 
                                                          & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                          ? 0xbU
                                                          : 
                                                         ((0x1000U 
                                                           & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                           ? 0xcU
                                                           : 
                                                          ((0x2000U 
                                                            & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                            ? 0xdU
                                                            : 
                                                           ((0x4000U 
                                                             & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                             ? 0xeU
                                                             : 
                                                            ((0x8000U 
                                                              & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                              ? 0xfU
                                                              : 
                                                             ((0x10000U 
                                                               & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                               ? 0x10U
                                                               : 
                                                              ((0x20000U 
                                                                & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                                ? 0x11U
                                                                : 
                                                               ((0x40000U 
                                                                 & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                                 ? 0x12U
                                                                 : 
                                                                ((0x80000U 
                                                                  & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                                  ? 0x13U
                                                                  : 
                                                                 ((0x100000U 
                                                                   & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                                   ? 0x14U
                                                                   : 
                                                                  ((0x200000U 
                                                                    & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                                    ? 0x15U
                                                                    : 
                                                                   ((0x400000U 
                                                                     & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                                     ? 0x16U
                                                                     : 
                                                                    ((0x800000U 
                                                                      & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                                      ? 0x17U
                                                                      : 
                                                                     ((0x1000000U 
                                                                       & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                                       ? 0x18U
                                                                       : 
                                                                      ((0x2000000U 
                                                                        & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                                        ? 0x19U
                                                                        : 
                                                                       ((0x4000000U 
                                                                         & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                                         ? 0x1aU
                                                                         : 
                                                                        ((0x8000000U 
                                                                          & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                                          ? 0x1bU
                                                                          : 
                                                                         ((0x10000000U 
                                                                           & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                                           ? 0x1cU
                                                                           : 
                                                                          ((0x20000000U 
                                                                            & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                                            ? 0x1dU
                                                                            : 
                                                                           ((0x40000000U 
                                                                             & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)
                                                                             ? 0x1eU
                                                                             : 
                                                                            ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                              >> 0x1fU)
                                                                              ? 0x1fU
                                                                              : 1U)))))))))))))))))))))))))))))));
        if ((1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__unnamedblk1__DOT__temp_add_mux_sel = 0U;
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__unnamedblk1__DOT__temp_done = 0U;
        } else {
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__unnamedblk1__DOT__temp_add_mux_sel = 1U;
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__unnamedblk1__DOT__temp_done 
                = (0U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out);
        }
        vlSelf->__Vtask_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__tab__129__t_done 
            = vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__unnamedblk1__DOT__temp_done;
        vlSelf->__Vtask_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__tab__129__t_shamt 
            = vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__unnamedblk1__DOT__temp_shamt;
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__a_mux_sel = 0U;
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__b_mux_sel = 0U;
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__result_mux_sel = 0U;
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__result_en = 1U;
        vlSelf->top__DOT__DUT__DOT__imul_istream_rdy_D = 0U;
        vlSelf->top__DOT__DUT__DOT__imul_ostream_val_X = 0U;
        vlSelf->__Vtask_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__tab__129__t_add_mux_sel 
            = vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__unnamedblk1__DOT__temp_add_mux_sel;
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__shamt 
            = vlSelf->__Vtask_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__tab__129__t_shamt;
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__add_mux_sel 
            = vlSelf->__Vtask_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__tab__129__t_add_mux_sel;
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__done 
            = vlSelf->__Vtask_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__tab__129__t_done;
    } else if (VL_LIKELY((2U == (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__state)))) {
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__a_mux_sel = 1U;
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__b_mux_sel = 1U;
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__shamt = 0U;
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__result_mux_sel = 0U;
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__result_en = 0U;
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__add_mux_sel = 1U;
        vlSelf->top__DOT__DUT__DOT__imul_istream_rdy_D = 0U;
        vlSelf->top__DOT__DUT__DOT__imul_ostream_val_X = 1U;
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__done = 0U;
    } else {
        VL_STOP_MT("../lab1_imul/IntMulAlt.v", 394, "");
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__a_mux_sel = 1U;
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__b_mux_sel = 1U;
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__shamt = 0U;
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__result_mux_sel = 1U;
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__result_en = 0U;
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__add_mux_sel = 1U;
        vlSelf->top__DOT__DUT__DOT__imul_istream_rdy_D = 1U;
        vlSelf->top__DOT__DUT__DOT__imul_ostream_val_X = 0U;
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__done = 0U;
    }
    if ((0U != (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__state))) {
        if ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__done)))) {
                vlSymsp->__Vcoverage[3539].fetch_add(1, std::memory_order_relaxed);
            }
            if (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__done) {
                vlSymsp->__Vcoverage[3538].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if ((8U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
        if ((4U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
            if ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X = 0U;
            } else if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                    = (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                       + vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X);
                vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                    = (0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X);
            } else {
                vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                    = vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X;
            }
        } else {
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))
                    ? ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))
                        ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X
                        : VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X, 
                                         (0x1fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X)))
                    : ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))
                        ? (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                           >> (0x1fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X))
                        : (~ (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                              | vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X))));
        }
    } else {
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
            = ((4U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))
                ? ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))
                    ? ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))
                        ? (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                           ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X)
                        : (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                           & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X))
                    : ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))
                        ? (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                           < vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X)
                        : VL_LTS_III(32, vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X, vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X)))
                : ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))
                    ? ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))
                        ? (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                           | vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X)
                        : (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                           << (0x1fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X)))
                    : ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))
                        ? (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                           - vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X)
                        : (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                           + vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X))));
    }
    if (((IData)(vlSelf->top__DOT__reset) | (IData)(vlSelf->top__DOT__DUT__DOT__reg_en_D))) {
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
            = ((IData)(vlSelf->top__DOT__reset) ? 0U
                : vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F);
    }
    if ((1U & ((IData)(vlSelf->top__DOT__reset) | (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_W))))) {
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
            = ((IData)(vlSelf->top__DOT__reset) ? 0U
                : vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M);
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
          ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_D))) {
        vlSymsp->__Vcoverage[1961].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D;
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
               ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
               ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
               ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
               ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                  ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                  ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                  ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                  ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                   ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                   ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                   ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                   ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                    ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                    ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                    ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                    ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1845].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                     ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                     ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                     ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1848].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                     ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1849].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                      ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                      ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                      ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                      ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1857].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                        ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                        ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1859].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                        ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
          ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
               ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1862].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
               ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
               ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
               ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                  ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1866].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                  ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1867].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                  ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1868].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                  ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1869].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                   ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1870].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                   ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1871].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                   ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1872].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                   ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1873].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                    ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1874].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                    ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1875].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                    ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1876].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                    ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1877].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                     ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1878].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                     ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1879].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                     ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1880].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                     ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1881].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                      ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1882].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                      ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1883].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                      ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                      ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                       ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                       ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
        = ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X))
            ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X
            : ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X))
                ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out
                : ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X))
                    ? ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)
                    : 0U)));
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                       ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                       ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                        ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                        ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                        ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
          ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
               ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]))) {
        vlSymsp->__Vcoverage[1894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U] 
            = ((0x1ffeU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
               ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]))) {
        vlSymsp->__Vcoverage[1895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U] 
            = ((0x1ffdU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
               ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]))) {
        vlSymsp->__Vcoverage[1896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U] 
            = ((0x1ffbU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
               ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]))) {
        vlSymsp->__Vcoverage[1897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U] 
            = ((0x1ff7U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                  ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]))) {
        vlSymsp->__Vcoverage[1898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U] 
            = ((0x1fefU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                  ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]))) {
        vlSymsp->__Vcoverage[1899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U] 
            = ((0x1fdfU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                  ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]))) {
        vlSymsp->__Vcoverage[1900].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U] 
            = ((0x1fbfU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                  ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]))) {
        vlSymsp->__Vcoverage[1901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U] 
            = ((0x1f7fU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                   ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]))) {
        vlSymsp->__Vcoverage[1902].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U] 
            = ((0x1effU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                   ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]))) {
        vlSymsp->__Vcoverage[1903].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U] 
            = ((0x1dffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                   ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]))) {
        vlSymsp->__Vcoverage[1904].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U] 
            = ((0x1bffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                   ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]))) {
        vlSymsp->__Vcoverage[1905].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U] 
            = ((0x17ffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                    ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]))) {
        vlSymsp->__Vcoverage[1906].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U] 
            = ((0xfffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__read_addr))) {
        vlSymsp->__Vcoverage[1551].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__read_addr 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__deq_ptr))) {
        vlSymsp->__Vcoverage[1555].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__deq_ptr 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr;
    }
    if ((1U & (((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__deq_ptr_plus1)))) {
        vlSymsp->__Vcoverage[1562].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__deq_ptr_plus1 
            = (1U & ((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)));
    }
    vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
        = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
        = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U] 
        = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2988].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2989].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2990].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2991].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2992].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2993].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2994].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2995].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2996].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2997].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2998].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2999].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[3000].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[3001].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[3002].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[3003].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[3004].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[3005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[3006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[3007].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[3008].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[3009].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[3010].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[3011].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[3012].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[3013].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[3014].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[3015].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[3016].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[3017].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[3018].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3019].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2845].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2848].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2849].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2857].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2859].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out 
        = (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
           + vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out);
    if (((0U != vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__stats_en))) {
        vlSymsp->__Vcoverage[616].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__stats_en = (0U 
                                                 != vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W);
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[3020].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[3021].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[3022].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[3023].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[3024].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[3025].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[3026].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[3027].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[3028].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[3029].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[3030].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[3031].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[3032].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[3033].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[3034].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[3035].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[3036].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[3037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[3038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[3039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[3040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[3041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[3042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[3043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[3044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[3045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[3046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[3047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[3048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[3049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[3050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
               ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1921].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (1U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
               ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1922].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (2U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
               ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1923].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (4U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
               ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1924].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (8U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                  ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1925].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                  ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1926].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                  ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1927].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                  ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1928].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                   ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1929].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                   ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1930].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                   ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1931].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                   ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1932].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                    ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1933].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                    ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1934].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                    ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1935].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                    ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1936].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                     ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1937].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                     ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1938].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                     ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1939].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                     ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1940].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                      ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1941].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                      ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1942].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                      ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1943].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                      ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1944].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                       ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1945].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                       ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1946].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                       ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1947].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                       ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1948].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1949].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1950].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1951].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if (((vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
          ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1952].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((2U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2957].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (2U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((4U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2958].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (4U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((8U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2959].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (8U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x10U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2960].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x10U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x20U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2961].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x20U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x40U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2962].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x40U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x80U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2963].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x80U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x100U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2964].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x100U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x200U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2965].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x200U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x400U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2966].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x400U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x800U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2967].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x800U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x1000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2968].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x1000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x2000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2969].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x2000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x4000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2970].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x4000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x8000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2971].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x8000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x10000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2972].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x10000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x20000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2973].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x20000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x40000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2974].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x40000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x80000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2975].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x80000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x100000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2976].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x100000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x200000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2977].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x200000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x400000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2978].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x400000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x800000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2979].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x800000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x1000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2980].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x1000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x2000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2981].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x2000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x4000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2982].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x4000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x8000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2983].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x8000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x10000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2984].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x10000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x20000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2985].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x20000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x40000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2986].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x40000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if (((((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2987].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x80000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2862].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2866].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2867].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2868].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2869].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2870].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2873].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2874].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2875].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2876].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2877].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2878].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2879].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2880].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2881].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2882].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2883].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2900].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2902].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2903].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2904].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2905].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2906].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2907].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2908].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2909].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2910].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2911].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2912].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2913].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2914].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2915].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2916].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2917].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2918].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2919].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2920].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2921].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2922].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2923].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2924].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2925].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2926].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2927].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2928].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2929].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2930].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2931].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2932].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2933].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2934].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2935].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2936].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2937].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2938].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2939].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2940].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2941].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2942].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2943].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2944].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2945].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2946].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2947].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2948].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2949].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2950].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2951].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2952].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2953].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2954].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2955].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2956].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    vlSelf->top__DOT__DUT__DOT__br_cond_eq_X = (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                                                == vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X);
    vlSelf->top__DOT__DUT__DOT__br_cond_lt_X = VL_LTS_III(32, vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X, vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X);
    vlSelf->top__DOT__DUT__DOT__br_cond_ltu_X = (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                                                 < vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X);
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stats_en_wen_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_wen_W))) {
        vlSymsp->__Vcoverage[1511].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_wen_W 
            = vlSelf->top__DOT__DUT__DOT__stats_en_wen_W;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_wen_W))) {
        vlSymsp->__Vcoverage[1510].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_wen_W 
            = vlSelf->top__DOT__DUT__DOT__rf_wen_W;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_W))) {
        vlSymsp->__Vcoverage[1969].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_W 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_W;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_dmem_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_dmem_X))) {
        vlSymsp->__Vcoverage[2157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_dmem_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_dmem_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__result_en) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__result_en))) {
        vlSymsp->__Vcoverage[3210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__result_en 
            = vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__result_en;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__done) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT____Vtogcov__done))) {
        vlSymsp->__Vcoverage[3530].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT____Vtogcov__done 
            = vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__done;
    }
    if (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__result_mux_sel) {
        if (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__result_mux_sel) {
            vlSymsp->__Vcoverage[3516].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__result_mux_sel)))) {
            vlSymsp->__Vcoverage[3517].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__result_mux_sel)))) {
        vlSymsp->__Vcoverage[3515].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__result_mux_sel) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__result_mux_sel))) {
        vlSymsp->__Vcoverage[3209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__result_mux_sel 
            = vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__result_mux_sel;
    }
    if (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__a_mux_sel) {
        if (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__a_mux_sel) {
            vlSymsp->__Vcoverage[3511].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__a_mux_sel)))) {
            vlSymsp->__Vcoverage[3512].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__a_mux_sel)))) {
        vlSymsp->__Vcoverage[3510].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__a_mux_sel) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__a_mux_sel))) {
        vlSymsp->__Vcoverage[3208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__a_mux_sel 
            = vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__a_mux_sel;
    }
    if (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__b_mux_sel) {
        if (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__b_mux_sel) {
            vlSymsp->__Vcoverage[3506].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__b_mux_sel)))) {
            vlSymsp->__Vcoverage[3507].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__b_mux_sel)))) {
        vlSymsp->__Vcoverage[3505].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__b_mux_sel) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_mux_sel))) {
        vlSymsp->__Vcoverage[3207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_mux_sel 
            = vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__b_mux_sel;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imul_istream_rdy_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imul_istream_rdy_D))) {
        vlSymsp->__Vcoverage[1544].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imul_istream_rdy_D 
            = vlSelf->top__DOT__DUT__DOT__imul_istream_rdy_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imul_ostream_val_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imul_ostream_val_X))) {
        vlSymsp->__Vcoverage[1545].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imul_ostream_val_X 
            = vlSelf->top__DOT__DUT__DOT__imul_ostream_val_X;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_imul_X 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__imul_ostream_val_X)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mul_X));
    if (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__add_mux_sel) {
        if (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__add_mux_sel) {
            vlSymsp->__Vcoverage[3523].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__add_mux_out 
                = vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out;
        } else {
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__add_mux_out = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__add_mux_sel)))) {
            vlSymsp->__Vcoverage[3524].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__add_mux_out 
            = vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__add_mux_sel)))) {
        vlSymsp->__Vcoverage[3522].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__add_mux_sel) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__add_mux_sel))) {
        vlSymsp->__Vcoverage[3211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__add_mux_sel 
            = vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__add_mux_sel;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__shamt) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__shamt)))) {
        vlSymsp->__Vcoverage[3244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__shamt 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__shamt)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__shamt)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__shamt) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__shamt)))) {
        vlSymsp->__Vcoverage[3245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__shamt 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__shamt)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__shamt)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__shamt) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__shamt)))) {
        vlSymsp->__Vcoverage[3246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__shamt 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__shamt)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__shamt)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__shamt) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__shamt)))) {
        vlSymsp->__Vcoverage[3247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__shamt 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__shamt)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__shamt)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__shamt) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__shamt)))) {
        vlSymsp->__Vcoverage[3248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__shamt 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__shamt)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__shamt)));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__r_shift_out 
        = (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
           >> (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__shamt));
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__l_shift_out 
        = (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
           << (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__shamt));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
               ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1569].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (1U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
               ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1570].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (2U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
               ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1571].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (4U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
               ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1572].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (8U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                  ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1573].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                  ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1574].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                  ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1575].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                  ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1576].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                   ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1577].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                   ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1578].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                   ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1579].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                   ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1580].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                    ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1581].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                    ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1582].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                    ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1583].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                    ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1584].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                     ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1585].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                     ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1586].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                     ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1587].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                     ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1588].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                      ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1589].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                      ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1590].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                      ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1591].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                      ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1592].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                       ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1593].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                       ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1594].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                       ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1595].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                       ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1596].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                        ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1597].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                        ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1598].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                        ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1599].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if (((vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
          ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1600].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
               ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1601].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (1U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
               ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1602].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (2U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
               ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1603].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (4U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
               ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1604].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (8U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                  ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1605].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                  ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1606].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                  ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                  ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1608].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                   ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1609].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                   ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1610].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                   ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1611].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                   ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1612].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                    ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1613].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                    ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1614].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                    ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1615].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                    ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1616].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                     ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1617].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                     ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                     ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1619].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                     ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1620].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                      ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1621].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                      ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1622].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                      ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1623].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                      ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1624].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                       ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1625].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                       ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1626].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                       ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                       ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                        ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                        ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                        ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if (((vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
          ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U] 
               ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]))) {
        vlSymsp->__Vcoverage[1633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U] 
            = ((0x1ffeU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]) 
               | (1U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U] 
               ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]))) {
        vlSymsp->__Vcoverage[1634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U] 
            = ((0x1ffdU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]) 
               | (2U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U] 
               ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]))) {
        vlSymsp->__Vcoverage[1635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U] 
            = ((0x1ffbU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]) 
               | (4U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U] 
               ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]))) {
        vlSymsp->__Vcoverage[1636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U] 
            = ((0x1ff7U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]) 
               | (8U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U] 
                  ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]))) {
        vlSymsp->__Vcoverage[1637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U] 
            = ((0x1fefU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U] 
                  ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]))) {
        vlSymsp->__Vcoverage[1638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U] 
            = ((0x1fdfU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U] 
                  ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]))) {
        vlSymsp->__Vcoverage[1639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U] 
            = ((0x1fbfU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U] 
                  ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]))) {
        vlSymsp->__Vcoverage[1640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U] 
            = ((0x1f7fU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U] 
                   ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]))) {
        vlSymsp->__Vcoverage[1641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U] 
            = ((0x1effU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U] 
                   ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]))) {
        vlSymsp->__Vcoverage[1642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U] 
            = ((0x1dffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U] 
                   ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]))) {
        vlSymsp->__Vcoverage[1643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U] 
            = ((0x1bffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U] 
                   ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]))) {
        vlSymsp->__Vcoverage[1644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U] 
            = ((0x17ffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U] 
                    ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]))) {
        vlSymsp->__Vcoverage[1645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U] 
            = ((0xfffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3445].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3446].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3452].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_W 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_W) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_W));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__br_cond_eq_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_cond_eq_X))) {
        vlSymsp->__Vcoverage[1546].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_cond_eq_X 
            = vlSelf->top__DOT__DUT__DOT__br_cond_eq_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__br_cond_lt_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_cond_lt_X))) {
        vlSymsp->__Vcoverage[1547].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_cond_lt_X 
            = vlSelf->top__DOT__DUT__DOT__br_cond_lt_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__br_cond_ltu_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_cond_ltu_X))) {
        vlSymsp->__Vcoverage[1548].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_cond_ltu_X 
            = vlSelf->top__DOT__DUT__DOT__br_cond_ltu_X;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_X = 0U;
    if (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) {
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_X 
            = (1U & ((4U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X))
                      ? ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X))
                          ? ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X) 
                             | (~ (IData)(vlSelf->top__DOT__DUT__DOT__br_cond_ltu_X)))
                          : ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X))
                              ? (~ (IData)(vlSelf->top__DOT__DUT__DOT__br_cond_lt_X))
                              : (IData)(vlSelf->top__DOT__DUT__DOT__br_cond_eq_X)))
                      : ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X))
                          ? ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X))
                              ? (IData)(vlSelf->top__DOT__DUT__DOT__br_cond_ltu_X)
                              : (IData)(vlSelf->top__DOT__DUT__DOT__br_cond_lt_X))
                          : ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X) 
                             & (~ (IData)(vlSelf->top__DOT__DUT__DOT__br_cond_eq_X))))));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1402].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1403].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1404].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1405].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1406].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
          ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
        = (IData)((QData)((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data)));
    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
        = ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
            << 2U) | (IData)(((QData)((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data)) 
                              >> 0x20U)));
    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U] 
        = ((((2U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X))
              ? 1U : 0U) << 0xaU) | (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                                     >> 0x1eU));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_addr))) {
        vlSymsp->__Vcoverage[1550].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_addr 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__enq_ptr))) {
        vlSymsp->__Vcoverage[1553].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__enq_ptr 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
    }
    if ((1U & (((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__enq_ptr_plus1)))) {
        vlSymsp->__Vcoverage[1563].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__enq_ptr_plus1 
            = (1U & ((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    }
    vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    if ((1U & (~ ((((((((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D) 
                        | (0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x1073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x40000033U == (0xfe00707fU 
                                       & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                   | (0x2000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x7033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))))) {
        if ((1U & (~ ((((((((0x6033U == (0xfe00707fU 
                                         & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                            | (0x4033U == (0xfe00707fU 
                                           & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                           | (0x2033U == (0xfe00707fU 
                                          & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                          | (0x3033U == (0xfe00707fU 
                                         & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                         | (0x40005033U == (0xfe00707fU 
                                            & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                        | (0x5033U == (0xfe00707fU 
                                       & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x1033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x13U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))))) {
            if (((((((((0x7013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                       | (0x6013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x4013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x2013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x3013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                   | (0x40005013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x5013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (0x1013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) {
                if ((0x7013U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    if ((0x6013U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        if ((0x4013U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            if ((0x2013U != (0x707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                if ((0x3013U != (0x707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                    if ((0x40005013U 
                                         != (0xfe00707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                        if ((0x5013U 
                                             != (0xfe00707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                            vlSymsp->__Vcoverage[2045].fetch_add(1, std::memory_order_relaxed);
                                            vlSymsp->__Vcoverage[2021].fetch_add(1, std::memory_order_relaxed);
                                        }
                                        if ((0x5013U 
                                             == (0xfe00707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                            vlSymsp->__Vcoverage[2021].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    }
                                    if ((0x40005013U 
                                         == (0xfe00707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                        vlSymsp->__Vcoverage[2021].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                                if ((0x3013U == (0x707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[2021].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((0x2013U == (0x707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[2021].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((0x4013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            vlSymsp->__Vcoverage[2021].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((0x6013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        vlSymsp->__Vcoverage[2039].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[2021].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((0x7013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    vlSymsp->__Vcoverage[2038].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[2021].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((1U & (~ ((((((((0x7013U == (0x707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                                | (0x6013U == (0x707fU 
                                               & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                               | (0x4013U == (0x707fU 
                                              & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                              | (0x2013U == (0x707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                             | (0x3013U == (0x707fU 
                                            & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                            | (0x40005013U == (0xfe00707fU 
                                               & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                           | (0x5013U == (0xfe00707fU 
                                          & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                          | (0x1013U == (0xfe00707fU 
                                         & vlSelf->top__DOT__DUT__DOT__inst_D)))))) {
                if (((((((((0x37U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                           | (0x17U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                          | (0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                         | (0x2023U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                        | (0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x63U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x4063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x6063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) {
                    if ((0x37U != (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        if ((0x17U != (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            if ((0x2003U != (0x707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                if ((0x2023U != (0x707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                    if ((0x1063U != 
                                         (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                        if ((0x63U 
                                             != (0x707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                            if ((0x4063U 
                                                 != 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                                vlSymsp->__Vcoverage[2021].fetch_add(1, std::memory_order_relaxed);
                                            }
                                            if ((0x4063U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                                vlSymsp->__Vcoverage[2021].fetch_add(1, std::memory_order_relaxed);
                                            }
                                        }
                                        if ((0x63U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                            vlSymsp->__Vcoverage[2021].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    }
                                    if ((0x1063U == 
                                         (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                        vlSymsp->__Vcoverage[2021].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                            }
                            if ((0x2003U == (0x707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[2021].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((0x17U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            vlSymsp->__Vcoverage[2021].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
            }
        }
        if (((((((((0x6033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                   | (0x4033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x2033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (0x3033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                | (0x40005033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (0x5033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
              | (0x1033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
             | (0x13U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) {
            if ((0x6033U != (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                if ((0x4033U != (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    if ((0x2033U != (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        if ((0x3033U != (0xfe00707fU 
                                         & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            if ((0x40005033U != (0xfe00707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                if ((0x5033U != (0xfe00707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                    if ((0x1033U != 
                                         (0xfe00707fU 
                                          & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                        vlSymsp->__Vcoverage[2037].fetch_add(1, std::memory_order_relaxed);
                                        vlSymsp->__Vcoverage[2021].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    if ((0x1033U == 
                                         (0xfe00707fU 
                                          & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                        vlSymsp->__Vcoverage[2036].fetch_add(1, std::memory_order_relaxed);
                                        vlSymsp->__Vcoverage[2021].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                                if ((0x5033U == (0xfe00707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[2035].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[2021].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((0x40005033U == (0xfe00707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[2034].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
        }
    }
}
