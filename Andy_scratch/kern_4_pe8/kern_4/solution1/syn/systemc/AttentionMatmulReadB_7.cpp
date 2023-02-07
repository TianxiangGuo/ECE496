#include "AttentionMatmulReadB.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void AttentionMatmulReadB::thread_out_3_1_25_V_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_25_V_V_din = buffer_3_1_25_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op3249_write_state3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_25_V_V_din = in_V_data_V_dout.read().range(207, 200);
    } else {
        out_3_1_25_V_V_din =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void AttentionMatmulReadB::thread_out_3_1_25_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op3249_write_state3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        out_3_1_25_V_V_write = ap_const_logic_1;
    } else {
        out_3_1_25_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_3_1_26_V_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
          esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_3)))) {
        out_3_1_26_V_V_blk_n = out_3_1_26_V_V_full_n.read();
    } else {
        out_3_1_26_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_3_1_26_V_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_26_V_V_din = buffer_3_1_26_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op3291_write_state3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_26_V_V_din = in_V_data_V_dout.read().range(215, 208);
    } else {
        out_3_1_26_V_V_din =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void AttentionMatmulReadB::thread_out_3_1_26_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op3291_write_state3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        out_3_1_26_V_V_write = ap_const_logic_1;
    } else {
        out_3_1_26_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_3_1_27_V_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
          esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_3)))) {
        out_3_1_27_V_V_blk_n = out_3_1_27_V_V_full_n.read();
    } else {
        out_3_1_27_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_3_1_27_V_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_27_V_V_din = buffer_3_1_27_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op3333_write_state3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_27_V_V_din = in_V_data_V_dout.read().range(223, 216);
    } else {
        out_3_1_27_V_V_din =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void AttentionMatmulReadB::thread_out_3_1_27_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op3333_write_state3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        out_3_1_27_V_V_write = ap_const_logic_1;
    } else {
        out_3_1_27_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_3_1_28_V_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
          esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_3)))) {
        out_3_1_28_V_V_blk_n = out_3_1_28_V_V_full_n.read();
    } else {
        out_3_1_28_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_3_1_28_V_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_28_V_V_din = buffer_3_1_28_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op3375_write_state3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_28_V_V_din = in_V_data_V_dout.read().range(231, 224);
    } else {
        out_3_1_28_V_V_din =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void AttentionMatmulReadB::thread_out_3_1_28_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op3375_write_state3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        out_3_1_28_V_V_write = ap_const_logic_1;
    } else {
        out_3_1_28_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_3_1_29_V_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
          esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_3)))) {
        out_3_1_29_V_V_blk_n = out_3_1_29_V_V_full_n.read();
    } else {
        out_3_1_29_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_3_1_29_V_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_29_V_V_din = buffer_3_1_29_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op3417_write_state3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_29_V_V_din = in_V_data_V_dout.read().range(239, 232);
    } else {
        out_3_1_29_V_V_din =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void AttentionMatmulReadB::thread_out_3_1_29_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op3417_write_state3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        out_3_1_29_V_V_write = ap_const_logic_1;
    } else {
        out_3_1_29_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_3_1_2_V_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
          esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_3)))) {
        out_3_1_2_V_V_blk_n = out_3_1_2_V_V_full_n.read();
    } else {
        out_3_1_2_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_3_1_2_V_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_2_V_V_din = buffer_3_1_2_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2283_write_state3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_2_V_V_din = in_V_data_V_dout.read().range(23, 16);
    } else {
        out_3_1_2_V_V_din =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void AttentionMatmulReadB::thread_out_3_1_2_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2283_write_state3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        out_3_1_2_V_V_write = ap_const_logic_1;
    } else {
        out_3_1_2_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_3_1_30_V_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
          esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_3)))) {
        out_3_1_30_V_V_blk_n = out_3_1_30_V_V_full_n.read();
    } else {
        out_3_1_30_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_3_1_30_V_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_30_V_V_din = buffer_3_1_30_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op3459_write_state3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_30_V_V_din = in_V_data_V_dout.read().range(247, 240);
    } else {
        out_3_1_30_V_V_din =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void AttentionMatmulReadB::thread_out_3_1_30_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op3459_write_state3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        out_3_1_30_V_V_write = ap_const_logic_1;
    } else {
        out_3_1_30_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_3_1_31_V_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
          esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_3)))) {
        out_3_1_31_V_V_blk_n = out_3_1_31_V_V_full_n.read();
    } else {
        out_3_1_31_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_3_1_31_V_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_31_V_V_din = buffer_3_1_31_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op3501_write_state3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_31_V_V_din = in_V_data_V_dout.read().range(255, 248);
    } else {
        out_3_1_31_V_V_din =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void AttentionMatmulReadB::thread_out_3_1_31_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op3501_write_state3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        out_3_1_31_V_V_write = ap_const_logic_1;
    } else {
        out_3_1_31_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_3_1_32_V_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
          esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_3)))) {
        out_3_1_32_V_V_blk_n = out_3_1_32_V_V_full_n.read();
    } else {
        out_3_1_32_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_3_1_32_V_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_32_V_V_din = buffer_3_1_32_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op3543_write_state3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_32_V_V_din = in_V_data_V_dout.read().range(263, 256);
    } else {
        out_3_1_32_V_V_din =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void AttentionMatmulReadB::thread_out_3_1_32_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op3543_write_state3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        out_3_1_32_V_V_write = ap_const_logic_1;
    } else {
        out_3_1_32_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_3_1_33_V_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
          esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_3)))) {
        out_3_1_33_V_V_blk_n = out_3_1_33_V_V_full_n.read();
    } else {
        out_3_1_33_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_3_1_33_V_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_33_V_V_din = buffer_3_1_33_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op3585_write_state3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_33_V_V_din = in_V_data_V_dout.read().range(271, 264);
    } else {
        out_3_1_33_V_V_din =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void AttentionMatmulReadB::thread_out_3_1_33_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op3585_write_state3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        out_3_1_33_V_V_write = ap_const_logic_1;
    } else {
        out_3_1_33_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_3_1_34_V_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
          esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_3)))) {
        out_3_1_34_V_V_blk_n = out_3_1_34_V_V_full_n.read();
    } else {
        out_3_1_34_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_3_1_34_V_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_34_V_V_din = buffer_3_1_34_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op3627_write_state3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_34_V_V_din = in_V_data_V_dout.read().range(279, 272);
    } else {
        out_3_1_34_V_V_din =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void AttentionMatmulReadB::thread_out_3_1_34_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op3627_write_state3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        out_3_1_34_V_V_write = ap_const_logic_1;
    } else {
        out_3_1_34_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_3_1_35_V_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
          esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_3)))) {
        out_3_1_35_V_V_blk_n = out_3_1_35_V_V_full_n.read();
    } else {
        out_3_1_35_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_3_1_35_V_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_35_V_V_din = buffer_3_1_35_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op3669_write_state3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_35_V_V_din = in_V_data_V_dout.read().range(287, 280);
    } else {
        out_3_1_35_V_V_din =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void AttentionMatmulReadB::thread_out_3_1_35_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op3669_write_state3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        out_3_1_35_V_V_write = ap_const_logic_1;
    } else {
        out_3_1_35_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_3_1_36_V_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
          esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_3)))) {
        out_3_1_36_V_V_blk_n = out_3_1_36_V_V_full_n.read();
    } else {
        out_3_1_36_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_3_1_36_V_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_36_V_V_din = buffer_3_1_36_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op3711_write_state3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_36_V_V_din = in_V_data_V_dout.read().range(295, 288);
    } else {
        out_3_1_36_V_V_din =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void AttentionMatmulReadB::thread_out_3_1_36_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op3711_write_state3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        out_3_1_36_V_V_write = ap_const_logic_1;
    } else {
        out_3_1_36_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_3_1_37_V_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
          esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_3)))) {
        out_3_1_37_V_V_blk_n = out_3_1_37_V_V_full_n.read();
    } else {
        out_3_1_37_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_3_1_37_V_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_37_V_V_din = buffer_3_1_37_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op3753_write_state3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_37_V_V_din = in_V_data_V_dout.read().range(303, 296);
    } else {
        out_3_1_37_V_V_din =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void AttentionMatmulReadB::thread_out_3_1_37_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op3753_write_state3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        out_3_1_37_V_V_write = ap_const_logic_1;
    } else {
        out_3_1_37_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_3_1_38_V_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
          esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_3)))) {
        out_3_1_38_V_V_blk_n = out_3_1_38_V_V_full_n.read();
    } else {
        out_3_1_38_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_3_1_38_V_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_38_V_V_din = buffer_3_1_38_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op3795_write_state3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_38_V_V_din = in_V_data_V_dout.read().range(311, 304);
    } else {
        out_3_1_38_V_V_din =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void AttentionMatmulReadB::thread_out_3_1_38_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op3795_write_state3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        out_3_1_38_V_V_write = ap_const_logic_1;
    } else {
        out_3_1_38_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_3_1_39_V_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
          esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_3)))) {
        out_3_1_39_V_V_blk_n = out_3_1_39_V_V_full_n.read();
    } else {
        out_3_1_39_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_3_1_39_V_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_39_V_V_din = buffer_3_1_39_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op3837_write_state3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_39_V_V_din = in_V_data_V_dout.read().range(319, 312);
    } else {
        out_3_1_39_V_V_din =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void AttentionMatmulReadB::thread_out_3_1_39_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op3837_write_state3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        out_3_1_39_V_V_write = ap_const_logic_1;
    } else {
        out_3_1_39_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_3_1_3_V_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
          esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_3)))) {
        out_3_1_3_V_V_blk_n = out_3_1_3_V_V_full_n.read();
    } else {
        out_3_1_3_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_3_1_3_V_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_3_V_V_din = buffer_3_1_3_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2325_write_state3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_3_V_V_din = in_V_data_V_dout.read().range(31, 24);
    } else {
        out_3_1_3_V_V_din =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void AttentionMatmulReadB::thread_out_3_1_3_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2325_write_state3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        out_3_1_3_V_V_write = ap_const_logic_1;
    } else {
        out_3_1_3_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_3_1_40_V_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
          esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_3)))) {
        out_3_1_40_V_V_blk_n = out_3_1_40_V_V_full_n.read();
    } else {
        out_3_1_40_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_3_1_40_V_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_40_V_V_din = buffer_3_1_40_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op3879_write_state3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_40_V_V_din = in_V_data_V_dout.read().range(327, 320);
    } else {
        out_3_1_40_V_V_din =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void AttentionMatmulReadB::thread_out_3_1_40_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op3879_write_state3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        out_3_1_40_V_V_write = ap_const_logic_1;
    } else {
        out_3_1_40_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_3_1_41_V_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
          esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_3)))) {
        out_3_1_41_V_V_blk_n = out_3_1_41_V_V_full_n.read();
    } else {
        out_3_1_41_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_3_1_41_V_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_41_V_V_din = buffer_3_1_41_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op3921_write_state3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_41_V_V_din = in_V_data_V_dout.read().range(335, 328);
    } else {
        out_3_1_41_V_V_din =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void AttentionMatmulReadB::thread_out_3_1_41_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op3921_write_state3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        out_3_1_41_V_V_write = ap_const_logic_1;
    } else {
        out_3_1_41_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_3_1_42_V_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
          esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_3)))) {
        out_3_1_42_V_V_blk_n = out_3_1_42_V_V_full_n.read();
    } else {
        out_3_1_42_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_3_1_42_V_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_42_V_V_din = buffer_3_1_42_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op3963_write_state3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_42_V_V_din = in_V_data_V_dout.read().range(343, 336);
    } else {
        out_3_1_42_V_V_din =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void AttentionMatmulReadB::thread_out_3_1_42_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op3963_write_state3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        out_3_1_42_V_V_write = ap_const_logic_1;
    } else {
        out_3_1_42_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_3_1_43_V_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
          esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_3)))) {
        out_3_1_43_V_V_blk_n = out_3_1_43_V_V_full_n.read();
    } else {
        out_3_1_43_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_3_1_43_V_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_43_V_V_din = buffer_3_1_43_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op4005_write_state3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_43_V_V_din = in_V_data_V_dout.read().range(351, 344);
    } else {
        out_3_1_43_V_V_din =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void AttentionMatmulReadB::thread_out_3_1_43_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op4005_write_state3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        out_3_1_43_V_V_write = ap_const_logic_1;
    } else {
        out_3_1_43_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_3_1_44_V_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
          esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_3)))) {
        out_3_1_44_V_V_blk_n = out_3_1_44_V_V_full_n.read();
    } else {
        out_3_1_44_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_3_1_44_V_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_44_V_V_din = buffer_3_1_44_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op4047_write_state3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_44_V_V_din = in_V_data_V_dout.read().range(359, 352);
    } else {
        out_3_1_44_V_V_din =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void AttentionMatmulReadB::thread_out_3_1_44_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op4047_write_state3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        out_3_1_44_V_V_write = ap_const_logic_1;
    } else {
        out_3_1_44_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_3_1_45_V_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
          esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_3)))) {
        out_3_1_45_V_V_blk_n = out_3_1_45_V_V_full_n.read();
    } else {
        out_3_1_45_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_3_1_45_V_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_45_V_V_din = buffer_3_1_45_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op4089_write_state3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_45_V_V_din = in_V_data_V_dout.read().range(367, 360);
    } else {
        out_3_1_45_V_V_din =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void AttentionMatmulReadB::thread_out_3_1_45_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op4089_write_state3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        out_3_1_45_V_V_write = ap_const_logic_1;
    } else {
        out_3_1_45_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_3_1_46_V_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
          esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_3)))) {
        out_3_1_46_V_V_blk_n = out_3_1_46_V_V_full_n.read();
    } else {
        out_3_1_46_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_3_1_46_V_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_46_V_V_din = buffer_3_1_46_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op4131_write_state3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_46_V_V_din = in_V_data_V_dout.read().range(375, 368);
    } else {
        out_3_1_46_V_V_din =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void AttentionMatmulReadB::thread_out_3_1_46_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op4131_write_state3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        out_3_1_46_V_V_write = ap_const_logic_1;
    } else {
        out_3_1_46_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_3_1_47_V_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
          esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_3)))) {
        out_3_1_47_V_V_blk_n = out_3_1_47_V_V_full_n.read();
    } else {
        out_3_1_47_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_3_1_47_V_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_47_V_V_din = buffer_3_1_47_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op4173_write_state3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_47_V_V_din = in_V_data_V_dout.read().range(383, 376);
    } else {
        out_3_1_47_V_V_din =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void AttentionMatmulReadB::thread_out_3_1_47_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op4173_write_state3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        out_3_1_47_V_V_write = ap_const_logic_1;
    } else {
        out_3_1_47_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_3_1_48_V_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
          esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_3)))) {
        out_3_1_48_V_V_blk_n = out_3_1_48_V_V_full_n.read();
    } else {
        out_3_1_48_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_3_1_48_V_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_48_V_V_din = buffer_3_1_48_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op4215_write_state3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_48_V_V_din = in_V_data_V_dout.read().range(391, 384);
    } else {
        out_3_1_48_V_V_din =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void AttentionMatmulReadB::thread_out_3_1_48_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op4215_write_state3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        out_3_1_48_V_V_write = ap_const_logic_1;
    } else {
        out_3_1_48_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_3_1_49_V_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
          esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_3)))) {
        out_3_1_49_V_V_blk_n = out_3_1_49_V_V_full_n.read();
    } else {
        out_3_1_49_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_3_1_49_V_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_49_V_V_din = buffer_3_1_49_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op4257_write_state3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_49_V_V_din = in_V_data_V_dout.read().range(399, 392);
    } else {
        out_3_1_49_V_V_din =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void AttentionMatmulReadB::thread_out_3_1_49_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op4257_write_state3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        out_3_1_49_V_V_write = ap_const_logic_1;
    } else {
        out_3_1_49_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_3_1_4_V_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
          esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_3)))) {
        out_3_1_4_V_V_blk_n = out_3_1_4_V_V_full_n.read();
    } else {
        out_3_1_4_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_3_1_4_V_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_4_V_V_din = buffer_3_1_4_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2367_write_state3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_4_V_V_din = in_V_data_V_dout.read().range(39, 32);
    } else {
        out_3_1_4_V_V_din =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void AttentionMatmulReadB::thread_out_3_1_4_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2367_write_state3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        out_3_1_4_V_V_write = ap_const_logic_1;
    } else {
        out_3_1_4_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_3_1_50_V_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
          esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_3)))) {
        out_3_1_50_V_V_blk_n = out_3_1_50_V_V_full_n.read();
    } else {
        out_3_1_50_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_3_1_50_V_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_50_V_V_din = buffer_3_1_50_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op4299_write_state3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_50_V_V_din = in_V_data_V_dout.read().range(407, 400);
    } else {
        out_3_1_50_V_V_din =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void AttentionMatmulReadB::thread_out_3_1_50_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op4299_write_state3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        out_3_1_50_V_V_write = ap_const_logic_1;
    } else {
        out_3_1_50_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_3_1_51_V_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
          esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_3)))) {
        out_3_1_51_V_V_blk_n = out_3_1_51_V_V_full_n.read();
    } else {
        out_3_1_51_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_3_1_51_V_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_51_V_V_din = buffer_3_1_51_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op4341_write_state3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_51_V_V_din = in_V_data_V_dout.read().range(415, 408);
    } else {
        out_3_1_51_V_V_din =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void AttentionMatmulReadB::thread_out_3_1_51_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op4341_write_state3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        out_3_1_51_V_V_write = ap_const_logic_1;
    } else {
        out_3_1_51_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_3_1_52_V_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
          esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_3)))) {
        out_3_1_52_V_V_blk_n = out_3_1_52_V_V_full_n.read();
    } else {
        out_3_1_52_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_3_1_52_V_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_52_V_V_din = buffer_3_1_52_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op4383_write_state3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_52_V_V_din = in_V_data_V_dout.read().range(423, 416);
    } else {
        out_3_1_52_V_V_din =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void AttentionMatmulReadB::thread_out_3_1_52_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op4383_write_state3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        out_3_1_52_V_V_write = ap_const_logic_1;
    } else {
        out_3_1_52_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_3_1_53_V_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
          esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_3)))) {
        out_3_1_53_V_V_blk_n = out_3_1_53_V_V_full_n.read();
    } else {
        out_3_1_53_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_3_1_53_V_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_53_V_V_din = buffer_3_1_53_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op4425_write_state3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_53_V_V_din = in_V_data_V_dout.read().range(431, 424);
    } else {
        out_3_1_53_V_V_din =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void AttentionMatmulReadB::thread_out_3_1_53_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op4425_write_state3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        out_3_1_53_V_V_write = ap_const_logic_1;
    } else {
        out_3_1_53_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_3_1_54_V_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
          esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_3)))) {
        out_3_1_54_V_V_blk_n = out_3_1_54_V_V_full_n.read();
    } else {
        out_3_1_54_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_3_1_54_V_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_54_V_V_din = buffer_3_1_54_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op4467_write_state3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_54_V_V_din = in_V_data_V_dout.read().range(439, 432);
    } else {
        out_3_1_54_V_V_din =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void AttentionMatmulReadB::thread_out_3_1_54_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op4467_write_state3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        out_3_1_54_V_V_write = ap_const_logic_1;
    } else {
        out_3_1_54_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_3_1_55_V_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
          esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_3)))) {
        out_3_1_55_V_V_blk_n = out_3_1_55_V_V_full_n.read();
    } else {
        out_3_1_55_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_3_1_55_V_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_55_V_V_din = buffer_3_1_55_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op4509_write_state3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_55_V_V_din = in_V_data_V_dout.read().range(447, 440);
    } else {
        out_3_1_55_V_V_din =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void AttentionMatmulReadB::thread_out_3_1_55_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op4509_write_state3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        out_3_1_55_V_V_write = ap_const_logic_1;
    } else {
        out_3_1_55_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_3_1_56_V_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
          esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_3)))) {
        out_3_1_56_V_V_blk_n = out_3_1_56_V_V_full_n.read();
    } else {
        out_3_1_56_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_3_1_56_V_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_56_V_V_din = buffer_3_1_56_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op4551_write_state3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_56_V_V_din = in_V_data_V_dout.read().range(455, 448);
    } else {
        out_3_1_56_V_V_din =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void AttentionMatmulReadB::thread_out_3_1_56_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op4551_write_state3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        out_3_1_56_V_V_write = ap_const_logic_1;
    } else {
        out_3_1_56_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_3_1_57_V_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
          esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_3)))) {
        out_3_1_57_V_V_blk_n = out_3_1_57_V_V_full_n.read();
    } else {
        out_3_1_57_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_3_1_57_V_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_57_V_V_din = buffer_3_1_57_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op4593_write_state3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_57_V_V_din = in_V_data_V_dout.read().range(463, 456);
    } else {
        out_3_1_57_V_V_din =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void AttentionMatmulReadB::thread_out_3_1_57_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op4593_write_state3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        out_3_1_57_V_V_write = ap_const_logic_1;
    } else {
        out_3_1_57_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_3_1_58_V_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
          esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_3)))) {
        out_3_1_58_V_V_blk_n = out_3_1_58_V_V_full_n.read();
    } else {
        out_3_1_58_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_3_1_58_V_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_58_V_V_din = buffer_3_1_58_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op4635_write_state3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_58_V_V_din = in_V_data_V_dout.read().range(471, 464);
    } else {
        out_3_1_58_V_V_din =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void AttentionMatmulReadB::thread_out_3_1_58_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op4635_write_state3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        out_3_1_58_V_V_write = ap_const_logic_1;
    } else {
        out_3_1_58_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_3_1_59_V_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
          esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_3)))) {
        out_3_1_59_V_V_blk_n = out_3_1_59_V_V_full_n.read();
    } else {
        out_3_1_59_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_3_1_59_V_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_59_V_V_din = buffer_3_1_59_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op4677_write_state3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_59_V_V_din = in_V_data_V_dout.read().range(479, 472);
    } else {
        out_3_1_59_V_V_din =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void AttentionMatmulReadB::thread_out_3_1_59_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op4677_write_state3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        out_3_1_59_V_V_write = ap_const_logic_1;
    } else {
        out_3_1_59_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_3_1_5_V_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
          esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_3)))) {
        out_3_1_5_V_V_blk_n = out_3_1_5_V_V_full_n.read();
    } else {
        out_3_1_5_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_3_1_5_V_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_5_V_V_din = buffer_3_1_5_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2409_write_state3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_5_V_V_din = in_V_data_V_dout.read().range(47, 40);
    } else {
        out_3_1_5_V_V_din =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void AttentionMatmulReadB::thread_out_3_1_5_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2409_write_state3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        out_3_1_5_V_V_write = ap_const_logic_1;
    } else {
        out_3_1_5_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_3_1_60_V_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
          esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_3)))) {
        out_3_1_60_V_V_blk_n = out_3_1_60_V_V_full_n.read();
    } else {
        out_3_1_60_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_3_1_60_V_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_60_V_V_din = buffer_3_1_60_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op4719_write_state3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_60_V_V_din = in_V_data_V_dout.read().range(487, 480);
    } else {
        out_3_1_60_V_V_din =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void AttentionMatmulReadB::thread_out_3_1_60_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op4719_write_state3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        out_3_1_60_V_V_write = ap_const_logic_1;
    } else {
        out_3_1_60_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_3_1_61_V_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
          esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_3)))) {
        out_3_1_61_V_V_blk_n = out_3_1_61_V_V_full_n.read();
    } else {
        out_3_1_61_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_3_1_61_V_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_61_V_V_din = buffer_3_1_61_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op4761_write_state3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_61_V_V_din = in_V_data_V_dout.read().range(495, 488);
    } else {
        out_3_1_61_V_V_din =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void AttentionMatmulReadB::thread_out_3_1_61_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op4761_write_state3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        out_3_1_61_V_V_write = ap_const_logic_1;
    } else {
        out_3_1_61_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_3_1_62_V_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
          esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_3)))) {
        out_3_1_62_V_V_blk_n = out_3_1_62_V_V_full_n.read();
    } else {
        out_3_1_62_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_3_1_62_V_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_62_V_V_din = buffer_3_1_62_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op4803_write_state3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_62_V_V_din = in_V_data_V_dout.read().range(503, 496);
    } else {
        out_3_1_62_V_V_din =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void AttentionMatmulReadB::thread_out_3_1_62_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op4803_write_state3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        out_3_1_62_V_V_write = ap_const_logic_1;
    } else {
        out_3_1_62_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_3_1_63_V_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
          esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_3)))) {
        out_3_1_63_V_V_blk_n = out_3_1_63_V_V_full_n.read();
    } else {
        out_3_1_63_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_3_1_63_V_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_63_V_V_din = buffer_3_1_63_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op4845_write_state3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_63_V_V_din = in_V_data_V_dout.read().range(511, 504);
    } else {
        out_3_1_63_V_V_din =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void AttentionMatmulReadB::thread_out_3_1_63_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op4845_write_state3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        out_3_1_63_V_V_write = ap_const_logic_1;
    } else {
        out_3_1_63_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_3_1_6_V_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
          esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_3)))) {
        out_3_1_6_V_V_blk_n = out_3_1_6_V_V_full_n.read();
    } else {
        out_3_1_6_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_3_1_6_V_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_6_V_V_din = buffer_3_1_6_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2451_write_state3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_6_V_V_din = in_V_data_V_dout.read().range(55, 48);
    } else {
        out_3_1_6_V_V_din =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void AttentionMatmulReadB::thread_out_3_1_6_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2451_write_state3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        out_3_1_6_V_V_write = ap_const_logic_1;
    } else {
        out_3_1_6_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_3_1_7_V_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
          esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_3)))) {
        out_3_1_7_V_V_blk_n = out_3_1_7_V_V_full_n.read();
    } else {
        out_3_1_7_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_3_1_7_V_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_7_V_V_din = buffer_3_1_7_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2493_write_state3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_7_V_V_din = in_V_data_V_dout.read().range(63, 56);
    } else {
        out_3_1_7_V_V_din =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void AttentionMatmulReadB::thread_out_3_1_7_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2493_write_state3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        out_3_1_7_V_V_write = ap_const_logic_1;
    } else {
        out_3_1_7_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_3_1_8_V_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
          esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_3)))) {
        out_3_1_8_V_V_blk_n = out_3_1_8_V_V_full_n.read();
    } else {
        out_3_1_8_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_3_1_8_V_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_8_V_V_din = buffer_3_1_8_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2535_write_state3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_8_V_V_din = in_V_data_V_dout.read().range(71, 64);
    } else {
        out_3_1_8_V_V_din =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void AttentionMatmulReadB::thread_out_3_1_8_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2535_write_state3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        out_3_1_8_V_V_write = ap_const_logic_1;
    } else {
        out_3_1_8_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_3_1_9_V_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
          esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_3)))) {
        out_3_1_9_V_V_blk_n = out_3_1_9_V_V_full_n.read();
    } else {
        out_3_1_9_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_3_1_9_V_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_9_V_V_din = buffer_3_1_9_V_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2577_write_state3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_3_1_9_V_V_din = in_V_data_V_dout.read().range(79, 72);
    } else {
        out_3_1_9_V_V_din =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void AttentionMatmulReadB::thread_out_3_1_9_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_26450.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2577_write_state3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        out_3_1_9_V_V_write = ap_const_logic_1;
    } else {
        out_3_1_9_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_compute_n_c_0_V_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        out_compute_n_c_0_V_V_blk_n = out_compute_n_c_0_V_V_full_n.read();
    } else {
        out_compute_n_c_0_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_compute_n_c_0_V_V_din() {
    out_compute_n_c_0_V_V_din = N_c_fu_23608_p1.read();
}

void AttentionMatmulReadB::thread_out_compute_n_c_0_V_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_V_id_V0_status.read()) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_r_V_V_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_compute_n_c_0_V_V_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_compute_n_c_1_V_V_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_compute_n_c_2_V_V_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_compute_n_c_3_V_V_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_write_n_c_V_V_full_n.read())))) {
        out_compute_n_c_0_V_V_write = ap_const_logic_1;
    } else {
        out_compute_n_c_0_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_compute_n_c_1_V_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        out_compute_n_c_1_V_V_blk_n = out_compute_n_c_1_V_V_full_n.read();
    } else {
        out_compute_n_c_1_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_compute_n_c_1_V_V_din() {
    out_compute_n_c_1_V_V_din = N_c_fu_23608_p1.read();
}

void AttentionMatmulReadB::thread_out_compute_n_c_1_V_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_V_id_V0_status.read()) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_r_V_V_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_compute_n_c_0_V_V_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_compute_n_c_1_V_V_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_compute_n_c_2_V_V_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_compute_n_c_3_V_V_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_write_n_c_V_V_full_n.read())))) {
        out_compute_n_c_1_V_V_write = ap_const_logic_1;
    } else {
        out_compute_n_c_1_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_compute_n_c_2_V_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        out_compute_n_c_2_V_V_blk_n = out_compute_n_c_2_V_V_full_n.read();
    } else {
        out_compute_n_c_2_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_compute_n_c_2_V_V_din() {
    out_compute_n_c_2_V_V_din = N_c_fu_23608_p1.read();
}

void AttentionMatmulReadB::thread_out_compute_n_c_2_V_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_V_id_V0_status.read()) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_r_V_V_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_compute_n_c_0_V_V_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_compute_n_c_1_V_V_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_compute_n_c_2_V_V_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_compute_n_c_3_V_V_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_write_n_c_V_V_full_n.read())))) {
        out_compute_n_c_2_V_V_write = ap_const_logic_1;
    } else {
        out_compute_n_c_2_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_compute_n_c_3_V_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        out_compute_n_c_3_V_V_blk_n = out_compute_n_c_3_V_V_full_n.read();
    } else {
        out_compute_n_c_3_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_compute_n_c_3_V_V_din() {
    out_compute_n_c_3_V_V_din = N_c_fu_23608_p1.read();
}

void AttentionMatmulReadB::thread_out_compute_n_c_3_V_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_V_id_V0_status.read()) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_r_V_V_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_compute_n_c_0_V_V_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_compute_n_c_1_V_V_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_compute_n_c_2_V_V_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_compute_n_c_3_V_V_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_write_n_c_V_V_full_n.read())))) {
        out_compute_n_c_3_V_V_write = ap_const_logic_1;
    } else {
        out_compute_n_c_3_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_out_write_n_c_V_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        out_write_n_c_V_V_blk_n = out_write_n_c_V_V_full_n.read();
    } else {
        out_write_n_c_V_V_blk_n = ap_const_logic_1;
    }
}

void AttentionMatmulReadB::thread_out_write_n_c_V_V_din() {
    out_write_n_c_V_V_din = N_c_fu_23608_p1.read();
}

void AttentionMatmulReadB::thread_out_write_n_c_V_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_V_id_V0_status.read()) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_r_V_V_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_compute_n_c_0_V_V_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_compute_n_c_1_V_V_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_compute_n_c_2_V_V_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_compute_n_c_3_V_V_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_write_n_c_V_V_full_n.read())))) {
        out_write_n_c_V_V_write = ap_const_logic_1;
    } else {
        out_write_n_c_V_V_write = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_tmp_16_fu_23652_p1() {
    tmp_16_fu_23652_p1 = t_V_reg_23571.read().range(1-1, 0);
}

void AttentionMatmulReadB::thread_tmp_17_fu_25838_p1() {
    tmp_17_fu_25838_p1 = tmp_V_1213_reg_26408.read().range(16-1, 0);
}

void AttentionMatmulReadB::thread_tmp_1_fu_25873_p1() {
    tmp_1_fu_25873_p1 = esl_zext<64,13>(i_op_assign_2_mid2_fu_25865_p3.read());
}

void AttentionMatmulReadB::thread_tmp_65_cast1_fu_25829_p4() {
    tmp_65_cast1_fu_25829_p4 = tmp_data_V_reg_26403.read().range(15, 3);
}

void AttentionMatmulReadB::thread_tmp_6_fu_23621_p2() {
    tmp_6_fu_23621_p2 = (!tmp_s_fu_23617_p1.read().is_01() || !N_c_reg_26413.read().is_01())? sc_lv<1>(): (sc_biguint<32>(tmp_s_fu_23617_p1.read()) < sc_biguint<32>(N_c_reg_26413.read()));
}

void AttentionMatmulReadB::thread_tmp_8_fu_23656_p1() {
    tmp_8_fu_23656_p1 = esl_zext<64,13>(ret_V_4_reg_26427.read());
}

void AttentionMatmulReadB::thread_tmp_V_1149_fu_24171_p1() {
    tmp_V_1149_fu_24171_p1 = in_V_data_V_dout.read().range(8-1, 0);
}

void AttentionMatmulReadB::thread_tmp_s_fu_23617_p1() {
    tmp_s_fu_23617_p1 = esl_zext<32,16>(t_V_reg_23571.read());
}

}

