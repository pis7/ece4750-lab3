// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vtask_top__DOT__mem__DOT__load__0__filein;
    __Vtask_top__DOT__mem__DOT__load__0__filein = 0;
    IData/*31:0*/ __Vtask_top__DOT__mem__DOT__mem__DOT__load__1__file_load;
    __Vtask_top__DOT__mem__DOT__mem__DOT__load__1__file_load = 0;
    IData/*31:0*/ __Vtask_top__DOT__src__DOT__load__2__file_load;
    __Vtask_top__DOT__src__DOT__load__2__file_load = 0;
    IData/*31:0*/ __Vtask_top__DOT__src__DOT__src__DOT__load__3__file_load;
    __Vtask_top__DOT__src__DOT__src__DOT__load__3__file_load = 0;
    IData/*31:0*/ __Vtask_top__DOT__sink__DOT__load__4__file_load;
    __Vtask_top__DOT__sink__DOT__load__4__file_load = 0;
    IData/*31:0*/ __Vtask_top__DOT__sink__DOT__sink__DOT__load__5__file_load;
    __Vtask_top__DOT__sink__DOT__sink__DOT__load__5__file_load = 0;
    // Body
    vlSelf->top__DOT__reset = 1U;
    vlSelf->top__DOT__mem_clear = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_Cache.v", 
                                       290);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("Loading data\n");
    (void)VL_VALUEPLUSARGS_INN(64, std::string{"mem=%s"}, 
                               vlSelf->top__DOT__temp);
    vlSelf->top__DOT__fp = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(vlSelf->top__DOT__temp)
                                       , std::string{"r"});
    ;
    __Vtask_top__DOT__mem__DOT__load__0__filein = vlSelf->top__DOT__fp;
    __Vtask_top__DOT__mem__DOT__mem__DOT__load__1__file_load 
        = __Vtask_top__DOT__mem__DOT__load__0__filein;
    VL_WRITEF("c_physical_addr_nbits is          14\n");
    while ((! (__Vtask_top__DOT__mem__DOT__mem__DOT__load__1__file_load ? feof(VL_CVT_I_FP(__Vtask_top__DOT__mem__DOT__mem__DOT__load__1__file_load)) : true))) {
        (void)VL_FSCANF_IX(__Vtask_top__DOT__mem__DOT__mem__DOT__load__1__file_load,"%x:%x\n",
                           32,&(vlSelf->top__DOT__mem__DOT__mem__DOT__data_address),
                           32,&(vlSelf->top__DOT__mem__DOT__mem__DOT__data_data)) ;
        vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
            = ((vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                << 0x18U) | ((0xff0000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                                           << 8U)) 
                             | ((0xff00U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                                            >> 8U)) 
                                | (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                                   >> 0x18U))));
        vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr 
            = (0xfffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                         >> 2U));
        vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset 
            = (3U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address);
        vlSelf->top__DOT__mem__DOT__mem__DOT__m_load[vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr] 
            = (((~ ((IData)(0xffU) << (0x1fU & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset) 
                                                << 3U)))) 
                & vlSelf->top__DOT__mem__DOT__mem__DOT__m_load
                [vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr]) 
               | (0xffffffffULL & ((0xffU & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data) 
                                   << (0x1fU & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset) 
                                                << 3U)))));
        vlSymsp->__Vcoverage[5813].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__wr_i = 1U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__m_load[vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr] 
            = (((~ ((IData)(0xffU) << (0x1fU & ((IData)(8U) 
                                                + ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset) 
                                                   << 3U))))) 
                & vlSelf->top__DOT__mem__DOT__mem__DOT__m_load
                [vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr]) 
               | (0xffffffffULL & ((0xffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                                             >> 8U)) 
                                   << (0x1fU & ((IData)(8U) 
                                                + ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset) 
                                                   << 3U))))));
        vlSymsp->__Vcoverage[5813].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__wr_i = 2U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__m_load[vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr] 
            = (((~ ((IData)(0xffU) << (0x1fU & ((IData)(0x10U) 
                                                + ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset) 
                                                   << 3U))))) 
                & vlSelf->top__DOT__mem__DOT__mem__DOT__m_load
                [vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr]) 
               | (0xffffffffULL & ((0xffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                                             >> 0x10U)) 
                                   << (0x1fU & ((IData)(0x10U) 
                                                + ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset) 
                                                   << 3U))))));
        vlSymsp->__Vcoverage[5813].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__wr_i = 3U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__m_load[vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr] 
            = (((~ ((IData)(0xffU) << (0x1fU & ((IData)(0x18U) 
                                                + ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset) 
                                                   << 3U))))) 
                & vlSelf->top__DOT__mem__DOT__mem__DOT__m_load
                [vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr]) 
               | (0xffffffffULL & ((vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                                    >> 0x18U) << (0x1fU 
                                                  & ((IData)(0x18U) 
                                                     + 
                                                     ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset) 
                                                      << 3U))))));
        vlSymsp->__Vcoverage[5813].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__wr_i = 4U;
        vlSymsp->__Vcoverage[5814].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[5815].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[5243].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("Data loaded\n");
    if (VL_LIKELY(VL_VALUEPLUSARGS_INN(64, std::string{"men=%s"}, 
                                       vlSelf->top__DOT__temp))) {
        vlSymsp->__Vcoverage[497].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->top__DOT__fp = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(
                                                              VL_CONCATN_NNN(vlSelf->top__DOT__temp, 
                                                                             std::string{".in"}))
                                           , std::string{"r"});
        ;
        __Vtask_top__DOT__src__DOT__load__2__file_load 
            = vlSelf->top__DOT__fp;
        __Vtask_top__DOT__src__DOT__src__DOT__load__3__file_load 
            = __Vtask_top__DOT__src__DOT__load__2__file_load;
        vlSelf->top__DOT__src__DOT__src__DOT__index_max = 0U;
        {
            while ((! (__Vtask_top__DOT__src__DOT__src__DOT__load__3__file_load ? feof(VL_CVT_I_FP(__Vtask_top__DOT__src__DOT__src__DOT__load__3__file_load)) : true))) {
                vlSelf->top__DOT__src__DOT__src__DOT__load__Vstatic__unnamedblk1__DOT__count 
                    = VL_FSCANF_IX(__Vtask_top__DOT__src__DOT__src__DOT__load__3__file_load,"%x\n",
                                   32,&(vlSelf->top__DOT__src__DOT__src__DOT__data_data)) ;
                if ((0U == vlSelf->top__DOT__src__DOT__src__DOT__load__Vstatic__unnamedblk1__DOT__count)) {
                    goto __Vlabel1;
                } else {
                    vlSymsp->__Vcoverage[595].fetch_add(1, std::memory_order_relaxed);
                }
                VL_WRITEF("Loading %x\n",32,vlSelf->top__DOT__src__DOT__src__DOT__data_data);
                vlSelf->top__DOT__src__DOT__src__DOT____Vlvbound_ha89c0227__0 
                    = vlSelf->top__DOT__src__DOT__src__DOT__data_data;
                if (VL_LIKELY((9U >= (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max)))) {
                    vlSelf->top__DOT__src__DOT__src__DOT__m[vlSelf->top__DOT__src__DOT__src__DOT__index_max] 
                        = vlSelf->top__DOT__src__DOT__src__DOT____Vlvbound_ha89c0227__0;
                }
                vlSelf->top__DOT__src__DOT__src__DOT__index_max 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max)));
                vlSymsp->__Vcoverage[596].fetch_add(1, std::memory_order_relaxed);
            }
            __Vlabel1: ;
        }
        vlSymsp->__Vcoverage[597].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[546].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__fp = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(
                                                              VL_CONCATN_NNN(vlSelf->top__DOT__temp, 
                                                                             std::string{".out"}))
                                           , std::string{"r"});
        ;
        __Vtask_top__DOT__sink__DOT__load__4__file_load 
            = vlSelf->top__DOT__fp;
        __Vtask_top__DOT__sink__DOT__sink__DOT__load__5__file_load 
            = __Vtask_top__DOT__sink__DOT__load__4__file_load;
        vlSelf->top__DOT__sink__DOT__sink__DOT__index_max = 0U;
        {
            while ((! (__Vtask_top__DOT__sink__DOT__sink__DOT__load__5__file_load ? feof(VL_CVT_I_FP(__Vtask_top__DOT__sink__DOT__sink__DOT__load__5__file_load)) : true))) {
                vlSelf->top__DOT__sink__DOT__sink__DOT__load__Vstatic__unnamedblk1__DOT__count 
                    = VL_FSCANF_IX(__Vtask_top__DOT__sink__DOT__sink__DOT__load__5__file_load,"%x\n",
                                   32,&(vlSelf->top__DOT__sink__DOT__sink__DOT__data_data)) ;
                if ((0U == vlSelf->top__DOT__sink__DOT__sink__DOT__load__Vstatic__unnamedblk1__DOT__count)) {
                    goto __Vlabel2;
                } else {
                    vlSymsp->__Vcoverage[986].fetch_add(1, std::memory_order_relaxed);
                }
                VL_WRITEF("Loading %x\n",32,vlSelf->top__DOT__sink__DOT__sink__DOT__data_data);
                vlSelf->top__DOT__sink__DOT__sink__DOT____Vlvbound_ha89c0227__0 
                    = vlSelf->top__DOT__sink__DOT__sink__DOT__data_data;
                if (VL_LIKELY((9U >= (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max)))) {
                    vlSelf->top__DOT__sink__DOT__sink__DOT__m[vlSelf->top__DOT__sink__DOT__sink__DOT__index_max] 
                        = vlSelf->top__DOT__sink__DOT__sink__DOT____Vlvbound_ha89c0227__0;
                }
                vlSelf->top__DOT__sink__DOT__sink__DOT__index_max 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max)));
                vlSymsp->__Vcoverage[987].fetch_add(1, std::memory_order_relaxed);
            }
            __Vlabel2: ;
        }
        vlSymsp->__Vcoverage[988].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[795].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[496].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_Cache.v", 
                                       305);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reset = 1U;
    vlSelf->top__DOT__mem_clear = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_Cache.v", 
                                       308);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reset = 0U;
    vlSelf->top__DOT__mem_clear = 0U;
    vlSymsp->__Vcoverage[498].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vtask_top__DOT__mem__DOT__dump__6__filein;
    __Vtask_top__DOT__mem__DOT__dump__6__filein = 0;
    IData/*31:0*/ __Vtask_top__DOT__mem__DOT__mem__DOT__dump__7__file_out;
    __Vtask_top__DOT__mem__DOT__mem__DOT__dump__7__file_out = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    // Body
    vlSelf->top__DOT__mngr2proc_msg = 0U;
    vlSelf->top__DOT__mngr2proc_val = 1U;
    vlSelf->top__DOT__cpu_en = 1U;
    while ((1U & ((~ (IData)(vlSelf->top__DOT__src_done)) 
                  | (~ (IData)(vlSelf->top__DOT__snk_done))))) {
        co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_Cache.v", 
                                                           330);
        vlSymsp->__Vcoverage[499].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_Cache.v", 
                                                       331);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_Cache.v", 
                                                       332);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_Cache.v", 
                                                       333);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_Cache.v", 
                                                       334);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_Cache.v", 
                                                       335);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_Cache.v", 
                                                       336);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_Cache.v", 
                                                       337);
    vlSelf->top__DOT__cpu_en = 0U;
    vlSelf->top__DOT__flush = 1U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__flush_done)))) {
        co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_Cache.v", 
                                                           340);
        vlSymsp->__Vcoverage[500].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_Cache.v", 
                                                       341);
    VL_WRITEF("Testbench finished.  Dumping memory\n");
    __Vtemp_1[0U] = 0x703d2573U;
    __Vtemp_1[1U] = 0x6d64756dU;
    __Vtemp_1[2U] = 0x6d65U;
    (void)VL_VALUEPLUSARGS_INN(64, VL_CVT_PACK_STR_NW(3, __Vtemp_1), 
                               vlSelf->top__DOT__temp);
    vlSelf->top__DOT__fp = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(vlSelf->top__DOT__temp)
                                       , std::string{"w"});
    ;
    __Vtask_top__DOT__mem__DOT__dump__6__filein = vlSelf->top__DOT__fp;
    __Vtask_top__DOT__mem__DOT__mem__DOT__dump__7__file_out 
        = __Vtask_top__DOT__mem__DOT__dump__6__filein;
    vlSelf->top__DOT__mem__DOT__mem__DOT__wr_i = 0U;
    while (VL_GTS_III(32, 0x1000U, vlSelf->top__DOT__mem__DOT__mem__DOT__wr_i)) {
        if (VL_UNLIKELY((0U != vlSelf->top__DOT__mem__DOT__mem__DOT__m
                         [(0xfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__wr_i)]))) {
            vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                = vlSelf->top__DOT__mem__DOT__mem__DOT__m
                [(0xfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__wr_i)];
            vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                = ((vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                    << 0x18U) | ((0xff0000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                                               << 8U)) 
                                 | ((0xff00U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                                                >> 8U)) 
                                    | (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                                       >> 0x18U))));
            vlSelf->top__DOT__mem__DOT__mem__DOT__dump__Vstatic__unnamedblk1__DOT__ihex 
                = VL_SFORMATF_NX("%x:%x",32,(vlSelf->top__DOT__mem__DOT__mem__DOT__wr_i 
                                             << 2U),
                                 32,vlSelf->top__DOT__mem__DOT__mem__DOT__data_data) ;
            __Vtemp_3 = VL_TOUPPER_NN(vlSelf->top__DOT__mem__DOT__mem__DOT__dump__Vstatic__unnamedblk1__DOT__ihex);
            VL_WRITEF("%@\n",-1,&(__Vtemp_3));
            __Vtemp_4 = VL_TOUPPER_NN(vlSelf->top__DOT__mem__DOT__mem__DOT__dump__Vstatic__unnamedblk1__DOT__ihex);
            VL_FWRITEF(__Vtask_top__DOT__mem__DOT__mem__DOT__dump__7__file_out,"%@\n",
                       -1,&(__Vtemp_4));
            vlSymsp->__Vcoverage[5816].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[5817].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[5818].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__wr_i 
            = ((IData)(1U) + vlSelf->top__DOT__mem__DOT__mem__DOT__wr_i);
    }
    vlSymsp->__Vcoverage[5819].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[5244].fetch_add(1, std::memory_order_relaxed);
    VL_FINISH_MT("tb_Cache.v", 347, "");
    vlSymsp->__Vcoverage[501].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__2\n"); );
    // Body
    vlSelf->top__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x2710U, vlSelf->top__DOT__unnamedblk1__DOT__i)) {
        co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_Cache.v", 
                                                           352);
        vlSymsp->__Vcoverage[502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk1__DOT__i = ((IData)(1U) 
                                                 + vlSelf->top__DOT__unnamedblk1__DOT__i);
    }
    VL_WRITEF("TIMEOUT: Testbench didn't finish in time\n");
    VL_FINISH_MT("tb_Cache.v", 355, "");
    vlSymsp->__Vcoverage[503].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__3\n"); );
    // Init
    CData/*0:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__12__val;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__12__val = 0;
    CData/*0:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__12__rdy;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__12__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__12__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__12__str);
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__13__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__13__str);
    CData/*7:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__14__char;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__14__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__14__num;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__14__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__15__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__15__str);
    CData/*7:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__16__char;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__16__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__16__num;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__16__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__17__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__17__str);
    CData/*7:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__18__char;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__18__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__18__num;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__18__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__19__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__19__str);
    CData/*7:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__20__char;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__20__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__20__num;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__20__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__21__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__21__str);
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__22__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__22__str);
    CData/*7:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__23__char;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__23__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__23__num;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__23__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__24__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__24__str);
    CData/*7:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__25__char;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__25__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__25__num;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__25__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__26__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__26__str);
    CData/*7:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__27__char;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__27__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__27__num;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__27__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__28__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__28__str);
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__29__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__29__str);
    CData/*7:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__30__char;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__30__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__30__num;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__30__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__31__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__31__str);
    CData/*7:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__32__char;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__32__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__32__num;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__32__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__33__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__33__str);
    VlWide<7>/*199:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout;
    VL_ZERO_W(200, __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout);
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst = 0;
    SData/*11:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__35__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__35__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__35__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__35__inst = 0;
    SData/*11:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__36__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__36__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__36__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__36__inst = 0;
    SData/*11:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__37__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__37__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__37__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__37__inst = 0;
    SData/*11:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__38__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__38__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__38__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__38__inst = 0;
    SData/*11:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__39__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__39__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__39__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__39__inst = 0;
    SData/*11:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__40__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__40__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__40__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__40__inst = 0;
    CData/*4:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__41__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__41__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__41__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__41__inst = 0;
    CData/*4:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__42__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__42__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__42__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__42__inst = 0;
    CData/*4:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__43__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__43__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__43__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__43__inst = 0;
    CData/*4:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__44__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__44__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__44__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__44__inst = 0;
    CData/*4:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__45__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__45__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__45__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__45__inst = 0;
    CData/*4:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__46__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__46__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__46__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__46__inst = 0;
    IData/*19:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_u_sh12__47__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_u_sh12__47__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_u_sh12__47__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_u_sh12__47__inst = 0;
    IData/*19:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_u_sh12__48__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_u_sh12__48__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_u_sh12__48__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_u_sh12__48__inst = 0;
    SData/*11:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__49__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__49__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__49__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__49__inst = 0;
    SData/*11:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_s__50__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_s__50__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_s__50__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_s__50__inst = 0;
    IData/*20:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_j__51__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_j__51__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_j__51__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_j__51__inst = 0;
    SData/*11:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__52__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__52__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__52__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__52__inst = 0;
    SData/*12:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__53__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__53__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__53__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__53__inst = 0;
    SData/*12:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__54__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__54__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__54__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__54__inst = 0;
    SData/*12:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__55__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__55__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__55__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__55__inst = 0;
    SData/*12:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__56__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__56__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__56__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__56__inst = 0;
    SData/*12:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__57__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__57__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__57__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__57__inst = 0;
    SData/*12:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__58__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__58__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__58__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__58__inst = 0;
    CData/*7:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__59__char;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__59__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__59__num;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__59__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__60__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__60__str);
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__61__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__61__str);
    CData/*7:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__62__char;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__62__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__62__num;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__62__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__63__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__63__str);
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst = 0;
    CData/*7:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__65__char;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__65__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__65__num;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__65__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__66__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__66__str);
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__67__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__67__str);
    CData/*7:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__68__char;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__68__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__68__num;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__68__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__69__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__69__str);
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst = 0;
    CData/*7:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__71__char;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__71__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__71__num;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__71__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__72__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__72__str);
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__73__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__73__str);
    CData/*7:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__74__char;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__74__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__74__num;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__74__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__75__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__75__str);
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst = 0;
    CData/*7:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__77__char;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__77__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__77__num;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__77__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__78__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__78__str);
    CData/*0:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__79__val;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__79__val = 0;
    CData/*0:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__79__rdy;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__79__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__79__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__79__str);
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__80__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__80__str);
    CData/*7:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__81__char;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__81__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__81__num;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__81__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__82__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__82__str);
    CData/*7:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__83__char;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__83__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__83__num;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__83__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__84__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__84__str);
    CData/*7:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__85__char;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__85__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__85__num;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__85__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__86__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__86__str);
    CData/*7:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__87__char;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__87__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__87__num;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__87__num = 0;
    VlWide<128>/*4095:0*/ __Vtemp_53;
    VlWide<128>/*4095:0*/ __Vtemp_67;
    VlWide<128>/*4095:0*/ __Vtemp_81;
    VlWide<128>/*4095:0*/ __Vtemp_95;
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_Cache.v", 
                                                           371);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        if (vlSelf->linetrace) {
            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
            if (VL_UNLIKELY((0U < (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__level)))) {
                VL_WRITEF("%4d: ",32,vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__cycles);
                VL_SFORMAT_X(4096,vlSelf->top__DOT__DUT__DOT__temp
                             ,"%x",32,vlSelf->top__DOT__mngr2proc_msg);
                VL_ASSIGN_W(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__12__str, vlSelf->top__DOT__DUT__DOT__temp);
                __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__12__rdy 
                    = vlSelf->top__DOT__mngr2proc_rdy;
                __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__12__val 
                    = vlSelf->top__DOT__mngr2proc_val;
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1 = 0U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1)))
                                          ? 0U : (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__12__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1))))) 
                                        | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__12__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1))))))) {
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1 
                        = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1);
                    vlSymsp->__Vcoverage[3847].fetch_add(1, std::memory_order_relaxed);
                }
                if (VL_UNLIKELY(((IData)(__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__12__rdy) 
                                 & (IData)(__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__12__val)))) {
                    VL_ASSIGN_W(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__13__str, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__12__str);
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__13__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__13__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[3835].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__13__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__13__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__13__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__13__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[3836].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[3837].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[3852].fetch_add(1, std::memory_order_relaxed);
                } else if (VL_UNLIKELY(((IData)(__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__12__rdy) 
                                        & (~ (IData)(__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__12__val))))) {
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__14__num 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1;
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__14__char = 0x20U;
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__14__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__14__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__14__char);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[3840].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[3841].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[3851].fetch_add(1, std::memory_order_relaxed);
                } else if (VL_UNLIKELY(((~ (IData)(__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__12__rdy)) 
                                        & (IData)(__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__12__val)))) {
                    VL_CONST_W_1X(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__15__str,0x00000023);
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__15__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__15__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[3835].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__15__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__15__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__15__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__15__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[3836].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[3837].fetch_add(1, std::memory_order_relaxed);
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__16__num 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__16__char = 0x20U;
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__16__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__16__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__16__char);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[3840].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[3841].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[3850].fetch_add(1, std::memory_order_relaxed);
                } else if ((1U & ((~ (IData)(__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__12__rdy)) 
                                  & (~ (IData)(__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__12__val))))) {
                    VL_CONST_W_1X(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__17__str,0x0000002e);
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__17__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__17__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[3835].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__17__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__17__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__17__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__17__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[3836].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[3837].fetch_add(1, std::memory_order_relaxed);
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__18__num 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__18__char = 0x20U;
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__18__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__18__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__18__char);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[3840].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[3841].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[3848].fetch_add(1, std::memory_order_relaxed);
                } else {
                    VL_CONST_W_1X(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__19__str,0x00000078);
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__19__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__19__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[3835].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__19__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__19__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__19__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__19__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[3836].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[3837].fetch_add(1, std::memory_order_relaxed);
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__20__num 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__20__char = 0x20U;
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__20__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__20__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__20__char);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[3840].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[3841].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[3849].fetch_add(1, std::memory_order_relaxed);
                }
                vlSymsp->__Vcoverage[3853].fetch_add(1, std::memory_order_relaxed);
                VL_CONST_W_1X(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__21__str,0x0000003e);
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__21__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__21__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                    vlSymsp->__Vcoverage[3835].fetch_add(1, std::memory_order_relaxed);
                }
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                    = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                    = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__21__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__21__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                    VL_WRITEF("%c",8,(0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                 ? 0U
                                                 : 
                                                (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__21__str[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0xfffU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                               | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__21__str[
                                                  (0x7fU 
                                                   & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlSymsp->__Vcoverage[3836].fetch_add(1, std::memory_order_relaxed);
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                    = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                vlSymsp->__Vcoverage[3837].fetch_add(1, std::memory_order_relaxed);
                if (VL_LIKELY(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_F)) {
                    if (VL_UNLIKELY(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F)) {
                        VL_CONST_W_1X(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__22__str,0x0000007e);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                        while ((0U != (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__22__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                                | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__22__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                                = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                            vlSymsp->__Vcoverage[3835].fetch_add(1, std::memory_order_relaxed);
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                               - (IData)(1U));
                        while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                            VL_ASSIGNSEL_WI(4096,8,
                                            (0xfffU 
                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                            (0xffU 
                                             & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__22__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__22__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                            VL_WRITEF("%c",8,(0xffU 
                                              & (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                   ? 0U
                                                   : 
                                                  (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__22__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                 | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__22__str[
                                                    (0x7fU 
                                                     & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                   - (IData)(1U));
                            vlSymsp->__Vcoverage[3836].fetch_add(1, std::memory_order_relaxed);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                   - (IData)(1U));
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                        vlSymsp->__Vcoverage[3837].fetch_add(1, std::memory_order_relaxed);
                        __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__23__num = 7U;
                        __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__23__char = 0x20U;
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 = 0U;
                        while (VL_LTS_III(32, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__23__num)) {
                            VL_ASSIGNSEL_WI(4096,8,
                                            (0xfffU 
                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__23__char);
                            VL_WRITEF("%c",8,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__23__char);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                   - (IData)(1U));
                            vlSymsp->__Vcoverage[3840].fetch_add(1, std::memory_order_relaxed);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1);
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                        vlSymsp->__Vcoverage[3841].fetch_add(1, std::memory_order_relaxed);
                    } else if (VL_UNLIKELY(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_F)) {
                        VL_CONST_W_1X(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__24__str,0x00000023);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                        while ((0U != (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__24__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                                | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__24__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                                = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                            vlSymsp->__Vcoverage[3835].fetch_add(1, std::memory_order_relaxed);
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                               - (IData)(1U));
                        while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                            VL_ASSIGNSEL_WI(4096,8,
                                            (0xfffU 
                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                            (0xffU 
                                             & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__24__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__24__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                            VL_WRITEF("%c",8,(0xffU 
                                              & (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                   ? 0U
                                                   : 
                                                  (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__24__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                 | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__24__str[
                                                    (0x7fU 
                                                     & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                   - (IData)(1U));
                            vlSymsp->__Vcoverage[3836].fetch_add(1, std::memory_order_relaxed);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                   - (IData)(1U));
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                        vlSymsp->__Vcoverage[3837].fetch_add(1, std::memory_order_relaxed);
                        __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__25__num = 7U;
                        __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__25__char = 0x20U;
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 = 0U;
                        while (VL_LTS_III(32, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__25__num)) {
                            VL_ASSIGNSEL_WI(4096,8,
                                            (0xfffU 
                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__25__char);
                            VL_WRITEF("%c",8,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__25__char);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                   - (IData)(1U));
                            vlSymsp->__Vcoverage[3840].fetch_add(1, std::memory_order_relaxed);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1);
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                        vlSymsp->__Vcoverage[3841].fetch_add(1, std::memory_order_relaxed);
                    } else {
                        VL_SFORMAT_X(4096,vlSelf->top__DOT__DUT__DOT__str
                                     ,"%x",32,vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F);
                        VL_ASSIGN_W(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__26__str, vlSelf->top__DOT__DUT__DOT__str);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                        while ((0U != (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__26__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                                | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__26__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                                = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                            vlSymsp->__Vcoverage[3835].fetch_add(1, std::memory_order_relaxed);
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                               - (IData)(1U));
                        while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                            VL_ASSIGNSEL_WI(4096,8,
                                            (0xfffU 
                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                            (0xffU 
                                             & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__26__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__26__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                            VL_WRITEF("%c",8,(0xffU 
                                              & (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                   ? 0U
                                                   : 
                                                  (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__26__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                 | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__26__str[
                                                    (0x7fU 
                                                     & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                   - (IData)(1U));
                            vlSymsp->__Vcoverage[3836].fetch_add(1, std::memory_order_relaxed);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                   - (IData)(1U));
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                        vlSymsp->__Vcoverage[3837].fetch_add(1, std::memory_order_relaxed);
                    }
                } else {
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__27__num = 8U;
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__27__char = 0x20U;
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__27__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__27__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__27__char);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[3840].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[3841].fetch_add(1, std::memory_order_relaxed);
                }
                VL_CONST_W_1X(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__28__str,0x0000007c);
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__28__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__28__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                    vlSymsp->__Vcoverage[3835].fetch_add(1, std::memory_order_relaxed);
                }
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                    = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                    = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__28__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__28__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                    VL_WRITEF("%c",8,(0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                 ? 0U
                                                 : 
                                                (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__28__str[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0xfffU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                               | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__28__str[
                                                  (0x7fU 
                                                   & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlSymsp->__Vcoverage[3836].fetch_add(1, std::memory_order_relaxed);
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                    = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                vlSymsp->__Vcoverage[3837].fetch_add(1, std::memory_order_relaxed);
                if (VL_LIKELY(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D)) {
                    if (VL_UNLIKELY(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_D)) {
                        VL_CONST_W_1X(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__29__str,0x0000007e);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                        while ((0U != (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__29__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                                | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__29__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                                = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                            vlSymsp->__Vcoverage[3835].fetch_add(1, std::memory_order_relaxed);
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                               - (IData)(1U));
                        while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                            VL_ASSIGNSEL_WI(4096,8,
                                            (0xfffU 
                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                            (0xffU 
                                             & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__29__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__29__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                            VL_WRITEF("%c",8,(0xffU 
                                              & (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                   ? 0U
                                                   : 
                                                  (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__29__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                 | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__29__str[
                                                    (0x7fU 
                                                     & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                   - (IData)(1U));
                            vlSymsp->__Vcoverage[3836].fetch_add(1, std::memory_order_relaxed);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                   - (IData)(1U));
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                        vlSymsp->__Vcoverage[3837].fetch_add(1, std::memory_order_relaxed);
                        __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__30__num = 0x16U;
                        __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__30__char = 0x20U;
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 = 0U;
                        while (VL_LTS_III(32, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__30__num)) {
                            VL_ASSIGNSEL_WI(4096,8,
                                            (0xfffU 
                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__30__char);
                            VL_WRITEF("%c",8,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__30__char);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                   - (IData)(1U));
                            vlSymsp->__Vcoverage[3840].fetch_add(1, std::memory_order_relaxed);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1);
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                        vlSymsp->__Vcoverage[3841].fetch_add(1, std::memory_order_relaxed);
                    } else if (VL_UNLIKELY(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_D)) {
                        VL_CONST_W_1X(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__31__str,0x00000023);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                        while ((0U != (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__31__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                                | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__31__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                                = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                            vlSymsp->__Vcoverage[3835].fetch_add(1, std::memory_order_relaxed);
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                               - (IData)(1U));
                        while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                            VL_ASSIGNSEL_WI(4096,8,
                                            (0xfffU 
                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                            (0xffU 
                                             & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__31__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__31__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                            VL_WRITEF("%c",8,(0xffU 
                                              & (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                   ? 0U
                                                   : 
                                                  (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__31__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                 | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__31__str[
                                                    (0x7fU 
                                                     & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                   - (IData)(1U));
                            vlSymsp->__Vcoverage[3836].fetch_add(1, std::memory_order_relaxed);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                   - (IData)(1U));
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                        vlSymsp->__Vcoverage[3837].fetch_add(1, std::memory_order_relaxed);
                        __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__32__num = 0x16U;
                        __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__32__char = 0x20U;
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 = 0U;
                        while (VL_LTS_III(32, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__32__num)) {
                            VL_ASSIGNSEL_WI(4096,8,
                                            (0xfffU 
                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__32__char);
                            VL_WRITEF("%c",8,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__32__char);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                   - (IData)(1U));
                            vlSymsp->__Vcoverage[3840].fetch_add(1, std::memory_order_relaxed);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1);
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                        vlSymsp->__Vcoverage[3841].fetch_add(1, std::memory_order_relaxed);
                    } else {
                        VL_EXTEND_WW(4096,200, __Vtemp_53, 
                                     ([&]() {
                                    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst 
                                        = vlSelf->top__DOT__DUT__DOT__inst_D;
                                    vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1 
                                        = (0x1fU & 
                                           (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst 
                                            >> 0xfU));
                                    vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2 
                                        = (0x1fU & 
                                           (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst 
                                            >> 0x14U));
                                    vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd 
                                        = (0x1fU & 
                                           (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst 
                                            >> 7U));
                                    vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr 
                                        = (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst 
                                           >> 0x14U);
                                    vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct 
                                        = (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst 
                                           >> 0x19U);
                                    if ((9U >= (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1))) {
                                        VL_SFORMAT_X(24
                                                     ,vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str
                                                     ,"x0%0#",
                                                     5,
                                                     vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1);
                                        vlSymsp->__Vcoverage[3738].fetch_add(1, std::memory_order_relaxed);
                                    } else {
                                        VL_SFORMAT_X(24
                                                     ,vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str
                                                     ,"x%2#",
                                                     5,
                                                     vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1);
                                        vlSymsp->__Vcoverage[3739].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    if ((9U >= (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2))) {
                                        VL_SFORMAT_X(24
                                                     ,vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str
                                                     ,"x0%0#",
                                                     5,
                                                     vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2);
                                        vlSymsp->__Vcoverage[3740].fetch_add(1, std::memory_order_relaxed);
                                    } else {
                                        VL_SFORMAT_X(24
                                                     ,vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str
                                                     ,"x%2#",
                                                     5,
                                                     vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2);
                                        vlSymsp->__Vcoverage[3741].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    if ((9U >= (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd))) {
                                        VL_SFORMAT_X(24
                                                     ,vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str
                                                     ,"x0%0#",
                                                     5,
                                                     vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd);
                                        vlSymsp->__Vcoverage[3742].fetch_add(1, std::memory_order_relaxed);
                                    } else {
                                        VL_SFORMAT_X(24
                                                     ,vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str
                                                     ,"x%2#",
                                                     5,
                                                     vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd);
                                        vlSymsp->__Vcoverage[3743].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    if ((0x7c0U == (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr))) {
                                        VL_SFORMAT_X(72
                                                     ,vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str
                                                     ,"proc2mngr");
                                        vlSymsp->__Vcoverage[3749].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0xfc0U 
                                                == (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr))) {
                                        VL_SFORMAT_X(72
                                                     ,vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str
                                                     ,"mngr2proc");
                                        vlSymsp->__Vcoverage[3748].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0xf14U 
                                                == (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr))) {
                                        VL_SFORMAT_X(72
                                                     ,vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str
                                                     ,"coreid   ");
                                        vlSymsp->__Vcoverage[3747].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0xfc1U 
                                                == (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr))) {
                                        VL_SFORMAT_X(72
                                                     ,vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str
                                                     ,"numcores ");
                                        vlSymsp->__Vcoverage[3746].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0x7c1U 
                                                == (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr))) {
                                        VL_SFORMAT_X(72
                                                     ,vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str
                                                     ,"stats_en ");
                                        vlSymsp->__Vcoverage[3744].fetch_add(1, std::memory_order_relaxed);
                                    } else {
                                        VL_SFORMAT_X(72
                                                     ,vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str
                                                     ,"    0x%x",
                                                     12,
                                                     vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr);
                                        vlSymsp->__Vcoverage[3745].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    VL_SFORMAT_X(16
                                                 ,vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str
                                                 ,"%x",
                                                 2,
                                                 (3U 
                                                  & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct)));
                                    if (((((((((0x2073U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst)) 
                                               | (0x1073U 
                                                  == 
                                                  (0x707fU 
                                                   & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) 
                                              | (0x13U 
                                                 == __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst)) 
                                             | (0U 
                                                == __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst)) 
                                            | (0x33U 
                                               == (0xfe00707fU 
                                                   & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) 
                                           | (0x40000033U 
                                              == (0xfe00707fU 
                                                  & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) 
                                          | (0x7033U 
                                             == (0xfe00707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) 
                                         | (0x6033U 
                                            == (0xfe00707fU 
                                                & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst)))) {
                                        if ((0x2073U 
                                             == (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"csrr   %s, %s  ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         72,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str.data());
                                            vlSymsp->__Vcoverage[3750].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x1073U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"csrw   %s, %s  ",
                                                         72,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str.data(),
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str);
                                            vlSymsp->__Vcoverage[3751].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x13U 
                                                    == __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst)) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"nop                    ");
                                            vlSymsp->__Vcoverage[3752].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0U 
                                                    == __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst)) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"                       ");
                                            vlSymsp->__Vcoverage[3753].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x33U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"add    %s, %s, %s   ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str);
                                            vlSymsp->__Vcoverage[3754].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x40000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"sub    %s, %s, %s   ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str);
                                            vlSymsp->__Vcoverage[3755].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x7033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"and    %s, %s, %s   ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str);
                                            vlSymsp->__Vcoverage[3756].fetch_add(1, std::memory_order_relaxed);
                                        } else {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"or     %s, %s, %s   ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str);
                                            vlSymsp->__Vcoverage[3757].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    } else if (((((
                                                   ((((0x4033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst)) 
                                                      | (0x2033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) 
                                                     | (0x3033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) 
                                                    | (0x2000033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) 
                                                   | (0x13U 
                                                      == 
                                                      (0x707fU 
                                                       & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) 
                                                  | (0x7013U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) 
                                                 | (0x6013U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) 
                                                | (0x4013U 
                                                   == 
                                                   (0x707fU 
                                                    & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst)))) {
                                        if ((0x4033U 
                                             == (0xfe00707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"xor    %s, %s, %s   ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str);
                                            vlSymsp->__Vcoverage[3758].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x2033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"slt    %s, %s, %s   ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str);
                                            vlSymsp->__Vcoverage[3759].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x3033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"sltu   %s, %s, %s   ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str);
                                            vlSymsp->__Vcoverage[3760].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x2000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"mul    %s, %s, %s   ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str);
                                            vlSymsp->__Vcoverage[3761].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x13U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"addi   %s, %s, 0x%x ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                         12,
                                                         ([&]() {
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__35__inst 
                                                                = __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__35__Vfuncout 
                                                                = 
                                                                (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__35__inst 
                                                                 >> 0x14U);
                                                            vlSymsp->__Vcoverage[3538].fetch_add(1, std::memory_order_relaxed);
                                                        }(), (IData)(__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__35__Vfuncout)));
                                            vlSymsp->__Vcoverage[3762].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x7013U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"andi   %s, %s, 0x%x ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                         12,
                                                         ([&]() {
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__36__inst 
                                                                = __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__36__Vfuncout 
                                                                = 
                                                                (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__36__inst 
                                                                 >> 0x14U);
                                                            vlSymsp->__Vcoverage[3538].fetch_add(1, std::memory_order_relaxed);
                                                        }(), (IData)(__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__36__Vfuncout)));
                                            vlSymsp->__Vcoverage[3763].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x6013U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"ori    %s, %s, 0x%x ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                         12,
                                                         ([&]() {
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__37__inst 
                                                                = __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__37__Vfuncout 
                                                                = 
                                                                (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__37__inst 
                                                                 >> 0x14U);
                                                            vlSymsp->__Vcoverage[3538].fetch_add(1, std::memory_order_relaxed);
                                                        }(), (IData)(__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__37__Vfuncout)));
                                            vlSymsp->__Vcoverage[3764].fetch_add(1, std::memory_order_relaxed);
                                        } else {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"xori   %s, %s, 0x%x ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                         12,
                                                         ([&]() {
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__38__inst 
                                                                = __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__38__Vfuncout 
                                                                = 
                                                                (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__38__inst 
                                                                 >> 0x14U);
                                                            vlSymsp->__Vcoverage[3538].fetch_add(1, std::memory_order_relaxed);
                                                        }(), (IData)(__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__38__Vfuncout)));
                                            vlSymsp->__Vcoverage[3765].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    } else if (((((
                                                   ((((0x2013U 
                                                       == 
                                                       (0x707fU 
                                                        & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst)) 
                                                      | (0x3013U 
                                                         == 
                                                         (0x707fU 
                                                          & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) 
                                                     | (0x40005033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) 
                                                    | (0x5033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) 
                                                   | (0x1033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) 
                                                  | (0x40005013U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) 
                                                 | (0x5013U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) 
                                                | (0x1013U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst)))) {
                                        if ((0x2013U 
                                             == (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"slti   %s, %s, 0x%x ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                         12,
                                                         ([&]() {
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__39__inst 
                                                                = __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__39__Vfuncout 
                                                                = 
                                                                (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__39__inst 
                                                                 >> 0x14U);
                                                            vlSymsp->__Vcoverage[3538].fetch_add(1, std::memory_order_relaxed);
                                                        }(), (IData)(__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__39__Vfuncout)));
                                            vlSymsp->__Vcoverage[3766].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x3013U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"sltiu  %s, %s, 0x%x ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                         12,
                                                         ([&]() {
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__40__inst 
                                                                = __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__40__Vfuncout 
                                                                = 
                                                                (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__40__inst 
                                                                 >> 0x14U);
                                                            vlSymsp->__Vcoverage[3538].fetch_add(1, std::memory_order_relaxed);
                                                        }(), (IData)(__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__40__Vfuncout)));
                                            vlSymsp->__Vcoverage[3767].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x40005033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"sra    %s, %s, 0x%x  ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                         5,
                                                         ([&]() {
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__41__inst 
                                                                = __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__41__Vfuncout 
                                                                = 
                                                                (0x1fU 
                                                                 & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__41__inst 
                                                                    >> 0x14U));
                                                            vlSymsp->__Vcoverage[3539].fetch_add(1, std::memory_order_relaxed);
                                                        }(), (IData)(__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__41__Vfuncout)));
                                            vlSymsp->__Vcoverage[3768].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x5033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"srl    %s, %s, 0x%x  ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                         5,
                                                         ([&]() {
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__42__inst 
                                                                = __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__42__Vfuncout 
                                                                = 
                                                                (0x1fU 
                                                                 & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__42__inst 
                                                                    >> 0x14U));
                                                            vlSymsp->__Vcoverage[3539].fetch_add(1, std::memory_order_relaxed);
                                                        }(), (IData)(__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__42__Vfuncout)));
                                            vlSymsp->__Vcoverage[3769].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x1033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"sll    %s, %s, 0x%x  ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                         5,
                                                         ([&]() {
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__43__inst 
                                                                = __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__43__Vfuncout 
                                                                = 
                                                                (0x1fU 
                                                                 & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__43__inst 
                                                                    >> 0x14U));
                                                            vlSymsp->__Vcoverage[3539].fetch_add(1, std::memory_order_relaxed);
                                                        }(), (IData)(__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__43__Vfuncout)));
                                            vlSymsp->__Vcoverage[3770].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x40005013U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"srai   %s, %s, 0x%x  ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                         5,
                                                         ([&]() {
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__44__inst 
                                                                = __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__44__Vfuncout 
                                                                = 
                                                                (0x1fU 
                                                                 & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__44__inst 
                                                                    >> 0x14U));
                                                            vlSymsp->__Vcoverage[3539].fetch_add(1, std::memory_order_relaxed);
                                                        }(), (IData)(__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__44__Vfuncout)));
                                            vlSymsp->__Vcoverage[3771].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x5013U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"srli   %s, %s, 0x%x  ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                         5,
                                                         ([&]() {
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__45__inst 
                                                                = __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__45__Vfuncout 
                                                                = 
                                                                (0x1fU 
                                                                 & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__45__inst 
                                                                    >> 0x14U));
                                                            vlSymsp->__Vcoverage[3539].fetch_add(1, std::memory_order_relaxed);
                                                        }(), (IData)(__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__45__Vfuncout)));
                                            vlSymsp->__Vcoverage[3772].fetch_add(1, std::memory_order_relaxed);
                                        } else {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"slli   %s, %s, 0x%x  ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                         5,
                                                         ([&]() {
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__46__inst 
                                                                = __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__46__Vfuncout 
                                                                = 
                                                                (0x1fU 
                                                                 & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__46__inst 
                                                                    >> 0x14U));
                                                            vlSymsp->__Vcoverage[3539].fetch_add(1, std::memory_order_relaxed);
                                                        }(), (IData)(__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__46__Vfuncout)));
                                            vlSymsp->__Vcoverage[3773].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    } else if (((((
                                                   ((((0x37U 
                                                       == 
                                                       (0x7fU 
                                                        & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst)) 
                                                      | (0x17U 
                                                         == 
                                                         (0x7fU 
                                                          & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) 
                                                     | (0x2003U 
                                                        == 
                                                        (0x707fU 
                                                         & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) 
                                                    | (0x2023U 
                                                       == 
                                                       (0x707fU 
                                                        & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) 
                                                   | (0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) 
                                                  | (0x67U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) 
                                                 | (0x63U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) 
                                                | (0x1063U 
                                                   == 
                                                   (0x707fU 
                                                    & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst)))) {
                                        if ((0x37U 
                                             == (0x7fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"lui    %s, 0x%x    ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         20,
                                                         ([&]() {
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_u_sh12__47__inst 
                                                                = __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_u_sh12__47__Vfuncout 
                                                                = 
                                                                (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_u_sh12__47__inst 
                                                                 >> 0xcU);
                                                            vlSymsp->__Vcoverage[3542].fetch_add(1, std::memory_order_relaxed);
                                                        }(), __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_u_sh12__47__Vfuncout));
                                            vlSymsp->__Vcoverage[3774].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x17U 
                                                    == 
                                                    (0x7fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"auipc  %s, 0x%x    ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         20,
                                                         ([&]() {
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_u_sh12__48__inst 
                                                                = __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_u_sh12__48__Vfuncout 
                                                                = 
                                                                (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_u_sh12__48__inst 
                                                                 >> 0xcU);
                                                            vlSymsp->__Vcoverage[3542].fetch_add(1, std::memory_order_relaxed);
                                                        }(), __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_u_sh12__48__Vfuncout));
                                            vlSymsp->__Vcoverage[3775].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x2003U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"lw     %s, 0x%x(%s) ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         12,
                                                         ([&]() {
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__49__inst 
                                                                = __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__49__Vfuncout 
                                                                = 
                                                                (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__49__inst 
                                                                 >> 0x14U);
                                                            vlSymsp->__Vcoverage[3538].fetch_add(1, std::memory_order_relaxed);
                                                        }(), (IData)(__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__49__Vfuncout)),
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str);
                                            vlSymsp->__Vcoverage[3776].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"sw     %s, 0x%x(%s) ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str,
                                                         12,
                                                         ([&]() {
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_s__50__inst 
                                                                = __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_s__50__Vfuncout 
                                                                = 
                                                                ((0xfe0U 
                                                                  & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_s__50__inst 
                                                                     >> 0x14U)) 
                                                                 | (0x1fU 
                                                                    & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_s__50__inst 
                                                                       >> 7U)));
                                                            vlSymsp->__Vcoverage[3540].fetch_add(1, std::memory_order_relaxed);
                                                        }(), (IData)(__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_s__50__Vfuncout)),
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str);
                                            vlSymsp->__Vcoverage[3777].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"jal    %s, 0x%x   ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         21,
                                                         ([&]() {
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_j__51__inst 
                                                                = __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_j__51__Vfuncout 
                                                                = 
                                                                ((0x100000U 
                                                                  & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_j__51__inst 
                                                                     >> 0xbU)) 
                                                                 | ((0xff000U 
                                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_j__51__inst) 
                                                                    | ((0x800U 
                                                                        & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_j__51__inst 
                                                                           >> 9U)) 
                                                                       | ((0x7e0U 
                                                                           & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_j__51__inst 
                                                                              >> 0x14U)) 
                                                                          | (0x1eU 
                                                                             & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_j__51__inst 
                                                                                >> 0x14U))))));
                                                            vlSymsp->__Vcoverage[3543].fetch_add(1, std::memory_order_relaxed);
                                                        }(), __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_j__51__Vfuncout));
                                            vlSymsp->__Vcoverage[3778].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"jalr   %s, %s, 0x%x ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                         12,
                                                         ([&]() {
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__52__inst 
                                                                = __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__52__Vfuncout 
                                                                = 
                                                                (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__52__inst 
                                                                 >> 0x14U);
                                                            vlSymsp->__Vcoverage[3538].fetch_add(1, std::memory_order_relaxed);
                                                        }(), (IData)(__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__52__Vfuncout)));
                                            vlSymsp->__Vcoverage[3779].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x63U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"beq    %s, %s, 0x%x",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str,
                                                         13,
                                                         ([&]() {
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__53__inst 
                                                                = __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__53__Vfuncout 
                                                                = 
                                                                ((0x1000U 
                                                                  & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__53__inst 
                                                                     >> 0x13U)) 
                                                                 | ((0x800U 
                                                                     & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__53__inst 
                                                                        << 4U)) 
                                                                    | ((0x7e0U 
                                                                        & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__53__inst 
                                                                           >> 0x14U)) 
                                                                       | (0x1eU 
                                                                          & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__53__inst 
                                                                             >> 7U)))));
                                                            vlSymsp->__Vcoverage[3541].fetch_add(1, std::memory_order_relaxed);
                                                        }(), (IData)(__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__53__Vfuncout)));
                                            vlSymsp->__Vcoverage[3780].fetch_add(1, std::memory_order_relaxed);
                                        } else {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"bne    %s, %s, 0x%x",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str,
                                                         13,
                                                         ([&]() {
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__54__inst 
                                                                = __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__54__Vfuncout 
                                                                = 
                                                                ((0x1000U 
                                                                  & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__54__inst 
                                                                     >> 0x13U)) 
                                                                 | ((0x800U 
                                                                     & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__54__inst 
                                                                        << 4U)) 
                                                                    | ((0x7e0U 
                                                                        & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__54__inst 
                                                                           >> 0x14U)) 
                                                                       | (0x1eU 
                                                                          & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__54__inst 
                                                                             >> 7U)))));
                                                            vlSymsp->__Vcoverage[3541].fetch_add(1, std::memory_order_relaxed);
                                                        }(), (IData)(__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__54__Vfuncout)));
                                            vlSymsp->__Vcoverage[3781].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    } else if ((0x4063U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                        VL_SFORMAT_X(200
                                                     ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                     ,"blt    %s, %s, 0x%x",
                                                     24,
                                                     vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                     24,
                                                     vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str,
                                                     13,
                                                     ([&]() {
                                                        __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__55__inst 
                                                            = __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
                                                        __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__55__Vfuncout 
                                                            = 
                                                            ((0x1000U 
                                                              & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__55__inst 
                                                                 >> 0x13U)) 
                                                             | ((0x800U 
                                                                 & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__55__inst 
                                                                    << 4U)) 
                                                                | ((0x7e0U 
                                                                    & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__55__inst 
                                                                       >> 0x14U)) 
                                                                   | (0x1eU 
                                                                      & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__55__inst 
                                                                         >> 7U)))));
                                                        vlSymsp->__Vcoverage[3541].fetch_add(1, std::memory_order_relaxed);
                                                    }(), (IData)(__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__55__Vfuncout)));
                                        vlSymsp->__Vcoverage[3782].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0x5063U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                        VL_SFORMAT_X(200
                                                     ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                     ,"bge    %s, %s, 0x%x",
                                                     24,
                                                     vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                     24,
                                                     vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str,
                                                     13,
                                                     ([&]() {
                                                        __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__56__inst 
                                                            = __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
                                                        __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__56__Vfuncout 
                                                            = 
                                                            ((0x1000U 
                                                              & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__56__inst 
                                                                 >> 0x13U)) 
                                                             | ((0x800U 
                                                                 & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__56__inst 
                                                                    << 4U)) 
                                                                | ((0x7e0U 
                                                                    & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__56__inst 
                                                                       >> 0x14U)) 
                                                                   | (0x1eU 
                                                                      & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__56__inst 
                                                                         >> 7U)))));
                                                        vlSymsp->__Vcoverage[3541].fetch_add(1, std::memory_order_relaxed);
                                                    }(), (IData)(__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__56__Vfuncout)));
                                        vlSymsp->__Vcoverage[3783].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0x6063U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                        VL_SFORMAT_X(200
                                                     ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                     ,"bltu   %s, %s, 0x%x",
                                                     24,
                                                     vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                     24,
                                                     vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str,
                                                     13,
                                                     ([&]() {
                                                        __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__57__inst 
                                                            = __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
                                                        __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__57__Vfuncout 
                                                            = 
                                                            ((0x1000U 
                                                              & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__57__inst 
                                                                 >> 0x13U)) 
                                                             | ((0x800U 
                                                                 & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__57__inst 
                                                                    << 4U)) 
                                                                | ((0x7e0U 
                                                                    & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__57__inst 
                                                                       >> 0x14U)) 
                                                                   | (0x1eU 
                                                                      & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__57__inst 
                                                                         >> 7U)))));
                                                        vlSymsp->__Vcoverage[3541].fetch_add(1, std::memory_order_relaxed);
                                                    }(), (IData)(__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__57__Vfuncout)));
                                        vlSymsp->__Vcoverage[3784].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0x7063U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                        VL_SFORMAT_X(200
                                                     ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                     ,"bgeu   %s, %s, 0x%x",
                                                     24,
                                                     vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                     24,
                                                     vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str,
                                                     13,
                                                     ([&]() {
                                                        __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__58__inst 
                                                            = __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
                                                        __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__58__Vfuncout 
                                                            = 
                                                            ((0x1000U 
                                                              & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__58__inst 
                                                                 >> 0x13U)) 
                                                             | ((0x800U 
                                                                 & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__58__inst 
                                                                    << 4U)) 
                                                                | ((0x7e0U 
                                                                    & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__58__inst 
                                                                       >> 0x14U)) 
                                                                   | (0x1eU 
                                                                      & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__58__inst 
                                                                         >> 7U)))));
                                                        vlSymsp->__Vcoverage[3541].fetch_add(1, std::memory_order_relaxed);
                                                    }(), (IData)(__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__58__Vfuncout)));
                                        vlSymsp->__Vcoverage[3785].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0xbU 
                                                == 
                                                (0x7fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                        VL_SFORMAT_X(200
                                                     ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                     ,"cust0 %s, %s, %s, %s",
                                                     24,
                                                     vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                     24,
                                                     vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                     24,
                                                     vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str,
                                                     16,
                                                     (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str));
                                        vlSymsp->__Vcoverage[3786].fetch_add(1, std::memory_order_relaxed);
                                    } else {
                                        VL_SFORMAT_X(200
                                                     ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                     ,"illegal inst           ");
                                        vlSymsp->__Vcoverage[3787].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    vlSymsp->__Vcoverage[3788].fetch_add(1, std::memory_order_relaxed);
                                }(), __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout));
                        VL_ASSIGN_W(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__33__str, __Vtemp_53);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                        while ((0U != (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__33__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                                | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__33__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                                = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                            vlSymsp->__Vcoverage[3835].fetch_add(1, std::memory_order_relaxed);
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                               - (IData)(1U));
                        while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                            VL_ASSIGNSEL_WI(4096,8,
                                            (0xfffU 
                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                            (0xffU 
                                             & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__33__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__33__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                            VL_WRITEF("%c",8,(0xffU 
                                              & (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                   ? 0U
                                                   : 
                                                  (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__33__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                 | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__33__str[
                                                    (0x7fU 
                                                     & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                   - (IData)(1U));
                            vlSymsp->__Vcoverage[3836].fetch_add(1, std::memory_order_relaxed);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                   - (IData)(1U));
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                        vlSymsp->__Vcoverage[3837].fetch_add(1, std::memory_order_relaxed);
                    }
                } else {
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__59__num = 0x17U;
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__59__char = 0x20U;
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__59__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__59__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__59__char);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[3840].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[3841].fetch_add(1, std::memory_order_relaxed);
                }
                VL_CONST_W_1X(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__60__str,0x0000007c);
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__60__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__60__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                    vlSymsp->__Vcoverage[3835].fetch_add(1, std::memory_order_relaxed);
                }
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                    = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                    = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__60__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__60__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                    VL_WRITEF("%c",8,(0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                 ? 0U
                                                 : 
                                                (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__60__str[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0xfffU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                               | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__60__str[
                                                  (0x7fU 
                                                   & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlSymsp->__Vcoverage[3836].fetch_add(1, std::memory_order_relaxed);
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                    = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                vlSymsp->__Vcoverage[3837].fetch_add(1, std::memory_order_relaxed);
                if (VL_LIKELY(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X)) {
                    if (VL_UNLIKELY(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_X)) {
                        VL_CONST_W_1X(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__61__str,0x00000023);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                        while ((0U != (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__61__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                                | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__61__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                                = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                            vlSymsp->__Vcoverage[3835].fetch_add(1, std::memory_order_relaxed);
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                               - (IData)(1U));
                        while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                            VL_ASSIGNSEL_WI(4096,8,
                                            (0xfffU 
                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                            (0xffU 
                                             & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__61__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__61__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                            VL_WRITEF("%c",8,(0xffU 
                                              & (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                   ? 0U
                                                   : 
                                                  (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__61__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                 | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__61__str[
                                                    (0x7fU 
                                                     & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                   - (IData)(1U));
                            vlSymsp->__Vcoverage[3836].fetch_add(1, std::memory_order_relaxed);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                   - (IData)(1U));
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                        vlSymsp->__Vcoverage[3837].fetch_add(1, std::memory_order_relaxed);
                        __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__62__num = 3U;
                        __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__62__char = 0x20U;
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 = 0U;
                        while (VL_LTS_III(32, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__62__num)) {
                            VL_ASSIGNSEL_WI(4096,8,
                                            (0xfffU 
                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__62__char);
                            VL_WRITEF("%c",8,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__62__char);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                   - (IData)(1U));
                            vlSymsp->__Vcoverage[3840].fetch_add(1, std::memory_order_relaxed);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1);
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                        vlSymsp->__Vcoverage[3841].fetch_add(1, std::memory_order_relaxed);
                    } else {
                        VL_EXTEND_WI(4096,32, __Vtemp_67, 
                                     ([&]() {
                                    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst 
                                        = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X;
                                    if (((((((((0x2073U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst)) 
                                               | (0x1073U 
                                                  == 
                                                  (0x707fU 
                                                   & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) 
                                              | (0x13U 
                                                 == __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst)) 
                                             | (0x33U 
                                                == 
                                                (0xfe00707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) 
                                            | (0x40000033U 
                                               == (0xfe00707fU 
                                                   & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) 
                                           | (0x7033U 
                                              == (0xfe00707fU 
                                                  & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) 
                                          | (0x6033U 
                                             == (0xfe00707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) 
                                         | (0x4033U 
                                            == (0xfe00707fU 
                                                & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst)))) {
                                        if ((0x2073U 
                                             == (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x63737272U;
                                            vlSymsp->__Vcoverage[3789].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x1073U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x63737277U;
                                            vlSymsp->__Vcoverage[3790].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x13U 
                                                    == __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst)) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x6e6f7020U;
                                            vlSymsp->__Vcoverage[3791].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x33U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x61646420U;
                                            vlSymsp->__Vcoverage[3792].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x40000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x73756220U;
                                            vlSymsp->__Vcoverage[3793].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x7033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x616e6420U;
                                            vlSymsp->__Vcoverage[3794].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x6033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x6f722020U;
                                            vlSymsp->__Vcoverage[3795].fetch_add(1, std::memory_order_relaxed);
                                        } else {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x786f7220U;
                                            vlSymsp->__Vcoverage[3796].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    } else if (((((
                                                   ((((0x2033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst)) 
                                                      | (0x3033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) 
                                                     | (0x2000033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) 
                                                    | (0x13U 
                                                       == 
                                                       (0x707fU 
                                                        & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) 
                                                   | (0x7013U 
                                                      == 
                                                      (0x707fU 
                                                       & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) 
                                                  | (0x6013U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) 
                                                 | (0x4013U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) 
                                                | (0x2013U 
                                                   == 
                                                   (0x707fU 
                                                    & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst)))) {
                                        if ((0x2033U 
                                             == (0xfe00707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x736c7420U;
                                            vlSymsp->__Vcoverage[3797].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x3033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x736c7475U;
                                            vlSymsp->__Vcoverage[3798].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x2000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x6d756c20U;
                                            vlSymsp->__Vcoverage[3799].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x13U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x61646469U;
                                            vlSymsp->__Vcoverage[3800].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x7013U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x616e6469U;
                                            vlSymsp->__Vcoverage[3801].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x6013U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x6f726920U;
                                            vlSymsp->__Vcoverage[3802].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x4013U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x786f7269U;
                                            vlSymsp->__Vcoverage[3803].fetch_add(1, std::memory_order_relaxed);
                                        } else {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x736c7469U;
                                            vlSymsp->__Vcoverage[3804].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    } else if (((((
                                                   ((((0x3013U 
                                                       == 
                                                       (0x707fU 
                                                        & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst)) 
                                                      | (0x40005033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) 
                                                     | (0x5033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) 
                                                    | (0x1033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) 
                                                   | (0x40005013U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) 
                                                  | (0x5013U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) 
                                                 | (0x1013U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) 
                                                | (0x37U 
                                                   == 
                                                   (0x7fU 
                                                    & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst)))) {
                                        if ((0x3013U 
                                             == (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x736c7449U;
                                            vlSymsp->__Vcoverage[3805].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x40005033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x73726120U;
                                            vlSymsp->__Vcoverage[3806].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x5033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x73726c20U;
                                            vlSymsp->__Vcoverage[3807].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x1033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x736c6c20U;
                                            vlSymsp->__Vcoverage[3808].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x40005013U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x73726169U;
                                            vlSymsp->__Vcoverage[3809].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x5013U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x73726c69U;
                                            vlSymsp->__Vcoverage[3810].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x1013U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x736c6c69U;
                                            vlSymsp->__Vcoverage[3811].fetch_add(1, std::memory_order_relaxed);
                                        } else {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x6c756920U;
                                            vlSymsp->__Vcoverage[3812].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    } else if (((((
                                                   ((((0x17U 
                                                       == 
                                                       (0x7fU 
                                                        & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst)) 
                                                      | (0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) 
                                                     | (0x2023U 
                                                        == 
                                                        (0x707fU 
                                                         & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) 
                                                    | (0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) 
                                                   | (0x67U 
                                                      == 
                                                      (0x707fU 
                                                       & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) 
                                                  | (0x63U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) 
                                                 | (0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) 
                                                | (0x4063U 
                                                   == 
                                                   (0x707fU 
                                                    & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst)))) {
                                        if ((0x17U 
                                             == (0x7fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x61756950U;
                                            vlSymsp->__Vcoverage[3813].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x2003U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x6c772020U;
                                            vlSymsp->__Vcoverage[3814].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x73772020U;
                                            vlSymsp->__Vcoverage[3815].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x6a616c20U;
                                            vlSymsp->__Vcoverage[3816].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x6a616c72U;
                                            vlSymsp->__Vcoverage[3817].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x63U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x62657120U;
                                            vlSymsp->__Vcoverage[3818].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x626e6520U;
                                            vlSymsp->__Vcoverage[3819].fetch_add(1, std::memory_order_relaxed);
                                        } else {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x626c7420U;
                                            vlSymsp->__Vcoverage[3820].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    } else if ((0x5063U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                        __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x62676520U;
                                        vlSymsp->__Vcoverage[3821].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0x6063U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                        __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x626c7475U;
                                        vlSymsp->__Vcoverage[3822].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0x7063U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                        __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x62676575U;
                                        vlSymsp->__Vcoverage[3823].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0xbU 
                                                == 
                                                (0x7fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                        __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x63757330U;
                                        vlSymsp->__Vcoverage[3824].fetch_add(1, std::memory_order_relaxed);
                                    } else {
                                        __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x3f3f3f3fU;
                                        vlSymsp->__Vcoverage[3825].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    vlSymsp->__Vcoverage[3826].fetch_add(1, std::memory_order_relaxed);
                                }(), __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout));
                        VL_ASSIGN_W(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__63__str, __Vtemp_67);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                        while ((0U != (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__63__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                                | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__63__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                                = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                            vlSymsp->__Vcoverage[3835].fetch_add(1, std::memory_order_relaxed);
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                               - (IData)(1U));
                        while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                            VL_ASSIGNSEL_WI(4096,8,
                                            (0xfffU 
                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                            (0xffU 
                                             & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__63__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__63__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                            VL_WRITEF("%c",8,(0xffU 
                                              & (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                   ? 0U
                                                   : 
                                                  (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__63__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                 | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__63__str[
                                                    (0x7fU 
                                                     & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                   - (IData)(1U));
                            vlSymsp->__Vcoverage[3836].fetch_add(1, std::memory_order_relaxed);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                   - (IData)(1U));
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                        vlSymsp->__Vcoverage[3837].fetch_add(1, std::memory_order_relaxed);
                    }
                } else {
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__65__num = 4U;
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__65__char = 0x20U;
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__65__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__65__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__65__char);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[3840].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[3841].fetch_add(1, std::memory_order_relaxed);
                }
                VL_CONST_W_1X(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__66__str,0x0000007c);
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__66__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__66__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                    vlSymsp->__Vcoverage[3835].fetch_add(1, std::memory_order_relaxed);
                }
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                    = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                    = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__66__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__66__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                    VL_WRITEF("%c",8,(0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                 ? 0U
                                                 : 
                                                (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__66__str[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0xfffU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                               | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__66__str[
                                                  (0x7fU 
                                                   & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlSymsp->__Vcoverage[3836].fetch_add(1, std::memory_order_relaxed);
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                    = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                vlSymsp->__Vcoverage[3837].fetch_add(1, std::memory_order_relaxed);
                if (VL_LIKELY(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_M)) {
                    if (VL_UNLIKELY(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_M)) {
                        VL_CONST_W_1X(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__67__str,0x00000023);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                        while ((0U != (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__67__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                                | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__67__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                                = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                            vlSymsp->__Vcoverage[3835].fetch_add(1, std::memory_order_relaxed);
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                               - (IData)(1U));
                        while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                            VL_ASSIGNSEL_WI(4096,8,
                                            (0xfffU 
                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                            (0xffU 
                                             & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__67__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__67__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                            VL_WRITEF("%c",8,(0xffU 
                                              & (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                   ? 0U
                                                   : 
                                                  (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__67__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                 | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__67__str[
                                                    (0x7fU 
                                                     & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                   - (IData)(1U));
                            vlSymsp->__Vcoverage[3836].fetch_add(1, std::memory_order_relaxed);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                   - (IData)(1U));
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                        vlSymsp->__Vcoverage[3837].fetch_add(1, std::memory_order_relaxed);
                        __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__68__num = 3U;
                        __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__68__char = 0x20U;
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 = 0U;
                        while (VL_LTS_III(32, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__68__num)) {
                            VL_ASSIGNSEL_WI(4096,8,
                                            (0xfffU 
                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__68__char);
                            VL_WRITEF("%c",8,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__68__char);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                   - (IData)(1U));
                            vlSymsp->__Vcoverage[3840].fetch_add(1, std::memory_order_relaxed);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1);
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                        vlSymsp->__Vcoverage[3841].fetch_add(1, std::memory_order_relaxed);
                    } else {
                        VL_EXTEND_WI(4096,32, __Vtemp_81, 
                                     ([&]() {
                                    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst 
                                        = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M;
                                    if (((((((((0x2073U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst)) 
                                               | (0x1073U 
                                                  == 
                                                  (0x707fU 
                                                   & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) 
                                              | (0x13U 
                                                 == __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst)) 
                                             | (0x33U 
                                                == 
                                                (0xfe00707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) 
                                            | (0x40000033U 
                                               == (0xfe00707fU 
                                                   & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) 
                                           | (0x7033U 
                                              == (0xfe00707fU 
                                                  & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) 
                                          | (0x6033U 
                                             == (0xfe00707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) 
                                         | (0x4033U 
                                            == (0xfe00707fU 
                                                & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst)))) {
                                        if ((0x2073U 
                                             == (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x63737272U;
                                            vlSymsp->__Vcoverage[3789].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x1073U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x63737277U;
                                            vlSymsp->__Vcoverage[3790].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x13U 
                                                    == __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst)) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x6e6f7020U;
                                            vlSymsp->__Vcoverage[3791].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x33U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x61646420U;
                                            vlSymsp->__Vcoverage[3792].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x40000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x73756220U;
                                            vlSymsp->__Vcoverage[3793].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x7033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x616e6420U;
                                            vlSymsp->__Vcoverage[3794].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x6033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x6f722020U;
                                            vlSymsp->__Vcoverage[3795].fetch_add(1, std::memory_order_relaxed);
                                        } else {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x786f7220U;
                                            vlSymsp->__Vcoverage[3796].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    } else if (((((
                                                   ((((0x2033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst)) 
                                                      | (0x3033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) 
                                                     | (0x2000033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) 
                                                    | (0x13U 
                                                       == 
                                                       (0x707fU 
                                                        & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) 
                                                   | (0x7013U 
                                                      == 
                                                      (0x707fU 
                                                       & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) 
                                                  | (0x6013U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) 
                                                 | (0x4013U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) 
                                                | (0x2013U 
                                                   == 
                                                   (0x707fU 
                                                    & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst)))) {
                                        if ((0x2033U 
                                             == (0xfe00707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x736c7420U;
                                            vlSymsp->__Vcoverage[3797].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x3033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x736c7475U;
                                            vlSymsp->__Vcoverage[3798].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x2000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x6d756c20U;
                                            vlSymsp->__Vcoverage[3799].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x13U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x61646469U;
                                            vlSymsp->__Vcoverage[3800].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x7013U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x616e6469U;
                                            vlSymsp->__Vcoverage[3801].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x6013U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x6f726920U;
                                            vlSymsp->__Vcoverage[3802].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x4013U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x786f7269U;
                                            vlSymsp->__Vcoverage[3803].fetch_add(1, std::memory_order_relaxed);
                                        } else {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x736c7469U;
                                            vlSymsp->__Vcoverage[3804].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    } else if (((((
                                                   ((((0x3013U 
                                                       == 
                                                       (0x707fU 
                                                        & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst)) 
                                                      | (0x40005033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) 
                                                     | (0x5033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) 
                                                    | (0x1033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) 
                                                   | (0x40005013U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) 
                                                  | (0x5013U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) 
                                                 | (0x1013U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) 
                                                | (0x37U 
                                                   == 
                                                   (0x7fU 
                                                    & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst)))) {
                                        if ((0x3013U 
                                             == (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x736c7449U;
                                            vlSymsp->__Vcoverage[3805].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x40005033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x73726120U;
                                            vlSymsp->__Vcoverage[3806].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x5033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x73726c20U;
                                            vlSymsp->__Vcoverage[3807].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x1033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x736c6c20U;
                                            vlSymsp->__Vcoverage[3808].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x40005013U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x73726169U;
                                            vlSymsp->__Vcoverage[3809].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x5013U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x73726c69U;
                                            vlSymsp->__Vcoverage[3810].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x1013U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x736c6c69U;
                                            vlSymsp->__Vcoverage[3811].fetch_add(1, std::memory_order_relaxed);
                                        } else {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x6c756920U;
                                            vlSymsp->__Vcoverage[3812].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    } else if (((((
                                                   ((((0x17U 
                                                       == 
                                                       (0x7fU 
                                                        & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst)) 
                                                      | (0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) 
                                                     | (0x2023U 
                                                        == 
                                                        (0x707fU 
                                                         & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) 
                                                    | (0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) 
                                                   | (0x67U 
                                                      == 
                                                      (0x707fU 
                                                       & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) 
                                                  | (0x63U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) 
                                                 | (0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) 
                                                | (0x4063U 
                                                   == 
                                                   (0x707fU 
                                                    & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst)))) {
                                        if ((0x17U 
                                             == (0x7fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x61756950U;
                                            vlSymsp->__Vcoverage[3813].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x2003U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x6c772020U;
                                            vlSymsp->__Vcoverage[3814].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x73772020U;
                                            vlSymsp->__Vcoverage[3815].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x6a616c20U;
                                            vlSymsp->__Vcoverage[3816].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x6a616c72U;
                                            vlSymsp->__Vcoverage[3817].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x63U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x62657120U;
                                            vlSymsp->__Vcoverage[3818].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x626e6520U;
                                            vlSymsp->__Vcoverage[3819].fetch_add(1, std::memory_order_relaxed);
                                        } else {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x626c7420U;
                                            vlSymsp->__Vcoverage[3820].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    } else if ((0x5063U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                        __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x62676520U;
                                        vlSymsp->__Vcoverage[3821].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0x6063U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                        __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x626c7475U;
                                        vlSymsp->__Vcoverage[3822].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0x7063U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                        __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x62676575U;
                                        vlSymsp->__Vcoverage[3823].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0xbU 
                                                == 
                                                (0x7fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                        __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x63757330U;
                                        vlSymsp->__Vcoverage[3824].fetch_add(1, std::memory_order_relaxed);
                                    } else {
                                        __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x3f3f3f3fU;
                                        vlSymsp->__Vcoverage[3825].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    vlSymsp->__Vcoverage[3826].fetch_add(1, std::memory_order_relaxed);
                                }(), __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout));
                        VL_ASSIGN_W(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__69__str, __Vtemp_81);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                        while ((0U != (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__69__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                                | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__69__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                                = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                            vlSymsp->__Vcoverage[3835].fetch_add(1, std::memory_order_relaxed);
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                               - (IData)(1U));
                        while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                            VL_ASSIGNSEL_WI(4096,8,
                                            (0xfffU 
                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                            (0xffU 
                                             & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__69__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__69__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                            VL_WRITEF("%c",8,(0xffU 
                                              & (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                   ? 0U
                                                   : 
                                                  (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__69__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                 | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__69__str[
                                                    (0x7fU 
                                                     & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                   - (IData)(1U));
                            vlSymsp->__Vcoverage[3836].fetch_add(1, std::memory_order_relaxed);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                   - (IData)(1U));
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                        vlSymsp->__Vcoverage[3837].fetch_add(1, std::memory_order_relaxed);
                    }
                } else {
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__71__num = 4U;
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__71__char = 0x20U;
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__71__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__71__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__71__char);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[3840].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[3841].fetch_add(1, std::memory_order_relaxed);
                }
                VL_CONST_W_1X(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__72__str,0x0000007c);
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__72__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__72__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                    vlSymsp->__Vcoverage[3835].fetch_add(1, std::memory_order_relaxed);
                }
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                    = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                    = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__72__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__72__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                    VL_WRITEF("%c",8,(0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                 ? 0U
                                                 : 
                                                (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__72__str[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0xfffU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                               | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__72__str[
                                                  (0x7fU 
                                                   & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlSymsp->__Vcoverage[3836].fetch_add(1, std::memory_order_relaxed);
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                    = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                vlSymsp->__Vcoverage[3837].fetch_add(1, std::memory_order_relaxed);
                if (VL_LIKELY(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_W)) {
                    if (VL_UNLIKELY(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_W)) {
                        VL_CONST_W_1X(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__73__str,0x00000023);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                        while ((0U != (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__73__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                                | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__73__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                                = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                            vlSymsp->__Vcoverage[3835].fetch_add(1, std::memory_order_relaxed);
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                               - (IData)(1U));
                        while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                            VL_ASSIGNSEL_WI(4096,8,
                                            (0xfffU 
                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                            (0xffU 
                                             & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__73__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__73__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                            VL_WRITEF("%c",8,(0xffU 
                                              & (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                   ? 0U
                                                   : 
                                                  (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__73__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                 | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__73__str[
                                                    (0x7fU 
                                                     & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                   - (IData)(1U));
                            vlSymsp->__Vcoverage[3836].fetch_add(1, std::memory_order_relaxed);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                   - (IData)(1U));
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                        vlSymsp->__Vcoverage[3837].fetch_add(1, std::memory_order_relaxed);
                        __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__74__num = 3U;
                        __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__74__char = 0x20U;
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 = 0U;
                        while (VL_LTS_III(32, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__74__num)) {
                            VL_ASSIGNSEL_WI(4096,8,
                                            (0xfffU 
                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__74__char);
                            VL_WRITEF("%c",8,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__74__char);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                   - (IData)(1U));
                            vlSymsp->__Vcoverage[3840].fetch_add(1, std::memory_order_relaxed);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1);
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                        vlSymsp->__Vcoverage[3841].fetch_add(1, std::memory_order_relaxed);
                    } else {
                        VL_EXTEND_WI(4096,32, __Vtemp_95, 
                                     ([&]() {
                                    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst 
                                        = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W;
                                    if (((((((((0x2073U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst)) 
                                               | (0x1073U 
                                                  == 
                                                  (0x707fU 
                                                   & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) 
                                              | (0x13U 
                                                 == __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst)) 
                                             | (0x33U 
                                                == 
                                                (0xfe00707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) 
                                            | (0x40000033U 
                                               == (0xfe00707fU 
                                                   & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) 
                                           | (0x7033U 
                                              == (0xfe00707fU 
                                                  & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) 
                                          | (0x6033U 
                                             == (0xfe00707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) 
                                         | (0x4033U 
                                            == (0xfe00707fU 
                                                & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst)))) {
                                        if ((0x2073U 
                                             == (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x63737272U;
                                            vlSymsp->__Vcoverage[3789].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x1073U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x63737277U;
                                            vlSymsp->__Vcoverage[3790].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x13U 
                                                    == __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst)) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x6e6f7020U;
                                            vlSymsp->__Vcoverage[3791].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x33U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x61646420U;
                                            vlSymsp->__Vcoverage[3792].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x40000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x73756220U;
                                            vlSymsp->__Vcoverage[3793].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x7033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x616e6420U;
                                            vlSymsp->__Vcoverage[3794].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x6033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x6f722020U;
                                            vlSymsp->__Vcoverage[3795].fetch_add(1, std::memory_order_relaxed);
                                        } else {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x786f7220U;
                                            vlSymsp->__Vcoverage[3796].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    } else if (((((
                                                   ((((0x2033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst)) 
                                                      | (0x3033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) 
                                                     | (0x2000033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) 
                                                    | (0x13U 
                                                       == 
                                                       (0x707fU 
                                                        & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) 
                                                   | (0x7013U 
                                                      == 
                                                      (0x707fU 
                                                       & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) 
                                                  | (0x6013U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) 
                                                 | (0x4013U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) 
                                                | (0x2013U 
                                                   == 
                                                   (0x707fU 
                                                    & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst)))) {
                                        if ((0x2033U 
                                             == (0xfe00707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x736c7420U;
                                            vlSymsp->__Vcoverage[3797].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x3033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x736c7475U;
                                            vlSymsp->__Vcoverage[3798].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x2000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x6d756c20U;
                                            vlSymsp->__Vcoverage[3799].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x13U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x61646469U;
                                            vlSymsp->__Vcoverage[3800].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x7013U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x616e6469U;
                                            vlSymsp->__Vcoverage[3801].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x6013U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x6f726920U;
                                            vlSymsp->__Vcoverage[3802].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x4013U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x786f7269U;
                                            vlSymsp->__Vcoverage[3803].fetch_add(1, std::memory_order_relaxed);
                                        } else {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x736c7469U;
                                            vlSymsp->__Vcoverage[3804].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    } else if (((((
                                                   ((((0x3013U 
                                                       == 
                                                       (0x707fU 
                                                        & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst)) 
                                                      | (0x40005033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) 
                                                     | (0x5033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) 
                                                    | (0x1033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) 
                                                   | (0x40005013U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) 
                                                  | (0x5013U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) 
                                                 | (0x1013U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) 
                                                | (0x37U 
                                                   == 
                                                   (0x7fU 
                                                    & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst)))) {
                                        if ((0x3013U 
                                             == (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x736c7449U;
                                            vlSymsp->__Vcoverage[3805].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x40005033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x73726120U;
                                            vlSymsp->__Vcoverage[3806].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x5033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x73726c20U;
                                            vlSymsp->__Vcoverage[3807].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x1033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x736c6c20U;
                                            vlSymsp->__Vcoverage[3808].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x40005013U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x73726169U;
                                            vlSymsp->__Vcoverage[3809].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x5013U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x73726c69U;
                                            vlSymsp->__Vcoverage[3810].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x1013U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x736c6c69U;
                                            vlSymsp->__Vcoverage[3811].fetch_add(1, std::memory_order_relaxed);
                                        } else {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x6c756920U;
                                            vlSymsp->__Vcoverage[3812].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    } else if (((((
                                                   ((((0x17U 
                                                       == 
                                                       (0x7fU 
                                                        & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst)) 
                                                      | (0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) 
                                                     | (0x2023U 
                                                        == 
                                                        (0x707fU 
                                                         & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) 
                                                    | (0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) 
                                                   | (0x67U 
                                                      == 
                                                      (0x707fU 
                                                       & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) 
                                                  | (0x63U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) 
                                                 | (0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) 
                                                | (0x4063U 
                                                   == 
                                                   (0x707fU 
                                                    & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst)))) {
                                        if ((0x17U 
                                             == (0x7fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x61756950U;
                                            vlSymsp->__Vcoverage[3813].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x2003U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x6c772020U;
                                            vlSymsp->__Vcoverage[3814].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x73772020U;
                                            vlSymsp->__Vcoverage[3815].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x6a616c20U;
                                            vlSymsp->__Vcoverage[3816].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x6a616c72U;
                                            vlSymsp->__Vcoverage[3817].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x63U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x62657120U;
                                            vlSymsp->__Vcoverage[3818].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x626e6520U;
                                            vlSymsp->__Vcoverage[3819].fetch_add(1, std::memory_order_relaxed);
                                        } else {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x626c7420U;
                                            vlSymsp->__Vcoverage[3820].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    } else if ((0x5063U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                        __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x62676520U;
                                        vlSymsp->__Vcoverage[3821].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0x6063U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                        __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x626c7475U;
                                        vlSymsp->__Vcoverage[3822].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0x7063U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                        __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x62676575U;
                                        vlSymsp->__Vcoverage[3823].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0xbU 
                                                == 
                                                (0x7fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                        __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x63757330U;
                                        vlSymsp->__Vcoverage[3824].fetch_add(1, std::memory_order_relaxed);
                                    } else {
                                        __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x3f3f3f3fU;
                                        vlSymsp->__Vcoverage[3825].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    vlSymsp->__Vcoverage[3826].fetch_add(1, std::memory_order_relaxed);
                                }(), __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout));
                        VL_ASSIGN_W(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__75__str, __Vtemp_95);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                        while ((0U != (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__75__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                                | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__75__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                                = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                            vlSymsp->__Vcoverage[3835].fetch_add(1, std::memory_order_relaxed);
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                               - (IData)(1U));
                        while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                            VL_ASSIGNSEL_WI(4096,8,
                                            (0xfffU 
                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                            (0xffU 
                                             & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__75__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__75__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                            VL_WRITEF("%c",8,(0xffU 
                                              & (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                   ? 0U
                                                   : 
                                                  (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__75__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                 | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__75__str[
                                                    (0x7fU 
                                                     & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                   - (IData)(1U));
                            vlSymsp->__Vcoverage[3836].fetch_add(1, std::memory_order_relaxed);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                   - (IData)(1U));
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                        vlSymsp->__Vcoverage[3837].fetch_add(1, std::memory_order_relaxed);
                    }
                } else {
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__77__num = 4U;
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__77__char = 0x20U;
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__77__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__77__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__77__char);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[3840].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[3841].fetch_add(1, std::memory_order_relaxed);
                }
                VL_CONST_W_1X(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__78__str,0x0000003e);
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__78__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__78__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                    vlSymsp->__Vcoverage[3835].fetch_add(1, std::memory_order_relaxed);
                }
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                    = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                    = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__78__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__78__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                    VL_WRITEF("%c",8,(0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                 ? 0U
                                                 : 
                                                (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__78__str[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0xfffU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                               | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__78__str[
                                                  (0x7fU 
                                                   & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlSymsp->__Vcoverage[3836].fetch_add(1, std::memory_order_relaxed);
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                    = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                vlSymsp->__Vcoverage[3837].fetch_add(1, std::memory_order_relaxed);
                VL_SFORMAT_X(4096,vlSelf->top__DOT__DUT__DOT__temp
                             ,"%x",32,vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W);
                VL_ASSIGN_W(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__79__str, vlSelf->top__DOT__DUT__DOT__temp);
                __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__79__rdy 
                    = (1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
                __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__79__val 
                    = vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_val;
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1 = 0U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1)))
                                          ? 0U : (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__79__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1))))) 
                                        | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__79__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1))))))) {
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1 
                        = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1);
                    vlSymsp->__Vcoverage[3847].fetch_add(1, std::memory_order_relaxed);
                }
                if (VL_UNLIKELY(((IData)(__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__79__rdy) 
                                 & (IData)(__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__79__val)))) {
                    VL_ASSIGN_W(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__80__str, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__79__str);
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__80__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__80__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[3835].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__80__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__80__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__80__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__80__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[3836].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[3837].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[3852].fetch_add(1, std::memory_order_relaxed);
                } else if (VL_UNLIKELY(((IData)(__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__79__rdy) 
                                        & (~ (IData)(__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__79__val))))) {
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__81__num 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1;
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__81__char = 0x20U;
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__81__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__81__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__81__char);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[3840].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[3841].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[3851].fetch_add(1, std::memory_order_relaxed);
                } else if (VL_UNLIKELY(((~ (IData)(__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__79__rdy)) 
                                        & (IData)(__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__79__val)))) {
                    VL_CONST_W_1X(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__82__str,0x00000023);
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__82__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__82__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[3835].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__82__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__82__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__82__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__82__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[3836].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[3837].fetch_add(1, std::memory_order_relaxed);
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__83__num 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__83__char = 0x20U;
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__83__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__83__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__83__char);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[3840].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[3841].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[3850].fetch_add(1, std::memory_order_relaxed);
                } else if ((1U & ((~ (IData)(__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__79__rdy)) 
                                  & (~ (IData)(__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__79__val))))) {
                    VL_CONST_W_1X(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__84__str,0x0000002e);
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__84__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__84__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[3835].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__84__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__84__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__84__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__84__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[3836].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[3837].fetch_add(1, std::memory_order_relaxed);
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__85__num 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__85__char = 0x20U;
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__85__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__85__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__85__char);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[3840].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[3841].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[3848].fetch_add(1, std::memory_order_relaxed);
                } else {
                    VL_CONST_W_1X(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__86__str,0x00000078);
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__86__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__86__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[3835].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__86__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__86__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__86__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__86__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[3836].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[3837].fetch_add(1, std::memory_order_relaxed);
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__87__num 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__87__char = 0x20U;
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__87__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__87__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__87__char);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[3840].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[3841].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[3849].fetch_add(1, std::memory_order_relaxed);
                }
                vlSymsp->__Vcoverage[3853].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                    = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                vlSelf->top__DOT__DUT__DOT__idx0 = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                vlSelf->top__DOT__DUT__DOT__idx1 = 0x1ffU;
                while (VL_GTS_III(32, vlSelf->top__DOT__DUT__DOT__idx1, vlSelf->top__DOT__DUT__DOT__idx0)) {
                    vlSelf->top__DOT__DUT__DOT__idx1 
                        = (vlSelf->top__DOT__DUT__DOT__idx1 
                           - (IData)(1U));
                }
                VL_WRITEF("\n");
            }
            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__cycles_next 
                = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__cycles);
            vlSymsp->__Vcoverage[507].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[508].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[509].fetch_add(1, std::memory_order_relaxed);
    }
    VL_STOP_MT("tb_Cache.v", 377, "");
    vlSelf->__Vm_traceActivity[3U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->top__DOT____Vtogcov__clk))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->linetrace) ^ (IData)(vlSelf->top__DOT____Vtogcov__linetrace))) {
        vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__linetrace = vlSelf->linetrace;
    }
    vlSelf->top__DOT____Vcellinp__DUT__clk = ((IData)(vlSelf->clk) 
                                              & (IData)(vlSelf->top__DOT__cpu_en));
    if (((IData)(vlSelf->top__DOT____Vcellinp__DUT__clk) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__clk))) {
        vlSymsp->__Vcoverage[1052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__clk 
            = vlSelf->top__DOT____Vcellinp__DUT__clk;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_val) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__top__DOT__DUT__DOT__imem_respstream_drop_val__1)));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->top__DOT____Vcellinp__DUT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__top__DOT____Vcellinp__DUT__clk__0))));
    vlSelf->__VactTriggered.set(3U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(4U, ((~ (IData)(vlSelf->clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0)));
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__DUT__DOT__imem_respstream_drop_val__1 
        = vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_val;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT____Vcellinp__DUT__clk__0 
        = vlSelf->top__DOT____Vcellinp__DUT__clk;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___act_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    if (vlSelf->top__DOT__mem_clear) {
        vlSymsp->__Vcoverage[5984].fetch_add(1, std::memory_order_relaxed);
        if (vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared) {
            vlSymsp->__Vcoverage[5962].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared)))) {
            vlSymsp->__Vcoverage[5961].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem_clear)))) {
        if (vlSelf->top__DOT__reset) {
            vlSymsp->__Vcoverage[5983].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
            if (vlSelf->top__DOT__reset) {
                vlSymsp->__Vcoverage[5982].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
                vlSymsp->__Vcoverage[5981].fetch_add(1, std::memory_order_relaxed);
                if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en0_M)))) {
                    vlSymsp->__Vcoverage[5974].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__write_en1_M)))) {
                    vlSymsp->__Vcoverage[5968].fetch_add(1, std::memory_order_relaxed);
                }
                if (vlSelf->top__DOT__mem__DOT__mem__DOT__write_en1_M) {
                    vlSymsp->__Vcoverage[5967].fetch_add(1, std::memory_order_relaxed);
                }
                if (vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en0_M) {
                    vlSymsp->__Vcoverage[5973].fetch_add(1, std::memory_order_relaxed);
                    if ((3U != (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                      >> 0xaU)))) {
                        if ((4U != (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                          >> 0xaU)))) {
                            if ((5U != (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                              >> 0xaU)))) {
                                vlSymsp->__Vcoverage[5972].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((5U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                              >> 0xaU)))) {
                                vlSymsp->__Vcoverage[5971].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((4U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                          >> 0xaU)))) {
                            vlSymsp->__Vcoverage[5970].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((3U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                      >> 0xaU)))) {
                        vlSymsp->__Vcoverage[5969].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__write_en0_M)))) {
                    vlSymsp->__Vcoverage[5965].fetch_add(1, std::memory_order_relaxed);
                }
                if (vlSelf->top__DOT__mem__DOT__mem__DOT__write_en0_M) {
                    vlSymsp->__Vcoverage[5964].fetch_add(1, std::memory_order_relaxed);
                }
                if (vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en1_M) {
                    vlSymsp->__Vcoverage[5979].fetch_add(1, std::memory_order_relaxed);
                    if ((3U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                      >> 0xaU)))) {
                        vlSymsp->__Vcoverage[5975].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((3U != (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                      >> 0xaU)))) {
                        if ((4U != (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                          >> 0xaU)))) {
                            if ((5U != (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                              >> 0xaU)))) {
                                vlSymsp->__Vcoverage[5978].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((5U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                              >> 0xaU)))) {
                                vlSymsp->__Vcoverage[5977].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((4U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                          >> 0xaU)))) {
                            vlSymsp->__Vcoverage[5976].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en1_M)))) {
                    vlSymsp->__Vcoverage[5980].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    if (((IData)(vlSelf->top__DOT__reset) ^ (IData)(vlSelf->top__DOT____Vtogcov__reset))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reset = vlSelf->top__DOT__reset;
    }
    if (((IData)(vlSelf->top__DOT__mem_clear) ^ (IData)(vlSelf->top__DOT____Vtogcov__mem_clear))) {
        vlSymsp->__Vcoverage[491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mem_clear = vlSelf->top__DOT__mem_clear;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset)))) {
        vlSymsp->__Vcoverage[5811].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset 
            = ((2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset)))) {
        vlSymsp->__Vcoverage[5812].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset 
            = ((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset)));
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
    vlSelf->top__DOT__src__DOT__src__DOT__done_next 
        = ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index) 
           == (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max));
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[5785].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xffeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[5786].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xffdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[5787].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xffbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[5788].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xff7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[5789].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xfefU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[5790].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xfdfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[5791].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xfbfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[5792].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xf7fU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[5793].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xeffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x100U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[5794].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xdffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x200U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[5795].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xbffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x400U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[5796].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0x7ffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x800U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    __Vilp = 0x52bU;
    while ((__Vilp <= 0xfffU)) {
        vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[__Vilp] 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__m
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
}

VL_INLINE_OPT void Vtop___024root___act_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    __Vilp = 0U;
    while ((__Vilp <= 0x52aU)) {
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
                vlSymsp->__Vcoverage[5960].fetch_add(1, std::memory_order_relaxed);
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
                vlSymsp->__Vcoverage[5963].fetch_add(1, std::memory_order_relaxed);
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
                vlSymsp->__Vcoverage[5966].fetch_add(1, std::memory_order_relaxed);
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

VL_INLINE_OPT void Vtop___024root___act_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_sequent__TOP__2\n"); );
    // Body
    vlSelf->top__DOT__snk_done = ((~ (IData)(vlSelf->top__DOT__src__DOT__src__DOT__reset_reg)) 
                                  & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index) 
                                     == (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max)));
    if (((IData)(vlSelf->top__DOT__src__DOT__src__DOT__done_next) 
         ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__done_next))) {
        vlSymsp->__Vcoverage[598].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__done_next 
            = vlSelf->top__DOT__src__DOT__src__DOT__done_next;
    }
    if (((IData)(vlSelf->top__DOT__snk_done) ^ (IData)(vlSelf->top__DOT____Vtogcov__snk_done))) {
        vlSymsp->__Vcoverage[490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__snk_done = vlSelf->top__DOT__snk_done;
    }
    vlSelf->top__DOT__sink__DOT__sink_rdy = (1U & (
                                                   (~ (IData)(vlSelf->top__DOT__src__DOT__src__DOT__reset_reg)) 
                                                   & (~ (IData)(vlSelf->top__DOT__snk_done))));
    if (((IData)(vlSelf->top__DOT__sink__DOT__sink_rdy) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT____Vtogcov__sink_rdy))) {
        vlSymsp->__Vcoverage[762].fetch_add(1, std::memory_order_relaxed);
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

VL_INLINE_OPT void Vtop___024root___act_sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_sequent__TOP__3\n"); );
    // Body
    if (((IData)(vlSelf->top__DOT__flush) ^ (IData)(vlSelf->top__DOT____Vtogcov__flush))) {
        vlSymsp->__Vcoverage[492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__flush = vlSelf->top__DOT__flush;
    }
    if (((IData)(vlSelf->top__DOT__cpu_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__cpu_en))) {
        vlSymsp->__Vcoverage[494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cpu_en = vlSelf->top__DOT__cpu_en;
    }
    vlSelf->top__DOT____Vcellinp__DUT__clk = ((IData)(vlSelf->clk) 
                                              & (IData)(vlSelf->top__DOT__cpu_en));
    vlSelf->top__DOT__flush_done = ((IData)(vlSelf->top__DOT__cache__DOT__flush_done1) 
                                    & (IData)(vlSelf->top__DOT__flush));
    if (((IData)(vlSelf->top__DOT____Vcellinp__DUT__clk) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__clk))) {
        vlSymsp->__Vcoverage[1052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__clk 
            = vlSelf->top__DOT____Vcellinp__DUT__clk;
    }
    if (((IData)(vlSelf->top__DOT__flush_done) ^ (IData)(vlSelf->top__DOT____Vtogcov__flush_done))) {
        vlSymsp->__Vcoverage[493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__flush_done = vlSelf->top__DOT__flush_done;
    }
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__0\n"); );
    // Body
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[5689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[5690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[5691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[5692].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[5693].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[5694].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[5695].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[5696].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[5697].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[5698].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[5699].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[5700].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[5701].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[5702].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[5703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[5704].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[5705].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[5706].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[5707].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[5708].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[5709].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[5710].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[5711].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[5712].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[5713].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[5714].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[5715].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[5716].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[5717].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[5718].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[5719].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5720].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
}

VL_INLINE_OPT void Vtop___024root___act_sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_sequent__TOP__4\n"); );
    // Body
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_F 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_val)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_F));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_F))) {
        vlSymsp->__Vcoverage[1835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_F 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_F;
    }
}

VL_INLINE_OPT void Vtop___024root___act_sequent__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_sequent__TOP__5\n"); );
    // Init
    CData/*0:0*/ top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h93c28c56__0;
    top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h93c28c56__0 = 0;
    // Body
    if (((IData)(vlSelf->top__DOT__mngr2proc_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__mngr2proc_val))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_val 
            = vlSelf->top__DOT__mngr2proc_val;
    }
    vlSelf->top__DOT__mngr2proc_msg = ((IData)(vlSelf->top__DOT__mngr2proc_val)
                                        ? vlSelf->top__DOT__src__DOT__src_msg
                                        : 0U);
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_mngr2proc_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
           & ((~ (IData)(vlSelf->top__DOT__mngr2proc_val)) 
              & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mngr2proc_rdy_D)));
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
    top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h93c28c56__0 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_D)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D));
    vlSelf->top__DOT__DUT__DOT__reg_en_D = (1U & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_D)) 
                                                  | (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_D)));
    vlSelf->top__DOT__mngr2proc_rdy = ((IData)(top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h93c28c56__0) 
                                       & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mngr2proc_rdy_D));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__osquash_D 
        = ((IData)(top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h93c28c56__0) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_D));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_D 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_D)) 
           & (IData)(top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h93c28c56__0));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__reg_en_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__reg_en_D))) {
        vlSymsp->__Vcoverage[1349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__reg_en_D 
            = vlSelf->top__DOT__DUT__DOT__reg_en_D;
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
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__next_val_D))) {
        vlSymsp->__Vcoverage[1970].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__next_val_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_D;
    }
    vlSelf->top__DOT__DUT__DOT__imul_req_val_D = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_D) 
                                                  & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mul_D));
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
}

VL_INLINE_OPT void Vtop___024root___act_sequent__TOP__6(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_sequent__TOP__6\n"); );
    // Body
    vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay 
        = ((IData)(vlSelf->top__DOT__proc2mngr_val) 
           & ((IData)(vlSelf->top__DOT__sink__DOT__sink_rdy) 
              & (0U == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num)));
    vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlSelf->top__DOT__proc2mngr_rdy) 
           & (IData)(vlSelf->top__DOT__proc2mngr_val));
    vlSelf->top__DOT__sink__DOT__sink__DOT__index_en 
        = ((IData)(vlSelf->top__DOT__sink__DOT__sink_val) 
           & (IData)(vlSelf->top__DOT__sink__DOT__sink_rdy));
    if ((1U & (~ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state)))) {
        if (((IData)(vlSelf->top__DOT__proc2mngr_val) 
             & (~ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay)))) {
            vlSymsp->__Vcoverage[902].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__proc2mngr_val) 
                      & (~ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay)))))) {
            vlSymsp->__Vcoverage[903].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__zero_cycle_delay 
            = vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay;
    }
    if (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state) {
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next = 1U;
        if (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state) {
            if ((((IData)(vlSelf->top__DOT__proc2mngr_val) 
                  & (IData)(vlSelf->top__DOT__sink__DOT__sink_rdy)) 
                 & (0U == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay))) {
                vlSymsp->__Vcoverage[905].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next = 0U;
            }
            if ((1U & (~ (((IData)(vlSelf->top__DOT__proc2mngr_val) 
                           & (IData)(vlSelf->top__DOT__sink__DOT__sink_rdy)) 
                          & (0U == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay))))) {
                vlSymsp->__Vcoverage[906].fetch_add(1, std::memory_order_relaxed);
            }
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en 
                = (0U < vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay);
        } else {
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en = 0U;
        }
    } else {
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next = 0U;
        if (((IData)(vlSelf->top__DOT__proc2mngr_val) 
             & (~ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay)))) {
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en = 1U;
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next = 1U;
        } else {
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en = 0U;
        }
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[1789].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    }
    vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    if (((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_en) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_en))) {
        vlSymsp->__Vcoverage[939].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_en 
            = vlSelf->top__DOT__sink__DOT__sink__DOT__index_en;
    }
    if (((IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_en 
            = vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en;
    }
    if (((IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__state_next 
            = vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass))) {
        vlSymsp->__Vcoverage[1790].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass;
    }
    vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[1784].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en;
    }
    vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en) 
              | (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[1786].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__1\n"); );
    // Body
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_F 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_F) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_F) 
              | (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_ha20c3f05__0)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_F))) {
        vlSymsp->__Vcoverage[1840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_F 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_F;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_F 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_F) 
           & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_F)) 
              & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F))));
    vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_rdy 
        = (1U & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_F)) 
                 | (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__next_val_F))) {
        vlSymsp->__Vcoverage[1861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__next_val_F 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_F;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_rdy) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_respstream_drop_rdy))) {
        vlSymsp->__Vcoverage[1168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_respstream_drop_rdy 
            = vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_rdy;
    }
    vlSelf->top__DOT__imem_respstream_rdy = ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__state) 
                                             | (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_rdy));
    if (((IData)(vlSelf->top__DOT__imem_respstream_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_respstream_rdy))) {
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_rdy 
            = vlSelf->top__DOT__imem_respstream_rdy;
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state))) {
            if ((1U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state))) {
                if (((IData)(vlSelf->top__DOT__imem_respstream_rdy) 
                     & (~ (IData)(vlSelf->top__DOT__flush)))) {
                    vlSymsp->__Vcoverage[4096].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ ((IData)(vlSelf->top__DOT__imem_respstream_rdy) 
                              & (~ (IData)(vlSelf->top__DOT__flush)))))) {
                    if (((IData)(vlSelf->top__DOT__imem_respstream_rdy) 
                         & (IData)(vlSelf->top__DOT__flush))) {
                        vlSymsp->__Vcoverage[4094].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((1U & (~ ((IData)(vlSelf->top__DOT__imem_respstream_rdy) 
                                  & (IData)(vlSelf->top__DOT__flush))))) {
                        vlSymsp->__Vcoverage[4095].fetch_add(1, std::memory_order_relaxed);
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__2\n"); );
    // Body
    vlSelf->top__DOT__DUT__DOT__imem_reqstream_enq_val 
        = ((~ (IData)(vlSelf->top__DOT__reset)) & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_rdy));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_enq_val) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_val))) {
        vlSymsp->__Vcoverage[1132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_val 
            = vlSelf->top__DOT__DUT__DOT__imem_reqstream_enq_val;
    }
    vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_enq_val));
    vlSelf->top__DOT__imem_reqstream_val = (1U & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty)) 
                                                  | ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty) 
                                                     & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_enq_val))));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_enq))) {
        vlSymsp->__Vcoverage[1429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_enq 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    }
    if (((IData)(vlSelf->top__DOT__imem_reqstream_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_reqstream_val))) {
        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_val 
            = vlSelf->top__DOT__imem_reqstream_val;
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state)))) {
                if (((~ (IData)(vlSelf->top__DOT__imem_reqstream_val)) 
                     & (IData)(vlSelf->top__DOT__flush))) {
                    vlSymsp->__Vcoverage[4080].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (((IData)(vlSelf->top__DOT__imem_reqstream_val) 
                               & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__tarray_match)) 
                              & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__line_valid))))) {
                    vlSymsp->__Vcoverage[4073].fetch_add(1, std::memory_order_relaxed);
                }
                if ((((IData)(vlSelf->top__DOT__imem_reqstream_val) 
                      & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__tarray_match)) 
                     & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__line_valid))) {
                    vlSymsp->__Vcoverage[4072].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ ((((IData)(vlSelf->top__DOT__imem_reqstream_val) 
                                & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__tarray_match)) 
                               & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__line_valid)) 
                              & (0x400U == (0x1c00U 
                                            & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U])))))) {
                    if ((1U & (~ ((((IData)(vlSelf->top__DOT__imem_reqstream_val) 
                                    & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__tarray_match)) 
                                   & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__line_valid)) 
                                  & (0U == (0x1c00U 
                                            & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U])))))) {
                        vlSymsp->__Vcoverage[4075].fetch_add(1, std::memory_order_relaxed);
                    }
                    if (((((IData)(vlSelf->top__DOT__imem_reqstream_val) 
                           & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__tarray_match)) 
                          & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__line_valid)) 
                         & (0U == (0x1c00U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U])))) {
                        vlSymsp->__Vcoverage[4074].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if (((((IData)(vlSelf->top__DOT__imem_reqstream_val) 
                       & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__tarray_match)) 
                      & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__line_valid)) 
                     & (0x400U == (0x1c00U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U])))) {
                    vlSymsp->__Vcoverage[4076].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ ((~ (IData)(vlSelf->top__DOT__imem_reqstream_val)) 
                              & (IData)(vlSelf->top__DOT__flush))))) {
                    if ((1U & (~ (((~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__tarray_match)) 
                                   & (~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__line_dirty))) 
                                  | (~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__line_valid)))))) {
                        if ((1U & (~ ((~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__tarray_match)) 
                                      & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__line_dirty))))) {
                            vlSymsp->__Vcoverage[4078].fetch_add(1, std::memory_order_relaxed);
                        }
                        if (((~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__tarray_match)) 
                             & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__line_dirty))) {
                            vlSymsp->__Vcoverage[4077].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((1U & (((~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__tarray_match)) 
                                & (~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__line_dirty))) 
                               | (~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__line_valid))))) {
                        vlSymsp->__Vcoverage[4079].fetch_add(1, std::memory_order_relaxed);
                    }
                }
            }
        }
    }
    vlSelf->top__DOT__cache__DOT__icache__DOT__dirty_set 
        = ((~ ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state) 
               >> 2U)) & ((2U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state))
                           ? ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state) 
                              & (0U == (0x1c00U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U])))
                           : ((~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state)) 
                              & ((((IData)(vlSelf->top__DOT__imem_reqstream_val) 
                                   & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__tarray_match)) 
                                  & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__line_valid)) 
                                 & (0x400U == (0x1c00U 
                                               & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]))))));
    vlSelf->top__DOT__cache__DOT__icache__DOT__darray_wen 
        = ((~ ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state) 
               >> 2U)) & ((2U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state))
                           ? ((1U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state))
                               ? (0U != (7U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                                               >> 0xaU)))
                               : (IData)(vlSelf->top__DOT__cache0_resp_val))
                           : ((~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state)) 
                              & ((((IData)(vlSelf->top__DOT__imem_reqstream_val) 
                                   & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__tarray_match)) 
                                  & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__line_valid)) 
                                 & (0x400U == (0x1c00U 
                                               & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]))))));
    if ((4U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state))) {
        vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__nextState 
            = ((2U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state))
                ? 0U : ((1U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state))
                         ? 0U : (((0xfU == (0xfU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__inc_word)))) 
                                  & (0U != vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty))
                                  ? 4U : (((0xfU == 
                                            (0xfU & 
                                             ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__inc_word)))) 
                                           & (0U == vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__dirty))
                                           ? 0U : 4U))));
        vlSelf->top__DOT__cache__DOT__icache__DOT__darray_en 
            = (1U & (IData)((0U == (3U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state)))));
    } else {
        vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__nextState 
            = ((2U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state))
                ? ((1U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state))
                    ? (((IData)(vlSelf->top__DOT__imem_respstream_rdy) 
                        & (~ (IData)(vlSelf->top__DOT__flush)))
                        ? 0U : (((IData)(vlSelf->top__DOT__imem_respstream_rdy) 
                                 & (IData)(vlSelf->top__DOT__flush))
                                 ? 4U : 3U)) : ((0xfU 
                                                 == 
                                                 (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__inc_word))))
                                                 ? 3U
                                                 : 2U))
                : ((1U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state))
                    ? ((0xfU == (0xfU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__inc_word))))
                        ? 2U : 1U) : (((~ (IData)(vlSelf->top__DOT__imem_reqstream_val)) 
                                       & (IData)(vlSelf->top__DOT__flush))
                                       ? 4U : ((1U 
                                                & (((~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__tarray_match)) 
                                                    & (~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__line_dirty))) 
                                                   | (~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__line_valid))))
                                                ? 2U
                                                : (
                                                   ((~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__tarray_match)) 
                                                    & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__line_dirty))
                                                    ? 1U
                                                    : 0U)))));
        vlSelf->top__DOT__cache__DOT__icache__DOT__darray_en 
            = (1U & (((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state) 
                      >> 1U) | ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state) 
                                | (((((IData)(vlSelf->top__DOT__imem_reqstream_val) 
                                      & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__tarray_match)) 
                                     & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__line_valid)) 
                                    & (0x400U == (0x1c00U 
                                                  & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]))) 
                                   | ((((IData)(vlSelf->top__DOT__imem_reqstream_val) 
                                        & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__tarray_match)) 
                                       & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__line_valid)) 
                                      & (0U == (0x1c00U 
                                                & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U])))))));
    }
    vlSelf->top__DOT__imem_respstream_val = (1U & (
                                                   (~ 
                                                    ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state) 
                                                     >> 2U)) 
                                                   & ((2U 
                                                       & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state))
                                                       ? (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state)
                                                       : 
                                                      ((~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state)) 
                                                       & (((IData)(vlSelf->top__DOT__imem_reqstream_val) 
                                                           & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__tarray_match)) 
                                                          & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__line_valid))))));
    vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlSelf->top__DOT__imem_reqstream_rdy) 
           & (IData)(vlSelf->top__DOT__imem_reqstream_val));
    if (((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dirty_set) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__dirty_set))) {
        vlSymsp->__Vcoverage[4061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__dirty_set 
            = vlSelf->top__DOT__cache__DOT__icache__DOT__dirty_set;
    }
    if (((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__darray_wen) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__darray_wen))) {
        vlSymsp->__Vcoverage[4057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__darray_wen 
            = vlSelf->top__DOT__cache__DOT__icache__DOT__darray_wen;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__nextState) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT____Vtogcov__nextState)))) {
        vlSymsp->__Vcoverage[4066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT____Vtogcov__nextState 
            = ((6U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT____Vtogcov__nextState)) 
               | (1U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__nextState)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__nextState) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT____Vtogcov__nextState)))) {
        vlSymsp->__Vcoverage[4067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT____Vtogcov__nextState 
            = ((5U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT____Vtogcov__nextState)) 
               | (2U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__nextState)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__nextState) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT____Vtogcov__nextState)))) {
        vlSymsp->__Vcoverage[4068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT____Vtogcov__nextState 
            = ((3U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT____Vtogcov__nextState)) 
               | (4U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__nextState)));
    }
    if (((IData)(vlSelf->top__DOT__imem_respstream_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_respstream_val))) {
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_val 
            = vlSelf->top__DOT__imem_respstream_val;
    }
    vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_val 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__state)) 
           & ((IData)(vlSelf->top__DOT__imem_respstream_val) 
              & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F))));
    vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__istream_go 
        = ((IData)(vlSelf->top__DOT__imem_respstream_rdy) 
           & (IData)(vlSelf->top__DOT__imem_respstream_val));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[1430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    }
    vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
            & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((1U & ((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    if (vlSelf->top__DOT__cache__DOT__icache__DOT__darray_en) {
        vlSymsp->__Vcoverage[4290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out 
            = vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_data_out;
    } else {
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__darray_en)))) {
        vlSymsp->__Vcoverage[4291].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__darray_en) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__darray_en))) {
        vlSymsp->__Vcoverage[4056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__darray_en 
            = vlSelf->top__DOT__cache__DOT__icache__DOT__darray_en;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_val) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_respstream_drop_val))) {
        vlSymsp->__Vcoverage[1167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_respstream_drop_val 
            = vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_val;
    }
    if (vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__state) {
        if (vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__istream_go) {
            vlSymsp->__Vcoverage[1682].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__istream_go)))) {
            vlSymsp->__Vcoverage[1683].fetch_add(1, std::memory_order_relaxed);
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
            vlSymsp->__Vcoverage[1680].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F) 
                      & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__istream_go)))))) {
            vlSymsp->__Vcoverage[1681].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__istream_go) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT____Vtogcov__istream_go))) {
        vlSymsp->__Vcoverage[1679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT____Vtogcov__istream_go 
            = vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__istream_go;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[1428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass))) {
        vlSymsp->__Vcoverage[1431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass;
    }
    vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (1U & (((~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)) 
                  & (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq))
                  ? ((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                  : (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)));
    vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    if ((1U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2879].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (1U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2880].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (2U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2881].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (4U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2882].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (8U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2883].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2900].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2902].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2903].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2904].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2905].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2906].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2907].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2908].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2909].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out));
    }
    if (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2910].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out));
    }
    vlSelf->top__DOT__imem_respstream_msg = (((QData)((IData)(
                                                              (7U 
                                                               & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                                                                  >> 0xaU)))) 
                                              << 0x2cU) 
                                             | (QData)((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out)));
    vlSelf->top__DOT__cache0_req_msg[0U] = (IData)((QData)((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out)));
    vlSelf->top__DOT__cache0_req_msg[1U] = ((vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__addr 
                                             << 2U) 
                                            | (IData)(
                                                      ((QData)((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out)) 
                                                       >> 0x20U)));
    vlSelf->top__DOT__cache0_req_msg[2U] = (((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__mem_action) 
                                             << 0xaU) 
                                            | (vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__addr 
                                               >> 0x1eU));
    if (vlSelf->top__DOT__mem__DOT__mem_memreq0_val) {
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
            = vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__read_data_out;
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
            = vlSelf->top__DOT__cache0_req_msg[0U];
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
            = vlSelf->top__DOT__cache0_req_msg[1U];
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
            = vlSelf->top__DOT__cache0_req_msg[2U];
    } else {
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] = 0U;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__next_state) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT____Vtogcov__next_state))) {
        vlSymsp->__Vcoverage[1678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT____Vtogcov__next_state 
            = vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__next_state;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__deq_ptr_next))) {
        vlSymsp->__Vcoverage[1426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__deq_ptr_next 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[1436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_reg__DOT____Vtogcov__d 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__write_en) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[1419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__write_en;
    }
    vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (1U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__write_en)
                  ? ((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                  : (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[6317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x6fffffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x5fffffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__imem_respstream_msg 
                  ^ vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x3fffffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fefffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7effffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7dffffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7bffffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x77ffffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imem_respstream_msg) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_respstream_msg)))) {
        vlSymsp->__Vcoverage[165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__imem_respstream_msg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffffffefULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffffefffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffefffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffefffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((0x400U & (vlSelf->top__DOT__cache0_req_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]))) {
        vlSymsp->__Vcoverage[327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U] 
            = ((0x1bffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]) 
               | (0x400U & vlSelf->top__DOT__cache0_req_msg[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache0_req_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]))) {
        vlSymsp->__Vcoverage[328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U] 
            = ((0x17ffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]) 
               | (0x800U & vlSelf->top__DOT__cache0_req_msg[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache0_req_msg[2U] 
                    ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]))) {
        vlSymsp->__Vcoverage[329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U] 
            = ((0xfffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]) 
               | (0x1000U & vlSelf->top__DOT__cache0_req_msg[2U]));
    }
    if ((4U & (vlSelf->top__DOT__cache0_req_msg[2U] 
               ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]))) {
        vlSymsp->__Vcoverage[330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U] 
            = ((0x1ffbU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]) 
               | (4U & vlSelf->top__DOT__cache0_req_msg[2U]));
    }
    if ((8U & (vlSelf->top__DOT__cache0_req_msg[2U] 
               ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]))) {
        vlSymsp->__Vcoverage[331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U] 
            = ((0x1ff7U & vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]) 
               | (8U & vlSelf->top__DOT__cache0_req_msg[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache0_req_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]))) {
        vlSymsp->__Vcoverage[332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U] 
            = ((0x1fefU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]) 
               | (0x10U & vlSelf->top__DOT__cache0_req_msg[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache0_req_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]))) {
        vlSymsp->__Vcoverage[333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U] 
            = ((0x1fdfU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]) 
               | (0x20U & vlSelf->top__DOT__cache0_req_msg[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache0_req_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]))) {
        vlSymsp->__Vcoverage[334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U] 
            = ((0x1fbfU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]) 
               | (0x40U & vlSelf->top__DOT__cache0_req_msg[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache0_req_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]))) {
        vlSymsp->__Vcoverage[335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U] 
            = ((0x1f7fU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]) 
               | (0x80U & vlSelf->top__DOT__cache0_req_msg[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache0_req_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]))) {
        vlSymsp->__Vcoverage[336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U] 
            = ((0x1effU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]) 
               | (0x100U & vlSelf->top__DOT__cache0_req_msg[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache0_req_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]))) {
        vlSymsp->__Vcoverage[337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U] 
            = ((0x1dffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]) 
               | (0x200U & vlSelf->top__DOT__cache0_req_msg[2U]));
    }
    if ((4U & (vlSelf->top__DOT__cache0_req_msg[1U] 
               ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (4U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((8U & (vlSelf->top__DOT__cache0_req_msg[1U] 
               ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (8U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x10U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x20U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x40U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x80U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x100U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x200U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x400U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x800U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x1000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x2000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x4000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x8000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x10000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x20000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x40000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x80000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x100000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x200000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x400000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x800000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x1000000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x2000000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x4000000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x8000000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x10000000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x20000000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x40000000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if (((vlSelf->top__DOT__cache0_req_msg[1U] ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x80000000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((1U & (vlSelf->top__DOT__cache0_req_msg[2U] 
               ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]))) {
        vlSymsp->__Vcoverage[368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U] 
            = ((0x1ffeU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]) 
               | (1U & vlSelf->top__DOT__cache0_req_msg[2U]));
    }
    if ((2U & (vlSelf->top__DOT__cache0_req_msg[2U] 
               ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]))) {
        vlSymsp->__Vcoverage[369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U] 
            = ((0x1ffdU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]) 
               | (2U & vlSelf->top__DOT__cache0_req_msg[2U]));
    }
    if ((1U & (vlSelf->top__DOT__cache0_req_msg[1U] 
               ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (1U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((2U & (vlSelf->top__DOT__cache0_req_msg[1U] 
               ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (2U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((1U & (vlSelf->top__DOT__cache0_req_msg[0U] 
               ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (1U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((2U & (vlSelf->top__DOT__cache0_req_msg[0U] 
               ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (2U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((4U & (vlSelf->top__DOT__cache0_req_msg[0U] 
               ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (4U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((8U & (vlSelf->top__DOT__cache0_req_msg[0U] 
               ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (8U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x10U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x20U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x40U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x80U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x100U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x200U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x400U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x800U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x1000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x2000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x4000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x8000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x10000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x20000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x40000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x80000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x100000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x200000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x400000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x800000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x1000000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x2000000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x4000000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x8000000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x10000000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x20000000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[402].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x40000000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if (((vlSelf->top__DOT__cache0_req_msg[0U] ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[403].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x80000000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__enq_ptr_next))) {
        vlSymsp->__Vcoverage[1424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__enq_ptr_next 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[1434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_reg__DOT____Vtogcov__d 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next;
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[4989].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[4990].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[4991].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[4992].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[4993].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[4994].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[4995].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[4996].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[4997].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[4998].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[4999].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5000].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5001].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5002].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5003].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5004].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5007].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5008].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5009].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5010].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5011].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5012].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5013].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5014].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5015].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5016].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5017].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5018].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5019].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
          ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5020].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5021].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5022].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5023].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5024].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5025].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5026].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5027].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5028].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5029].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5030].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5031].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5032].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5033].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5034].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5035].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5036].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
          ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[5053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1ffeU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[5054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1ffdU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[5055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1ffbU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[5056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1ff7U & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[5057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1fefU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[5058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1fdfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[5059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1fbfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[5060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1f7fU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[5061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1effU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[5062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1dffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[5063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1bffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[5064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x17ffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[5065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0xfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
}
