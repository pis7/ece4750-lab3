// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->top__DOT__idx = 0U;
    vlSymsp->__Vcoverage[495].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[3495].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[3496].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[3830].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[3831].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[3873].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[3874].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[3916].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[3917].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[3974].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[3975].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[4017].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[4018].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared = 0U;
    vlSymsp->__Vcoverage[6900].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[7285].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[7286].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[7395].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[7396].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[7438].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[7439].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[7481].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[7482].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[7508].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[7509].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[7837].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[7838].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[7882].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[7883].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[7925].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[7926].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[7983].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[7984].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[8010].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[8011].fetch_add(1, std::memory_order_relaxed);
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    if ((1U & vlSelf->top__DOT__src__DOT____Vtogcov__max_delay)) {
        vlSymsp->__Vcoverage[510].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__max_delay 
            = (0xfffffffeU & vlSelf->top__DOT__src__DOT____Vtogcov__max_delay);
    }
    if ((1U & (~ (vlSelf->top__DOT__src__DOT____Vtogcov__max_delay 
                  >> 2U)))) {
        vlSymsp->__Vcoverage[511].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__max_delay 
            = (4U | vlSelf->top__DOT__src__DOT____Vtogcov__max_delay);
    }
    vlSymsp->__Vcoverage[730].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[734].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[908].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[912].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1677].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1687].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1690].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1784].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1830].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1861].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1931].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1942].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1945].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1950].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1955].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[2035].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[2041].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[2878].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[2929].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3002].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3008].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3012].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3017].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3022].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3052].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3418].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3423].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3428].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3435].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3454].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3494].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3527].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3534].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[4131].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[4551].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[4740].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[4818].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[4825].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[4829].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[4833].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[4837].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[5103].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[5369].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[5373].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[5639].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[5905].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[5909].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[5913].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[5923].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[5927].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[6298].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[6302].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[6441].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[6445].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[6926].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[7131].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[7191].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[7647].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[7651].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[7790].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[7794].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[3501].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[3836].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[3879].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[3922].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[3980].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[4023].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[7291].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[7401].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[7444].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[7487].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[7514].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[7843].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[7888].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[7931].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[7989].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__mem__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__mem__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__mem__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[8016].fetch_add(1, std::memory_order_relaxed);
}

void Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
void Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();

VL_ATTR_COLD void Vtop___024root___eval_final__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final__TOP\n"); );
    // Body
    if (vlSelf->top__DOT__src_done) {
        Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        VL_WRITEF("     [ passed ] Finished gracefully\n");
        vlSymsp->__Vcoverage[504].fetch_add(1, std::memory_order_relaxed);
    } else {
        Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
        VL_WRITEF("     [ failed ] Simulation did not naturally stop\n");
        vlSymsp->__Vcoverage[505].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[506].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__sink__DOT__sink__DOT__t = vlSelf->top__DOT__sink__DOT__sink__DOT__index;
    while ((vlSelf->top__DOT__sink__DOT__sink__DOT__t 
            < (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max))) {
        Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
        VL_WRITEF("     [ FAILED ] expected = %x, actual = None\n",
                  32,((9U >= (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index))
                       ? vlSelf->top__DOT__sink__DOT__sink__DOT__m
                      [vlSelf->top__DOT__sink__DOT__sink__DOT__index]
                       : 0U));
        vlSymsp->__Vcoverage[1036].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT__t = 
            ((IData)(1U) + vlSelf->top__DOT__sink__DOT__sink__DOT__t);
    }
    vlSymsp->__Vcoverage[1037].fetch_add(1, std::memory_order_relaxed);
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
    vlSelf->__VstlTriggered.set(1U, ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__line_dirty) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__top__DOT__cache__DOT__dcache__DOT__line_dirty__0)));
    vlSelf->__VstlTriggered.set(2U, ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hb97078a9__0) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hb97078a9__0__0)));
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__cache__DOT__dcache__DOT__line_dirty__0 
        = vlSelf->top__DOT__cache__DOT__dcache__DOT__line_dirty;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hb97078a9__0__0 
        = vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hb97078a9__0;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.set(1U, 1U);
        vlSelf->__VstlTriggered.set(2U, 1U);
    }
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
    if ((1U & (~ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state)))) {
        vlSymsp->__Vcoverage[726].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[731].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) {
        if (vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) {
            vlSymsp->__Vcoverage[729].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[732].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state)))) {
            vlSymsp->__Vcoverage[733].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state)))) {
        vlSymsp->__Vcoverage[904].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[909].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state) {
        if (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state) {
            vlSymsp->__Vcoverage[907].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[910].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state)))) {
            vlSymsp->__Vcoverage[911].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__state) {
        vlSymsp->__Vcoverage[1686].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1689].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__state)))) {
        vlSymsp->__Vcoverage[1685].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1688].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)))) {
            vlSymsp->__Vcoverage[1782].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
            vlSymsp->__Vcoverage[1783].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
        vlSymsp->__Vcoverage[1781].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)))) {
            vlSymsp->__Vcoverage[1828].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
            vlSymsp->__Vcoverage[1829].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
        vlSymsp->__Vcoverage[1827].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((((((((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D) 
                        | (0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x40000033U == (0xfe00707fU 
                                          & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x2000033U == (0xfe00707fU 
                                        & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x7033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x6033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                   | (0x4033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x2033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))))) {
        if ((1U & (~ ((((((((0x3033U == (0xfe00707fU 
                                         & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                            | (0x40005033U == (0xfe00707fU 
                                               & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                           | (0x5033U == (0xfe00707fU 
                                          & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                          | (0x1033U == (0xfe00707fU 
                                         & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                         | (0x13U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                        | (0x7013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x6013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x4013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))))) {
            if (((((((((0x2013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                       | (0x3013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x40005013U == (0xfe00707fU 
                                         & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x5013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x1013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                   | (0x37U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x17U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (0x6fU == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) {
                if ((0x2013U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    if ((0x3013U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        if ((0x40005013U != (0xfe00707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            if ((0x5013U != (0xfe00707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                if ((0x1013U != (0xfe00707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                    if ((0x37U != (0x7fU 
                                                   & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                        if ((0x17U 
                                             != (0x7fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                            vlSymsp->__Vcoverage[1918].fetch_add(1, std::memory_order_relaxed);
                                            vlSymsp->__Vcoverage[1894].fetch_add(1, std::memory_order_relaxed);
                                        }
                                        if ((0x17U 
                                             == (0x7fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                            vlSymsp->__Vcoverage[1894].fetch_add(1, std::memory_order_relaxed);
                                            vlSymsp->__Vcoverage[1917].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    }
                                    if ((0x37U == (0x7fU 
                                                   & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                        vlSymsp->__Vcoverage[1894].fetch_add(1, std::memory_order_relaxed);
                                        vlSymsp->__Vcoverage[1916].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                                if ((0x1013U == (0xfe00707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[1894].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[1915].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((0x5013U == (0xfe00707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[1894].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[1914].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((0x40005013U == (0xfe00707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            vlSymsp->__Vcoverage[1894].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[1913].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((0x3013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        vlSymsp->__Vcoverage[1912].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[1894].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((0x2013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    vlSymsp->__Vcoverage[1911].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[1894].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((1U & (~ ((((((((0x2013U == (0x707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                                | (0x3013U == (0x707fU 
                                               & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                               | (0x40005013U == (0xfe00707fU 
                                                  & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                              | (0x5013U == (0xfe00707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                             | (0x1013U == (0xfe00707fU 
                                            & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                            | (0x37U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                           | (0x17U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                          | (0x6fU == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)))))) {
                if (((((((((0x67U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                           | (0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                          | (0x63U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                         | (0x4063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                        | (0x6063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x5063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x7063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) {
                    if ((0x67U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        if ((0x1063U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            if ((0x63U != (0x707fU 
                                           & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                if ((0x4063U != (0x707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                    if ((0x6063U != 
                                         (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                        if ((0x5063U 
                                             != (0x707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                            if ((0x7063U 
                                                 != 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                                vlSymsp->__Vcoverage[1894].fetch_add(1, std::memory_order_relaxed);
                                                vlSymsp->__Vcoverage[1926].fetch_add(1, std::memory_order_relaxed);
                                            }
                                            if ((0x7063U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                                vlSymsp->__Vcoverage[1894].fetch_add(1, std::memory_order_relaxed);
                                                vlSymsp->__Vcoverage[1925].fetch_add(1, std::memory_order_relaxed);
                                            }
                                        }
                                        if ((0x5063U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                            vlSymsp->__Vcoverage[1894].fetch_add(1, std::memory_order_relaxed);
                                            vlSymsp->__Vcoverage[1924].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    }
                                    if ((0x6063U == 
                                         (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                        vlSymsp->__Vcoverage[1894].fetch_add(1, std::memory_order_relaxed);
                                        vlSymsp->__Vcoverage[1923].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                                if ((0x4063U == (0x707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[1894].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[1922].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((0x63U == (0x707fU 
                                           & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[1894].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[1921].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            vlSymsp->__Vcoverage[1894].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[1920].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((0x67U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        vlSymsp->__Vcoverage[1894].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[1919].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((1U & (~ ((((((((0x67U == (0x707fU 
                                               & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                                    | (0x1063U == (0x707fU 
                                                   & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                   | (0x63U == (0x707fU 
                                                & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                  | (0x4063U == (0x707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                 | (0x6063U == (0x707fU 
                                                & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                | (0x5063U == (0x707fU 
                                               & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                               | (0x7063U == (0x707fU 
                                              & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                              | (0x2003U == (0x707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D)))))) {
                    if ((0x2023U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        if ((0x2073U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            if ((0x1073U == (0x707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[1894].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[1929].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((0x1073U != (0x707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[1930].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[1894].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            vlSymsp->__Vcoverage[1894].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[1928].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((0x2023U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        vlSymsp->__Vcoverage[1927].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[1894].fetch_add(1, std::memory_order_relaxed);
                    }
                }
            }
        }
        if (((((((((0x3033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                   | (0x40005033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x5033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (0x1033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                | (0x13U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (0x7013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
              | (0x6013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
             | (0x4013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) {
            if ((0x3033U != (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                if ((0x40005033U != (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    if ((0x5033U != (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        if ((0x1033U != (0xfe00707fU 
                                         & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            if ((0x13U != (0x707fU 
                                           & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                if ((0x7013U != (0x707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                    if ((0x6013U != 
                                         (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                        vlSymsp->__Vcoverage[1910].fetch_add(1, std::memory_order_relaxed);
                                        vlSymsp->__Vcoverage[1894].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    if ((0x6013U == 
                                         (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                        vlSymsp->__Vcoverage[1909].fetch_add(1, std::memory_order_relaxed);
                                        vlSymsp->__Vcoverage[1894].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                                if ((0x7013U == (0x707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[1908].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[1894].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((0x13U == (0x707fU 
                                           & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[1907].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[1894].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((0x1033U == (0xfe00707fU 
                                         & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            vlSymsp->__Vcoverage[1906].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[1894].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((0x5033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        vlSymsp->__Vcoverage[1905].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[1894].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((0x40005033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    vlSymsp->__Vcoverage[1894].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[1904].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((0x3033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSymsp->__Vcoverage[1903].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[1894].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if (((((((((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D) 
               | (0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
              | (0x40000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
             | (0x2000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
            | (0x7033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
           | (0x6033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
          | (0x4033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
         | (0x2033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) {
        if ((0x13U != vlSelf->top__DOT__DUT__DOT__inst_D)) {
            if ((0x33U != (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                if ((0x40000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    vlSymsp->__Vcoverage[1897].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[1894].fetch_add(1, std::memory_order_relaxed);
                }
                if ((0x40000033U != (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    if ((0x2000033U != (0xfe00707fU 
                                        & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        if ((0x7033U != (0xfe00707fU 
                                         & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            if ((0x6033U == (0xfe00707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[1894].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[1900].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((0x6033U != (0xfe00707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                if ((0x4033U == (0xfe00707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[1894].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[1901].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((0x4033U != (0xfe00707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[1894].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[1902].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                        }
                        if ((0x7033U == (0xfe00707fU 
                                         & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            vlSymsp->__Vcoverage[1894].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[1899].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((0x2000033U == (0xfe00707fU 
                                        & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        vlSymsp->__Vcoverage[1898].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[1894].fetch_add(1, std::memory_order_relaxed);
                    }
                }
            }
            if ((0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSymsp->__Vcoverage[1894].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[1896].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D)) {
            vlSymsp->__Vcoverage[1894].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[1895].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X))) {
        vlSymsp->__Vcoverage[2040].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U != (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X))) {
        if ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X))) {
            vlSymsp->__Vcoverage[2038].fetch_add(1, std::memory_order_relaxed);
        }
        if ((2U != (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X))) {
            vlSymsp->__Vcoverage[2039].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                    vlSymsp->__Vcoverage[3040].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)))) {
                    vlSymsp->__Vcoverage[3039].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)))) {
                    vlSymsp->__Vcoverage[3041].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                    vlSymsp->__Vcoverage[3042].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
        if ((4U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
            if ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                    vlSymsp->__Vcoverage[3046].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)))) {
                    vlSymsp->__Vcoverage[3045].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                    vlSymsp->__Vcoverage[3044].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)))) {
                    vlSymsp->__Vcoverage[3043].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    if ((8U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)))) {
                    vlSymsp->__Vcoverage[3047].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                    vlSymsp->__Vcoverage[3048].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                    vlSymsp->__Vcoverage[3049].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)))) {
                    vlSymsp->__Vcoverage[3051].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
        if ((4U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
            if ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                vlSymsp->__Vcoverage[3051].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                    vlSymsp->__Vcoverage[3051].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)))) {
                    vlSymsp->__Vcoverage[3050].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    if ((0U != (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__state))) {
            if ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__state))) {
                vlSymsp->__Vcoverage[3453].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[3493].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[3441].fetch_add(1, std::memory_order_relaxed);
            }
            if ((2U != (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__state))) {
                vlSymsp->__Vcoverage[3441].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__state))) {
            vlSymsp->__Vcoverage[3450].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[3492].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[3441].fetch_add(1, std::memory_order_relaxed);
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
                                                                                vlSymsp->__Vcoverage[3468].fetch_add(1, std::memory_order_relaxed);
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
                                                                                vlSymsp->__Vcoverage[3464].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x400000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                                vlSymsp->__Vcoverage[3466].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x80000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                                vlSymsp->__Vcoverage[3469].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x40000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                                vlSymsp->__Vcoverage[3470].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                            }
                                                                            if (
                                                                                (0x20000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                                vlSymsp->__Vcoverage[3471].fetch_add(1, std::memory_order_relaxed);
                                                                            }
                                                                        }
                                                                        if (
                                                                            (0x10000U 
                                                                             & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                            vlSymsp->__Vcoverage[3472].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                    if (
                                                                        (0x8000U 
                                                                         & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                        vlSymsp->__Vcoverage[3473].fetch_add(1, std::memory_order_relaxed);
                                                                    }
                                                                }
                                                                if (
                                                                    (0x4000U 
                                                                     & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                    vlSymsp->__Vcoverage[3474].fetch_add(1, std::memory_order_relaxed);
                                                                }
                                                            }
                                                            if (
                                                                (0x2000U 
                                                                 & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                vlSymsp->__Vcoverage[3475].fetch_add(1, std::memory_order_relaxed);
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
                    }
                }
            }
        }
    }
    if ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__state))) {
        vlSymsp->__Vcoverage[3447].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3455].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3441].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0U != (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X))) {
        if ((1U != (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X))) {
            if ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X))) {
                vlSymsp->__Vcoverage[3525].fetch_add(1, std::memory_order_relaxed);
            }
            if ((2U != (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X))) {
                vlSymsp->__Vcoverage[3526].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X))) {
            vlSymsp->__Vcoverage[3524].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X))) {
        vlSymsp->__Vcoverage[3523].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__DUT__DOT__wb_result_sel_M) {
        if (vlSelf->top__DOT__DUT__DOT__wb_result_sel_M) {
            vlSymsp->__Vcoverage[3532].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__wb_result_sel_M)))) {
            vlSymsp->__Vcoverage[3533].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__wb_result_sel_M)))) {
        vlSymsp->__Vcoverage[3531].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state))) {
            if ((1U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state))) {
                vlSymsp->__Vcoverage[4116].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[4075].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state)))) {
                vlSymsp->__Vcoverage[4075].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[4113].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state)))) {
                vlSymsp->__Vcoverage[4075].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[4100].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state))) {
                vlSymsp->__Vcoverage[4075].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[4110].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
        vlSymsp->__Vcoverage[4096].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__reset) {
        vlSymsp->__Vcoverage[4095].fetch_add(1, std::memory_order_relaxed);
    }
    if ((4U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state)))) {
                vlSymsp->__Vcoverage[4124].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[4075].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state))) {
                vlSymsp->__Vcoverage[4129].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((2U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state))) {
            vlSymsp->__Vcoverage[4075].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[4130].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (vlSelf->top__DOT__flush) {
        vlSymsp->__Vcoverage[4739].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__flush)))) {
        vlSymsp->__Vcoverage[4738].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1))) {
        if ((1U & (~ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1 
                      >> 1U)))) {
            if ((1U & (~ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1 
                          >> 2U)))) {
                if ((1U & (~ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1 
                                  >> 4U)))) {
                        if ((1U & (~ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1 
                                      >> 5U)))) {
                            if ((1U & (~ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1 
                                          >> 6U)))) {
                                if ((1U & (~ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1 
                                              >> 7U)))) {
                                    if ((0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1)) {
                                        vlSymsp->__Vcoverage[4809].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    if ((1U & (~ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1 
                                                  >> 8U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1 
                                                    >> 9U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1 
                                                     >> 0xaU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1 
                                                         >> 0xbU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1 
                                                             >> 0xcU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1 
                                                                 >> 0xdU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1 
                                                                     >> 0xeU)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1 
                                                                         >> 0xfU)))) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1 
                                                                             >> 0x10U)))) {
                                                                        if (
                                                                            (0x20000U 
                                                                             & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1)) {
                                                                            vlSymsp->__Vcoverage[4800].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1 
                                                                                >> 0x11U)))) {
                                                                            if (
                                                                                (0x40000U 
                                                                                & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1)) {
                                                                                vlSymsp->__Vcoverage[4799].fetch_add(1, std::memory_order_relaxed);
                                                                            }
                                                                            if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1 
                                                                                >> 0x12U)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1 
                                                                                >> 0x13U)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1 
                                                                                >> 0x14U)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1 
                                                                                >> 0x15U)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1 
                                                                                >> 0x16U)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1 
                                                                                >> 0x17U)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1 
                                                                                >> 0x18U)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1 
                                                                                >> 0x19U)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1 
                                                                                >> 0x1aU)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1 
                                                                                >> 0x1bU)))) {
                                                                                if (
                                                                                (0x10000000U 
                                                                                & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1)) {
                                                                                vlSymsp->__Vcoverage[4789].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1 
                                                                                >> 0x1cU)))) {
                                                                                if (
                                                                                (0x20000000U 
                                                                                & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1)) {
                                                                                vlSymsp->__Vcoverage[4788].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1 
                                                                                >> 0x1dU)))) {
                                                                                if (
                                                                                (0x40000000U 
                                                                                & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1)) {
                                                                                vlSymsp->__Vcoverage[4787].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1 
                                                                                >> 0x1eU)))) {
                                                                                if (
                                                                                (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1 
                                                                                >> 0x1fU)) {
                                                                                vlSymsp->__Vcoverage[4785].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1 
                                                                                >> 0x1fU)))) {
                                                                                vlSymsp->__Vcoverage[4786].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x8000000U 
                                                                                & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1)) {
                                                                                vlSymsp->__Vcoverage[4790].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x4000000U 
                                                                                & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1)) {
                                                                                vlSymsp->__Vcoverage[4791].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x2000000U 
                                                                                & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1)) {
                                                                                vlSymsp->__Vcoverage[4792].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x1000000U 
                                                                                & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1)) {
                                                                                vlSymsp->__Vcoverage[4793].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x800000U 
                                                                                & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1)) {
                                                                                vlSymsp->__Vcoverage[4794].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x400000U 
                                                                                & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1)) {
                                                                                vlSymsp->__Vcoverage[4795].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x200000U 
                                                                                & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1)) {
                                                                                vlSymsp->__Vcoverage[4796].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x100000U 
                                                                                & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1)) {
                                                                                vlSymsp->__Vcoverage[4797].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x80000U 
                                                                                & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1)) {
                                                                                vlSymsp->__Vcoverage[4798].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                    if (
                                                                        (0x10000U 
                                                                         & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1)) {
                                                                        vlSymsp->__Vcoverage[4801].fetch_add(1, std::memory_order_relaxed);
                                                                    }
                                                                }
                                                                if (
                                                                    (0x8000U 
                                                                     & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1)) {
                                                                    vlSymsp->__Vcoverage[4802].fetch_add(1, std::memory_order_relaxed);
                                                                }
                                                            }
                                                            if (
                                                                (0x4000U 
                                                                 & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1)) {
                                                                vlSymsp->__Vcoverage[4803].fetch_add(1, std::memory_order_relaxed);
                                                            }
                                                        }
                                                        if (
                                                            (0x2000U 
                                                             & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1)) {
                                                            vlSymsp->__Vcoverage[4804].fetch_add(1, std::memory_order_relaxed);
                                                        }
                                                    }
                                                    if (
                                                        (0x1000U 
                                                         & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1)) {
                                                        vlSymsp->__Vcoverage[4805].fetch_add(1, std::memory_order_relaxed);
                                                    }
                                                }
                                                if (
                                                    (0x800U 
                                                     & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1)) {
                                                    vlSymsp->__Vcoverage[4806].fetch_add(1, std::memory_order_relaxed);
                                                }
                                            }
                                            if ((0x400U 
                                                 & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1)) {
                                                vlSymsp->__Vcoverage[4807].fetch_add(1, std::memory_order_relaxed);
                                            }
                                        }
                                        if ((0x200U 
                                             & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1)) {
                                            vlSymsp->__Vcoverage[4808].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    }
                                }
                                if ((0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1)) {
                                    vlSymsp->__Vcoverage[4810].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1)) {
                                vlSymsp->__Vcoverage[4811].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1)) {
                            vlSymsp->__Vcoverage[4812].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1)) {
                        vlSymsp->__Vcoverage[4813].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1)) {
                    vlSymsp->__Vcoverage[4814].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1)) {
                vlSymsp->__Vcoverage[4815].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1)) {
            vlSymsp->__Vcoverage[4816].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1)) {
        vlSymsp->__Vcoverage[4817].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0))) {
        if ((1U & (~ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                      >> 1U)))) {
            if ((1U & (~ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                          >> 2U)))) {
                if ((1U & (~ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                                  >> 4U)))) {
                        if ((1U & (~ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                                      >> 5U)))) {
                            if ((1U & (~ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                                          >> 6U)))) {
                                if ((1U & (~ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                                                  >> 8U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                                                    >> 9U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                                                     >> 0xaU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                                                         >> 0xbU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                                                             >> 0xcU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                                                                 >> 0xdU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                                                                     >> 0xeU)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                                                                         >> 0xfU)))) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                                                                             >> 0x10U)))) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                                                                                >> 0x11U)))) {
                                                                            if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                                                                                >> 0x12U)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                                                                                >> 0x13U)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                                                                                >> 0x14U)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                                                                                >> 0x15U)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                                                                                >> 0x16U)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                                                                                >> 0x17U)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                                                                                >> 0x18U)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                                                                                >> 0x19U)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                                                                                >> 0x1aU)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                                                                                >> 0x1bU)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                                                                                >> 0x1cU)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                                                                                >> 0x1dU)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                                                                                >> 0x1eU)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                                                                                >> 0x1fU)))) {
                                                                                vlSymsp->__Vcoverage[4753].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                if (
                                                                                (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                                                                                >> 0x1fU)) {
                                                                                vlSymsp->__Vcoverage[4752].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x40000000U 
                                                                                & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0)) {
                                                                                vlSymsp->__Vcoverage[4754].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x20000000U 
                                                                                & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0)) {
                                                                                vlSymsp->__Vcoverage[4755].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x10000000U 
                                                                                & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0)) {
                                                                                vlSymsp->__Vcoverage[4756].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x8000000U 
                                                                                & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0)) {
                                                                                vlSymsp->__Vcoverage[4757].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x4000000U 
                                                                                & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0)) {
                                                                                vlSymsp->__Vcoverage[4758].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x2000000U 
                                                                                & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0)) {
                                                                                vlSymsp->__Vcoverage[4759].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x1000000U 
                                                                                & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0)) {
                                                                                vlSymsp->__Vcoverage[4760].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x800000U 
                                                                                & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0)) {
                                                                                vlSymsp->__Vcoverage[4761].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x400000U 
                                                                                & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0)) {
                                                                                vlSymsp->__Vcoverage[4762].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x200000U 
                                                                                & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0)) {
                                                                                vlSymsp->__Vcoverage[4763].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x100000U 
                                                                                & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0)) {
                                                                                vlSymsp->__Vcoverage[4764].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (0x80000U 
                                                                                & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0)) {
                                                                                vlSymsp->__Vcoverage[4765].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                            }
                                                                            if (
                                                                                (0x40000U 
                                                                                & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0)) {
                                                                                vlSymsp->__Vcoverage[4766].fetch_add(1, std::memory_order_relaxed);
                                                                            }
                                                                        }
                                                                        if (
                                                                            (0x20000U 
                                                                             & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0)) {
                                                                            vlSymsp->__Vcoverage[4767].fetch_add(1, std::memory_order_relaxed);
                                                                        }
                                                                    }
                                                                    if (
                                                                        (0x10000U 
                                                                         & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0)) {
                                                                        vlSymsp->__Vcoverage[4768].fetch_add(1, std::memory_order_relaxed);
                                                                    }
                                                                }
                                                                if (
                                                                    (0x8000U 
                                                                     & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0)) {
                                                                    vlSymsp->__Vcoverage[4769].fetch_add(1, std::memory_order_relaxed);
                                                                }
                                                            }
                                                            if (
                                                                (0x4000U 
                                                                 & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0)) {
                                                                vlSymsp->__Vcoverage[4770].fetch_add(1, std::memory_order_relaxed);
                                                            }
                                                        }
                                                        if (
                                                            (0x2000U 
                                                             & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0)) {
                                                            vlSymsp->__Vcoverage[4771].fetch_add(1, std::memory_order_relaxed);
                                                        }
                                                    }
                                                    if (
                                                        (0x1000U 
                                                         & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0)) {
                                                        vlSymsp->__Vcoverage[4772].fetch_add(1, std::memory_order_relaxed);
                                                    }
                                                }
                                                if (
                                                    (0x800U 
                                                     & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0)) {
                                                    vlSymsp->__Vcoverage[4773].fetch_add(1, std::memory_order_relaxed);
                                                }
                                            }
                                            if ((0x400U 
                                                 & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0)) {
                                                vlSymsp->__Vcoverage[4774].fetch_add(1, std::memory_order_relaxed);
                                            }
                                        }
                                        if ((0x200U 
                                             & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0)) {
                                            vlSymsp->__Vcoverage[4775].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    }
                                    if ((0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0)) {
                                        vlSymsp->__Vcoverage[4776].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                                if ((0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0)) {
                                    vlSymsp->__Vcoverage[4777].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0)) {
                                vlSymsp->__Vcoverage[4778].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0)) {
                            vlSymsp->__Vcoverage[4779].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0)) {
                        vlSymsp->__Vcoverage[4780].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0)) {
                    vlSymsp->__Vcoverage[4781].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0)) {
                vlSymsp->__Vcoverage[4782].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0)) {
            vlSymsp->__Vcoverage[4783].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0)) {
        vlSymsp->__Vcoverage[4784].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0U == vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0)) {
        if ((0U == vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0)) {
            vlSymsp->__Vcoverage[5925].fetch_add(1, std::memory_order_relaxed);
        }
        if ((0U != vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0)) {
            vlSymsp->__Vcoverage[5926].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((0U != vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0)) {
        vlSymsp->__Vcoverage[5924].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state)))) {
        vlSymsp->__Vcoverage[6294].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[6299].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state) {
        if (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state) {
            vlSymsp->__Vcoverage[6297].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[6300].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state)))) {
            vlSymsp->__Vcoverage[6301].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state)))) {
        vlSymsp->__Vcoverage[6437].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[6442].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state) {
        if (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state) {
            vlSymsp->__Vcoverage[6440].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[6443].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state)))) {
            vlSymsp->__Vcoverage[6444].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (vlSelf->top__DOT__mem_clear) {
        vlSymsp->__Vcoverage[6925].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)))) {
            vlSymsp->__Vcoverage[7129].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
            vlSymsp->__Vcoverage[7130].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
        vlSymsp->__Vcoverage[7128].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)))) {
            vlSymsp->__Vcoverage[7189].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
            vlSymsp->__Vcoverage[7190].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
        vlSymsp->__Vcoverage[7188].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state)))) {
        vlSymsp->__Vcoverage[7643].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[7648].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state) {
        if (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state) {
            vlSymsp->__Vcoverage[7646].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[7649].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state)))) {
            vlSymsp->__Vcoverage[7650].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state)))) {
        vlSymsp->__Vcoverage[7786].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[7791].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state) {
        if (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state) {
            vlSymsp->__Vcoverage[7789].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[7792].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state)))) {
            vlSymsp->__Vcoverage[7793].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                  & (1U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                      & (2U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))))) {
            if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                 & (3U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))) {
                vlSymsp->__Vcoverage[2032].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                          & (3U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))))) {
                if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                     & (4U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))) {
                    vlSymsp->__Vcoverage[2031].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                              & (4U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))))) {
                    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                         & (5U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))) {
                        vlSymsp->__Vcoverage[2030].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                                  & (5U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))))) {
                        if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                             & (6U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))) {
                            vlSymsp->__Vcoverage[2029].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
            }
        }
        if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
             & (2U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))) {
            vlSymsp->__Vcoverage[2033].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
         & (1U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))) {
        vlSymsp->__Vcoverage[2034].fetch_add(1, std::memory_order_relaxed);
    }
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__1\n"); );
    // Body
    if ((0U != (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__state))) {
        if ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__state))) {
            if ((1U & (~ (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                          >> 1U)))) {
                if ((4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                    vlSymsp->__Vcoverage[3486].fetch_add(1, std::memory_order_relaxed);
                }
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
                                                            (0x1000U 
                                                             & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                            vlSymsp->__Vcoverage[3476].fetch_add(1, std::memory_order_relaxed);
                                                        }
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
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                                >> 0x14U)))) {
                                                                                if (
                                                                                (0x200000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                                vlSymsp->__Vcoverage[3467].fetch_add(1, std::memory_order_relaxed);
                                                                                }
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
                                                                                (0x800000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                                vlSymsp->__Vcoverage[3465].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                                >> 0x17U)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                                >> 0x18U)))) {
                                                                                if (
                                                                                (0x2000000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                                vlSymsp->__Vcoverage[3463].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                                >> 0x19U)))) {
                                                                                if (
                                                                                (0x4000000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                                vlSymsp->__Vcoverage[3462].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                                >> 0x1aU)))) {
                                                                                if (
                                                                                (0x8000000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                                vlSymsp->__Vcoverage[3461].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                                >> 0x1bU)))) {
                                                                                if (
                                                                                (0x10000000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                                vlSymsp->__Vcoverage[3460].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                                >> 0x1cU)))) {
                                                                                if (
                                                                                (0x20000000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                                vlSymsp->__Vcoverage[3459].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                                >> 0x1dU)))) {
                                                                                if (
                                                                                (0x40000000U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                                                vlSymsp->__Vcoverage[3458].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                                >> 0x1eU)))) {
                                                                                if (
                                                                                (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                                >> 0x1fU)) {
                                                                                vlSymsp->__Vcoverage[3456].fetch_add(1, std::memory_order_relaxed);
                                                                                }
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                                                                                >> 0x1fU)))) {
                                                                                vlSymsp->__Vcoverage[3457].fetch_add(1, std::memory_order_relaxed);
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
                                                    }
                                                    if (
                                                        (0x800U 
                                                         & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                        vlSymsp->__Vcoverage[3477].fetch_add(1, std::memory_order_relaxed);
                                                    }
                                                }
                                                if (
                                                    (0x400U 
                                                     & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                    vlSymsp->__Vcoverage[3478].fetch_add(1, std::memory_order_relaxed);
                                                }
                                            }
                                            if ((0x200U 
                                                 & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                                vlSymsp->__Vcoverage[3479].fetch_add(1, std::memory_order_relaxed);
                                            }
                                        }
                                        if ((0x100U 
                                             & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                            vlSymsp->__Vcoverage[3480].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    }
                                    if ((0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                        vlSymsp->__Vcoverage[3481].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                                if ((0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                    vlSymsp->__Vcoverage[3482].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                                vlSymsp->__Vcoverage[3483].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                            vlSymsp->__Vcoverage[3484].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                        vlSymsp->__Vcoverage[3485].fetch_add(1, std::memory_order_relaxed);
                    }
                }
            }
            if ((2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                vlSymsp->__Vcoverage[3487].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                vlSymsp->__Vcoverage[3491].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out))) {
                if ((0U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                    vlSymsp->__Vcoverage[3488].fetch_add(1, std::memory_order_relaxed);
                }
                if ((0U != vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                    vlSymsp->__Vcoverage[3489].fetch_add(1, std::memory_order_relaxed);
                }
                vlSymsp->__Vcoverage[3490].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state))) {
                if (vlSelf->top__DOT__flush) {
                    vlSymsp->__Vcoverage[4109].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state)))) {
                if (vlSelf->top__DOT__flush) {
                    vlSymsp->__Vcoverage[4099].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    if (vlSelf->top__DOT__mem_clear) {
        if (vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared) {
            vlSymsp->__Vcoverage[6903].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared)))) {
            vlSymsp->__Vcoverage[6902].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem_clear)))) {
        if (vlSelf->top__DOT__reset) {
            vlSymsp->__Vcoverage[6924].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
            if (vlSelf->top__DOT__reset) {
                vlSymsp->__Vcoverage[6923].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
                vlSymsp->__Vcoverage[6922].fetch_add(1, std::memory_order_relaxed);
            }
        }
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
    if (((0U != vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__stats_en))) {
        vlSymsp->__Vcoverage[488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__stats_en = (0U 
                                                 != vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W);
    }
    if (((IData)(vlSelf->top__DOT__src_done) ^ (IData)(vlSelf->top__DOT____Vtogcov__src_done))) {
        vlSymsp->__Vcoverage[489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__src_done = vlSelf->top__DOT__src_done;
    }
    if (((IData)(vlSelf->top__DOT__mem_clear) ^ (IData)(vlSelf->top__DOT____Vtogcov__mem_clear))) {
        vlSymsp->__Vcoverage[491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mem_clear = vlSelf->top__DOT__mem_clear;
    }
    if (((IData)(vlSelf->top__DOT__flush) ^ (IData)(vlSelf->top__DOT____Vtogcov__flush))) {
        vlSymsp->__Vcoverage[492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__flush = vlSelf->top__DOT__flush;
    }
    if (((IData)(vlSelf->top__DOT__cpu_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__cpu_en))) {
        vlSymsp->__Vcoverage[494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cpu_en = vlSelf->top__DOT__cpu_en;
    }
    if (((IData)(vlSelf->top__DOT__src__DOT__src__DOT__reset_reg) 
         ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__reset_reg))) {
        vlSymsp->__Vcoverage[560].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__reset_reg 
            = vlSelf->top__DOT__src__DOT__src__DOT__reset_reg;
    }
    if (((IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) 
         ^ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__state))) {
        vlSymsp->__Vcoverage[720].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__state 
            = vlSelf->top__DOT__src__DOT__msg_delay__DOT__state;
    }
    if (((IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__state))) {
        vlSymsp->__Vcoverage[898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__state 
            = vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state;
    }
    if (((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__done_next) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__done_next))) {
        vlSymsp->__Vcoverage[989].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__done_next 
            = vlSelf->top__DOT__sink__DOT__sink__DOT__done_next;
    }
    if (((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__failed) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__failed))) {
        vlSymsp->__Vcoverage[991].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__failed 
            = vlSelf->top__DOT__sink__DOT__sink__DOT__failed;
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_rdy)))) {
        vlSymsp->__Vcoverage[1133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_rdy 
            = (1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_queue_num_free_entries)))) {
        vlSymsp->__Vcoverage[1169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_queue_num_free_entries 
            = (1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_queue_num_free_entries)))) {
        vlSymsp->__Vcoverage[1313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_queue_num_free_entries 
            = (1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__wb_result_sel_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_sel_M))) {
        vlSymsp->__Vcoverage[1375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_sel_M 
            = vlSelf->top__DOT__DUT__DOT__wb_result_sel_M;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__mem_action_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_action_M))) {
        vlSymsp->__Vcoverage[1376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_action_M 
            = vlSelf->top__DOT__DUT__DOT__mem_action_M;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_addr))) {
        vlSymsp->__Vcoverage[1421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_addr 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__read_addr))) {
        vlSymsp->__Vcoverage[1422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__read_addr 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__enq_ptr))) {
        vlSymsp->__Vcoverage[1424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__enq_ptr 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__deq_ptr))) {
        vlSymsp->__Vcoverage[1426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__deq_ptr 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full))) {
        vlSymsp->__Vcoverage[1428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full;
    }
    if ((1U & (((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__deq_ptr_plus1)))) {
        vlSymsp->__Vcoverage[1433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__deq_ptr_plus1 
            = (1U & ((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)));
    }
    if ((1U & (((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__enq_ptr_plus1)))) {
        vlSymsp->__Vcoverage[1434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__enq_ptr_plus1 
            = (1U & ((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__state) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT____Vtogcov__state))) {
        vlSymsp->__Vcoverage[1678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT____Vtogcov__state 
            = vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__state;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full))) {
        vlSymsp->__Vcoverage[1695].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full 
            = vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full))) {
        vlSymsp->__Vcoverage[1786].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full;
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                  & (1U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                      & (2U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                          & (3U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                              & (4U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))))) {
                    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                                  & (5U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))))) {
                        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                                      & (6U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))))) {
                            if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                                          & (2U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__j_type_X)))))) {
                                vlSymsp->__Vcoverage[2028].fetch_add(1, std::memory_order_relaxed);
                            }
                            if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                                 & (2U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__j_type_X)))) {
                                vlSymsp->__Vcoverage[2027].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_F))) {
        vlSymsp->__Vcoverage[1831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_F 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_F;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_D))) {
        vlSymsp->__Vcoverage[1832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_X))) {
        vlSymsp->__Vcoverage[1833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_M))) {
        vlSymsp->__Vcoverage[1834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_M 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_M;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_W))) {
        vlSymsp->__Vcoverage[1835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_W 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_W;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F_imem) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__squash_F_imem))) {
        vlSymsp->__Vcoverage[1863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__squash_F_imem 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F_imem;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__wb_result_sel_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__wb_result_sel_X))) {
        vlSymsp->__Vcoverage[2008].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__wb_result_sel_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__wb_result_sel_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_wen_X))) {
        vlSymsp->__Vcoverage[2009].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_wen_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__proc2mngr_val_X))) {
        vlSymsp->__Vcoverage[2015].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__proc2mngr_val_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stats_en_wen_X))) {
        vlSymsp->__Vcoverage[2016].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stats_en_wen_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mul_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__mul_X))) {
        vlSymsp->__Vcoverage[2020].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__mul_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mul_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_wen_M))) {
        vlSymsp->__Vcoverage[2077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_wen_M 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_M;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__proc2mngr_val_M))) {
        vlSymsp->__Vcoverage[2083].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__proc2mngr_val_M 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_M;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stats_en_wen_M))) {
        vlSymsp->__Vcoverage[2084].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stats_en_wen_M 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_M;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__proc2mngr_val_W))) {
        vlSymsp->__Vcoverage[2122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__proc2mngr_val_W 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_W;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_pending_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_wen_pending_W))) {
        vlSymsp->__Vcoverage[2123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_wen_pending_W 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_pending_W;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_pending_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stats_en_wen_pending_W))) {
        vlSymsp->__Vcoverage[2124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stats_en_wen_pending_W 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_pending_W;
    }
    if ((1U & ((IData)((1ULL & ((4ULL + (QData)((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X))) 
                                >> 0x20U))) ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_incr_X__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[3522].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_incr_X__DOT____Vtogcov__cout 
            = (1U & (IData)((1ULL & ((4ULL + (QData)((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X))) 
                                     >> 0x20U))));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[2U] 
                >> 0xaU) ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT____Vtogcov__incoming_mem_type)))) {
        vlSymsp->__Vcoverage[4052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT____Vtogcov__incoming_mem_type 
            = (1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[2U] 
                     >> 0xaU));
    }
    if (((0x10U == (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_word)) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT____Vtogcov__req_count_done))) {
        vlSymsp->__Vcoverage[4053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT____Vtogcov__req_count_done 
            = (0x10U == (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_word));
    }
    if (((0x10U == (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__resp_word)) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT____Vtogcov__resp_count_done))) {
        vlSymsp->__Vcoverage[4054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT____Vtogcov__resp_count_done 
            = (0x10U == (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__resp_word));
    }
    if (((0U == vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT____Vtogcov__flush_way_sel))) {
        vlSymsp->__Vcoverage[4055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT____Vtogcov__flush_way_sel 
            = (0U == vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0);
    }
    if (((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__lru) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT____Vtogcov__lru))) {
        vlSymsp->__Vcoverage[4086].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT____Vtogcov__lru 
            = vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__lru;
    }
    if (((0U == vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__all1_flushed))) {
        vlSymsp->__Vcoverage[4741].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__all1_flushed 
            = (0U == vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1);
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__state))) {
        vlSymsp->__Vcoverage[6288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__state 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__state))) {
        vlSymsp->__Vcoverage[6431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__state 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_val_M))) {
        vlSymsp->__Vcoverage[6472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_val_M 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full;
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_rdy_M)))) {
        vlSymsp->__Vcoverage[6473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_rdy_M 
            = (1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_val_M))) {
        vlSymsp->__Vcoverage[6551].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_val_M 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full;
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_rdy_M)))) {
        vlSymsp->__Vcoverage[6552].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_rdy_M 
            = (1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memory_cleared))) {
        vlSymsp->__Vcoverage[6899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memory_cleared 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared;
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT____Vtogcov__num_free_entries)))) {
        vlSymsp->__Vcoverage[7054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT____Vtogcov__num_free_entries 
            = (1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT____Vtogcov__num_free_entries)))) {
        vlSymsp->__Vcoverage[7063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT____Vtogcov__num_free_entries 
            = (1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full))) {
        vlSymsp->__Vcoverage[7073].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full))) {
        vlSymsp->__Vcoverage[7133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__state))) {
        vlSymsp->__Vcoverage[7637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__state 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__state))) {
        vlSymsp->__Vcoverage[7780].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__state 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state;
    }
    vlSelf->top__DOT__src__DOT__src__DOT__index_next 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)));
    vlSelf->top__DOT__sink__DOT__sink__DOT__index_next 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)));
    vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_inc_out 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_word)));
    vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__resp_inc_out 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__resp_word)));
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_X)))) {
        vlSymsp->__Vcoverage[1372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_X 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_X)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_X)))) {
        vlSymsp->__Vcoverage[1373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_X 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_X)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_X)))) {
        vlSymsp->__Vcoverage[2006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_X 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_X)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_X)))) {
        vlSymsp->__Vcoverage[2007].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_X 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_X)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__j_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__j_type_X)))) {
        vlSymsp->__Vcoverage[2021].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__j_type_X 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__j_type_X)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__j_type_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__j_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__j_type_X)))) {
        vlSymsp->__Vcoverage[2022].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__j_type_X 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__j_type_X)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__j_type_X)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_M)))) {
        vlSymsp->__Vcoverage[2075].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_M 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_M)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_M)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_M)))) {
        vlSymsp->__Vcoverage[2076].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_M 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_M)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_M)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__state) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT____Vtogcov__state)))) {
        vlSymsp->__Vcoverage[3436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT____Vtogcov__state 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT____Vtogcov__state)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__state)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__state) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT____Vtogcov__state)))) {
        vlSymsp->__Vcoverage[3437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT____Vtogcov__state 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT____Vtogcov__state)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__state)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset)))) {
        vlSymsp->__Vcoverage[6752].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset 
            = ((2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset)))) {
        vlSymsp->__Vcoverage[6753].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset 
            = ((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_X)))) {
        vlSymsp->__Vcoverage[2017].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_X 
            = ((6U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_X)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_X)))) {
        vlSymsp->__Vcoverage[2018].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_X 
            = ((5U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_X)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_X)))) {
        vlSymsp->__Vcoverage[2019].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_X 
            = ((3U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_X)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT____Vtogcov__state)))) {
        vlSymsp->__Vcoverage[4072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT____Vtogcov__state 
            = ((6U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT____Vtogcov__state)) 
               | (1U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT____Vtogcov__state)))) {
        vlSymsp->__Vcoverage[4073].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT____Vtogcov__state 
            = ((5U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT____Vtogcov__state)) 
               | (2U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT____Vtogcov__state)))) {
        vlSymsp->__Vcoverage[4074].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT____Vtogcov__state 
            = ((3U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT____Vtogcov__state)) 
               | (4U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state)));
    }
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
    if ((1U & ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max) 
               ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[556].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max 
            = ((0xeU & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)) 
               | (1U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max) 
               ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[557].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max 
            = ((0xdU & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)) 
               | (2U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max) 
               ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[558].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max 
            = ((0xbU & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)) 
               | (4U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max) 
               ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[559].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max 
            = ((7U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)) 
               | (8U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max)));
    }
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
    if ((1U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[948].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max 
            = ((0xeU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)) 
               | (1U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[949].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max 
            = ((0xdU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)) 
               | (2U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[950].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max 
            = ((0xbU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)) 
               | (4U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[951].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max 
            = ((7U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)) 
               | (8U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__verbose) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__verbose)))) {
        vlSymsp->__Vcoverage[992].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__verbose 
            = ((0xeU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__verbose)) 
               | (1U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__verbose)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__verbose) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__verbose)))) {
        vlSymsp->__Vcoverage[993].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__verbose 
            = ((0xdU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__verbose)) 
               | (2U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__verbose)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__verbose) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__verbose)))) {
        vlSymsp->__Vcoverage[994].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__verbose 
            = ((0xbU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__verbose)) 
               | (4U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__verbose)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__verbose) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__verbose)))) {
        vlSymsp->__Vcoverage[995].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__verbose 
            = ((7U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__verbose)) 
               | (8U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__verbose)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X)))) {
        vlSymsp->__Vcoverage[1366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X 
            = ((0xeU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X)))) {
        vlSymsp->__Vcoverage[1367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X 
            = ((0xdU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X)))) {
        vlSymsp->__Vcoverage[1368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X 
            = ((0xbU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X)))) {
        vlSymsp->__Vcoverage[1369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X 
            = ((7U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)));
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__wb_result_sel_D 
        = ((~ ((((((((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D) 
                     | (0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x40000033U == (0xfe00707fU 
                                       & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                   | (0x2000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x7033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (0x6033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                | (0x4033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (0x2033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) 
           & ((~ ((((((((0x3033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                        | (0x40005033U == (0xfe00707fU 
                                           & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x5033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x1033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x13U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x7013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                   | (0x6013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x4013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) 
              & ((~ ((((((((0x2013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                           | (0x3013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                          | (0x40005013U == (0xfe00707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                         | (0x5013U == (0xfe00707fU 
                                        & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                        | (0x1013U == (0xfe00707fU 
                                       & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x37U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x17U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x6fU == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) 
                 & (((((((((0x67U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                           | (0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                          | (0x63U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                         | (0x4063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                        | (0x6063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x5063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x7063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    & ((0x67U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                       & ((0x1063U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                          & ((0x63U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                             & ((0x4063U != (0x707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                                & ((0x6063U != (0x707fU 
                                                & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                                   & ((0x5063U != (0x707fU 
                                                   & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                                      & (0x7063U != 
                                         (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))))))))))));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_val_D 
        = (((((((((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D) 
                  | (0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (0x40000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                | (0x2000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (0x7033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
              | (0x6033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
             | (0x4033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
            | (0x2033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
           | (((((((((0x3033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                     | (0x40005033U == (0xfe00707fU 
                                        & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x5033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                   | (0x1033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x13U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (0x7013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                | (0x6013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (0x4013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
              | (((((((((0x2013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                        | (0x3013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x40005013U == (0xfe00707fU 
                                          & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x5013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x1013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x37U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                   | (0x17U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x6fU == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (((((((((0x67U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                           | (0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                          | (0x63U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                         | (0x4063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                        | (0x6063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x5063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x7063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | ((0x2023U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                       | ((0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                          | (0x1073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))))))));
    if (((((((((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D) 
               | (0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
              | (0x40000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
             | (0x2000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
            | (0x7033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
           | (0x6033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
          | (0x4033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
         | (0x2033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) {
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_D 
            = (0x13U != vlSelf->top__DOT__DUT__DOT__inst_D);
        if ((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D)) {
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 0U;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0U;
        } else if ((0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 1U;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0U;
        } else if ((0x40000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 1U;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 1U;
        } else if ((0x2000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 2U;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0U;
        } else {
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 1U;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D 
                = ((0x7033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))
                    ? 2U : ((0x6033U == (0xfe00707fU 
                                         & vlSelf->top__DOT__DUT__DOT__inst_D))
                             ? 3U : ((0x4033U == (0xfe00707fU 
                                                  & vlSelf->top__DOT__DUT__DOT__inst_D))
                                      ? 4U : 5U)));
        }
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 0U;
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 0U;
    } else {
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_D 
            = (((((((((0x3033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                      | (0x40005033U == (0xfe00707fU 
                                         & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x5033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x1033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                   | (0x13U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x7013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (0x6013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                | (0x4013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (((((((((0x2013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                         | (0x3013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                        | (0x40005013U == (0xfe00707fU 
                                           & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x5013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x1013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x37U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x17U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                   | (0x6fU == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (((((((((0x67U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                            | (0x1063U == (0x707fU 
                                           & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                           | (0x63U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                          | (0x4063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                         | (0x6063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                        | (0x5063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x7063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))
                      ? ((0x67U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                         | ((0x1063U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                            & ((0x63U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                               & ((0x4063U != (0x707fU 
                                               & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                                  & ((0x6063U != (0x707fU 
                                                  & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                                     & ((0x5063U != 
                                         (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                                        & (0x7063U 
                                           != (0x707fU 
                                               & vlSelf->top__DOT__DUT__DOT__inst_D))))))))
                      : ((0x2023U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                         & (0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))))));
        if (((((((((0x3033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                   | (0x40005033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x5033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (0x1033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                | (0x13U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (0x7013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
              | (0x6013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
             | (0x4013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) {
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 1U;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 0U;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 0U;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D 
                = ((0x3033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))
                    ? 6U : ((0x40005033U == (0xfe00707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))
                             ? 7U : ((0x5033U == (0xfe00707fU 
                                                  & vlSelf->top__DOT__DUT__DOT__inst_D))
                                      ? 8U : ((0x1033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->top__DOT__DUT__DOT__inst_D))
                                               ? 9U
                                               : ((0x13U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__DUT__DOT__inst_D))
                                                   ? 0U
                                                   : 
                                                  ((0x7013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__DUT__DOT__inst_D))
                                                    ? 2U
                                                    : 
                                                   ((0x6013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__DUT__DOT__inst_D))
                                                     ? 3U
                                                     : 4U)))))));
        } else if (((((((((0x2013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                          | (0x3013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                         | (0x40005013U == (0xfe00707fU 
                                            & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                        | (0x5013U == (0xfe00707fU 
                                       & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x1013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x37U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x17U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x6fU == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) {
            if ((0x2013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 1U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 5U;
            } else if ((0x3013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 1U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 6U;
            } else if ((0x40005013U == (0xfe00707fU 
                                        & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 1U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 7U;
            } else if ((0x5013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 1U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 8U;
            } else if ((0x1013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 1U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 9U;
            } else if ((0x37U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 1U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0xcU;
            } else {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D 
                    = ((0x17U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))
                        ? 1U : 0U);
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0U;
            }
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 0U;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 0U;
        } else if (((((((((0x67U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                          | (0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                         | (0x63U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                        | (0x4063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x6063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x5063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x7063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) {
            if ((0x67U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 0U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 0U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 0U;
            } else if ((0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 0U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 0U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 1U;
            } else if ((0x63U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 0U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 0U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 2U;
            } else if ((0x4063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 0U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 0U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 3U;
            } else if ((0x6063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 0U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 0U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 4U;
            } else if ((0x5063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 0U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 0U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 5U;
            } else if ((0x7063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 0U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 0U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 6U;
            } else {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 1U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 1U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 0U;
            }
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0U;
        } else {
            if ((0x2023U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 0U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 2U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0U;
            } else {
                if ((0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 1U;
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0xcU;
                } else if ((0x1073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 1U;
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0xbU;
                } else {
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0U;
                }
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 0U;
            }
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 0U;
        }
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3497].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3875].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3876].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3877].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3878].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3918].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3919].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3920].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3921].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3976].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3977].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3978].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3979].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[4019].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[4020].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[4021].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[4022].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__level)));
    }
    vlSelf->top__DOT__cache__DOT__dcache__DOT__valid_set 
        = (1U & ((4U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state))
                  ? (IData)((0U == (3U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state))))
                  : (((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state) 
                      >> 1U) & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__state))));
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[7287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[7288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[7289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[7290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[7397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[7398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[7399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[7400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[7440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[7441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[7442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[7443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[7483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[7484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[7485].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[7486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[7510].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[7511].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[7512].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[7513].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[7839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[7840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[7841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[7842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[7884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[7885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[7886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[7887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[7927].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[7928].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[7929].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[7930].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[7985].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[7986].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[7987].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[7988].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[8012].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[8013].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[8014].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[8015].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[1378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[1379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[1380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[1381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[1382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[2010].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[2011].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[2012].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[2013].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[2014].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[2078].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[2079].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[2080].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[2081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[2082].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1)))) {
        vlSymsp->__Vcoverage[3707].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1)))) {
        vlSymsp->__Vcoverage[3708].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1)))) {
        vlSymsp->__Vcoverage[3709].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1)))) {
        vlSymsp->__Vcoverage[3710].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1)))) {
        vlSymsp->__Vcoverage[3711].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2)))) {
        vlSymsp->__Vcoverage[3712].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2)))) {
        vlSymsp->__Vcoverage[3713].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2)))) {
        vlSymsp->__Vcoverage[3714].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2)))) {
        vlSymsp->__Vcoverage[3715].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2)))) {
        vlSymsp->__Vcoverage[3716].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd)))) {
        vlSymsp->__Vcoverage[3717].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd)))) {
        vlSymsp->__Vcoverage[3718].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd)))) {
        vlSymsp->__Vcoverage[3719].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd)))) {
        vlSymsp->__Vcoverage[3720].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd)))) {
        vlSymsp->__Vcoverage[3721].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd)));
    }
    if ((1U & (((IData)(1U) + (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_word)) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_inc_out)))) {
        vlSymsp->__Vcoverage[4552].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_inc_out 
            = ((0x1eU & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_inc_out)) 
               | (1U & ((IData)(1U) + (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_word))));
    }
    if ((1U & ((0xfU & (((IData)(1U) + (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_word)) 
                        >> 1U)) ^ ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_inc_out) 
                                   >> 1U)))) {
        vlSymsp->__Vcoverage[4553].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_inc_out 
            = ((0x1dU & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_inc_out)) 
               | (2U & ((IData)(1U) + (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_word))));
    }
    if ((1U & ((7U & (((IData)(1U) + (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_word)) 
                      >> 2U)) ^ ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_inc_out) 
                                 >> 2U)))) {
        vlSymsp->__Vcoverage[4554].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_inc_out 
            = ((0x1bU & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_inc_out)) 
               | (4U & ((IData)(1U) + (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_word))));
    }
    if ((1U & ((3U & (((IData)(1U) + (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_word)) 
                      >> 3U)) ^ ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_inc_out) 
                                 >> 3U)))) {
        vlSymsp->__Vcoverage[4555].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_inc_out 
            = ((0x17U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_inc_out)) 
               | (8U & ((IData)(1U) + (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_word))));
    }
    if ((1U & ((1U & (((IData)(1U) + (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_word)) 
                      >> 4U)) ^ ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_inc_out) 
                                 >> 4U)))) {
        vlSymsp->__Vcoverage[4556].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_inc_out 
            = ((0xfU & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_inc_out)) 
               | (0x10U & ((IData)(1U) + (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_word))));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_word) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_word)))) {
        vlSymsp->__Vcoverage[4557].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_word 
            = ((0x1eU & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_word)) 
               | (1U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_word)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_word) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_word)))) {
        vlSymsp->__Vcoverage[4558].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_word 
            = ((0x1dU & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_word)) 
               | (2U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_word)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_word) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_word)))) {
        vlSymsp->__Vcoverage[4559].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_word 
            = ((0x1bU & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_word)) 
               | (4U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_word)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_word) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_word)))) {
        vlSymsp->__Vcoverage[4560].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_word 
            = ((0x17U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_word)) 
               | (8U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_word)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_word) 
                  ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_word)))) {
        vlSymsp->__Vcoverage[4561].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_word 
            = ((0xfU & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__req_word)) 
               | (0x10U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_word)));
    }
    if ((1U & (((IData)(1U) + (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__resp_word)) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__resp_inc_out)))) {
        vlSymsp->__Vcoverage[4562].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__resp_inc_out 
            = ((0x1eU & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__resp_inc_out)) 
               | (1U & ((IData)(1U) + (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__resp_word))));
    }
    if ((1U & ((0xfU & (((IData)(1U) + (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__resp_word)) 
                        >> 1U)) ^ ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__resp_inc_out) 
                                   >> 1U)))) {
        vlSymsp->__Vcoverage[4563].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__resp_inc_out 
            = ((0x1dU & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__resp_inc_out)) 
               | (2U & ((IData)(1U) + (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__resp_word))));
    }
    if ((1U & ((7U & (((IData)(1U) + (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__resp_word)) 
                      >> 2U)) ^ ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__resp_inc_out) 
                                 >> 2U)))) {
        vlSymsp->__Vcoverage[4564].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__resp_inc_out 
            = ((0x1bU & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__resp_inc_out)) 
               | (4U & ((IData)(1U) + (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__resp_word))));
    }
    if ((1U & ((3U & (((IData)(1U) + (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__resp_word)) 
                      >> 3U)) ^ ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__resp_inc_out) 
                                 >> 3U)))) {
        vlSymsp->__Vcoverage[4565].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__resp_inc_out 
            = ((0x17U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__resp_inc_out)) 
               | (8U & ((IData)(1U) + (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__resp_word))));
    }
    if ((1U & ((1U & (((IData)(1U) + (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__resp_word)) 
                      >> 4U)) ^ ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__resp_inc_out) 
                                 >> 4U)))) {
        vlSymsp->__Vcoverage[4566].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__resp_inc_out 
            = ((0xfU & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__resp_inc_out)) 
               | (0x10U & ((IData)(1U) + (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__resp_word))));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__resp_word) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__resp_word)))) {
        vlSymsp->__Vcoverage[4567].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__resp_word 
            = ((0x1eU & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__resp_word)) 
               | (1U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__resp_word)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__resp_word) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__resp_word)))) {
        vlSymsp->__Vcoverage[4568].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__resp_word 
            = ((0x1dU & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__resp_word)) 
               | (2U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__resp_word)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__resp_word) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__resp_word)))) {
        vlSymsp->__Vcoverage[4569].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__resp_word 
            = ((0x1bU & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__resp_word)) 
               | (4U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__resp_word)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__resp_word) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__resp_word)))) {
        vlSymsp->__Vcoverage[4570].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__resp_word 
            = ((0x17U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__resp_word)) 
               | (8U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__resp_word)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__resp_word) 
                  ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__resp_word)))) {
        vlSymsp->__Vcoverage[4571].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__resp_word 
            = ((0xfU & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__resp_word)) 
               | (0x10U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__resp_word)));
    }
    vlSelf->top__DOT____Vcellinp__DUT__clk = ((IData)(vlSelf->clk) 
                                              & (IData)(vlSelf->top__DOT__cpu_en));
    vlSelf->top__DOT__src__DOT__src__DOT__done_next 
        = ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index) 
           == (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max));
    vlSelf->top__DOT__DUT__DOT__stats_en_wen_W = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_pending_W) 
                                                  & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_W));
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[2129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x7eU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[2130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x7dU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[2131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x7bU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[2132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x77U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[2133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x6fU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[2134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x5fU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[2135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x3fU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[2917].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x7eU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[2918].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x7dU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[2919].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x7bU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[2920].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x77U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[2921].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x6fU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[2922].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x5fU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[2923].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x3fU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)))) {
        vlSymsp->__Vcoverage[3734].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct 
            = ((0x7eU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)))) {
        vlSymsp->__Vcoverage[3735].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct 
            = ((0x7dU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)))) {
        vlSymsp->__Vcoverage[3736].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct 
            = ((0x7bU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)))) {
        vlSymsp->__Vcoverage[3737].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct 
            = ((0x77U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)))) {
        vlSymsp->__Vcoverage[3738].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct 
            = ((0x6fU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)))) {
        vlSymsp->__Vcoverage[3739].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct 
            = ((0x5fU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)))) {
        vlSymsp->__Vcoverage[3740].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct 
            = ((0x3fU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)))) {
        vlSymsp->__Vcoverage[3722].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr 
            = ((0xffeU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)))) {
        vlSymsp->__Vcoverage[3723].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr 
            = ((0xffdU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)))) {
        vlSymsp->__Vcoverage[3724].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr 
            = ((0xffbU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)))) {
        vlSymsp->__Vcoverage[3725].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr 
            = ((0xff7U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)))) {
        vlSymsp->__Vcoverage[3726].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr 
            = ((0xfefU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)))) {
        vlSymsp->__Vcoverage[3727].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr 
            = ((0xfdfU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)))) {
        vlSymsp->__Vcoverage[3728].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr 
            = ((0xfbfU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)))) {
        vlSymsp->__Vcoverage[3729].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr 
            = ((0xf7fU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)) 
               | (0x80U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)))) {
        vlSymsp->__Vcoverage[3730].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr 
            = ((0xeffU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)) 
               | (0x100U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)))) {
        vlSymsp->__Vcoverage[3731].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr 
            = ((0xdffU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)) 
               | (0x200U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)))) {
        vlSymsp->__Vcoverage[3732].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr 
            = ((0xbffU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)) 
               | (0x400U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)))) {
        vlSymsp->__Vcoverage[3733].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr 
            = ((0x7ffU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)) 
               | (0x800U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr)));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__incoming_msg[1U]))) {
        vlSymsp->__Vcoverage[4196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__incoming_msg[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__incoming_msg[1U]) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U]));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__incoming_msg[1U]))) {
        vlSymsp->__Vcoverage[4197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__incoming_msg[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__incoming_msg[1U]) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U]));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[2U] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__incoming_msg[2U]))) {
        vlSymsp->__Vcoverage[4198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__incoming_msg[2U] 
            = ((0x1ffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__incoming_msg[2U]) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[2U]));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[2U] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__incoming_msg[2U]))) {
        vlSymsp->__Vcoverage[4199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__incoming_msg[2U] 
            = ((0x1ff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__incoming_msg[2U]) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[2U] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__incoming_msg[2U]))) {
        vlSymsp->__Vcoverage[4200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__incoming_msg[2U] 
            = ((0x1fefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__incoming_msg[2U]) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[2U] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__incoming_msg[2U]))) {
        vlSymsp->__Vcoverage[4201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__incoming_msg[2U] 
            = ((0x1fdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__incoming_msg[2U]) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[2U] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__incoming_msg[2U]))) {
        vlSymsp->__Vcoverage[4202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__incoming_msg[2U] 
            = ((0x1fbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__incoming_msg[2U]) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[2U] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__incoming_msg[2U]))) {
        vlSymsp->__Vcoverage[4203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__incoming_msg[2U] 
            = ((0x1f7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__incoming_msg[2U]) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[2U] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__incoming_msg[2U]))) {
        vlSymsp->__Vcoverage[4204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__incoming_msg[2U] 
            = ((0x1effU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__incoming_msg[2U]) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[2U] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__incoming_msg[2U]))) {
        vlSymsp->__Vcoverage[4205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__incoming_msg[2U] 
            = ((0x1dffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__incoming_msg[2U]) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[2U] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__incoming_msg[2U]))) {
        vlSymsp->__Vcoverage[4206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__incoming_msg[2U] 
            = ((0x17ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__incoming_msg[2U]) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[2U] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__incoming_msg[2U]))) {
        vlSymsp->__Vcoverage[4207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__incoming_msg[2U] 
            = ((0xfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__incoming_msg[2U]) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[2U]));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[6726].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xffeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[6727].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xffdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[6728].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xffbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[6729].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xff7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[6730].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xfefU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[6731].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xfdfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[6732].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xfbfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[6733].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xf7fU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[6734].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xeffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x100U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[6735].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xdffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x200U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[6736].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xbffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x400U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[6737].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0x7ffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x800U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[6738].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x3ffeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[6739].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x3ffdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[6740].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x3ffbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[6741].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x3ff7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[6742].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x3fefU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[6743].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x3fdfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[6744].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x3fbfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[6745].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x3f7fU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[6746].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x3effU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (0x100U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[6747].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x3dffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (0x200U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[6748].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x3bffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (0x400U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[6749].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x37ffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (0x800U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[6750].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x2fffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[6751].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x1fffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[3691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[3692].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[3693].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[3694].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[3695].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[3696].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[3697].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[3698].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[3699].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[3700].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[3701].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[3702].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[3703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[3704].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[3705].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[3706].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3857].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3859].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3862].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3866].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3867].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3868].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3869].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3870].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3871].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3872].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3900].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3902].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3903].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3904].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3905].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3906].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3907].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3908].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3909].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3910].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3911].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3912].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3913].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3914].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3915].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3958].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3959].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3960].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3961].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3962].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3963].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3964].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3965].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3966].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3967].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3968].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3969].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3970].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3971].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3972].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3973].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4001].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4002].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4003].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4004].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4007].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4008].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4009].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4010].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4011].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4012].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4013].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4014].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4015].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[4016].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7821].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7822].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7823].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7824].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7866].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7867].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7868].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7869].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7870].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7871].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7872].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7873].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7874].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7875].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7876].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7877].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7878].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7879].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7880].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7881].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7909].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7910].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7911].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7912].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7913].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7914].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7915].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7916].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7917].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7918].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7919].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7920].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7921].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7922].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7923].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7924].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7967].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7968].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7969].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7970].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7971].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7972].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7973].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7974].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7975].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7976].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7977].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7978].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7979].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7980].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7981].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[7982].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__line0_dirty 
        = (1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                 >> (0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                              >> 8U))));
    vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__line1_dirty 
        = (1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1 
                 >> (0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                              >> 8U))));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3547].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xfffffeU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (1U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3548].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xfffffdU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (2U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3549].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xfffffbU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (4U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3550].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xfffff7U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (8U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3551].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xffffefU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3552].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xffffdfU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3553].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xffffbfU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3554].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xffff7fU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3555].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xfffeffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3556].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xfffdffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3557].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xfffbffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3558].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xfff7ffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3559].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xffefffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3560].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xffdfffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3561].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xffbfffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3562].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xff7fffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3563].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xfeffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3564].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xfdffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3565].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xfbffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3566].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xf7ffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3567].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xefffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3568].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xdfffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3569].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xbfffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3570].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0x7fffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3571].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xfffffeU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (1U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3572].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xfffffdU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (2U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3573].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xfffffbU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (4U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3574].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xfffff7U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (8U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3575].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xffffefU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3576].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xffffdfU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3577].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xffffbfU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3578].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xffff7fU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3579].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xfffeffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3580].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xfffdffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3581].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xfffbffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3582].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xfff7ffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3583].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xffefffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3584].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xffdfffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3585].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xffbfffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3586].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xff7fffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3587].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xfeffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3588].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xfdffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3589].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xfbffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3590].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xf7ffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3591].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xefffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3592].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xdfffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3593].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xbfffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3594].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0x7fffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3595].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xfffffeU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (1U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3596].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xfffffdU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (2U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3597].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xfffffbU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (4U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3598].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xfffff7U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (8U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3599].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xffffefU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3600].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xffffdfU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3601].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xffffbfU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3602].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xffff7fU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3603].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xfffeffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3604].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xfffdffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3605].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xfffbffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3606].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xfff7ffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xffefffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3608].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xffdfffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3609].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xffbfffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3610].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xff7fffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3611].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xfeffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3612].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xfdffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3613].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xfbffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3614].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xf7ffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3615].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xefffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3616].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xdfffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3617].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xbfffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0x7fffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrw_D = 
        ((~ ((((((((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D) 
                   | (0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x40000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (0x2000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                | (0x7033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (0x6033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
              | (0x4033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
             | (0x2033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) 
         & ((~ ((((((((0x3033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                      | (0x40005033U == (0xfe00707fU 
                                         & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x5033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x1033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                   | (0x13U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x7013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (0x6013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                | (0x4013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) 
            & ((~ ((((((((0x2013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                         | (0x3013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                        | (0x40005013U == (0xfe00707fU 
                                           & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x5013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x1013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x37U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x17U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                   | (0x6fU == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) 
               & ((~ ((((((((0x67U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                            | (0x1063U == (0x707fU 
                                           & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                           | (0x63U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                          | (0x4063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                         | (0x6063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                        | (0x5063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x7063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) 
                  & ((0x2023U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                     & ((0x2073U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                        & (0x1073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))))))));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mul_D = 
        (((((((((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D) 
                | (0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (0x40000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
              | (0x2000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
             | (0x7033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
            | (0x6033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
           | (0x4033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
          | (0x2033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
         & ((0x13U != vlSelf->top__DOT__DUT__DOT__inst_D) 
            & ((0x33U != (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
               & ((0x40000033U != (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                  & (0x2000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))))));
    if ((2U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (2U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((4U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (4U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((8U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (8U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x10U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x10U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x20U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x20U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x40U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x40U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x80U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x80U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x100U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x100U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x200U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x200U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x400U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x400U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x800U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x800U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x1000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x1000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x2000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x2000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x4000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x4000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x8000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x8000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x10000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x10000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x20000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x20000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x40000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x40000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x80000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x80000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x100000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x100000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x200000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x200000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x400000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x400000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x800000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x800000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x1000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x1000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x2000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x2000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x4000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x4000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x8000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x8000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x10000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x10000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x20000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x20000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x40000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x40000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if (((((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x80000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((2U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2743].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (2U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((4U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2744].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (4U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((8U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2745].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (8U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x10U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2746].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x10U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x20U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2747].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x20U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x40U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2748].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x40U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x80U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2749].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x80U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x100U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2750].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x100U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x200U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2751].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x200U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x400U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2752].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x400U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x800U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2753].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x800U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x1000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2754].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x1000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x2000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2755].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x2000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x4000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2756].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x4000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x8000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2757].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x8000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x10000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2758].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x10000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x20000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2759].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x20000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x40000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2760].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x40000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x80000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2761].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x80000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x100000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2762].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x100000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x200000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2763].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x200000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x400000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2764].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x400000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x800000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2765].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x800000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x1000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2766].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x1000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x2000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2767].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x2000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x4000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2768].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x4000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x8000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2769].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x8000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x10000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2770].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x10000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x20000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2771].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x20000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x40000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2772].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x40000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if (((((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2773].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x80000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((1U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffffffeU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (1U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((2U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffffffdU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (2U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((4U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffffffbU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (4U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((8U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffffff7U 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (8U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x10U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffffffefU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x10U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x20U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffffffdfU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x20U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x40U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffffffbfU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x40U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x80U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffffff7fU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x80U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x100U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffffeffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x100U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x200U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffffdffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x200U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x400U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffffbffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x400U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x800U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffff7ffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x800U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x1000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffffefffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x1000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x2000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffffdfffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x2000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x4000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffffbfffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x4000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x8000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffff7fffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x8000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x10000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffeffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x10000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x20000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffdffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x20000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x40000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffbffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x40000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x80000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfff7ffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x80000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x100000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffefffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x100000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x200000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffdfffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x200000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x400000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffbfffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x400000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x800000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xff7fffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x800000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x1000000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfeffffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x1000000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x2000000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfdffffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x2000000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x4000000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfbffffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x4000000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x8000000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xf7ffffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x8000000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x10000000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xefffffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x10000000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x20000000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xdfffffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x20000000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x40000000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[485].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xbfffffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x40000000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if (((vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0x7fffffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x80000000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((1U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
               ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[562].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfffffffeU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (1U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((2U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
               ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[563].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfffffffdU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (2U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((4U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
               ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[564].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfffffffbU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (4U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((8U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
               ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[565].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfffffff7U & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (8U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x10U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                  ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[566].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xffffffefU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x10U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x20U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                  ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[567].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xffffffdfU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x20U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x40U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                  ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[568].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xffffffbfU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x40U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x80U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                  ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[569].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xffffff7fU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x80U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x100U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                   ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[570].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfffffeffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x100U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x200U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                   ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[571].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfffffdffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x200U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x400U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                   ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[572].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfffffbffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x400U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x800U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                   ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[573].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfffff7ffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x800U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x1000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                    ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[574].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xffffefffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x1000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x2000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                    ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[575].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xffffdfffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x2000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x4000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                    ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[576].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xffffbfffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x4000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x8000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                    ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[577].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xffff7fffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x8000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x10000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                     ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[578].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfffeffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x10000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x20000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                     ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[579].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfffdffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x20000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x40000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                     ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[580].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfffbffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x40000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x80000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                     ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[581].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfff7ffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x80000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x100000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                      ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[582].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xffefffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x100000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x200000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                      ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[583].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xffdfffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x200000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x400000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                      ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[584].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xffbfffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x400000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x800000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                      ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[585].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xff7fffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x800000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                       ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[586].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfeffffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x1000000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                       ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[587].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfdffffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x2000000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                       ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[588].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfbffffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x4000000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                       ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[589].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xf7ffffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x8000000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                        ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[590].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xefffffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x10000000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                        ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[591].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xdfffffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x20000000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                        ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[592].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xbfffffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x40000000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if (((vlSelf->top__DOT__src__DOT__src__DOT__data_data 
          ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[593].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0x7fffffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x80000000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
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
    if ((1U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
               ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[953].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfffffffeU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (1U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((2U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
               ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[954].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfffffffdU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (2U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((4U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
               ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[955].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfffffffbU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (4U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((8U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
               ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[956].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfffffff7U & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (8U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x10U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                  ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[957].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xffffffefU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x10U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x20U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                  ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[958].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xffffffdfU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x20U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x40U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                  ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[959].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xffffffbfU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x40U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x80U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                  ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[960].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xffffff7fU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x80U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x100U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                   ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[961].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfffffeffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x100U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x200U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                   ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[962].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfffffdffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x200U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x400U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                   ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[963].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfffffbffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x400U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x800U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                   ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[964].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfffff7ffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x800U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x1000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                    ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[965].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xffffefffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x1000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x2000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                    ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[966].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xffffdfffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x2000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x4000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                    ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[967].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xffffbfffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x4000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x8000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                    ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[968].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xffff7fffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x8000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x10000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                     ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[969].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfffeffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x10000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x20000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                     ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[970].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfffdffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x20000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x40000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                     ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[971].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfffbffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x40000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x80000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                     ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[972].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfff7ffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x80000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x100000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                      ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[973].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xffefffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x100000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x200000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                      ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[974].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xffdfffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x200000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x400000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                      ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[975].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xffbfffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x400000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x800000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                      ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[976].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xff7fffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x800000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                       ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[977].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfeffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x1000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                       ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[978].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfdffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x2000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                       ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[979].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfbffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x4000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                       ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[980].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xf7ffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x8000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                        ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[981].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xefffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x10000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                        ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[982].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xdfffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x20000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                        ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[983].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xbfffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x40000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if (((vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
          ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[984].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0x7fffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x80000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
          ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
          ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__inst_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__inst_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__inst_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__inst_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1402].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1403].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1404].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1405].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1406].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__inst_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
               ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1792].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (1U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
               ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1793].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (2U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
               ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1794].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (4U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
               ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1795].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (8U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                  ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1796].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                  ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1797].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                  ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1798].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                  ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1799].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                   ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1800].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                   ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1801].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                   ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1802].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                   ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1803].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                    ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1804].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                    ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1805].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                    ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1806].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                    ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1807].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                     ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1808].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                     ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1809].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                     ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1810].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                     ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1811].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                      ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1812].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                      ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1813].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                      ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1814].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                      ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1815].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                       ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1816].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                       ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1817].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                       ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1818].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                       ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1819].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1820].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1821].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1822].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if (((vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
          ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1823].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1974].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (1U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1975].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (2U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1976].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (4U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1977].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (8U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1978].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1979].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1980].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1981].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1982].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1983].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1984].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1985].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1986].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1987].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1988].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1989].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1990].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1991].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1992].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1993].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1994].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1995].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1996].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1997].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1998].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1999].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[2000].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[2001].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                        ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[2002].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                        ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[2003].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                        ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[2004].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if (((vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
          ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (1U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (2U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (4U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (8U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2070].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                        ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2071].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                        ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                        ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[2073].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if (((vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
          ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2074].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2090].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (1U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2091].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (2U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2092].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (4U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2093].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (8U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2094].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2095].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2096].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2097].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2098].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2099].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                        ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                        ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                        ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[2120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if (((vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
          ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2583].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2584].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2585].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2586].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2587].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2588].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2589].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2590].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2591].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2592].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2593].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2594].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2595].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2596].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2597].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2598].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2599].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2600].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2601].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2602].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2603].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2604].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2605].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2606].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2608].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2609].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2610].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2611].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2612].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2613].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2614].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2615].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2616].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2617].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2619].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2620].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2621].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2622].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2623].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2624].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2625].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2626].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2669].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2670].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2674].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2711].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2712].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2713].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2714].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2715].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2716].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2717].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2718].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2719].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2720].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2721].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2722].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2723].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2724].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2725].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2726].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2727].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2728].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2729].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2730].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2731].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2732].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2733].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2734].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2735].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2736].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2737].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2738].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2739].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2740].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X))) {
        vlSymsp->__Vcoverage[2741].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2742].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__mul_result_X) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2774].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2775].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2776].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2777].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2778].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2779].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2780].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2781].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2782].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2783].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2784].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2785].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2786].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2787].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2788].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2789].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2790].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2791].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2792].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2793].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2794].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2795].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2796].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2797].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2798].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2799].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2800].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2801].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2802].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2803].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2804].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2805].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2845].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2848].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2849].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2857].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2859].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2862].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2866].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2867].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2868].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2869].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb))) {
        vlSymsp->__Vcoverage[3152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__b_lsb) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[3285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                >> 2U) ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address))) {
        vlSymsp->__Vcoverage[4132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address) 
               | (1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                        >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                >> 3U) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
                          >> 1U)))) {
        vlSymsp->__Vcoverage[4133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address) 
               | (2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                        >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                >> 4U) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
                          >> 2U)))) {
        vlSymsp->__Vcoverage[4134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address) 
               | (4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                        >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                >> 5U) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
                          >> 3U)))) {
        vlSymsp->__Vcoverage[4135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address) 
               | (8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                        >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                >> 6U) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
                          >> 4U)))) {
        vlSymsp->__Vcoverage[4136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address) 
               | (0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                           >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                >> 7U) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
                          >> 5U)))) {
        vlSymsp->__Vcoverage[4137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address) 
               | (0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                           >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                >> 8U) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
                          >> 6U)))) {
        vlSymsp->__Vcoverage[4138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address) 
               | (0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                           >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                >> 9U) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
                          >> 7U)))) {
        vlSymsp->__Vcoverage[4139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address) 
               | (0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                           >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                >> 0xaU) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
                            >> 8U)))) {
        vlSymsp->__Vcoverage[4140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address) 
               | (0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                            >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                >> 0xbU) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
                            >> 9U)))) {
        vlSymsp->__Vcoverage[4141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address) 
               | (0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                            >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                >> 0xcU) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
                            >> 0xaU)))) {
        vlSymsp->__Vcoverage[4142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address) 
               | (0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                            >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                >> 0xdU) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
                            >> 0xbU)))) {
        vlSymsp->__Vcoverage[4143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address) 
               | (0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                            >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                >> 0xeU) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
                            >> 0xcU)))) {
        vlSymsp->__Vcoverage[4144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address) 
               | (0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                             >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                >> 0xfU) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
                            >> 0xdU)))) {
        vlSymsp->__Vcoverage[4145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address) 
               | (0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                             >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                >> 0x10U) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
                             >> 0xeU)))) {
        vlSymsp->__Vcoverage[4146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address) 
               | (0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                             >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                >> 0x11U) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
                             >> 0xfU)))) {
        vlSymsp->__Vcoverage[4147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address) 
               | (0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                             >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                >> 0x12U) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
                             >> 0x10U)))) {
        vlSymsp->__Vcoverage[4148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address) 
               | (0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                              >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                >> 0x13U) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
                             >> 0x11U)))) {
        vlSymsp->__Vcoverage[4149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address) 
               | (0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                              >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                >> 0x14U) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
                             >> 0x12U)))) {
        vlSymsp->__Vcoverage[4150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address) 
               | (0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                              >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                >> 0x15U) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
                             >> 0x13U)))) {
        vlSymsp->__Vcoverage[4151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address) 
               | (0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                              >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                >> 0x16U) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
                             >> 0x14U)))) {
        vlSymsp->__Vcoverage[4152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address) 
               | (0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                               >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                >> 0x17U) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
                             >> 0x15U)))) {
        vlSymsp->__Vcoverage[4153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address) 
               | (0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                               >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                >> 0x18U) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
                             >> 0x16U)))) {
        vlSymsp->__Vcoverage[4154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address) 
               | (0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                               >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                >> 0x19U) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
                             >> 0x17U)))) {
        vlSymsp->__Vcoverage[4155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address) 
               | (0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                               >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                >> 0x1aU) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
                             >> 0x18U)))) {
        vlSymsp->__Vcoverage[4156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address) 
               | (0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                                >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                >> 0x1bU) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
                             >> 0x19U)))) {
        vlSymsp->__Vcoverage[4157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address) 
               | (0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                                >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                >> 0x1cU) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
                             >> 0x1aU)))) {
        vlSymsp->__Vcoverage[4158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address) 
               | (0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                                >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                >> 0x1dU) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
                             >> 0x1bU)))) {
        vlSymsp->__Vcoverage[4159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address) 
               | (0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                                >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                >> 0x1eU) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
                             >> 0x1cU)))) {
        vlSymsp->__Vcoverage[4160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address) 
               | (0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                                 >> 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                >> 0x1fU) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
                             >> 0x1dU)))) {
        vlSymsp->__Vcoverage[4161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address) 
               | (0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                                 >> 2U)));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[2U] 
               ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
                  >> 0x1eU)))) {
        vlSymsp->__Vcoverage[4162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address) 
               | (0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[2U] 
                                 << 0x1eU)));
    }
    if ((1U & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[2U] 
                >> 1U) ^ (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
                          >> 0x1fU)))) {
        vlSymsp->__Vcoverage[4163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__address) 
               | (0x80000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[2U] 
                                 << 0x1eU)));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[4164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U]));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[4165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U]));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[4166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U]));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[4167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[4168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[4169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[4170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[4171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[4172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[4173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[4174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[4175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[4176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[4177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[4178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[4179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[4180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[4181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[4182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[4183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[4184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[4185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[4186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[4187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[4188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[4189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[4190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[4191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[4192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[4193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data))) {
        vlSymsp->__Vcoverage[4194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U]));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U] 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__proc_write_data) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U]));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[4572].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[4573].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[4574].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[4575].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[4576].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[4577].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[4578].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[4579].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[4580].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[4581].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[4582].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[4583].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[4584].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[4585].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[4586].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[4587].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[4588].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[4589].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[4590].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[4591].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[4592].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[4593].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[4594].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[4595].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[4596].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[4597].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[4598].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[4599].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[4600].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[4601].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0))) {
        vlSymsp->__Vcoverage[4602].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4603].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty0) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty1))) {
        vlSymsp->__Vcoverage[4604].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty1 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty1) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty1))) {
        vlSymsp->__Vcoverage[4605].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty1 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty1) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty1))) {
        vlSymsp->__Vcoverage[4606].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty1 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty1) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty1))) {
        vlSymsp->__Vcoverage[4607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty1 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty1) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty1))) {
        vlSymsp->__Vcoverage[4608].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty1 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty1) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty1))) {
        vlSymsp->__Vcoverage[4609].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty1 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__dirty1) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1));
    }
}
