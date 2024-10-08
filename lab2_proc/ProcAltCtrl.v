//=========================================================================
// 5-Stage Simple Pipelined Processor Control
//=========================================================================

`ifndef LAB2_PROC_PROC_BASE_CTRL_V
`define LAB2_PROC_PROC_BASE_CTRL_V

`include "vc/trace.v"

`include "tinyrv2_encoding.v"

module lab2_proc_ProcAltCtrl
(
  input  logic        clk,
  input  logic        reset,

  // Instruction Memory Port

  output logic        imem_reqstream_val,
  input  logic        imem_reqstream_rdy, // not connected
  input  logic        imem_respstream_val,
  output logic        imem_respstream_rdy,
  output logic        imem_respstream_drop,

  // Data Memory Port

  output logic        dmem_reqstream_val,
  input  logic        dmem_reqstream_rdy,
  input  logic        dmem_respstream_val,
  output logic        dmem_respstream_rdy,
  output logic        mem_action_M,

  // mngr communication port

  input  logic        mngr2proc_val,
  output logic        mngr2proc_rdy,
  output logic        proc2mngr_val,
  input  logic        proc2mngr_rdy,

  // control signals (ctrl->dpath)

  output logic        reg_en_F,
  output logic [1:0]  pc_sel_F,

  output logic        reg_en_D,
  output logic        op1_sel_D,
  output logic [1:0]  op2_sel_D,
  output logic [1:0]  csrr_sel_D, // not switched from 0 for this lab
  output logic [2:0]  imm_type_D,
  output logic [1:0]  op1_byp_sel_D,
  output logic [1:0]  op2_byp_sel_D,
  output logic        imul_req_val_D,

  output logic        reg_en_X,
  output logic [3:0]  alu_fn_X,
  output logic [1:0]  ex_result_sel_X,
  output logic        imul_resp_rdy_X,

  output logic        reg_en_M,
  output logic        wb_result_sel_M,

  output logic        reg_en_W,
  output logic [4:0]  rf_waddr_W,
  output logic        rf_wen_W,
  output logic        stats_en_wen_W, // not used for this lab

  // status signals (dpath->ctrl)

  input  logic [31:0] inst_D,
  input  logic        imul_req_rdy_D,

  input  logic        br_cond_eq_X,
  input  logic        br_cond_lt_X,
  input  logic        br_cond_ltu_X,
  input  logic        imul_resp_val_X,

  // extra ports

  output logic        commit_inst
);

  //----------------------------------------------------------------------
  // Notes
  //----------------------------------------------------------------------
  // We follow this principle to organize code for each pipeline stage in
  // the control unit.  Register enable logics should always at the
  // beginning. It followed by pipeline registers. Then logic that is not
  // dependent on stall or squash signals. Then logic that is dependent
  // on stall or squash signals. At the end there should be signals meant
  // to be passed to the next stage in the pipeline.

  //----------------------------------------------------------------------
  // Valid, stall, and squash signals
  //----------------------------------------------------------------------
  // We use valid signal to indicate if the instruction is valid.  An
  // instruction can become invalid because of being squashed or
  // stalled. Notice that invalid instructions are microarchitectural
  // events, they are different from archtectural no-ops. We must be
  // careful about control signals that might change the state of the
  // processor. We should always AND outgoing control signals with valid
  // signal.

  logic val_F;
  logic val_D;
  logic val_X;
  logic val_M;
  logic val_W;

  // Managing the stall and squash signals is one of the most important,
  // yet also one of the most complex, aspects of designing a pipelined
  // processor. We will carefully use four signals per stage to manage
  // stalling and squashing: ostall_A, osquash_A, stall_A, and squash_A.
  //
  // We denote the stall signals _originating_ from stage A as
  // ostall_A. For example, if stage A can stall due to a pipeline
  // harzard, then ostall_A would need to factor in the stalling
  // condition for this pipeline harzard.

  logic ostall_F;  // can ostall due to imem_respstream_val
  logic ostall_D;  // can ostall due to mngr2proc_val or other hazards
  logic ostall_X;  // can ostall due to dmem_reqstream_rdy
  logic ostall_M;  // can ostall due to dmem_respstream_val
  logic ostall_W;  // can ostall due to proc2mngr_rdy

  // The stall_A signal should be used to indicate when stage A is indeed
  // stalling. stall_A will be a function of ostall_A and all the ostall
  // signals of stages in front of it in the pipeline.

  logic stall_F;
  logic stall_D;
  logic stall_X;
  logic stall_M;
  logic stall_W;

  // We denote the squash signals _originating_ from stage A as
  // osquash_A. For example, if stage A needs to squash the stages behind
  // A in the pipeline, then osquash_A would need to factor in this
  // squash condition.

  logic osquash_D; // can osquash due to unconditional jumps
  logic osquash_X; // can osquash due to taken branches

  // The squash_A signal should be used to indicate when stage A is being
  // squashed. squash_A will _not_ be a function of osquash_A, since
  // osquash_A means to squash the stages _behind_ A in the pipeline, but
  // not to squash A itself.

  logic squash_F;
  logic squash_D;

  //----------------------------------------------------------------------
  // F stage
  //----------------------------------------------------------------------

  // Register enable logic

  assign reg_en_F = !stall_F || squash_F;

  // Pipeline registers

  always_ff @( posedge clk ) begin
    if ( reset )
      val_F <= 1'b0;
    else if ( reg_en_F )
      val_F <= 1'b1;
  end

  // forward declaration for PC sel

  logic       pc_redirect_X;
  logic [1:0] pc_sel_X;
  logic [1:0] pc_sel_D; // Impossible to trigger all possible values (except 2 and 3)

  // PC select logic
  // X stage has earlier instruction - so check that first

  always_comb begin
    if ( pc_redirect_X )   // If a branch is taken in X stage
      pc_sel_F = pc_sel_X; // Use pc from X
    else if (pc_redirect_D) begin // If jump in D stage
      pc_sel_F = pc_sel_D; // Use pc from D
    end else begin
      pc_sel_F = 2'd3;     // Use pc+4
    end
  end

  // ostall due to the imem response not valid.

  assign ostall_F = val_F && !imem_respstream_val;

  // stall and squash in F

  assign stall_F  = val_F && ( ostall_F  || ostall_D || ostall_X || ostall_M || ostall_W );
  assign squash_F = val_F && ( osquash_D || osquash_X );

  // We drop the mem response when we are getting squashed

  assign imem_respstream_drop = squash_F;

  // imem is very special. Actually imem requests are sent before the F
  // stage. Note that we need to factor in reset to the imem_reqstream_val
  // signal because we don't want to send out imem request when we are
  // resetting.

  assign imem_reqstream_val  = ( !stall_F || squash_F ) && !reset;
  assign imem_respstream_rdy = !stall_F || squash_F;

  // Valid signal for the next stage (stage D)

  logic  next_val_F;
  assign next_val_F = val_F && !stall_F && !squash_F;

  //----------------------------------------------------------------------
  // D stage
  //----------------------------------------------------------------------

  // Register enable logic

  assign reg_en_D = !stall_D || squash_D;

  // Pipline registers

  always_ff @( posedge clk ) begin
    if ( reset )
      val_D <= 1'b0;
    else if ( reg_en_D )
      val_D <= next_val_F;
  end

  // Parse instruction fields

  logic   [4:0] inst_rd_D;
  logic   [4:0] inst_rs1_D;
  logic   [4:0] inst_rs2_D;
  logic   [11:0] inst_csr_D;

  lab2_proc_tinyrv2_encoding_InstUnpack inst_unpack
  (
    .inst     (inst_D),
    .opcode   (),
    .rd       (inst_rd_D),
    .rs1      (inst_rs1_D),
    .rs2      (inst_rs2_D),
    .funct3   (),
    .funct7   (),
    .csr      (inst_csr_D)
  );

  // Generic Parameters -- yes or no

  localparam n = 1'd0;
  localparam y = 1'd1;

  // Register specifiers

  localparam rx = 5'bx;   // don't care
  localparam r0 = 5'd0;   // zero
  localparam rL = 5'd31;  // for jal

  // Jump type

  localparam j_x      = 2'bx;
  localparam j_na     = 2'b0;
  localparam j_jal    = 2'd1;
  localparam j_jalr   = 2'd2;

  // Branch type

  localparam br_x     = 3'bx; // Don't care
  localparam br_na    = 3'b0; // No branch
  localparam br_bne   = 3'b1; // bne
  localparam br_beq   = 3'd2; // beq
  localparam br_blt   = 3'd3; // blt
  localparam br_bltu  = 3'd4; // bltu
  localparam br_bge   = 3'd5; // bge
  localparam br_bgeu  = 3'd6; // bgeu
  
  // Operand 1 Mux Select

  localparam bm1_x     = 1'bx; // Don't care
  localparam bm1_pc    = 1'b0; // Use PC
  localparam bm1_rf    = 1'b1; // Use data from register file

  // Operand 2 Mux Select

  localparam bm2_x     = 2'bx; // Don't care
  localparam bm2_imm   = 2'd0; // Use sign-extended immediate
  localparam bm2_rf    = 2'd1; // Use data from register file
  localparam bm2_csr   = 2'd2; // Use from mngr data

  // Execute Result Mux Select

  localparam ex_x     = 2'bx; // Don't care
  localparam ex_pc    = 2'd0; // Use PC + 4
  localparam ex_alu   = 2'd1; // Use ALU output
  localparam ex_imul  = 2'd2; // Use mutliplier

  // ALU Function

  localparam alu_x    = 4'bx;
  localparam alu_add  = 4'd0;
  localparam alu_sub  = 4'd1;
  localparam alu_and  = 4'd2;
  localparam alu_or   = 4'd3;
  localparam alu_xor  = 4'd4;
  localparam alu_slt  = 4'd5;
  localparam alu_sltu = 4'd6;
  localparam alu_sra  = 4'd7;
  localparam alu_srl  = 4'd8;
  localparam alu_sll  = 4'd9;
  localparam alu_cp0  = 4'd11;
  localparam alu_cp1  = 4'd12;

  // Immediate Type

  localparam imm_x    = 3'bx;
  localparam imm_i    = 3'd0;
  localparam imm_s    = 3'd1;
  localparam imm_b    = 3'd2;
  localparam imm_u    = 3'd3;
  localparam imm_j    = 3'd4;

  // Memory Request Type

  localparam nr       = 2'd0; // No request
  localparam ld       = 2'd1; // Load
  localparam st       = 2'd2; // Store
  
  // Writeback Mux Select

  localparam wm_x     = 1'bx; // Don't care
  localparam wm_a     = 1'b0; // Use ALU output
  localparam wm_m     = 1'b1; // Use data memory response

  // Instruction Decode

  logic       inst_val_D;
  logic [1:0] j_type_D;
  logic [2:0] br_type_D;
  logic       rs1_en_D;
  logic       rs2_en_D;
  logic [3:0] alu_fn_D;
  logic [1:0] ex_result_sel_D;
  logic       mul_D;
  logic [1:0] dmem_reqstream_type_D;
  logic       wb_result_sel_D;
  logic       rf_wen_D;
  logic       csrr_D;
  logic       csrw_D;
  logic       proc2mngr_val_D;
  logic       mngr2proc_rdy_D;
  logic       stats_en_wen_D; // not used for this lab
  logic       pc_redirect_D;

  task cs
  (
    input logic       cs_inst_val,
    input logic [1:0] cs_j_type,
    input logic [2:0] cs_br_type,
    input logic [2:0] cs_imm_type,
    input logic       cs_op1_sel,
    input logic       cs_rs1_en,
    input logic [1:0] cs_op2_sel,
    input logic       cs_rs2_en,
    input logic [3:0] cs_alu_fn,
    input logic [1:0] cs_ex_result_sel,
    input logic       cs_mul,
    input logic [1:0] cs_dmem_reqstream_type,
    input logic       cs_wb_result_sel,
    input logic       cs_rf_wen,
    input logic       cs_csrr,
    input logic       cs_csrw
  );
  begin
    inst_val_D            = cs_inst_val;
    j_type_D              = cs_j_type;
    br_type_D             = cs_br_type;
    imm_type_D            = cs_imm_type;
    op1_sel_D             = cs_op1_sel;
    rs1_en_D              = cs_rs1_en;
    op2_sel_D             = cs_op2_sel;
    rs2_en_D              = cs_rs2_en;
    alu_fn_D              = cs_alu_fn;
    ex_result_sel_D       = cs_ex_result_sel;
    mul_D                 = cs_mul;
    dmem_reqstream_type_D = cs_dmem_reqstream_type;
    wb_result_sel_D       = cs_wb_result_sel;
    rf_wen_D              = cs_rf_wen;
    csrr_D                = cs_csrr;
    csrw_D                = cs_csrw;
  end
  endtask

  // Control signals table

  always_comb begin

    casez ( inst_D )

      //                            jump     br      imm   rs1   rs1 op2    rs2   alu      Ex       dmm wbmux rf
      //                       val  type    type    type  muxsel en muxsel  en    fn      sel   mul typ sel   wen csrr csrw
      `TINYRV2_INST_NOP     :cs( y, j_na,  br_na,  imm_x, bm1_x, n, bm2_x,   n, alu_x,     ex_x, n, nr, wm_a, n,  n,   n    );

      // Reg-Reg
      `TINYRV2_INST_ADD     :cs( y, j_na,  br_na,  imm_x, bm1_rf,y, bm2_rf,  y, alu_add, ex_alu, n, nr, wm_a, y,  n,   n    );
      `TINYRV2_INST_SUB     :cs( y, j_na,  br_na,  imm_x, bm1_rf,y, bm2_rf,  y, alu_sub, ex_alu, n, nr, wm_a, y,  n,   n    );
      `TINYRV2_INST_MUL     :cs( y, j_na,  br_na,  imm_x, bm1_rf,y, bm2_rf,  y, alu_x,   ex_imul,y, nr, wm_a, y,  n,   n    );
      `TINYRV2_INST_AND     :cs( y, j_na,  br_na,  imm_x, bm1_rf,y, bm2_rf,  y, alu_and, ex_alu, n, nr, wm_a, y,  n,   n    );
      `TINYRV2_INST_OR      :cs( y, j_na,  br_na,  imm_x, bm1_rf,y, bm2_rf,  y, alu_or,  ex_alu, n, nr, wm_a, y,  n,   n    );
      `TINYRV2_INST_XOR     :cs( y, j_na,  br_na,  imm_x, bm1_rf,y, bm2_rf,  y, alu_xor, ex_alu, n, nr, wm_a, y,  n,   n    );
      `TINYRV2_INST_SLT     :cs( y, j_na,  br_na,  imm_x, bm1_rf,y, bm2_rf,  y, alu_slt, ex_alu, n, nr, wm_a, y,  n,   n    );
      `TINYRV2_INST_SLTU    :cs( y, j_na,  br_na,  imm_x, bm1_rf,y, bm2_rf,  y, alu_sltu,ex_alu, n, nr, wm_a, y,  n,   n    );
      `TINYRV2_INST_SRA     :cs( y, j_na,  br_na,  imm_x, bm1_rf,y, bm2_rf,  y, alu_sra, ex_alu, n, nr, wm_a, y,  n,   n    );
      `TINYRV2_INST_SRL     :cs( y, j_na,  br_na,  imm_x, bm1_rf,y, bm2_rf,  y, alu_srl, ex_alu, n, nr, wm_a, y,  n,   n    );
      `TINYRV2_INST_SLL     :cs( y, j_na,  br_na,  imm_x, bm1_rf,y, bm2_rf,  y, alu_sll, ex_alu, n, nr, wm_a, y,  n,   n    );

      // Reg-Imm
      `TINYRV2_INST_ADDI    :cs( y, j_na,  br_na,  imm_i, bm1_rf,y, bm2_imm, n, alu_add, ex_alu, n, nr, wm_a, y,  n,   n    );
      `TINYRV2_INST_ANDI    :cs( y, j_na,  br_na,  imm_i, bm1_rf,y, bm2_imm, n, alu_and, ex_alu, n, nr, wm_a, y,  n,   n    );
      `TINYRV2_INST_ORI     :cs( y, j_na,  br_na,  imm_i, bm1_rf,y, bm2_imm, n, alu_or,  ex_alu, n, nr, wm_a, y,  n,   n    );
      `TINYRV2_INST_XORI    :cs( y, j_na,  br_na,  imm_i, bm1_rf,y, bm2_imm, n, alu_xor, ex_alu, n, nr, wm_a, y,  n,   n    );
      `TINYRV2_INST_SLTI    :cs( y, j_na,  br_na,  imm_i, bm1_rf,y, bm2_imm, n, alu_slt, ex_alu, n, nr, wm_a, y,  n,   n    );
      `TINYRV2_INST_SLTIU   :cs( y, j_na,  br_na,  imm_i, bm1_rf,y, bm2_imm, n, alu_sltu,ex_alu, n, nr, wm_a, y,  n,   n    );
      `TINYRV2_INST_SRAI    :cs( y, j_na,  br_na,  imm_i, bm1_rf,y, bm2_imm, n, alu_sra, ex_alu, n, nr, wm_a, y,  n,   n    );
      `TINYRV2_INST_SRLI    :cs( y, j_na,  br_na,  imm_i, bm1_rf,y, bm2_imm, n, alu_srl, ex_alu, n, nr, wm_a, y,  n,   n    );
      `TINYRV2_INST_SLLI    :cs( y, j_na,  br_na,  imm_i, bm1_rf,y, bm2_imm, n, alu_sll, ex_alu, n, nr, wm_a, y,  n,   n    );
      `TINYRV2_INST_LUI     :cs( y, j_na,  br_na,  imm_u, bm1_x, n, bm2_imm, n, alu_cp1, ex_alu, n, nr, wm_a, y,  n,   n    );
      `TINYRV2_INST_AUIPC   :cs( y, j_na,  br_na,  imm_u, bm1_pc,n, bm2_imm, n, alu_add, ex_alu, n, nr, wm_a, y,  n,   n    );

      // Jump
      `TINYRV2_INST_JAL     :cs( y, j_jal, br_na,  imm_j, bm1_x, n, bm2_x,   n, alu_x,   ex_pc,  n, nr, wm_a, y,  n,   n    );
      `TINYRV2_INST_JALR    :cs( y, j_jalr,br_na,  imm_i, bm1_rf,y, bm2_imm, n, alu_add, ex_pc,  n, nr, wm_a, y,  n,   n    );

      // Branches
      `TINYRV2_INST_BNE     :cs( y, j_na,  br_bne, imm_b, bm1_rf,y, bm2_rf,  y, alu_x,   ex_x,   n, nr, wm_a, n,  n,   n    );
      `TINYRV2_INST_BEQ     :cs( y, j_na,  br_beq, imm_b, bm1_rf,y, bm2_rf,  y, alu_x,   ex_x,   n, nr, wm_a, n,  n,   n    );
      `TINYRV2_INST_BLT     :cs( y, j_na,  br_blt, imm_b, bm1_rf,y, bm2_rf,  y, alu_x,   ex_x,   n, nr, wm_a, n,  n,   n    );
      `TINYRV2_INST_BLTU    :cs( y, j_na,  br_bltu,imm_b, bm1_rf,y, bm2_rf,  y, alu_x,   ex_x,   n, nr, wm_a, n,  n,   n    );
      `TINYRV2_INST_BGE     :cs( y, j_na,  br_bge, imm_b, bm1_rf,y, bm2_rf,  y, alu_x,   ex_x,   n, nr, wm_a, n,  n,   n    );
      `TINYRV2_INST_BGEU    :cs( y, j_na,  br_bgeu,imm_b, bm1_rf,y, bm2_rf,  y, alu_x,   ex_x,   n, nr, wm_a, n,  n,   n    );

      // Load/store
      `TINYRV2_INST_LW      :cs( y, j_na,  br_na,  imm_i, bm1_rf,y, bm2_imm, n, alu_add, ex_alu, n, ld, wm_m, y,  n,   n    );
      `TINYRV2_INST_SW      :cs( y, j_na,  br_na,  imm_s, bm1_rf,y, bm2_imm, y, alu_add, ex_x,   n, st, wm_x, n,  n,   n    );

      // Manager
      `TINYRV2_INST_CSRR    :cs( y, j_na,  br_na,  imm_i, bm1_x, n, bm2_csr, n, alu_cp1, ex_alu, n, nr, wm_a, y,  y,   n    );
      `TINYRV2_INST_CSRW    :cs( y, j_na,  br_na,  imm_i, bm1_rf,y, bm2_rf,  n, alu_cp0, ex_alu, n, nr, wm_a, n,  n,   y    );
      
      // Default
      default               :cs( n,  j_x,  br_x,   imm_x, bm1_x, n, bm2_x,   n, alu_x,   ex_x,   n, nr, wm_x, n,  n,   n    );

    endcase
  end

  logic [4:0] rf_waddr_D;
  assign rf_waddr_D = inst_rd_D;

  // imul val

  assign imul_req_val_D = val_D && !stall_D && !squash_D && mul_D;

  // csrr and csrw logic

  always_comb begin // only proc2mngr and mngr2proc used for this lab
    proc2mngr_val_D  = 1'b0;
    mngr2proc_rdy_D  = 1'b0;
    csrr_sel_D       = 2'h0;
    stats_en_wen_D   = 1'b0;

    if ( csrw_D && inst_csr_D == `TINYRV2_CPR_PROC2MNGR )
      proc2mngr_val_D  = 1'b1;
    if ( csrr_D && inst_csr_D == `TINYRV2_CPR_MNGR2PROC )
      mngr2proc_rdy_D  = 1'b1;
    if ( csrw_D && inst_csr_D == `TINYRV2_CPR_STATS_EN )
      stats_en_wen_D   = 1'b1;
    if ( csrr_D && inst_csr_D == `TINYRV2_CPR_NUMCORES )
      csrr_sel_D       = 2'h1;
    if ( csrr_D && inst_csr_D == `TINYRV2_CPR_COREID )
      csrr_sel_D       = 2'h2;
  end

  // JAL logic

  always_comb begin
    if (val_D && (j_type_D == j_jal)) begin
      pc_redirect_D = 1'b1;
      pc_sel_D = 2'd2;
    end
    else begin
      pc_redirect_D = 1'b0;
      pc_sel_D = 2'd3;
    end
  end

  // bypass mux selects

  always_comb begin
    if (bypass_waddr_X_rs1_D) assign op1_byp_sel_D = 2'd2;
    else if (bypass_waddr_M_rs1_D) assign op1_byp_sel_D = 2'd1;
    else if (bypass_waddr_W_rs1_D) assign op1_byp_sel_D = 2'd0;
    else assign op1_byp_sel_D = 2'd3;
  end

  always_comb begin
    if (bypass_waddr_X_rs2_D) assign op2_byp_sel_D = 2'd3;
    else if (bypass_waddr_M_rs2_D) assign op2_byp_sel_D = 2'd2;
    else if (bypass_waddr_W_rs2_D) assign op2_byp_sel_D = 2'd1;
    else assign op2_byp_sel_D = 2'd0;
  end

  // bypass from X to D

  logic  bypass_waddr_X_rs1_D;
  assign bypass_waddr_X_rs1_D
    = val_D && rs1_en_D && val_X && rf_wen_X
    && (inst_rs1_D == rf_waddr_X) && (rf_waddr_X != 0)
    && (dmem_reqstream_type_X != ld);

  logic  bypass_waddr_X_rs2_D;
  assign bypass_waddr_X_rs2_D
    = val_D && rs2_en_D && val_X && rf_wen_X
    && (inst_rs2_D == rf_waddr_X) && (rf_waddr_X != 0)
    && (dmem_reqstream_type_X != ld);

  // bypass from M to D

  logic  bypass_waddr_M_rs1_D;
  assign bypass_waddr_M_rs1_D
    = val_D && rs1_en_D && val_M && rf_wen_M
    && (inst_rs1_D == rf_waddr_M) && (rf_waddr_M != 0);
    
  logic  bypass_waddr_M_rs2_D;
  assign bypass_waddr_M_rs2_D
    = val_D && rs2_en_D && val_M && rf_wen_M
    && (inst_rs2_D == rf_waddr_M) && (rf_waddr_M != 0);
    
  // bypass from W to D

  logic  bypass_waddr_W_rs1_D;
  assign bypass_waddr_W_rs1_D
    = val_D && rs1_en_D && val_W && rf_wen_W
    && (inst_rs1_D == rf_waddr_W) && (rf_waddr_W != 0);
    
  logic  bypass_waddr_W_rs2_D;
  assign bypass_waddr_W_rs2_D
    = val_D && rs2_en_D && val_W && rf_wen_W
    && (inst_rs2_D == rf_waddr_W) && (rf_waddr_W != 0);

  // ostall from load-use RAW hazard

  logic  ostall_load_use_X_rsl_D;
  assign ostall_load_use_X_rsl_D
    = rs1_en_D && val_X && rf_wen_X
    && (inst_rs1_D == rf_waddr_X) && (rf_waddr_X != 0)
    && (dmem_reqstream_type_X == ld);

  logic  ostall_load_use_X_rs2_D;
  assign ostall_load_use_X_rs2_D
    = rs2_en_D && val_X && rf_wen_X
    && (inst_rs2_D == rf_waddr_X) && (rf_waddr_X != 0)
    && (dmem_reqstream_type_X == ld);

  // mngr2proc_rdy signal for csrr instruction

  assign mngr2proc_rdy = val_D && !stall_D && mngr2proc_rdy_D;

  logic  ostall_mngr2proc_D;
  assign ostall_mngr2proc_D = val_D && mngr2proc_rdy_D && !mngr2proc_val;

  // // ostall if write address in X matches rs1 in D - REDUNDANT IN ALT DESIGN, HANDLED BY LOAD-USE SIGNAL

  logic  ostall_waddr_X_rs1_D;
  // assign ostall_waddr_X_rs1_D
  //   = rs1_en_D && val_X && rf_wen_X
  //     && ( inst_rs1_D == rf_waddr_X ) && ( rf_waddr_X != 5'd0 )
  //     && !bypass_waddr_X_rs1_D;

  // // ostall if write address in M matches rs1 in D - REDUNDANT IN ALT DESIGN, ALWAYS BYPASSED

  logic  ostall_waddr_M_rs1_D;
  // assign ostall_waddr_M_rs1_D
  //   = rs1_en_D && val_M && rf_wen_M
  //     && ( inst_rs1_D == rf_waddr_M ) && ( rf_waddr_M != 5'd0 )
  //     && !bypass_waddr_M_rs1_D;

  // // ostall if write address in W matches rs1 in D - REDUNDANT IN ALT DESIGN, ALWAYS BYPASSED

  logic  ostall_waddr_W_rs1_D;
  // assign ostall_waddr_W_rs1_D
  //   = rs1_en_D && val_W && rf_wen_W
  //     && ( inst_rs1_D == rf_waddr_W ) && ( rf_waddr_W != 5'd0 )
  //     && !bypass_waddr_W_rs1_D;

  // // ostall if write address in X matches rs2 in D - REDUNDANT IN ALT DESIGN, HANDLED BY LOAD-USE SIGNAL

  logic  ostall_waddr_X_rs2_D;
  // assign ostall_waddr_X_rs2_D
  //   = rs2_en_D && val_X && rf_wen_X
  //     && ( inst_rs2_D == rf_waddr_X ) && ( rf_waddr_X != 5'd0 )
  //     && !bypass_waddr_X_rs2_D;

  // // ostall if write address in M matches rs2 in D - REDUNDANT IN ALT DESIGN, ALWAYS BYPASSED

  logic  ostall_waddr_M_rs2_D;
  // assign ostall_waddr_M_rs2_D
  //   = rs2_en_D && val_M && rf_wen_M
  //     && ( inst_rs2_D == rf_waddr_M ) && ( rf_waddr_M != 5'd0 )
  //     && !bypass_waddr_M_rs2_D;

  // // ostall if write address in W matches rs2 in D - REDUNDANT IN ALT DESIGN, ALWAYS BYPASSED

  logic  ostall_waddr_W_rs2_D;
  // assign ostall_waddr_W_rs2_D
  //   = rs2_en_D && val_W && rf_wen_W
  //     && ( inst_rs2_D == rf_waddr_W ) && ( rf_waddr_W != 5'd0 )
  //     && !bypass_waddr_W_rs2_D;

  // ostall if imul req_rdy is 0 (not ready)

  logic  ostall_imul_req_rdy_D;
  assign ostall_imul_req_rdy_D
    = !imul_req_rdy_D;

  // Put together ostall signal due to hazards

  logic  ostall_hazard_D;
  assign ostall_hazard_D =
      ostall_waddr_X_rs1_D || ostall_waddr_M_rs1_D || ostall_waddr_W_rs1_D ||
      ostall_waddr_X_rs2_D || ostall_waddr_M_rs2_D || ostall_waddr_W_rs2_D ||
      ostall_imul_req_rdy_D || ostall_load_use_X_rsl_D || ostall_load_use_X_rs2_D;

  // Final ostall signal

  assign ostall_D = val_D && ( ostall_mngr2proc_D || ostall_hazard_D );

  // osquash due to jump instruction in D stage (not implemented yet)

  assign osquash_D = val_D && !stall_D && pc_redirect_D;

  // stall and squash in D

  assign stall_D  = val_D && ( ostall_D || ostall_X || ostall_M || ostall_W );
  assign squash_D = val_D && osquash_X;

  // Valid signal for the next stage

  logic  next_val_D;
  assign next_val_D = val_D && !stall_D && !squash_D;

  //----------------------------------------------------------------------
  // X stage
  //----------------------------------------------------------------------

  // Register enable logic

  assign reg_en_X = !stall_X;

  logic [31:0] inst_X;
  logic [1:0]  dmem_reqstream_type_X;
  logic        wb_result_sel_X;
  logic        rf_wen_X;
  logic [4:0]  rf_waddr_X;
  logic        proc2mngr_val_X;
  logic        stats_en_wen_X; // not used for this lab
  logic [2:0]  br_type_X;
  logic        mul_X;
  logic [1:0]  j_type_X;

  // Pipeline registers

  always_ff @( posedge clk )
    if ( reset ) begin
      val_X                 <= 1'b0;
    end
    else if ( reg_en_X ) begin
      val_X                 <= next_val_D;
      rf_wen_X              <= rf_wen_D;
      inst_X                <= inst_D;
      alu_fn_X              <= alu_fn_D;
      rf_waddr_X            <= rf_waddr_D;
      proc2mngr_val_X       <= proc2mngr_val_D;
      dmem_reqstream_type_X <= dmem_reqstream_type_D;
      wb_result_sel_X       <= wb_result_sel_D;
      stats_en_wen_X        <= stats_en_wen_D;
      ex_result_sel_X       <= ex_result_sel_D;
      br_type_X             <= br_type_D;
      mul_X                 <= mul_D;
      j_type_X              <= j_type_D;
    end

  // branch logic, redirect PC in F if branch is taken

  always_comb begin
    if (val_X && (br_type_X == br_bne)) begin // bne
      pc_redirect_X = !br_cond_eq_X;
      pc_sel_X      = 2'b1; // use branch target
    end
    else if (val_X && (br_type_X == br_beq)) begin // beq
      pc_redirect_X = br_cond_eq_X;
      pc_sel_X      = 2'b1; // use branch target
    end
    else if (val_X && (br_type_X == br_blt)) begin // blt
      pc_redirect_X = br_cond_lt_X;
      pc_sel_X      = 2'b1; // use branch target
    end
    else if (val_X && (br_type_X == br_bltu)) begin // bltu
      pc_redirect_X = br_cond_ltu_X;
      pc_sel_X      = 2'b1; // use branch target
    end
    else if (val_X && (br_type_X == br_bge)) begin // bge
      pc_redirect_X = !br_cond_lt_X;
      pc_sel_X      = 2'b1; // use branch target
    end
    else if (val_X && (br_type_X == br_bgeu)) begin // bgeu
      pc_redirect_X = !br_cond_ltu_X;
      pc_sel_X      = 2'b1; // use branch target
    end
    else if (val_X && (j_type_X == j_jalr)) begin // jalr
      pc_redirect_X = 1'b1; // Will redirect pc always
      pc_sel_X = 2'd0; // Choose upper input - jalr_target_X
    end
    else begin
      pc_redirect_X = 1'b0;
      pc_sel_X      = 2'd3; // use pc+4 - non-branch/jump case
    end
  end

  // ostall due to imul not ready to output value (mul in X stage and imul_resp_val_X is false)

  logic ostall_imul_resp_val_X;
  assign ostall_imul_resp_val_X = (mul_X && imul_resp_val_X == 0);

  // ostall due to dmem_reqstream not ready

  logic ostall_dmem_reqstream_X;
  assign ostall_dmem_reqstream_X = ( dmem_reqstream_type_X != nr ) && !dmem_reqstream_rdy;

  // Final ostall signal

  assign ostall_X = val_X && (ostall_dmem_reqstream_X || ostall_imul_resp_val_X);

  // osquash due to taken branch, notice we can't osquash if current
  // stage stalls, otherwise we will send osquash twice.

  assign osquash_X = val_X && !stall_X && pc_redirect_X;

  // stall and squash used in X stage

  assign stall_X = val_X && ( ostall_X || ostall_M || ostall_W );

  // set dmem_reqstream_val only if not stalling

  assign dmem_reqstream_val = val_X && !stall_X && ( dmem_reqstream_type_X != nr );
  
  // Assign memory action based on instruction

  always_comb begin
    if (dmem_reqstream_type_X == ld) begin
      assign mem_action_M = 1'd0;
    end else if (dmem_reqstream_type_X == st) begin
      assign mem_action_M = 1'd1;
    end else begin
      assign mem_action_M = 1'dx;
    end
  end

  // Ready to receive imul response if mul in X stage and X stage is not stalled

  assign imul_resp_rdy_X = val_X && !stall_X && mul_X;

  // Valid signal for the next stage

  logic  next_val_X;
  assign next_val_X = val_X && !stall_X;

  //----------------------------------------------------------------------
  // M stage
  //----------------------------------------------------------------------

  // Register enable logic

  assign reg_en_M  = !stall_M;

  logic [31:0] inst_M;
  logic [1:0]  dmem_reqstream_type_M;
  logic        rf_wen_M;
  logic [4:0]  rf_waddr_M;
  logic        proc2mngr_val_M;
  logic        stats_en_wen_M; // not used for this lab

  // Pipeline register

  always_ff @( posedge clk )
    if ( reset ) begin
      val_M                 <= 1'b0;
    end
    else if ( reg_en_M ) begin
      val_M                 <= next_val_X;
      rf_wen_M              <= rf_wen_X;
      inst_M                <= inst_X;
      rf_waddr_M            <= rf_waddr_X;
      proc2mngr_val_M       <= proc2mngr_val_X;
      dmem_reqstream_type_M <= dmem_reqstream_type_X;
      wb_result_sel_M       <= wb_result_sel_X;
      stats_en_wen_M        <= stats_en_wen_X;
    end

  // ostall due to dmem_respstream not valid

  assign ostall_M = val_M && ( dmem_reqstream_type_M != nr ) && !dmem_respstream_val;

  // stall M

  assign stall_M = val_M && ( ostall_M || ostall_W );

  // Set dmem_respstream_rdy if valid and not stalling and this is a lw/sw

  assign dmem_respstream_rdy = val_M && !stall_M && ( dmem_reqstream_type_M != nr );

  // Valid signal for the next stage

  logic  next_val_M;
  assign next_val_M = val_M && !stall_M;

  //----------------------------------------------------------------------
  // W stage
  //----------------------------------------------------------------------

  // Register enable logic

  assign reg_en_W = !stall_W;

  logic [31:0] inst_W;
  logic        proc2mngr_val_W;
  logic        rf_wen_pending_W;
  logic        stats_en_wen_pending_W; // not used for this lab

  // Pipeline registers

  always_ff @( posedge clk ) begin
    if ( reset ) begin
      val_W                  <= 1'b0;
    end
    else if ( reg_en_W ) begin
      val_W                  <= next_val_M;
      rf_wen_pending_W       <= rf_wen_M;
      inst_W                 <= inst_M;
      rf_waddr_W             <= rf_waddr_M;
      proc2mngr_val_W        <= proc2mngr_val_M;
      stats_en_wen_pending_W <= stats_en_wen_M;
    end
  end

  // write enable

  assign rf_wen_W       = val_W && rf_wen_pending_W;
  assign stats_en_wen_W = val_W && stats_en_wen_pending_W;

  // ostall due to proc2mngr

  assign ostall_W = val_W && proc2mngr_val_W && !proc2mngr_rdy;

  // stall and squash signal used in W stage

  assign stall_W = val_W && ostall_W;

  // proc2mngr port

  assign proc2mngr_val = val_W && !stall_W && proc2mngr_val_W;

  assign commit_inst = val_W && !stall_W;

endmodule

`endif /* LAB2_PROC_PROC_BASE_CTRL_V */
