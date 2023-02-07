#include "AttentionMatmulReadB.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void AttentionMatmulReadB::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_done_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_continue.read())) {
            ap_done_reg = ap_const_logic_0;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state2.read()))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_V_id_V0_status.read()) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_r_V_V_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_compute_n_c_0_V_V_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_compute_n_c_1_V_V_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_compute_n_c_2_V_V_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_compute_n_c_3_V_V_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_write_n_c_V_V_full_n.read())))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state2.read()))) {
            ap_enable_reg_pp0_iter1 = (ap_condition_pp0_exit_iter0_state2.read() ^ ap_const_logic_1);
        } else if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_V_id_V0_status.read()) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_r_V_V_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_compute_n_c_0_V_V_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_compute_n_c_1_V_V_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_compute_n_c_2_V_V_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_compute_n_c_3_V_V_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_write_n_c_V_V_full_n.read())))) {
            ap_enable_reg_pp0_iter1 = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp1_exit_iter0_state5.read()))) {
            ap_enable_reg_pp1_iter0 = ap_const_logic_0;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
            ap_enable_reg_pp1_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp1_exit_iter0_state5.read()))) {
            ap_enable_reg_pp1_iter1 = (ap_condition_pp1_exit_iter0_state5.read() ^ ap_const_logic_1);
        } else if (esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp1_iter1 = ap_enable_reg_pp1_iter0.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
            ap_enable_reg_pp1_iter1 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_25849_p2.read()))) {
        i_op_assign_2_reg_23593 = i_fu_26389_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        i_op_assign_2_reg_23593 = ap_const_lv13_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_25849_p2.read()))) {
        indvar_flatten_reg_23582 = indvar_flatten_next_fu_25854_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        indvar_flatten_reg_23582 = ap_const_lv30_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_6_fu_23621_p2.read()))) {
        t_V_reg_23571 = i_V_fu_23626_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_V_id_V0_status.read()) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_r_V_V_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_compute_n_c_0_V_V_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_compute_n_c_1_V_V_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_compute_n_c_2_V_V_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_compute_n_c_3_V_V_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_write_n_c_V_V_full_n.read())))) {
        t_V_reg_23571 = ap_const_lv16_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_V_id_V0_status.read()) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_r_V_V_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_compute_n_c_0_V_V_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_compute_n_c_1_V_V_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_compute_n_c_2_V_V_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_compute_n_c_3_V_V_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_write_n_c_V_V_full_n.read())))) {
        N_c_reg_26413 = N_c_fu_23608_p1.read();
        tmp_V_1213_reg_26408 = in_n_r_V_V_dout.read();
        tmp_data_V_reg_26403 = in_V_data_V_dout.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        bound_reg_26445 = grp_fu_26395_p3.read();
        tmp_65_cast1_reg_26440 = tmp_data_V_reg_26403.read().range(15, 3);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0))) {
        exitcond_flatten_reg_26450 = exitcond_flatten_fu_25849_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_6_fu_23621_p2.read()))) {
        ret_V_10_t_reg_26432 = t_V_reg_23571.read().range(2, 1);
        ret_V_4_reg_26427 = t_V_reg_23571.read().range(15, 3);
        tmp_16_reg_26436 = tmp_16_fu_23652_p1.read();
    }
}

void AttentionMatmulReadB::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_V_id_V0_status.read()) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_r_V_V_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_compute_n_c_0_V_V_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_compute_n_c_1_V_V_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_compute_n_c_2_V_V_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_compute_n_c_3_V_V_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_write_n_c_V_V_full_n.read())))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_6_fu_23621_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_6_fu_23621_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state4;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            break;
        case 8 : 
            if (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_flatten_fu_25849_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_flatten_fu_25849_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state7;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            }
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<5>) ("XXXXX");
            break;
    }
}

}

