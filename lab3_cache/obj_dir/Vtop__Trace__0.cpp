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
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__idx),32);
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+6,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+8,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+12,(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__sink__DOT__sink__DOT__t),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgWData(oldp+17,(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+145,(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+146,(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+274,(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+275,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+403,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+404,(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+532,(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+533,(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+661,(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__level),4);
        bufp->chgCData(oldp+662,(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+663,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+791,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+792,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+920,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+921,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+1049,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+1050,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+1178,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+1179,(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+1307,(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+1308,(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+1436,(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+1437,(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+1565,(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+1566,(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+1694,(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+1695,(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+1823,(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+1824,(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+1952,(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__level),4);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+1953,(vlSelf->top__DOT__reset));
        bufp->chgBit(oldp+1954,(vlSelf->top__DOT__mem_clear));
        bufp->chgIData(oldp+1955,(vlSelf->top__DOT__mem__DOT__mem__DOT__data_address),32);
        bufp->chgSData(oldp+1956,(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr),12);
        bufp->chgCData(oldp+1957,(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset),2);
        bufp->chgIData(oldp+1958,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[0]),32);
        bufp->chgIData(oldp+1959,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[1]),32);
        bufp->chgIData(oldp+1960,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[2]),32);
        bufp->chgIData(oldp+1961,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[3]),32);
        bufp->chgIData(oldp+1962,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[4]),32);
        bufp->chgIData(oldp+1963,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[5]),32);
        bufp->chgIData(oldp+1964,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[6]),32);
        bufp->chgIData(oldp+1965,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[7]),32);
        bufp->chgIData(oldp+1966,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[8]),32);
        bufp->chgIData(oldp+1967,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[9]),32);
        bufp->chgCData(oldp+1968,(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max),4);
        bufp->chgIData(oldp+1969,(vlSelf->top__DOT__sink__DOT__sink__DOT__data_data),32);
        bufp->chgIData(oldp+1970,(vlSelf->top__DOT__sink__DOT__sink__DOT__load__Vstatic__unnamedblk1__DOT__count),32);
        bufp->chgIData(oldp+1971,(vlSelf->top__DOT__src__DOT__src__DOT__m[0]),32);
        bufp->chgIData(oldp+1972,(vlSelf->top__DOT__src__DOT__src__DOT__m[1]),32);
        bufp->chgIData(oldp+1973,(vlSelf->top__DOT__src__DOT__src__DOT__m[2]),32);
        bufp->chgIData(oldp+1974,(vlSelf->top__DOT__src__DOT__src__DOT__m[3]),32);
        bufp->chgIData(oldp+1975,(vlSelf->top__DOT__src__DOT__src__DOT__m[4]),32);
        bufp->chgIData(oldp+1976,(vlSelf->top__DOT__src__DOT__src__DOT__m[5]),32);
        bufp->chgIData(oldp+1977,(vlSelf->top__DOT__src__DOT__src__DOT__m[6]),32);
        bufp->chgIData(oldp+1978,(vlSelf->top__DOT__src__DOT__src__DOT__m[7]),32);
        bufp->chgIData(oldp+1979,(vlSelf->top__DOT__src__DOT__src__DOT__m[8]),32);
        bufp->chgIData(oldp+1980,(vlSelf->top__DOT__src__DOT__src__DOT__m[9]),32);
        bufp->chgCData(oldp+1981,(vlSelf->top__DOT__src__DOT__src__DOT__index_max),4);
        bufp->chgIData(oldp+1982,(vlSelf->top__DOT__src__DOT__src__DOT__data_data),32);
        bufp->chgIData(oldp+1983,(vlSelf->top__DOT__src__DOT__src__DOT__load__Vstatic__unnamedblk1__DOT__count),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgWData(oldp+1984,(vlSelf->top__DOT__DUT__DOT__str),4096);
        bufp->chgWData(oldp+2112,(vlSelf->top__DOT__DUT__DOT__temp),4096);
        bufp->chgIData(oldp+2240,(vlSelf->top__DOT__DUT__DOT__idx0),32);
        bufp->chgIData(oldp+2241,(vlSelf->top__DOT__DUT__DOT__idx1),32);
        bufp->chgIData(oldp+2242,(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str),24);
        bufp->chgIData(oldp+2243,(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str),24);
        bufp->chgIData(oldp+2244,(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str),24);
        bufp->chgWData(oldp+2245,(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str),72);
        bufp->chgSData(oldp+2248,(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str),16);
        bufp->chgCData(oldp+2249,(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1),5);
        bufp->chgCData(oldp+2250,(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2),5);
        bufp->chgCData(oldp+2251,(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd),5);
        bufp->chgSData(oldp+2252,(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr),12);
        bufp->chgCData(oldp+2253,(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct),7);
        bufp->chgIData(oldp+2254,(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0),32);
        bufp->chgIData(oldp+2255,(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1),32);
        bufp->chgIData(oldp+2256,(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0),32);
        bufp->chgIData(oldp+2257,(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1),32);
        bufp->chgWData(oldp+2258,(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage),4096);
        bufp->chgIData(oldp+2386,(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__cycles_next),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[9U]))) {
        bufp->chgBit(oldp+2387,(vlSelf->top__DOT__proc2mngr_rdy));
        bufp->chgBit(oldp+2388,(vlSelf->top__DOT__snk_done));
        bufp->chgIData(oldp+2389,(vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i),32);
        bufp->chgIData(oldp+2390,(vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i),32);
        bufp->chgBit(oldp+2391,(vlSelf->top__DOT__sink__DOT__sink_rdy));
        bufp->chgBit(oldp+2392,(vlSelf->top__DOT__src__DOT__src__DOT__done_next));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[0xdU]))) {
        bufp->chgBit(oldp+2393,(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en));
        bufp->chgBit(oldp+2394,(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
        bufp->chgBit(oldp+2395,(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq));
        bufp->chgBit(oldp+2396,(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass));
        bufp->chgBit(oldp+2397,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en));
        bufp->chgBit(oldp+2398,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay));
        bufp->chgBit(oldp+2399,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next));
        bufp->chgBit(oldp+2400,(vlSelf->top__DOT__sink__DOT__sink__DOT__index_en));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[5U] 
                     | vlSelf->__Vm_traceActivity[0xaU]))) {
        bufp->chgWData(oldp+2401,(vlSelf->top__DOT__cache1_req_msg),77);
        bufp->chgIData(oldp+2404,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_data_out),32);
        bufp->chgBit(oldp+2405,(vlSelf->top__DOT__cache__DOT__dcache__DOT__way_select));
        bufp->chgIData(oldp+2406,((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem 
                                   >> 0xbU)),21);
        bufp->chgIData(oldp+2407,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__way_data_out),32);
        bufp->chgIData(oldp+2408,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_addr_mem),32);
        bufp->chgIData(oldp+2409,((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem 
                                   >> 0xbU)),21);
        bufp->chgIData(oldp+2410,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_addr_mem),32);
        bufp->chgWData(oldp+2411,(vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg),77);
        bufp->chgIData(oldp+2414,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr),32);
        bufp->chgIData(oldp+2415,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr),32);
        bufp->chgIData(oldp+2416,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[5U] 
                     | vlSelf->__Vm_traceActivity[0xcU]))) {
        bufp->chgBit(oldp+2417,(vlSelf->top__DOT__imem_reqstream_rdy));
        bufp->chgBit(oldp+2418,(vlSelf->top__DOT__imem_respstream_rdy));
        bufp->chgQData(oldp+2419,(vlSelf->top__DOT__dmem_respstream_msg),47);
        bufp->chgBit(oldp+2421,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F));
        bufp->chgBit(oldp+2422,(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_val));
        bufp->chgBit(oldp+2423,(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_rdy));
        bufp->chgBit(oldp+2424,(vlSelf->top__DOT__DUT__DOT__reg_en_F));
        bufp->chgBit(oldp+2425,(vlSelf->top__DOT__DUT__DOT__reg_en_D));
        bufp->chgBit(oldp+2426,(vlSelf->top__DOT__DUT__DOT__imul_istream_val_D));
        bufp->chgBit(oldp+2427,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_F));
        bufp->chgBit(oldp+2428,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_D));
        bufp->chgBit(oldp+2429,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_F));
        bufp->chgBit(oldp+2430,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_D));
        bufp->chgBit(oldp+2431,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__osquash_D));
        bufp->chgBit(oldp+2432,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_F_imem));
        bufp->chgBit(oldp+2433,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_F));
        bufp->chgBit(oldp+2434,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_mngr2proc_D));
        bufp->chgBit(oldp+2435,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_D_imul));
        bufp->chgBit(oldp+2436,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_D_imul));
        bufp->chgBit(oldp+2437,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_D));
        bufp->chgIData(oldp+2438,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M),32);
        bufp->chgIData(oldp+2439,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D),32);
        bufp->chgIData(oldp+2440,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D),32);
        bufp->chgIData(oldp+2441,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D),32);
        bufp->chgIData(oldp+2442,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D),32);
        bufp->chgIData(oldp+2443,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D),32);
        bufp->chgQData(oldp+2444,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_istream_msg_D),64);
        bufp->chgCData(oldp+2446,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__nextState),2);
        bufp->chgIData(oldp+2447,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_mux_out),32);
        bufp->chgIData(oldp+2448,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_mux_out),32);
        bufp->chgBit(oldp+2449,(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__next_state));
        bufp->chgBit(oldp+2450,(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__istream_go));
        bufp->chgBit(oldp+2451,(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__set_way0));
        bufp->chgBit(oldp+2452,(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__set_way1));
        bufp->chgBit(oldp+2453,(vlSelf->top__DOT__cache__DOT__icache__DOT__input_en));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[5U] 
                     | vlSelf->__Vm_traceActivity[0xfU]))) {
        bufp->chgWData(oldp+2454,(vlSelf->top__DOT__cache0_req_msg),77);
        bufp->chgWData(oldp+2457,(vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg),77);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[6U] 
                     | vlSelf->__Vm_traceActivity[0xeU]))) {
        bufp->chgBit(oldp+2460,(vlSelf->top__DOT__imem_reqstream_val));
        bufp->chgBit(oldp+2461,(vlSelf->top__DOT__DUT__DOT__imem_reqstream_enq_val));
        bufp->chgBit(oldp+2462,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__write_en));
        bufp->chgBit(oldp+2463,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next));
        bufp->chgBit(oldp+2464,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next));
        bufp->chgBit(oldp+2465,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
        bufp->chgBit(oldp+2466,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
        bufp->chgBit(oldp+2467,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq));
        bufp->chgBit(oldp+2468,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass));
        bufp->chgCData(oldp+2469,(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__nextState),3);
        bufp->chgCData(oldp+2470,(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__nextState),3);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgBit(oldp+2471,(vlSelf->top__DOT__imem_respstream_val));
        bufp->chgBit(oldp+2472,(vlSelf->top__DOT__dmem_respstream_val));
        bufp->chgBit(oldp+2473,(vlSelf->top__DOT__cache0_req_val));
        bufp->chgBit(oldp+2474,(vlSelf->top__DOT__cache0_req_rdy));
        bufp->chgQData(oldp+2475,(vlSelf->top__DOT__cache0_resp_msg),47);
        bufp->chgBit(oldp+2477,(vlSelf->top__DOT__cache0_resp_val));
        bufp->chgBit(oldp+2478,(vlSelf->top__DOT__cache0_resp_rdy));
        bufp->chgBit(oldp+2479,(vlSelf->top__DOT__cache1_req_val));
        bufp->chgBit(oldp+2480,(vlSelf->top__DOT__cache1_req_rdy));
        bufp->chgQData(oldp+2481,(vlSelf->top__DOT__cache1_resp_msg),47);
        bufp->chgBit(oldp+2483,(vlSelf->top__DOT__cache1_resp_val));
        bufp->chgBit(oldp+2484,(vlSelf->top__DOT__cache1_resp_rdy));
        bufp->chgBit(oldp+2485,(vlSelf->top__DOT__src_done));
        bufp->chgBit(oldp+2486,(vlSelf->top__DOT__flush_done));
        bufp->chgBit(oldp+2487,(vlSelf->top__DOT__cache__DOT__flush_done1));
        bufp->chgBit(oldp+2488,(vlSelf->top__DOT__cache__DOT__flush_done2));
        bufp->chgBit(oldp+2489,(vlSelf->top__DOT__cache__DOT__dcache__DOT__tarray0_match));
        bufp->chgBit(oldp+2490,(vlSelf->top__DOT__cache__DOT__dcache__DOT__tarray1_match));
        bufp->chgBit(oldp+2491,(vlSelf->top__DOT__cache__DOT__dcache__DOT__line0_dirty));
        bufp->chgBit(oldp+2492,(vlSelf->top__DOT__cache__DOT__dcache__DOT__line1_dirty));
        bufp->chgBit(oldp+2493,(vlSelf->top__DOT__cache__DOT__dcache__DOT__line0_valid));
        bufp->chgBit(oldp+2494,(vlSelf->top__DOT__cache__DOT__dcache__DOT__line1_valid));
        bufp->chgBit(oldp+2495,(vlSelf->top__DOT__cache__DOT__dcache__DOT__mem_action));
        bufp->chgBit(oldp+2496,(vlSelf->top__DOT__cache__DOT__dcache__DOT__all_flushed));
        bufp->chgBit(oldp+2497,((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[2U] 
                                       >> 0xaU))));
        bufp->chgBit(oldp+2498,((0x10U == (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_word))));
        bufp->chgBit(oldp+2499,((0x10U == (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__resp_word))));
        bufp->chgBit(oldp+2500,((0U == vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0)));
        bufp->chgBit(oldp+2501,(vlSelf->top__DOT__cache__DOT__dcache__DOT__tarray_en));
        bufp->chgBit(oldp+2502,(vlSelf->top__DOT__cache__DOT__dcache__DOT__tarray_wen));
        bufp->chgBit(oldp+2503,(vlSelf->top__DOT__cache__DOT__dcache__DOT__req_count_en));
        bufp->chgBit(oldp+2504,(vlSelf->top__DOT__cache__DOT__dcache__DOT__resp_count_en));
        bufp->chgBit(oldp+2505,(vlSelf->top__DOT__cache__DOT__dcache__DOT__count_reset));
        bufp->chgBit(oldp+2506,(vlSelf->top__DOT__cache__DOT__dcache__DOT__write_data_sel));
        bufp->chgBit(oldp+2507,(vlSelf->top__DOT__cache__DOT__dcache__DOT__darray_en));
        bufp->chgBit(oldp+2508,(vlSelf->top__DOT__cache__DOT__dcache__DOT__darray_wen));
        bufp->chgBit(oldp+2509,(vlSelf->top__DOT__cache__DOT__dcache__DOT__index_sel));
        bufp->chgBit(oldp+2510,(vlSelf->top__DOT__cache__DOT__dcache__DOT__write_word_sel));
        bufp->chgBit(oldp+2511,(vlSelf->top__DOT__cache__DOT__dcache__DOT__read_word_sel));
        bufp->chgBit(oldp+2512,(vlSelf->top__DOT__cache__DOT__dcache__DOT__clean_set));
        bufp->chgBit(oldp+2513,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dirty_set));
        bufp->chgBit(oldp+2514,(vlSelf->top__DOT__cache__DOT__dcache__DOT__valid_set));
        bufp->chgCData(oldp+2515,(vlSelf->top__DOT__cache__DOT__dcache__DOT__state),3);
        bufp->chgBit(oldp+2516,(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__hit));
        bufp->chgBit(oldp+2517,(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__hit_write));
        bufp->chgBit(oldp+2518,(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__counts_done));
        bufp->chgBit(oldp+2519,(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__inc_req_not_done));
        bufp->chgBit(oldp+2520,(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__inc_resp_not_done));
        bufp->chgBit(oldp+2521,(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__int_not_flush_done));
        bufp->chgBit(oldp+2522,(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__lru));
        bufp->chgIData(oldp+2523,(((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[2U] 
                                    << 0x1eU) | (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                                                 >> 2U))),32);
        bufp->chgIData(oldp+2524,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[0U]),32);
        bufp->chgWData(oldp+2525,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg),77);
        bufp->chgIData(oldp+2528,((0x1fffffU & ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[2U] 
                                                 << 0x13U) 
                                                | (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                                                   >> 0xdU)))),21);
        bufp->chgCData(oldp+2529,((0x1fU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                                            >> 8U))),5);
        bufp->chgCData(oldp+2530,((0xfU & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__incoming_msg[1U] 
                                           >> 4U))),4);
        bufp->chgIData(oldp+2531,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag0[0]),21);
        bufp->chgIData(oldp+2532,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag0[1]),21);
        bufp->chgIData(oldp+2533,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag0[2]),21);
        bufp->chgIData(oldp+2534,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag0[3]),21);
        bufp->chgIData(oldp+2535,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag0[4]),21);
        bufp->chgIData(oldp+2536,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag0[5]),21);
        bufp->chgIData(oldp+2537,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag0[6]),21);
        bufp->chgIData(oldp+2538,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag0[7]),21);
        bufp->chgIData(oldp+2539,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag0[8]),21);
        bufp->chgIData(oldp+2540,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag0[9]),21);
        bufp->chgIData(oldp+2541,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag0[10]),21);
        bufp->chgIData(oldp+2542,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag0[11]),21);
        bufp->chgIData(oldp+2543,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag0[12]),21);
        bufp->chgIData(oldp+2544,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag0[13]),21);
        bufp->chgIData(oldp+2545,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag0[14]),21);
        bufp->chgIData(oldp+2546,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag0[15]),21);
        bufp->chgIData(oldp+2547,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag0[16]),21);
        bufp->chgIData(oldp+2548,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag0[17]),21);
        bufp->chgIData(oldp+2549,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag0[18]),21);
        bufp->chgIData(oldp+2550,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag0[19]),21);
        bufp->chgIData(oldp+2551,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag0[20]),21);
        bufp->chgIData(oldp+2552,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag0[21]),21);
        bufp->chgIData(oldp+2553,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag0[22]),21);
        bufp->chgIData(oldp+2554,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag0[23]),21);
        bufp->chgIData(oldp+2555,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag0[24]),21);
        bufp->chgIData(oldp+2556,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag0[25]),21);
        bufp->chgIData(oldp+2557,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag0[26]),21);
        bufp->chgIData(oldp+2558,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag0[27]),21);
        bufp->chgIData(oldp+2559,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag0[28]),21);
        bufp->chgIData(oldp+2560,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag0[29]),21);
        bufp->chgIData(oldp+2561,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag0[30]),21);
        bufp->chgIData(oldp+2562,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag0[31]),21);
        bufp->chgIData(oldp+2563,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag1[0]),21);
        bufp->chgIData(oldp+2564,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag1[1]),21);
        bufp->chgIData(oldp+2565,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag1[2]),21);
        bufp->chgIData(oldp+2566,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag1[3]),21);
        bufp->chgIData(oldp+2567,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag1[4]),21);
        bufp->chgIData(oldp+2568,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag1[5]),21);
        bufp->chgIData(oldp+2569,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag1[6]),21);
        bufp->chgIData(oldp+2570,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag1[7]),21);
        bufp->chgIData(oldp+2571,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag1[8]),21);
        bufp->chgIData(oldp+2572,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag1[9]),21);
        bufp->chgIData(oldp+2573,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag1[10]),21);
        bufp->chgIData(oldp+2574,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag1[11]),21);
        bufp->chgIData(oldp+2575,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag1[12]),21);
        bufp->chgIData(oldp+2576,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag1[13]),21);
        bufp->chgIData(oldp+2577,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag1[14]),21);
        bufp->chgIData(oldp+2578,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag1[15]),21);
        bufp->chgIData(oldp+2579,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag1[16]),21);
        bufp->chgIData(oldp+2580,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag1[17]),21);
        bufp->chgIData(oldp+2581,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag1[18]),21);
        bufp->chgIData(oldp+2582,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag1[19]),21);
        bufp->chgIData(oldp+2583,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag1[20]),21);
        bufp->chgIData(oldp+2584,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag1[21]),21);
        bufp->chgIData(oldp+2585,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag1[22]),21);
        bufp->chgIData(oldp+2586,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag1[23]),21);
        bufp->chgIData(oldp+2587,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag1[24]),21);
        bufp->chgIData(oldp+2588,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag1[25]),21);
        bufp->chgIData(oldp+2589,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag1[26]),21);
        bufp->chgIData(oldp+2590,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag1[27]),21);
        bufp->chgIData(oldp+2591,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag1[28]),21);
        bufp->chgIData(oldp+2592,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag1[29]),21);
        bufp->chgIData(oldp+2593,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag1[30]),21);
        bufp->chgIData(oldp+2594,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__tag1[31]),21);
        bufp->chgCData(oldp+2595,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__d_index),5);
        bufp->chgCData(oldp+2596,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_word_offset),4);
        bufp->chgIData(oldp+2597,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_data),32);
        bufp->chgCData(oldp+2598,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__flush_index),5);
        bufp->chgCData(oldp+2599,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__read_word_offset),4);
        bufp->chgIData(oldp+2600,(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data),32);
        bufp->chgIData(oldp+2601,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_lower),32);
        bufp->chgIData(oldp+2602,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word0_out_upper),32);
        bufp->chgIData(oldp+2603,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data0_word_mux_out),32);
        bufp->chgIData(oldp+2604,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_lower),32);
        bufp->chgIData(oldp+2605,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__word1_out_upper),32);
        bufp->chgIData(oldp+2606,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data1_word_mux_out),32);
        bufp->chgCData(oldp+2607,((0x1fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_word)))),5);
        bufp->chgCData(oldp+2608,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_word),5);
        bufp->chgCData(oldp+2609,((0x1fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__resp_word)))),5);
        bufp->chgCData(oldp+2610,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__resp_word),5);
        bufp->chgIData(oldp+2611,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty0),32);
        bufp->chgIData(oldp+2612,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1),32);
        bufp->chgIData(oldp+2613,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid0),32);
        bufp->chgIData(oldp+2614,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__valid1),32);
        bufp->chgBit(oldp+2615,((0U == vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__dirty1)));
        bufp->chgCData(oldp+2616,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__flush0_index),5);
        bufp->chgCData(oldp+2617,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__flush1_index),5);
        bufp->chgCData(oldp+2618,((0xfU & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__req_word))),4);
        bufp->chgBit(oldp+2619,((1U & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__read_word_offset) 
                                       >> 3U))));
        bufp->chgIData(oldp+2620,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in0),32);
        bufp->chgIData(oldp+2621,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in1),32);
        bufp->chgIData(oldp+2622,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in2),32);
        bufp->chgIData(oldp+2623,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in3),32);
        bufp->chgIData(oldp+2624,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in4),32);
        bufp->chgIData(oldp+2625,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in5),32);
        bufp->chgIData(oldp+2626,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in6),32);
        bufp->chgIData(oldp+2627,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_lower_eight_mux__in7),32);
        bufp->chgCData(oldp+2628,((7U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__read_word_offset))),3);
        bufp->chgIData(oldp+2629,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in0),32);
        bufp->chgIData(oldp+2630,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in1),32);
        bufp->chgIData(oldp+2631,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in2),32);
        bufp->chgIData(oldp+2632,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in3),32);
        bufp->chgIData(oldp+2633,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in4),32);
        bufp->chgIData(oldp+2634,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in5),32);
        bufp->chgIData(oldp+2635,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in6),32);
        bufp->chgIData(oldp+2636,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word0_out_upper_eight_mux__in7),32);
        bufp->chgIData(oldp+2637,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in0),32);
        bufp->chgIData(oldp+2638,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in1),32);
        bufp->chgIData(oldp+2639,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in2),32);
        bufp->chgIData(oldp+2640,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in3),32);
        bufp->chgIData(oldp+2641,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in4),32);
        bufp->chgIData(oldp+2642,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in5),32);
        bufp->chgIData(oldp+2643,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in6),32);
        bufp->chgIData(oldp+2644,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_lower_eight_mux__in7),32);
        bufp->chgIData(oldp+2645,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in0),32);
        bufp->chgIData(oldp+2646,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in1),32);
        bufp->chgIData(oldp+2647,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in2),32);
        bufp->chgIData(oldp+2648,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in3),32);
        bufp->chgIData(oldp+2649,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in4),32);
        bufp->chgIData(oldp+2650,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in5),32);
        bufp->chgIData(oldp+2651,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in6),32);
        bufp->chgIData(oldp+2652,(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vcellinp__word1_out_upper_eight_mux__in7),32);
        bufp->chgCData(oldp+2653,((0xfU & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__resp_word))),4);
        bufp->chgBit(oldp+2654,(vlSelf->top__DOT__cache__DOT__icache__DOT__tarray_match));
        bufp->chgBit(oldp+2655,(vlSelf->top__DOT__cache__DOT__icache__DOT__line_dirty));
        bufp->chgBit(oldp+2656,(vlSelf->top__DOT__cache__DOT__icache__DOT__line_valid));
        bufp->chgBit(oldp+2657,(vlSelf->top__DOT__cache__DOT__icache__DOT__mem_action));
        bufp->chgBit(oldp+2658,((0U == vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty)));
        bufp->chgBit(oldp+2659,((1U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__incoming_msg[2U] 
                                       >> 0xaU))));
        bufp->chgBit(oldp+2660,((0x10U == (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_word))));
        bufp->chgBit(oldp+2661,((0x10U == (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__resp_word))));
        bufp->chgBit(oldp+2662,(vlSelf->top__DOT__cache__DOT__icache__DOT__tarray_en));
        bufp->chgBit(oldp+2663,(vlSelf->top__DOT__cache__DOT__icache__DOT__tarray_wen));
        bufp->chgBit(oldp+2664,(vlSelf->top__DOT__cache__DOT__icache__DOT__req_count_en));
        bufp->chgBit(oldp+2665,(vlSelf->top__DOT__cache__DOT__icache__DOT__resp_count_en));
        bufp->chgBit(oldp+2666,(vlSelf->top__DOT__cache__DOT__icache__DOT__count_reset));
        bufp->chgBit(oldp+2667,(vlSelf->top__DOT__cache__DOT__icache__DOT__write_data_sel));
        bufp->chgBit(oldp+2668,(vlSelf->top__DOT__cache__DOT__icache__DOT__darray_en));
        bufp->chgBit(oldp+2669,(vlSelf->top__DOT__cache__DOT__icache__DOT__darray_wen));
        bufp->chgBit(oldp+2670,(vlSelf->top__DOT__cache__DOT__icache__DOT__index_sel));
        bufp->chgBit(oldp+2671,(vlSelf->top__DOT__cache__DOT__icache__DOT__clean_set));
        bufp->chgBit(oldp+2672,(vlSelf->top__DOT__cache__DOT__icache__DOT__dirty_set));
        bufp->chgBit(oldp+2673,(vlSelf->top__DOT__cache__DOT__icache__DOT__valid_set));
        bufp->chgCData(oldp+2674,(vlSelf->top__DOT__cache__DOT__icache__DOT__state),3);
        bufp->chgBit(oldp+2675,(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__hit));
        bufp->chgBit(oldp+2676,(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__hit_write));
        bufp->chgBit(oldp+2677,(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__counts_done));
        bufp->chgBit(oldp+2678,(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__inc_req_not_done));
        bufp->chgBit(oldp+2679,(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__inc_resp_not_done));
        bufp->chgBit(oldp+2680,(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__int_not_flush_done));
        bufp->chgIData(oldp+2681,(((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__incoming_msg[2U] 
                                    << 0x1eU) | (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__incoming_msg[1U] 
                                                 >> 2U))),32);
        bufp->chgIData(oldp+2682,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__incoming_msg[0U]),32);
        bufp->chgWData(oldp+2683,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__incoming_msg),77);
        bufp->chgIData(oldp+2686,((0x1fffffU & ((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__incoming_msg[2U] 
                                                 << 0x13U) 
                                                | (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__incoming_msg[1U] 
                                                   >> 0xdU)))),21);
        bufp->chgCData(oldp+2687,((0x1fU & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__incoming_msg[1U] 
                                            >> 8U))),5);
        bufp->chgCData(oldp+2688,((0xfU & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__incoming_msg[1U] 
                                           >> 4U))),4);
        bufp->chgIData(oldp+2689,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag[0]),21);
        bufp->chgIData(oldp+2690,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag[1]),21);
        bufp->chgIData(oldp+2691,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag[2]),21);
        bufp->chgIData(oldp+2692,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag[3]),21);
        bufp->chgIData(oldp+2693,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag[4]),21);
        bufp->chgIData(oldp+2694,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag[5]),21);
        bufp->chgIData(oldp+2695,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag[6]),21);
        bufp->chgIData(oldp+2696,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag[7]),21);
        bufp->chgIData(oldp+2697,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag[8]),21);
        bufp->chgIData(oldp+2698,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag[9]),21);
        bufp->chgIData(oldp+2699,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag[10]),21);
        bufp->chgIData(oldp+2700,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag[11]),21);
        bufp->chgIData(oldp+2701,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag[12]),21);
        bufp->chgIData(oldp+2702,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag[13]),21);
        bufp->chgIData(oldp+2703,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag[14]),21);
        bufp->chgIData(oldp+2704,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag[15]),21);
        bufp->chgIData(oldp+2705,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag[16]),21);
        bufp->chgIData(oldp+2706,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag[17]),21);
        bufp->chgIData(oldp+2707,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag[18]),21);
        bufp->chgIData(oldp+2708,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag[19]),21);
        bufp->chgIData(oldp+2709,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag[20]),21);
        bufp->chgIData(oldp+2710,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag[21]),21);
        bufp->chgIData(oldp+2711,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag[22]),21);
        bufp->chgIData(oldp+2712,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag[23]),21);
        bufp->chgIData(oldp+2713,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag[24]),21);
        bufp->chgIData(oldp+2714,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag[25]),21);
        bufp->chgIData(oldp+2715,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag[26]),21);
        bufp->chgIData(oldp+2716,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag[27]),21);
        bufp->chgIData(oldp+2717,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag[28]),21);
        bufp->chgIData(oldp+2718,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag[29]),21);
        bufp->chgIData(oldp+2719,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag[30]),21);
        bufp->chgIData(oldp+2720,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__tag[31]),21);
        bufp->chgCData(oldp+2721,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__d_index),5);
        bufp->chgCData(oldp+2722,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_word_offset),4);
        bufp->chgIData(oldp+2723,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_data),32);
        bufp->chgCData(oldp+2724,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__flush_index),5);
        bufp->chgCData(oldp+2725,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_word_offset),4);
        bufp->chgIData(oldp+2726,(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data),32);
        bufp->chgIData(oldp+2727,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_lower),32);
        bufp->chgIData(oldp+2728,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__word_out_upper),32);
        bufp->chgIData(oldp+2729,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_word_mux_out),32);
        bufp->chgCData(oldp+2730,((0x1fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_word)))),5);
        bufp->chgCData(oldp+2731,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_word),5);
        bufp->chgCData(oldp+2732,((0x1fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__resp_word)))),5);
        bufp->chgCData(oldp+2733,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__resp_word),5);
        bufp->chgIData(oldp+2734,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty),32);
        bufp->chgIData(oldp+2735,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__valid),32);
        bufp->chgCData(oldp+2736,((0xfU & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__req_word))),4);
        bufp->chgBit(oldp+2737,((1U & ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_word_offset) 
                                       >> 3U))));
        bufp->chgIData(oldp+2738,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vcellinp__word_out_lower_eight_mux__in0),32);
        bufp->chgIData(oldp+2739,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vcellinp__word_out_lower_eight_mux__in1),32);
        bufp->chgIData(oldp+2740,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vcellinp__word_out_lower_eight_mux__in2),32);
        bufp->chgIData(oldp+2741,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vcellinp__word_out_lower_eight_mux__in3),32);
        bufp->chgIData(oldp+2742,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vcellinp__word_out_lower_eight_mux__in4),32);
        bufp->chgIData(oldp+2743,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vcellinp__word_out_lower_eight_mux__in5),32);
        bufp->chgIData(oldp+2744,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vcellinp__word_out_lower_eight_mux__in6),32);
        bufp->chgIData(oldp+2745,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vcellinp__word_out_lower_eight_mux__in7),32);
        bufp->chgCData(oldp+2746,((7U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_word_offset))),3);
        bufp->chgIData(oldp+2747,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vcellinp__word_out_upper_eight_mux__in0),32);
        bufp->chgIData(oldp+2748,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vcellinp__word_out_upper_eight_mux__in1),32);
        bufp->chgIData(oldp+2749,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vcellinp__word_out_upper_eight_mux__in2),32);
        bufp->chgIData(oldp+2750,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vcellinp__word_out_upper_eight_mux__in3),32);
        bufp->chgIData(oldp+2751,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vcellinp__word_out_upper_eight_mux__in4),32);
        bufp->chgIData(oldp+2752,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vcellinp__word_out_upper_eight_mux__in5),32);
        bufp->chgIData(oldp+2753,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vcellinp__word_out_upper_eight_mux__in6),32);
        bufp->chgIData(oldp+2754,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vcellinp__word_out_upper_eight_mux__in7),32);
        bufp->chgCData(oldp+2755,((0xfU & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__resp_word))),4);
        bufp->chgBit(oldp+2756,(vlSelf->top__DOT__mem__DOT__mem_memreq0_val));
        bufp->chgBit(oldp+2757,(vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy));
        bufp->chgBit(oldp+2758,(vlSelf->top__DOT__mem__DOT__mem_memreq1_val));
        bufp->chgBit(oldp+2759,(vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy));
        bufp->chgBit(oldp+2760,(vlSelf->top__DOT__mem__DOT__mem_memresp0_val));
        bufp->chgBit(oldp+2761,(vlSelf->top__DOT__mem__DOT__mem_memresp0_rdy));
        bufp->chgQData(oldp+2762,(vlSelf->top__DOT__mem__DOT__mem_memresp0_msg),47);
        bufp->chgBit(oldp+2764,(vlSelf->top__DOT__mem__DOT__mem_memresp1_val));
        bufp->chgBit(oldp+2765,(vlSelf->top__DOT__mem__DOT__mem_memresp1_rdy));
        bufp->chgQData(oldp+2766,(vlSelf->top__DOT__mem__DOT__mem_memresp1_msg),47);
        bufp->chgBit(oldp+2768,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full));
        bufp->chgBit(oldp+2769,((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
        bufp->chgWData(oldp+2770,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore),77);
        bufp->chgBit(oldp+2773,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full));
        bufp->chgBit(oldp+2774,((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
        bufp->chgWData(oldp+2775,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore),77);
        bufp->chgCData(oldp+2778,((7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                         >> 0xaU))),3);
        bufp->chgCData(oldp+2779,((0xffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                            >> 2U))),8);
        bufp->chgIData(oldp+2780,(((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                    << 0x1eU) | (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                 >> 2U))),32);
        bufp->chgCData(oldp+2781,((3U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U])),2);
        bufp->chgIData(oldp+2782,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]),32);
        bufp->chgCData(oldp+2783,((7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                         >> 0xaU))),3);
        bufp->chgCData(oldp+2784,((0xffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                            >> 2U))),8);
        bufp->chgIData(oldp+2785,(((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                    << 0x1eU) | (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                 >> 2U))),32);
        bufp->chgCData(oldp+2786,((3U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U])),2);
        bufp->chgIData(oldp+2787,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]),32);
        bufp->chgCData(oldp+2788,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_msg_len_modified_M),3);
        bufp->chgCData(oldp+2789,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_msg_len_modified_M),3);
        bufp->chgSData(oldp+2790,((0x3fffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                              >> 2U))),14);
        bufp->chgSData(oldp+2791,((0x3fffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                              >> 2U))),14);
        bufp->chgSData(oldp+2792,((0xfffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                             >> 4U))),12);
        bufp->chgCData(oldp+2793,((3U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                         >> 2U))),2);
        bufp->chgSData(oldp+2794,((0xfffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                             >> 4U))),12);
        bufp->chgCData(oldp+2795,((3U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                         >> 2U))),2);
        bufp->chgIData(oldp+2796,(vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M),32);
        bufp->chgIData(oldp+2797,(vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M),32);
        bufp->chgIData(oldp+2798,(vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M),32);
        bufp->chgIData(oldp+2799,(vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M),32);
        bufp->chgBit(oldp+2800,(vlSelf->top__DOT__mem__DOT__mem__DOT__write_en0_M));
        bufp->chgBit(oldp+2801,(vlSelf->top__DOT__mem__DOT__mem__DOT__write_en1_M));
        bufp->chgBit(oldp+2802,(vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en0_M));
        bufp->chgBit(oldp+2803,(vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en1_M));
        bufp->chgBit(oldp+2804,(vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared));
        bufp->chgQData(oldp+2805,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp),47);
        bufp->chgQData(oldp+2807,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp),47);
        bufp->chgBit(oldp+2809,((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
        bufp->chgBit(oldp+2810,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
        bufp->chgBit(oldp+2811,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
        bufp->chgBit(oldp+2812,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
        bufp->chgBit(oldp+2813,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe));
        bufp->chgCData(oldp+2814,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_),3);
        bufp->chgIData(oldp+2815,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgBit(oldp+2816,((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
        bufp->chgBit(oldp+2817,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
        bufp->chgBit(oldp+2818,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
        bufp->chgBit(oldp+2819,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
        bufp->chgBit(oldp+2820,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe));
        bufp->chgCData(oldp+2821,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_),3);
        bufp->chgIData(oldp+2822,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgBit(oldp+2823,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__write_en));
        bufp->chgBit(oldp+2824,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full));
        bufp->chgBit(oldp+2825,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
        bufp->chgBit(oldp+2826,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq));
        bufp->chgBit(oldp+2827,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass));
        bufp->chgQData(oldp+2828,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore),47);
        bufp->chgCData(oldp+2830,((7U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x2cU)))),3);
        bufp->chgCData(oldp+2831,((0xffU & (IData)(
                                                   (vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                    >> 0x24U)))),8);
        bufp->chgCData(oldp+2832,((3U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x22U)))),2);
        bufp->chgCData(oldp+2833,((3U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x20U)))),2);
        bufp->chgIData(oldp+2834,((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_msg)),32);
        bufp->chgIData(oldp+2835,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgBit(oldp+2836,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__write_en));
        bufp->chgBit(oldp+2837,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full));
        bufp->chgBit(oldp+2838,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
        bufp->chgBit(oldp+2839,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq));
        bufp->chgBit(oldp+2840,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass));
        bufp->chgQData(oldp+2841,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore),47);
        bufp->chgCData(oldp+2843,((7U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x2cU)))),3);
        bufp->chgCData(oldp+2844,((0xffU & (IData)(
                                                   (vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                    >> 0x24U)))),8);
        bufp->chgCData(oldp+2845,((3U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x22U)))),2);
        bufp->chgCData(oldp+2846,((3U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x20U)))),2);
        bufp->chgIData(oldp+2847,((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_msg)),32);
        bufp->chgIData(oldp+2848,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgIData(oldp+2849,(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__cycles),32);
        bufp->chgCData(oldp+2850,(vlSelf->top__DOT__cache__DOT__icache__DOT__mem_action),3);
        bufp->chgIData(oldp+2851,(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgCData(oldp+2852,(vlSelf->top__DOT__cache__DOT__dcache__DOT__mem_action),3);
        bufp->chgIData(oldp+2853,(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgCData(oldp+2854,(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_),3);
        bufp->chgCData(oldp+2855,(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque),8);
        bufp->chgCData(oldp+2856,(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__test),2);
        bufp->chgCData(oldp+2857,(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__len),2);
        bufp->chgIData(oldp+2858,(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgCData(oldp+2859,(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_),3);
        bufp->chgCData(oldp+2860,(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque),8);
        bufp->chgCData(oldp+2861,(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__test),2);
        bufp->chgCData(oldp+2862,(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__len),2);
        bufp->chgIData(oldp+2863,(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgIData(oldp+2864,(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num),32);
        bufp->chgBit(oldp+2865,(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en));
        bufp->chgIData(oldp+2866,(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next),32);
        bufp->chgIData(oldp+2867,(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay),32);
        bufp->chgBit(oldp+2868,(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay));
        bufp->chgBit(oldp+2869,(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next));
        bufp->chgBit(oldp+2870,(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state));
        bufp->chgIData(oldp+2871,(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num),32);
        bufp->chgBit(oldp+2872,(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en));
        bufp->chgIData(oldp+2873,(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next),32);
        bufp->chgIData(oldp+2874,(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay),32);
        bufp->chgBit(oldp+2875,(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay));
        bufp->chgBit(oldp+2876,(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next));
        bufp->chgBit(oldp+2877,(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state));
        bufp->chgIData(oldp+2878,(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num),32);
        bufp->chgBit(oldp+2879,(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_en));
        bufp->chgIData(oldp+2880,(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next),32);
        bufp->chgIData(oldp+2881,(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay),32);
        bufp->chgBit(oldp+2882,(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__zero_cycle_delay));
        bufp->chgBit(oldp+2883,(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next));
        bufp->chgBit(oldp+2884,(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state));
        bufp->chgIData(oldp+2885,(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num),32);
        bufp->chgBit(oldp+2886,(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_en));
        bufp->chgIData(oldp+2887,(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next),32);
        bufp->chgIData(oldp+2888,(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay),32);
        bufp->chgBit(oldp+2889,(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__zero_cycle_delay));
        bufp->chgBit(oldp+2890,(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state_next));
        bufp->chgBit(oldp+2891,(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state));
        bufp->chgIData(oldp+2892,(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__cycles),32);
        bufp->chgIData(oldp+2893,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num),32);
        bufp->chgIData(oldp+2894,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next),32);
        bufp->chgIData(oldp+2895,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay),32);
        bufp->chgBit(oldp+2896,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state));
        bufp->chgCData(oldp+2897,((0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)))),4);
        bufp->chgCData(oldp+2898,(vlSelf->top__DOT__sink__DOT__sink__DOT__index),4);
        bufp->chgBit(oldp+2899,(vlSelf->top__DOT__src__DOT__src__DOT__reset_reg));
        bufp->chgBit(oldp+2900,(vlSelf->top__DOT__sink__DOT__sink__DOT__failed));
        bufp->chgIData(oldp+2901,(vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr),32);
        bufp->chgBit(oldp+2902,(vlSelf->top__DOT__src__DOT__src_val));
        bufp->chgIData(oldp+2903,(vlSelf->top__DOT__src__DOT__src_msg),32);
        bufp->chgIData(oldp+2904,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num),32);
        bufp->chgIData(oldp+2905,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next),32);
        bufp->chgIData(oldp+2906,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay),32);
        bufp->chgBit(oldp+2907,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state));
        bufp->chgCData(oldp+2908,((0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)))),4);
        bufp->chgCData(oldp+2909,(vlSelf->top__DOT__src__DOT__src__DOT__index),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgIData(oldp+2910,(vlSelf->top__DOT__proc2mngr_msg),32);
        bufp->chgBit(oldp+2911,(vlSelf->top__DOT__proc2mngr_val));
        bufp->chgWData(oldp+2912,(vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg),77);
        bufp->chgWData(oldp+2915,(vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg),77);
        bufp->chgBit(oldp+2918,(vlSelf->top__DOT__commit_inst));
        bufp->chgBit(oldp+2919,((0U != vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W)));
        bufp->chgCData(oldp+2920,(vlSelf->top__DOT__DUT__DOT__imem_queue_num_free_entries),2);
        __Vtemp_2[0U] = 0U;
        __Vtemp_2[1U] = (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                         << 2U);
        __Vtemp_2[2U] = (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                         >> 0x1eU);
        bufp->chgWData(oldp+2921,(__Vtemp_2),77);
        bufp->chgBit(oldp+2924,((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
        bufp->chgIData(oldp+2925,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F),32);
        bufp->chgBit(oldp+2926,((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
        bufp->chgWData(oldp+2927,(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg),77);
        bufp->chgCData(oldp+2930,(((2U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X))
                                    ? 1U : 0U)),3);
        bufp->chgIData(oldp+2931,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X),32);
        bufp->chgIData(oldp+2932,(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data),32);
        bufp->chgBit(oldp+2933,((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
        bufp->chgIData(oldp+2934,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W),32);
        bufp->chgBit(oldp+2935,(vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_val));
        bufp->chgCData(oldp+2936,(vlSelf->top__DOT__DUT__DOT__pc_sel_F),2);
        bufp->chgCData(oldp+2937,(vlSelf->top__DOT__DUT__DOT__op1_byp_sel_D),2);
        bufp->chgCData(oldp+2938,(vlSelf->top__DOT__DUT__DOT__op2_byp_sel_D),2);
        bufp->chgBit(oldp+2939,(vlSelf->top__DOT__DUT__DOT__op1_sel_D));
        bufp->chgCData(oldp+2940,(vlSelf->top__DOT__DUT__DOT__op2_sel_D),2);
        bufp->chgCData(oldp+2941,(vlSelf->top__DOT__DUT__DOT__csrr_sel_D),2);
        bufp->chgCData(oldp+2942,(vlSelf->top__DOT__DUT__DOT__imm_type_D),3);
        bufp->chgCData(oldp+2943,(vlSelf->top__DOT__DUT__DOT__alu_fn_X),4);
        bufp->chgCData(oldp+2944,(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X),2);
        bufp->chgBit(oldp+2945,(vlSelf->top__DOT__DUT__DOT__wb_result_sel_M));
        bufp->chgBit(oldp+2946,((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_W)))));
        bufp->chgCData(oldp+2947,(vlSelf->top__DOT__DUT__DOT__rf_waddr_W),5);
        bufp->chgBit(oldp+2948,(vlSelf->top__DOT__DUT__DOT__rf_wen_W));
        bufp->chgBit(oldp+2949,(vlSelf->top__DOT__DUT__DOT__stats_en_wen_W));
        bufp->chgIData(oldp+2950,(vlSelf->top__DOT__DUT__DOT__inst_D),32);
        bufp->chgBit(oldp+2951,(vlSelf->top__DOT__DUT__DOT__imul_istream_rdy_D));
        bufp->chgBit(oldp+2952,(vlSelf->top__DOT__DUT__DOT__imul_ostream_val_X));
        bufp->chgBit(oldp+2953,(vlSelf->top__DOT__DUT__DOT__br_cond_eq_X));
        bufp->chgBit(oldp+2954,(vlSelf->top__DOT__DUT__DOT__br_cond_lt_X));
        bufp->chgBit(oldp+2955,(vlSelf->top__DOT__DUT__DOT__br_cond_ltu_X));
        bufp->chgBit(oldp+2956,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_F));
        bufp->chgBit(oldp+2957,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D));
        bufp->chgBit(oldp+2958,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X));
        bufp->chgBit(oldp+2959,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_M));
        bufp->chgBit(oldp+2960,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_W));
        bufp->chgBit(oldp+2961,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_X));
        bufp->chgBit(oldp+2962,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_W));
        bufp->chgBit(oldp+2963,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_W));
        bufp->chgBit(oldp+2964,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_D));
        bufp->chgBit(oldp+2965,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_X));
        bufp->chgCData(oldp+2966,((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                            >> 7U))),5);
        bufp->chgCData(oldp+2967,((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                            >> 0xfU))),5);
        bufp->chgCData(oldp+2968,((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                            >> 0x14U))),5);
        bufp->chgSData(oldp+2969,((vlSelf->top__DOT__DUT__DOT__inst_D 
                                   >> 0x14U)),12);
        bufp->chgBit(oldp+2970,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_val_D));
        bufp->chgCData(oldp+2971,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D),3);
        bufp->chgBit(oldp+2972,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__jal_D));
        bufp->chgBit(oldp+2973,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs1_en_D));
        bufp->chgBit(oldp+2974,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs2_en_D));
        bufp->chgCData(oldp+2975,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D),4);
        bufp->chgCData(oldp+2976,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D),3);
        bufp->chgCData(oldp+2977,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D),2);
        bufp->chgBit(oldp+2978,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__wb_result_sel_D));
        bufp->chgBit(oldp+2979,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_D));
        bufp->chgBit(oldp+2980,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mul_D));
        bufp->chgBit(oldp+2981,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrr_D));
        bufp->chgBit(oldp+2982,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrw_D));
        bufp->chgBit(oldp+2983,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_D));
        bufp->chgBit(oldp+2984,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mngr2proc_rdy_D));
        bufp->chgBit(oldp+2985,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_D));
        bufp->chgBit(oldp+2986,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_ld_X_rs1_D));
        bufp->chgBit(oldp+2987,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_ld_X_rs2_D));
        bufp->chgBit(oldp+2988,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_hazard_D));
        bufp->chgBit(oldp+2989,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_imul_D));
        bufp->chgBit(oldp+2990,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_D_mngr2proc));
        bufp->chgIData(oldp+2991,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X),32);
        bufp->chgCData(oldp+2992,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X),3);
        bufp->chgBit(oldp+2993,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__wb_result_sel_X));
        bufp->chgBit(oldp+2994,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_X));
        bufp->chgCData(oldp+2995,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X),5);
        bufp->chgBit(oldp+2996,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_X));
        bufp->chgBit(oldp+2997,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_X));
        bufp->chgCData(oldp+2998,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X),3);
        bufp->chgBit(oldp+2999,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mul_X));
        bufp->chgBit(oldp+3000,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_dmem_X));
        bufp->chgBit(oldp+3001,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_imul_X));
        bufp->chgIData(oldp+3002,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M),32);
        bufp->chgCData(oldp+3003,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_M),3);
        bufp->chgBit(oldp+3004,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_M));
        bufp->chgCData(oldp+3005,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M),5);
        bufp->chgBit(oldp+3006,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_M));
        bufp->chgBit(oldp+3007,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_M));
        bufp->chgIData(oldp+3008,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W),32);
        bufp->chgBit(oldp+3009,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_W));
        bufp->chgBit(oldp+3010,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_pending_W));
        bufp->chgBit(oldp+3011,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_pending_W));
        bufp->chgCData(oldp+3012,((0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)),7);
        bufp->chgCData(oldp+3013,((7U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                         >> 0xcU))),3);
        bufp->chgBit(oldp+3014,(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full));
        bufp->chgWData(oldp+3015,(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore),77);
        bufp->chgCData(oldp+3018,((7U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                                         >> 0xaU))),3);
        bufp->chgCData(oldp+3019,((0xffU & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                                            >> 2U))),8);
        bufp->chgIData(oldp+3020,(((vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                                    << 0x1eU) | (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                                                 >> 2U))),32);
        bufp->chgCData(oldp+3021,((3U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U])),2);
        bufp->chgIData(oldp+3022,(vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]),32);
        bufp->chgIData(oldp+3023,(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgIData(oldp+3024,(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgIData(oldp+3025,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F),32);
        bufp->chgIData(oldp+3026,(((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)),32);
        bufp->chgIData(oldp+3027,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X),32);
        bufp->chgIData(oldp+3028,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D),32);
        bufp->chgIData(oldp+3029,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D),32);
        bufp->chgIData(oldp+3030,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D),32);
        bufp->chgIData(oldp+3031,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D),32);
        bufp->chgIData(oldp+3032,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D),32);
        bufp->chgIData(oldp+3033,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X),32);
        bufp->chgIData(oldp+3034,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg_out),32);
        bufp->chgIData(oldp+3035,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X),32);
        bufp->chgIData(oldp+3036,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X),32);
        bufp->chgIData(oldp+3037,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X),32);
        bufp->chgIData(oldp+3038,(((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)),32);
        bufp->chgIData(oldp+3039,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M),32);
        bufp->chgIData(oldp+3040,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W),32);
        bufp->chgBit(oldp+3041,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__b_mux_sel));
        bufp->chgBit(oldp+3042,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__a_mux_sel));
        bufp->chgBit(oldp+3043,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__result_mux_sel));
        bufp->chgBit(oldp+3044,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__result_en));
        bufp->chgBit(oldp+3045,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__add_mux_sel));
        bufp->chgIData(oldp+3046,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg_out),32);
        bufp->chgCData(oldp+3047,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__shamt),5);
        bufp->chgCData(oldp+3048,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__state),2);
        bufp->chgBit(oldp+3049,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__done));
        bufp->chgCData(oldp+3050,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__unnamedblk1__DOT__temp_shamt),5);
        bufp->chgBit(oldp+3051,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__unnamedblk1__DOT__temp_done));
        bufp->chgBit(oldp+3052,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__control__DOT__unnamedblk1__DOT__temp_add_mux_sel));
        bufp->chgIData(oldp+3053,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__r_shift_out),32);
        bufp->chgIData(oldp+3054,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg_out),32);
        bufp->chgIData(oldp+3055,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__l_shift_out),32);
        bufp->chgIData(oldp+3056,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_mux_out),32);
        bufp->chgIData(oldp+3057,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__adder_out),32);
        bufp->chgIData(oldp+3058,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__datapath__DOT__add_mux_out),32);
        bufp->chgIData(oldp+3059,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__cycles),32);
        bufp->chgBit(oldp+3060,((1U & (IData)((1ULL 
                                               & (((QData)((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D)) 
                                                   + (QData)((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D))) 
                                                  >> 0x20U))))));
        bufp->chgIData(oldp+3061,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0),32);
        bufp->chgIData(oldp+3062,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1),32);
        bufp->chgIData(oldp+3063,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[0]),32);
        bufp->chgIData(oldp+3064,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[1]),32);
        bufp->chgIData(oldp+3065,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[2]),32);
        bufp->chgIData(oldp+3066,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[3]),32);
        bufp->chgIData(oldp+3067,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[4]),32);
        bufp->chgIData(oldp+3068,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[5]),32);
        bufp->chgIData(oldp+3069,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[6]),32);
        bufp->chgIData(oldp+3070,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[7]),32);
        bufp->chgIData(oldp+3071,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[8]),32);
        bufp->chgIData(oldp+3072,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[9]),32);
        bufp->chgIData(oldp+3073,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[10]),32);
        bufp->chgIData(oldp+3074,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[11]),32);
        bufp->chgIData(oldp+3075,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[12]),32);
        bufp->chgIData(oldp+3076,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[13]),32);
        bufp->chgIData(oldp+3077,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[14]),32);
        bufp->chgIData(oldp+3078,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[15]),32);
        bufp->chgIData(oldp+3079,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[16]),32);
        bufp->chgIData(oldp+3080,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[17]),32);
        bufp->chgIData(oldp+3081,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[18]),32);
        bufp->chgIData(oldp+3082,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[19]),32);
        bufp->chgIData(oldp+3083,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[20]),32);
        bufp->chgIData(oldp+3084,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[21]),32);
        bufp->chgIData(oldp+3085,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[22]),32);
        bufp->chgIData(oldp+3086,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[23]),32);
        bufp->chgIData(oldp+3087,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[24]),32);
        bufp->chgIData(oldp+3088,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[25]),32);
        bufp->chgIData(oldp+3089,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[26]),32);
        bufp->chgIData(oldp+3090,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[27]),32);
        bufp->chgIData(oldp+3091,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[28]),32);
        bufp->chgIData(oldp+3092,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[29]),32);
        bufp->chgIData(oldp+3093,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[30]),32);
        bufp->chgIData(oldp+3094,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[31]),32);
        bufp->chgBit(oldp+3095,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty));
        bufp->chgBit(oldp+3096,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr));
        bufp->chgBit(oldp+3097,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr));
        bufp->chgBit(oldp+3098,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full));
        bufp->chgBit(oldp+3099,((1U & ((IData)(1U) 
                                       + (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))));
        bufp->chgBit(oldp+3100,((1U & ((IData)(1U) 
                                       + (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)))));
        bufp->chgWData(oldp+3101,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data),77);
        bufp->chgWData(oldp+3104,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[0]),77);
        bufp->chgWData(oldp+3107,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[1]),77);
        bufp->chgCData(oldp+3110,((7U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                                         >> 0xaU))),3);
        bufp->chgCData(oldp+3111,((0xffU & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                                            >> 2U))),8);
        bufp->chgIData(oldp+3112,(((vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                                    << 0x1eU) | (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                                                 >> 2U))),32);
        bufp->chgCData(oldp+3113,((3U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U])),2);
        bufp->chgIData(oldp+3114,(vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]),32);
        bufp->chgIData(oldp+3115,(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgBit(oldp+3116,(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__state));
        bufp->chgIData(oldp+3117,(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgBit(oldp+3118,(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full));
        bufp->chgBit(oldp+3119,(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
        bufp->chgIData(oldp+3120,(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore),32);
        bufp->chgIData(oldp+3121,(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__cycles),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xbU])) {
        bufp->chgBit(oldp+3122,(vlSelf->top__DOT__mngr2proc_rdy));
        bufp->chgBit(oldp+3123,(vlSelf->top__DOT__dmem_reqstream_val));
        bufp->chgBit(oldp+3124,(vlSelf->top__DOT__dmem_reqstream_rdy));
        bufp->chgBit(oldp+3125,(vlSelf->top__DOT__dmem_respstream_rdy));
        bufp->chgBit(oldp+3126,(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_val));
        bufp->chgBit(oldp+3127,((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_X)))));
        bufp->chgBit(oldp+3128,(vlSelf->top__DOT__DUT__DOT__imul_ostream_rdy_X));
        bufp->chgBit(oldp+3129,((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_M)))));
        bufp->chgBit(oldp+3130,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_M));
        bufp->chgBit(oldp+3131,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_X));
        bufp->chgBit(oldp+3132,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_M));
        bufp->chgBit(oldp+3133,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__osquash_X));
        bufp->chgBit(oldp+3134,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_D));
        bufp->chgBit(oldp+3135,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_D_mngr2proc));
        bufp->chgBit(oldp+3136,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_X));
        bufp->chgBit(oldp+3137,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_M));
        bufp->chgBit(oldp+3138,(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__write_en));
        bufp->chgBit(oldp+3139,(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
        bufp->chgBit(oldp+3140,(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
        bufp->chgBit(oldp+3141,(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq));
        bufp->chgBit(oldp+3142,(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass));
        bufp->chgBit(oldp+3143,(vlSelf->top__DOT__cache__DOT__dcache__DOT__input_en));
        bufp->chgBit(oldp+3144,(vlSelf->top__DOT__sink__DOT__sink_val));
        bufp->chgIData(oldp+3145,(vlSelf->top__DOT__sink__DOT__sink_msg),32);
        bufp->chgBit(oldp+3146,(vlSelf->top__DOT__src__DOT__src_rdy));
        bufp->chgBit(oldp+3147,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_en));
        bufp->chgBit(oldp+3148,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay));
        bufp->chgBit(oldp+3149,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state_next));
        bufp->chgBit(oldp+3150,(vlSelf->top__DOT__src__DOT__src__DOT__index_en));
    }
    bufp->chgBit(oldp+3151,(vlSelf->clk));
    bufp->chgBit(oldp+3152,(vlSelf->linetrace));
    bufp->chgIData(oldp+3153,(vlSelf->top__DOT__mngr2proc_msg),32);
    bufp->chgBit(oldp+3154,(vlSelf->top__DOT__mngr2proc_val));
    bufp->chgQData(oldp+3155,(vlSelf->top__DOT__imem_respstream_msg),47);
    bufp->chgBit(oldp+3157,(vlSelf->top__DOT__flush));
    bufp->chgBit(oldp+3158,(vlSelf->top__DOT__cpu_en));
    bufp->chgIData(oldp+3159,(vlSelf->top__DOT__fp),32);
    bufp->chgBit(oldp+3160,(vlSelf->top__DOT____Vcellinp__DUT__clk));
    bufp->chgIData(oldp+3161,(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out),32);
    bufp->chgIData(oldp+3162,(vlSelf->top__DOT__mem__DOT__mem__DOT__data_data),32);
    bufp->chgIData(oldp+3163,(vlSelf->top__DOT__mem__DOT__mem__DOT__wr_i),32);
    bufp->chgIData(oldp+3164,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data),32);
    bufp->chgIData(oldp+3165,(vlSelf->top__DOT__unnamedblk1__DOT__i),32);
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
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xbU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xcU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xeU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xfU] = 0U;
}
