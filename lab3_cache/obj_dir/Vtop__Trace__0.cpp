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
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[2U]) 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgWData(oldp+0,(vlSelf->top__DOT__memreq_msg),77);
        bufp->chgQData(oldp+3,(vlSelf->top__DOT__cache_resp_msg),47);
        bufp->chgBit(oldp+5,(vlSelf->top__DOT__flush));
        bufp->chgBit(oldp+6,(vlSelf->top__DOT__flush_done));
        bufp->chgBit(oldp+7,(vlSelf->top__DOT__input_en));
        bufp->chgBit(oldp+8,(vlSelf->top__DOT__tarray_en));
        bufp->chgBit(oldp+9,(vlSelf->top__DOT__tarray_wen));
        bufp->chgBit(oldp+10,(vlSelf->top__DOT__req_count_en));
        bufp->chgBit(oldp+11,(vlSelf->top__DOT__resp_count_en));
        bufp->chgBit(oldp+12,(vlSelf->top__DOT__count_reset));
        bufp->chgBit(oldp+13,(vlSelf->top__DOT__write_data_sel));
        bufp->chgBit(oldp+14,(vlSelf->top__DOT__darray_en));
        bufp->chgBit(oldp+15,(vlSelf->top__DOT__darray_wen));
        bufp->chgBit(oldp+16,(vlSelf->top__DOT__index_sel));
        bufp->chgBit(oldp+17,(vlSelf->top__DOT__write_word_sel));
        bufp->chgBit(oldp+18,(vlSelf->top__DOT__read_word_sel));
        bufp->chgBit(oldp+19,(vlSelf->top__DOT__mem_action));
        bufp->chgBit(oldp+20,(vlSelf->top__DOT__way_select));
        bufp->chgBit(oldp+21,(vlSelf->top__DOT__clean_set));
        bufp->chgBit(oldp+22,(vlSelf->top__DOT__dirty_set));
        bufp->chgBit(oldp+23,(vlSelf->top__DOT__valid_set));
        bufp->chgCData(oldp+24,(vlSelf->top__DOT__state),3);
        bufp->chgIData(oldp+25,((IData)(vlSelf->top__DOT__cache_resp_msg)),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+27,(vlSelf->top__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgQData(oldp+30,(vlSelf->top__DOT__memresp_msg),47);
        bufp->chgWData(oldp+32,(vlSelf->top__DOT__cache_req_msg),77);
        bufp->chgIData(oldp+35,((vlSelf->top__DOT__DUT__DOT__req_addr_mem 
                                 >> 0xbU)),21);
        bufp->chgCData(oldp+36,(vlSelf->top__DOT__DUT__DOT__d_index),5);
        bufp->chgCData(oldp+37,(vlSelf->top__DOT__DUT__DOT__write_word_offset),4);
        bufp->chgIData(oldp+38,(vlSelf->top__DOT__DUT__DOT__write_data),32);
        bufp->chgCData(oldp+39,(vlSelf->top__DOT__DUT__DOT__read_word_offset),4);
        bufp->chgIData(oldp+40,(vlSelf->top__DOT__DUT__DOT__word0_out_lower),32);
        bufp->chgIData(oldp+41,(vlSelf->top__DOT__DUT__DOT__word0_out_upper),32);
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__DUT__DOT__data0_word_mux_out),32);
        bufp->chgIData(oldp+43,(vlSelf->top__DOT__DUT__DOT__word1_out_lower),32);
        bufp->chgIData(oldp+44,(vlSelf->top__DOT__DUT__DOT__word1_out_upper),32);
        bufp->chgIData(oldp+45,(vlSelf->top__DOT__DUT__DOT__data1_word_mux_out),32);
        bufp->chgIData(oldp+46,(vlSelf->top__DOT__DUT__DOT__way_data_out),32);
        bufp->chgIData(oldp+47,(vlSelf->top__DOT__DUT__DOT__cache_data_out),32);
        bufp->chgIData(oldp+48,(vlSelf->top__DOT__DUT__DOT__req_addr_mem),32);
        bufp->chgBit(oldp+49,((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset) 
                                     >> 3U))));
        bufp->chgIData(oldp+50,(vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in0),32);
        bufp->chgIData(oldp+51,(vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in1),32);
        bufp->chgIData(oldp+52,(vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in2),32);
        bufp->chgIData(oldp+53,(vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in3),32);
        bufp->chgIData(oldp+54,(vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in4),32);
        bufp->chgIData(oldp+55,(vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in5),32);
        bufp->chgIData(oldp+56,(vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in6),32);
        bufp->chgIData(oldp+57,(vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_lower_eight_mux__in7),32);
        bufp->chgCData(oldp+58,((7U & (IData)(vlSelf->top__DOT__DUT__DOT__read_word_offset))),3);
        bufp->chgIData(oldp+59,(vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in0),32);
        bufp->chgIData(oldp+60,(vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in1),32);
        bufp->chgIData(oldp+61,(vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in2),32);
        bufp->chgIData(oldp+62,(vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in3),32);
        bufp->chgIData(oldp+63,(vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in4),32);
        bufp->chgIData(oldp+64,(vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in5),32);
        bufp->chgIData(oldp+65,(vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in6),32);
        bufp->chgIData(oldp+66,(vlSelf->top__DOT__DUT__DOT____Vcellinp__word0_out_upper_eight_mux__in7),32);
        bufp->chgIData(oldp+67,(vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in0),32);
        bufp->chgIData(oldp+68,(vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in1),32);
        bufp->chgIData(oldp+69,(vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in2),32);
        bufp->chgIData(oldp+70,(vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in3),32);
        bufp->chgIData(oldp+71,(vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in4),32);
        bufp->chgIData(oldp+72,(vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in5),32);
        bufp->chgIData(oldp+73,(vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in6),32);
        bufp->chgIData(oldp+74,(vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_lower_eight_mux__in7),32);
        bufp->chgIData(oldp+75,(vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_upper_eight_mux__in0),32);
        bufp->chgIData(oldp+76,(vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_upper_eight_mux__in1),32);
        bufp->chgIData(oldp+77,(vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_upper_eight_mux__in2),32);
        bufp->chgIData(oldp+78,(vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_upper_eight_mux__in3),32);
        bufp->chgIData(oldp+79,(vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_upper_eight_mux__in4),32);
        bufp->chgIData(oldp+80,(vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_upper_eight_mux__in5),32);
        bufp->chgIData(oldp+81,(vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_upper_eight_mux__in6),32);
        bufp->chgIData(oldp+82,(vlSelf->top__DOT__DUT__DOT____Vcellinp__word1_out_upper_eight_mux__in7),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+83,(vlSelf->top__DOT__all_flushed));
        bufp->chgBit(oldp+84,(vlSelf->top__DOT__tarray0_match));
        bufp->chgBit(oldp+85,(vlSelf->top__DOT__tarray1_match));
        bufp->chgBit(oldp+86,(vlSelf->top__DOT__line0_dirty));
        bufp->chgBit(oldp+87,(vlSelf->top__DOT__line1_dirty));
        bufp->chgBit(oldp+88,(vlSelf->top__DOT__line0_valid));
        bufp->chgBit(oldp+89,(vlSelf->top__DOT__line1_valid));
        bufp->chgBit(oldp+90,((1U & (vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                                     >> 0xaU))));
        bufp->chgBit(oldp+91,((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__req_word))));
        bufp->chgBit(oldp+92,((0x10U == (IData)(vlSelf->top__DOT__DUT__DOT__resp_word))));
        bufp->chgBit(oldp+93,((0U == vlSelf->top__DOT__DUT__DOT__dirty0)));
        bufp->chgIData(oldp+94,(((vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                                  << 0x1eU) | (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                                               >> 2U))),32);
        bufp->chgIData(oldp+95,(vlSelf->top__DOT__DUT__DOT__incoming_msg[0U]),32);
        bufp->chgWData(oldp+96,(vlSelf->top__DOT__DUT__DOT__incoming_msg),77);
        bufp->chgIData(oldp+99,((0x1fffffU & ((vlSelf->top__DOT__DUT__DOT__incoming_msg[2U] 
                                               << 0x13U) 
                                              | (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                                                 >> 0xdU)))),21);
        bufp->chgCData(oldp+100,((0x1fU & (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                                           >> 8U))),5);
        bufp->chgCData(oldp+101,((0xfU & (vlSelf->top__DOT__DUT__DOT__incoming_msg[1U] 
                                          >> 4U))),4);
        bufp->chgIData(oldp+102,(vlSelf->top__DOT__DUT__DOT__tag0[0]),21);
        bufp->chgIData(oldp+103,(vlSelf->top__DOT__DUT__DOT__tag0[1]),21);
        bufp->chgIData(oldp+104,(vlSelf->top__DOT__DUT__DOT__tag0[2]),21);
        bufp->chgIData(oldp+105,(vlSelf->top__DOT__DUT__DOT__tag0[3]),21);
        bufp->chgIData(oldp+106,(vlSelf->top__DOT__DUT__DOT__tag0[4]),21);
        bufp->chgIData(oldp+107,(vlSelf->top__DOT__DUT__DOT__tag0[5]),21);
        bufp->chgIData(oldp+108,(vlSelf->top__DOT__DUT__DOT__tag0[6]),21);
        bufp->chgIData(oldp+109,(vlSelf->top__DOT__DUT__DOT__tag0[7]),21);
        bufp->chgIData(oldp+110,(vlSelf->top__DOT__DUT__DOT__tag0[8]),21);
        bufp->chgIData(oldp+111,(vlSelf->top__DOT__DUT__DOT__tag0[9]),21);
        bufp->chgIData(oldp+112,(vlSelf->top__DOT__DUT__DOT__tag0[10]),21);
        bufp->chgIData(oldp+113,(vlSelf->top__DOT__DUT__DOT__tag0[11]),21);
        bufp->chgIData(oldp+114,(vlSelf->top__DOT__DUT__DOT__tag0[12]),21);
        bufp->chgIData(oldp+115,(vlSelf->top__DOT__DUT__DOT__tag0[13]),21);
        bufp->chgIData(oldp+116,(vlSelf->top__DOT__DUT__DOT__tag0[14]),21);
        bufp->chgIData(oldp+117,(vlSelf->top__DOT__DUT__DOT__tag0[15]),21);
        bufp->chgIData(oldp+118,(vlSelf->top__DOT__DUT__DOT__tag0[16]),21);
        bufp->chgIData(oldp+119,(vlSelf->top__DOT__DUT__DOT__tag0[17]),21);
        bufp->chgIData(oldp+120,(vlSelf->top__DOT__DUT__DOT__tag0[18]),21);
        bufp->chgIData(oldp+121,(vlSelf->top__DOT__DUT__DOT__tag0[19]),21);
        bufp->chgIData(oldp+122,(vlSelf->top__DOT__DUT__DOT__tag0[20]),21);
        bufp->chgIData(oldp+123,(vlSelf->top__DOT__DUT__DOT__tag0[21]),21);
        bufp->chgIData(oldp+124,(vlSelf->top__DOT__DUT__DOT__tag0[22]),21);
        bufp->chgIData(oldp+125,(vlSelf->top__DOT__DUT__DOT__tag0[23]),21);
        bufp->chgIData(oldp+126,(vlSelf->top__DOT__DUT__DOT__tag0[24]),21);
        bufp->chgIData(oldp+127,(vlSelf->top__DOT__DUT__DOT__tag0[25]),21);
        bufp->chgIData(oldp+128,(vlSelf->top__DOT__DUT__DOT__tag0[26]),21);
        bufp->chgIData(oldp+129,(vlSelf->top__DOT__DUT__DOT__tag0[27]),21);
        bufp->chgIData(oldp+130,(vlSelf->top__DOT__DUT__DOT__tag0[28]),21);
        bufp->chgIData(oldp+131,(vlSelf->top__DOT__DUT__DOT__tag0[29]),21);
        bufp->chgIData(oldp+132,(vlSelf->top__DOT__DUT__DOT__tag0[30]),21);
        bufp->chgIData(oldp+133,(vlSelf->top__DOT__DUT__DOT__tag0[31]),21);
        bufp->chgIData(oldp+134,(vlSelf->top__DOT__DUT__DOT__tag1[0]),21);
        bufp->chgIData(oldp+135,(vlSelf->top__DOT__DUT__DOT__tag1[1]),21);
        bufp->chgIData(oldp+136,(vlSelf->top__DOT__DUT__DOT__tag1[2]),21);
        bufp->chgIData(oldp+137,(vlSelf->top__DOT__DUT__DOT__tag1[3]),21);
        bufp->chgIData(oldp+138,(vlSelf->top__DOT__DUT__DOT__tag1[4]),21);
        bufp->chgIData(oldp+139,(vlSelf->top__DOT__DUT__DOT__tag1[5]),21);
        bufp->chgIData(oldp+140,(vlSelf->top__DOT__DUT__DOT__tag1[6]),21);
        bufp->chgIData(oldp+141,(vlSelf->top__DOT__DUT__DOT__tag1[7]),21);
        bufp->chgIData(oldp+142,(vlSelf->top__DOT__DUT__DOT__tag1[8]),21);
        bufp->chgIData(oldp+143,(vlSelf->top__DOT__DUT__DOT__tag1[9]),21);
        bufp->chgIData(oldp+144,(vlSelf->top__DOT__DUT__DOT__tag1[10]),21);
        bufp->chgIData(oldp+145,(vlSelf->top__DOT__DUT__DOT__tag1[11]),21);
        bufp->chgIData(oldp+146,(vlSelf->top__DOT__DUT__DOT__tag1[12]),21);
        bufp->chgIData(oldp+147,(vlSelf->top__DOT__DUT__DOT__tag1[13]),21);
        bufp->chgIData(oldp+148,(vlSelf->top__DOT__DUT__DOT__tag1[14]),21);
        bufp->chgIData(oldp+149,(vlSelf->top__DOT__DUT__DOT__tag1[15]),21);
        bufp->chgIData(oldp+150,(vlSelf->top__DOT__DUT__DOT__tag1[16]),21);
        bufp->chgIData(oldp+151,(vlSelf->top__DOT__DUT__DOT__tag1[17]),21);
        bufp->chgIData(oldp+152,(vlSelf->top__DOT__DUT__DOT__tag1[18]),21);
        bufp->chgIData(oldp+153,(vlSelf->top__DOT__DUT__DOT__tag1[19]),21);
        bufp->chgIData(oldp+154,(vlSelf->top__DOT__DUT__DOT__tag1[20]),21);
        bufp->chgIData(oldp+155,(vlSelf->top__DOT__DUT__DOT__tag1[21]),21);
        bufp->chgIData(oldp+156,(vlSelf->top__DOT__DUT__DOT__tag1[22]),21);
        bufp->chgIData(oldp+157,(vlSelf->top__DOT__DUT__DOT__tag1[23]),21);
        bufp->chgIData(oldp+158,(vlSelf->top__DOT__DUT__DOT__tag1[24]),21);
        bufp->chgIData(oldp+159,(vlSelf->top__DOT__DUT__DOT__tag1[25]),21);
        bufp->chgIData(oldp+160,(vlSelf->top__DOT__DUT__DOT__tag1[26]),21);
        bufp->chgIData(oldp+161,(vlSelf->top__DOT__DUT__DOT__tag1[27]),21);
        bufp->chgIData(oldp+162,(vlSelf->top__DOT__DUT__DOT__tag1[28]),21);
        bufp->chgIData(oldp+163,(vlSelf->top__DOT__DUT__DOT__tag1[29]),21);
        bufp->chgIData(oldp+164,(vlSelf->top__DOT__DUT__DOT__tag1[30]),21);
        bufp->chgIData(oldp+165,(vlSelf->top__DOT__DUT__DOT__tag1[31]),21);
        bufp->chgCData(oldp+166,(vlSelf->top__DOT__DUT__DOT__flush_index),5);
        bufp->chgCData(oldp+167,((0x1fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__DUT__DOT__req_word)))),5);
        bufp->chgCData(oldp+168,(vlSelf->top__DOT__DUT__DOT__req_word),5);
        bufp->chgCData(oldp+169,((0x1fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__DUT__DOT__resp_word)))),5);
        bufp->chgCData(oldp+170,(vlSelf->top__DOT__DUT__DOT__resp_word),5);
        bufp->chgIData(oldp+171,(vlSelf->top__DOT__DUT__DOT__dirty0),32);
        bufp->chgIData(oldp+172,(vlSelf->top__DOT__DUT__DOT__dirty1),32);
        bufp->chgIData(oldp+173,(vlSelf->top__DOT__DUT__DOT__valid0),32);
        bufp->chgIData(oldp+174,(vlSelf->top__DOT__DUT__DOT__valid1),32);
        bufp->chgBit(oldp+175,((0U == vlSelf->top__DOT__DUT__DOT__dirty1)));
        bufp->chgCData(oldp+176,(vlSelf->top__DOT__DUT__DOT__flush0_index),5);
        bufp->chgCData(oldp+177,(vlSelf->top__DOT__DUT__DOT__flush1_index),5);
        bufp->chgCData(oldp+178,((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT__req_word))),4);
        bufp->chgCData(oldp+179,((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT__resp_word))),4);
    }
    bufp->chgBit(oldp+180,(vlSelf->clk));
    bufp->chgBit(oldp+181,(vlSelf->linetrace));
    bufp->chgBit(oldp+182,(vlSelf->top__DOT__reset));
    bufp->chgIData(oldp+183,(vlSelf->top__DOT__unnamedblk1__DOT__i),32);
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
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
