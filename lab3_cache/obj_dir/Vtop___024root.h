// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vtop___024unit;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtop___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(linetrace,0,0);
        CData/*0:0*/ top__DOT__reset;
        CData/*0:0*/ top__DOT__memreq_val;
        CData/*0:0*/ top__DOT__memreq_rdy;
        CData/*0:0*/ top__DOT__memresp_val;
        CData/*0:0*/ top__DOT__memresp_rdy;
        CData/*0:0*/ top__DOT__cache_req_val;
        CData/*0:0*/ top__DOT__cache_req_rdy;
        CData/*0:0*/ top__DOT__cache_resp_val;
        CData/*0:0*/ top__DOT__cache_resp_rdy;
        CData/*0:0*/ top__DOT__flush;
        CData/*0:0*/ top__DOT__all_flushed;
        CData/*0:0*/ top__DOT__flush_done;
        CData/*0:0*/ top__DOT__get_next_flush_line;
        CData/*0:0*/ top__DOT__tarray_match;
        CData/*0:0*/ top__DOT__line_dirty;
        CData/*0:0*/ top__DOT__line_valid;
        CData/*0:0*/ top__DOT__req_count_done;
        CData/*0:0*/ top__DOT__resp_count_done;
        CData/*0:0*/ top__DOT__input_en;
        CData/*0:0*/ top__DOT__tarray_en;
        CData/*0:0*/ top__DOT__tarray_wen;
        CData/*0:0*/ top__DOT__resp_count_en;
        CData/*0:0*/ top__DOT__req_count_en;
        CData/*0:0*/ top__DOT__count_reset;
        CData/*0:0*/ top__DOT__write_data_sel;
        CData/*0:0*/ top__DOT__darray_en;
        CData/*0:0*/ top__DOT__darray_wen;
        CData/*0:0*/ top__DOT__index_sel;
        CData/*0:0*/ top__DOT__write_word_sel;
        CData/*0:0*/ top__DOT__read_word_sel;
        CData/*2:0*/ top__DOT__mem_action;
        CData/*0:0*/ top__DOT__clean_set;
        CData/*0:0*/ top__DOT__dirty_set;
        CData/*0:0*/ top__DOT__valid_set;
        CData/*0:0*/ top__DOT____Vtogcov__clk;
        CData/*0:0*/ top__DOT____Vtogcov__linetrace;
        CData/*0:0*/ top__DOT____Vtogcov__reset;
        CData/*0:0*/ top__DOT____Vtogcov__memreq_val;
        CData/*0:0*/ top__DOT____Vtogcov__memreq_rdy;
        CData/*0:0*/ top__DOT____Vtogcov__memresp_val;
        CData/*0:0*/ top__DOT____Vtogcov__memresp_rdy;
        CData/*0:0*/ top__DOT____Vtogcov__cache_req_val;
        CData/*0:0*/ top__DOT____Vtogcov__cache_req_rdy;
        CData/*0:0*/ top__DOT____Vtogcov__cache_resp_val;
        CData/*0:0*/ top__DOT____Vtogcov__cache_resp_rdy;
        CData/*0:0*/ top__DOT____Vtogcov__flush;
        CData/*0:0*/ top__DOT____Vtogcov__all_flushed;
        CData/*0:0*/ top__DOT____Vtogcov__flush_done;
        CData/*0:0*/ top__DOT____Vtogcov__get_next_flush_line;
        CData/*0:0*/ top__DOT____Vtogcov__tarray_match;
        CData/*0:0*/ top__DOT____Vtogcov__line_dirty;
        CData/*0:0*/ top__DOT____Vtogcov__line_valid;
        CData/*0:0*/ top__DOT____Vtogcov__req_count_done;
        CData/*0:0*/ top__DOT____Vtogcov__resp_count_done;
        CData/*0:0*/ top__DOT____Vtogcov__input_en;
        CData/*0:0*/ top__DOT____Vtogcov__tarray_en;
        CData/*0:0*/ top__DOT____Vtogcov__tarray_wen;
        CData/*0:0*/ top__DOT____Vtogcov__resp_count_en;
        CData/*0:0*/ top__DOT____Vtogcov__req_count_en;
        CData/*0:0*/ top__DOT____Vtogcov__count_reset;
        CData/*0:0*/ top__DOT____Vtogcov__write_data_sel;
        CData/*0:0*/ top__DOT____Vtogcov__darray_en;
    };
    struct {
        CData/*0:0*/ top__DOT____Vtogcov__darray_wen;
        CData/*0:0*/ top__DOT____Vtogcov__index_sel;
        CData/*0:0*/ top__DOT____Vtogcov__write_word_sel;
        CData/*0:0*/ top__DOT____Vtogcov__read_word_sel;
        CData/*2:0*/ top__DOT____Vtogcov__mem_action;
        CData/*0:0*/ top__DOT____Vtogcov__clean_set;
        CData/*0:0*/ top__DOT____Vtogcov__dirty_set;
        CData/*0:0*/ top__DOT____Vtogcov__valid_set;
        CData/*0:0*/ top__DOT__DUT__DOT__hit;
        CData/*0:0*/ top__DOT__DUT__DOT__hit_write;
        CData/*0:0*/ top__DOT__DUT__DOT__req_write;
        CData/*0:0*/ top__DOT__DUT__DOT__counts_done;
        CData/*0:0*/ top__DOT__DUT__DOT__inc_req_not_done;
        CData/*0:0*/ top__DOT__DUT__DOT__inc_resp_not_done;
        CData/*0:0*/ top__DOT__DUT__DOT__int_flush_done;
        CData/*0:0*/ top__DOT__DUT__DOT__int_not_flush_done;
        CData/*2:0*/ top__DOT__DUT__DOT__state;
        CData/*2:0*/ top__DOT__DUT__DOT__nextState;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__hit;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__hit_write;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__req_write;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__counts_done;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__inc_req_not_done;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__inc_resp_not_done;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__int_flush_done;
        CData/*0:0*/ top__DOT__DUT__DOT____Vtogcov__int_not_flush_done;
        CData/*2:0*/ top__DOT__DUT__DOT____Vtogcov__state;
        CData/*2:0*/ top__DOT__DUT__DOT____Vtogcov__nextState;
        CData/*0:0*/ __Vtask_top__DOT__DUT__DOT__tab__390__t_cache_req_val;
        CData/*0:0*/ __Vtask_top__DOT__DUT__DOT__tab__390__t_req_count_en;
        CData/*0:0*/ __Vtask_top__DOT__DUT__DOT__tab__390__t_resp_count_en;
        CData/*0:0*/ __Vtask_top__DOT__DUT__DOT__tab__390__t_count_reset;
        CData/*0:0*/ __Vtask_top__DOT__DUT__DOT__tab__390__t_flush_done;
        CData/*0:0*/ __Vtask_top__DOT__DUT__DOT__tab__390__t_get_next_flush_line;
        CData/*0:0*/ __Vtask_top__DOT__DUT__DOT__tab__391__t_darray_wen;
        CData/*0:0*/ __Vtask_top__DOT__DUT__DOT__tab__391__t_dirty_set;
        CData/*0:0*/ __Vtask_top__DOT__DUT__DOT__tab__391__t_input_en;
        CData/*0:0*/ __Vtask_top__DOT__DUT__DOT__tab__392__t_cache_req_val;
        CData/*0:0*/ __Vtask_top__DOT__DUT__DOT__tab__392__t_tarray_wen;
        CData/*0:0*/ __Vtask_top__DOT__DUT__DOT__tab__392__t_req_count_en;
        CData/*0:0*/ __Vtask_top__DOT__DUT__DOT__tab__392__t_resp_count_en;
        CData/*0:0*/ __Vtask_top__DOT__DUT__DOT__tab__392__t_count_reset;
        CData/*0:0*/ __Vtask_top__DOT__DUT__DOT__tab__392__t_darray_wen;
        CData/*0:0*/ __Vtask_top__DOT__DUT__DOT__tab__393__t_cache_req_val;
        CData/*0:0*/ __Vtask_top__DOT__DUT__DOT__tab__393__t_req_count_en;
        CData/*0:0*/ __Vtask_top__DOT__DUT__DOT__tab__393__t_resp_count_en;
        CData/*0:0*/ __Vtask_top__DOT__DUT__DOT__tab__393__t_count_reset;
        CData/*0:0*/ __Vtask_top__DOT__DUT__DOT__tab__394__t_memresp_val;
        CData/*0:0*/ __Vtask_top__DOT__DUT__DOT__tab__394__t_darray_en;
        CData/*0:0*/ __Vtask_top__DOT__DUT__DOT__tab__394__t_darray_wen;
        CData/*0:0*/ __Vtask_top__DOT__DUT__DOT__tab__394__t_dirty_set;
        CData/*0:0*/ __Vtask_top__DOT__DUT__DOT__tab__394__t_input_en;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        VlWide<3>/*76:0*/ top__DOT__memreq_msg;
        QData/*46:0*/ top__DOT__memresp_msg;
        VlWide<3>/*76:0*/ top__DOT__cache_req_msg;
        QData/*46:0*/ top__DOT__cache_resp_msg;
        VlWide<3>/*76:0*/ top__DOT____Vtogcov__memreq_msg;
        QData/*46:0*/ top__DOT____Vtogcov__memresp_msg;
        VlWide<3>/*76:0*/ top__DOT____Vtogcov__cache_req_msg;
    };
    struct {
        QData/*46:0*/ top__DOT____Vtogcov__cache_resp_msg;
        VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    };
    VlTriggerScheduler __VtrigSched_h3d404bd2__0;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
