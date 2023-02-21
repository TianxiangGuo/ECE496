#include "IdentityQuantAct146.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void IdentityQuantAct146::thread_N_fu_4296_p1() {
    N_fu_4296_p1 = in_V_data_V127_dout.read().range(32-1, 0);
}

void IdentityQuantAct146::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[1];
}

void IdentityQuantAct146::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void IdentityQuantAct146::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[2];
}

void IdentityQuantAct146::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void IdentityQuantAct146::thread_ap_block_pp0_stage0_01001() {
    ap_block_pp0_stage0_01001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, in_V_id_V1280_status.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1154_read_state3.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_reg_10698_pp0_iter3_reg.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_V_id_V1_status.read())));
}

void IdentityQuantAct146::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, in_V_id_V1280_status.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1154_read_state3.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_reg_10698_pp0_iter3_reg.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_V_id_V1_status.read())));
}

void IdentityQuantAct146::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, in_V_id_V1280_status.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1154_read_state3.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_reg_10698_pp0_iter3_reg.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_V_id_V1_status.read())));
}

void IdentityQuantAct146::thread_ap_block_state1() {
    ap_block_state1 = (esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_V_id_V1280_status.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_V_id_V1_status.read()));
}

void IdentityQuantAct146::thread_ap_block_state2_pp0_stage0_iter0() {
    ap_block_state2_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void IdentityQuantAct146::thread_ap_block_state3_pp0_stage0_iter1() {
    ap_block_state3_pp0_stage0_iter1 = (esl_seteq<1,1,1>(ap_const_logic_0, in_V_id_V1280_status.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1154_read_state3.read()));
}

void IdentityQuantAct146::thread_ap_block_state4_pp0_stage0_iter2() {
    ap_block_state4_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void IdentityQuantAct146::thread_ap_block_state5_pp0_stage0_iter3() {
    ap_block_state5_pp0_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void IdentityQuantAct146::thread_ap_block_state6_pp0_stage0_iter4() {
    ap_block_state6_pp0_stage0_iter4 = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_reg_10698_pp0_iter3_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_0, out_V_id_V1_status.read()));
}

void IdentityQuantAct146::thread_ap_condition_pp0_exit_iter1_state3() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_0))) {
        ap_condition_pp0_exit_iter1_state3 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter1_state3 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_ap_done() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_done_reg.read();
    }
}

void IdentityQuantAct146::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void IdentityQuantAct146::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter4.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_ap_predicate_op1154_read_state3() {
    ap_predicate_op1154_read_state3 = (esl_seteq<1,1,1>(exitcond_flatten1_reg_10698.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(tmp_8_reg_11618.read(), ap_const_lv1_1));
}

void IdentityQuantAct146::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_bound_fu_4325_p2() {
    bound_fu_4325_p2 = (!p_shl_fu_4305_p3.read().is_01() || !p_shl1_fu_4321_p1.read().is_01())? sc_lv<38>(): (sc_biguint<38>(p_shl_fu_4305_p3.read()) - sc_biguint<38>(p_shl1_fu_4321_p1.read()));
}

void IdentityQuantAct146::thread_exitcond_flatten1_fu_4463_p2() {
    exitcond_flatten1_fu_4463_p2 = (!indvar_flatten1_reg_4237.read().is_01() || !bound_reg_10053.read().is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten1_reg_4237.read() == bound_reg_10053.read());
}

void IdentityQuantAct146::thread_exitcond_flatten_fu_4474_p2() {
    exitcond_flatten_fu_4474_p2 = (!indvar_flatten_reg_4248.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten_reg_4248.read() == ap_const_lv7_30);
}

void IdentityQuantAct146::thread_i_mid2_fu_5671_p3() {
    i_mid2_fu_5671_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<32>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? i_s_fu_4748_p2.read(): i_reg_4281.read());
}

void IdentityQuantAct146::thread_i_s_fu_4748_p2() {
    i_s_fu_4748_p2 = (!i_reg_4281.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(i_reg_4281.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void IdentityQuantAct146::thread_identity_e_0_address0() {
    identity_e_0_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_0_address1() {
    identity_e_0_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_0_ce0 = ap_const_logic_1;
    } else {
        identity_e_0_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_0_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_0_ce1 = ap_const_logic_1;
    } else {
        identity_e_0_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_0_load_mi_fu_5314_p3() {
    identity_e_0_load_mi_fu_5314_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_0_q0.read());
}

void IdentityQuantAct146::thread_identity_e_10_address0() {
    identity_e_10_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_10_address1() {
    identity_e_10_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_10_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_10_ce0 = ap_const_logic_1;
    } else {
        identity_e_10_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_10_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_10_ce1 = ap_const_logic_1;
    } else {
        identity_e_10_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_10_load_m_fu_5104_p3() {
    identity_e_10_load_m_fu_5104_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_10_q0.read());
}

void IdentityQuantAct146::thread_identity_e_11_address0() {
    identity_e_11_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_11_address1() {
    identity_e_11_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_11_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_11_ce0 = ap_const_logic_1;
    } else {
        identity_e_11_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_11_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_11_ce1 = ap_const_logic_1;
    } else {
        identity_e_11_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_11_load_m_fu_5083_p3() {
    identity_e_11_load_m_fu_5083_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_11_q0.read());
}

void IdentityQuantAct146::thread_identity_e_12_address0() {
    identity_e_12_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_12_address1() {
    identity_e_12_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_12_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_12_ce0 = ap_const_logic_1;
    } else {
        identity_e_12_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_12_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_12_ce1 = ap_const_logic_1;
    } else {
        identity_e_12_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_12_load_m_fu_5062_p3() {
    identity_e_12_load_m_fu_5062_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_12_q0.read());
}

void IdentityQuantAct146::thread_identity_e_13_address0() {
    identity_e_13_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_13_address1() {
    identity_e_13_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_13_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_13_ce0 = ap_const_logic_1;
    } else {
        identity_e_13_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_13_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_13_ce1 = ap_const_logic_1;
    } else {
        identity_e_13_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_13_load_m_fu_5041_p3() {
    identity_e_13_load_m_fu_5041_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_13_q0.read());
}

void IdentityQuantAct146::thread_identity_e_14_address0() {
    identity_e_14_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_14_address1() {
    identity_e_14_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_14_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_14_ce0 = ap_const_logic_1;
    } else {
        identity_e_14_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_14_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_14_ce1 = ap_const_logic_1;
    } else {
        identity_e_14_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_14_load_m_fu_5020_p3() {
    identity_e_14_load_m_fu_5020_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_14_q0.read());
}

void IdentityQuantAct146::thread_identity_e_15_address0() {
    identity_e_15_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_15_address1() {
    identity_e_15_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_15_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_15_ce0 = ap_const_logic_1;
    } else {
        identity_e_15_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_15_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_15_ce1 = ap_const_logic_1;
    } else {
        identity_e_15_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_15_load_m_fu_4999_p3() {
    identity_e_15_load_m_fu_4999_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_15_q0.read());
}

void IdentityQuantAct146::thread_identity_e_16_address0() {
    identity_e_16_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_16_address1() {
    identity_e_16_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_16_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_16_ce0 = ap_const_logic_1;
    } else {
        identity_e_16_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_16_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_16_ce1 = ap_const_logic_1;
    } else {
        identity_e_16_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_16_load_m_fu_5321_p3() {
    identity_e_16_load_m_fu_5321_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_16_q0.read());
}

void IdentityQuantAct146::thread_identity_e_17_address0() {
    identity_e_17_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_17_address1() {
    identity_e_17_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_17_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_17_ce0 = ap_const_logic_1;
    } else {
        identity_e_17_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_17_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_17_ce1 = ap_const_logic_1;
    } else {
        identity_e_17_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_17_load_m_fu_5300_p3() {
    identity_e_17_load_m_fu_5300_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_17_q0.read());
}

void IdentityQuantAct146::thread_identity_e_18_address0() {
    identity_e_18_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_18_address1() {
    identity_e_18_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_18_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_18_ce0 = ap_const_logic_1;
    } else {
        identity_e_18_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_18_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_18_ce1 = ap_const_logic_1;
    } else {
        identity_e_18_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_18_load_m_fu_5279_p3() {
    identity_e_18_load_m_fu_5279_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_18_q0.read());
}

void IdentityQuantAct146::thread_identity_e_19_address0() {
    identity_e_19_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_19_address1() {
    identity_e_19_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_19_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_19_ce0 = ap_const_logic_1;
    } else {
        identity_e_19_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_19_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_19_ce1 = ap_const_logic_1;
    } else {
        identity_e_19_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_19_load_m_fu_5258_p3() {
    identity_e_19_load_m_fu_5258_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_19_q0.read());
}

void IdentityQuantAct146::thread_identity_e_1_address0() {
    identity_e_1_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_1_address1() {
    identity_e_1_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_1_ce0 = ap_const_logic_1;
    } else {
        identity_e_1_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_1_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_1_ce1 = ap_const_logic_1;
    } else {
        identity_e_1_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_1_load_mi_fu_5293_p3() {
    identity_e_1_load_mi_fu_5293_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_1_q0.read());
}

void IdentityQuantAct146::thread_identity_e_20_address0() {
    identity_e_20_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_20_address1() {
    identity_e_20_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_20_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_20_ce0 = ap_const_logic_1;
    } else {
        identity_e_20_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_20_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_20_ce1 = ap_const_logic_1;
    } else {
        identity_e_20_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_20_load_m_fu_5237_p3() {
    identity_e_20_load_m_fu_5237_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_20_q0.read());
}

void IdentityQuantAct146::thread_identity_e_21_address0() {
    identity_e_21_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_21_address1() {
    identity_e_21_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_21_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_21_ce0 = ap_const_logic_1;
    } else {
        identity_e_21_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_21_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_21_ce1 = ap_const_logic_1;
    } else {
        identity_e_21_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_21_load_m_fu_5216_p3() {
    identity_e_21_load_m_fu_5216_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_21_q0.read());
}

void IdentityQuantAct146::thread_identity_e_22_address0() {
    identity_e_22_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_22_address1() {
    identity_e_22_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_22_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_22_ce0 = ap_const_logic_1;
    } else {
        identity_e_22_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_22_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_22_ce1 = ap_const_logic_1;
    } else {
        identity_e_22_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_22_load_m_fu_5195_p3() {
    identity_e_22_load_m_fu_5195_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_22_q0.read());
}

void IdentityQuantAct146::thread_identity_e_23_address0() {
    identity_e_23_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_23_address1() {
    identity_e_23_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_23_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_23_ce0 = ap_const_logic_1;
    } else {
        identity_e_23_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_23_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_23_ce1 = ap_const_logic_1;
    } else {
        identity_e_23_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_23_load_m_fu_5174_p3() {
    identity_e_23_load_m_fu_5174_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_23_q0.read());
}

void IdentityQuantAct146::thread_identity_e_24_address0() {
    identity_e_24_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_24_address1() {
    identity_e_24_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_24_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_24_ce0 = ap_const_logic_1;
    } else {
        identity_e_24_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_24_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_24_ce1 = ap_const_logic_1;
    } else {
        identity_e_24_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_24_load_m_fu_5153_p3() {
    identity_e_24_load_m_fu_5153_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_24_q0.read());
}

void IdentityQuantAct146::thread_identity_e_25_address0() {
    identity_e_25_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_25_address1() {
    identity_e_25_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_25_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_25_ce0 = ap_const_logic_1;
    } else {
        identity_e_25_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_25_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_25_ce1 = ap_const_logic_1;
    } else {
        identity_e_25_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_25_load_m_fu_5132_p3() {
    identity_e_25_load_m_fu_5132_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_25_q0.read());
}

void IdentityQuantAct146::thread_identity_e_26_address0() {
    identity_e_26_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_26_address1() {
    identity_e_26_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_26_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_26_ce0 = ap_const_logic_1;
    } else {
        identity_e_26_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_26_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_26_ce1 = ap_const_logic_1;
    } else {
        identity_e_26_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_26_load_m_fu_5111_p3() {
    identity_e_26_load_m_fu_5111_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_26_q0.read());
}

void IdentityQuantAct146::thread_identity_e_27_address0() {
    identity_e_27_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_27_address1() {
    identity_e_27_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_27_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_27_ce0 = ap_const_logic_1;
    } else {
        identity_e_27_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_27_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_27_ce1 = ap_const_logic_1;
    } else {
        identity_e_27_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_27_load_m_fu_5090_p3() {
    identity_e_27_load_m_fu_5090_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_27_q0.read());
}

void IdentityQuantAct146::thread_identity_e_28_address0() {
    identity_e_28_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_28_address1() {
    identity_e_28_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_28_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_28_ce0 = ap_const_logic_1;
    } else {
        identity_e_28_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_28_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_28_ce1 = ap_const_logic_1;
    } else {
        identity_e_28_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_28_load_m_fu_5069_p3() {
    identity_e_28_load_m_fu_5069_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_28_q0.read());
}

void IdentityQuantAct146::thread_identity_e_29_address0() {
    identity_e_29_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_29_address1() {
    identity_e_29_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_29_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_29_ce0 = ap_const_logic_1;
    } else {
        identity_e_29_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_29_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_29_ce1 = ap_const_logic_1;
    } else {
        identity_e_29_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_29_load_m_fu_5048_p3() {
    identity_e_29_load_m_fu_5048_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_29_q0.read());
}

void IdentityQuantAct146::thread_identity_e_2_address0() {
    identity_e_2_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_2_address1() {
    identity_e_2_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_2_ce0 = ap_const_logic_1;
    } else {
        identity_e_2_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_2_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_2_ce1 = ap_const_logic_1;
    } else {
        identity_e_2_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_2_load_mi_fu_5272_p3() {
    identity_e_2_load_mi_fu_5272_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_2_q0.read());
}

void IdentityQuantAct146::thread_identity_e_30_address0() {
    identity_e_30_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_30_address1() {
    identity_e_30_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_30_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_30_ce0 = ap_const_logic_1;
    } else {
        identity_e_30_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_30_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_30_ce1 = ap_const_logic_1;
    } else {
        identity_e_30_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_30_load_m_fu_5027_p3() {
    identity_e_30_load_m_fu_5027_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_30_q0.read());
}

void IdentityQuantAct146::thread_identity_e_31_address0() {
    identity_e_31_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_31_address1() {
    identity_e_31_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_31_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_31_ce0 = ap_const_logic_1;
    } else {
        identity_e_31_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_31_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_31_ce1 = ap_const_logic_1;
    } else {
        identity_e_31_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_31_load_m_fu_5006_p3() {
    identity_e_31_load_m_fu_5006_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_31_q0.read());
}

void IdentityQuantAct146::thread_identity_e_32_address0() {
    identity_e_32_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_32_address1() {
    identity_e_32_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_32_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_32_ce0 = ap_const_logic_1;
    } else {
        identity_e_32_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_32_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_32_ce1 = ap_const_logic_1;
    } else {
        identity_e_32_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_32_load_m_fu_5328_p3() {
    identity_e_32_load_m_fu_5328_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_32_q0.read());
}

void IdentityQuantAct146::thread_identity_e_33_address0() {
    identity_e_33_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_33_address1() {
    identity_e_33_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_33_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_33_ce0 = ap_const_logic_1;
    } else {
        identity_e_33_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_33_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_33_ce1 = ap_const_logic_1;
    } else {
        identity_e_33_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_33_load_m_fu_5307_p3() {
    identity_e_33_load_m_fu_5307_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_33_q0.read());
}

void IdentityQuantAct146::thread_identity_e_34_address0() {
    identity_e_34_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_34_address1() {
    identity_e_34_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_34_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_34_ce0 = ap_const_logic_1;
    } else {
        identity_e_34_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_34_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_34_ce1 = ap_const_logic_1;
    } else {
        identity_e_34_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_34_load_m_fu_5286_p3() {
    identity_e_34_load_m_fu_5286_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_34_q0.read());
}

void IdentityQuantAct146::thread_identity_e_35_address0() {
    identity_e_35_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_35_address1() {
    identity_e_35_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_35_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_35_ce0 = ap_const_logic_1;
    } else {
        identity_e_35_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_35_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_35_ce1 = ap_const_logic_1;
    } else {
        identity_e_35_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_35_load_m_fu_5265_p3() {
    identity_e_35_load_m_fu_5265_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_35_q0.read());
}

void IdentityQuantAct146::thread_identity_e_36_address0() {
    identity_e_36_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_36_address1() {
    identity_e_36_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_36_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_36_ce0 = ap_const_logic_1;
    } else {
        identity_e_36_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_36_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_36_ce1 = ap_const_logic_1;
    } else {
        identity_e_36_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_36_load_m_fu_5244_p3() {
    identity_e_36_load_m_fu_5244_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_36_q0.read());
}

void IdentityQuantAct146::thread_identity_e_37_address0() {
    identity_e_37_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_37_address1() {
    identity_e_37_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_37_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_37_ce0 = ap_const_logic_1;
    } else {
        identity_e_37_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_37_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_37_ce1 = ap_const_logic_1;
    } else {
        identity_e_37_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_37_load_m_fu_5223_p3() {
    identity_e_37_load_m_fu_5223_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_37_q0.read());
}

void IdentityQuantAct146::thread_identity_e_38_address0() {
    identity_e_38_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_38_address1() {
    identity_e_38_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_38_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_38_ce0 = ap_const_logic_1;
    } else {
        identity_e_38_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_38_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_38_ce1 = ap_const_logic_1;
    } else {
        identity_e_38_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_38_load_m_fu_5202_p3() {
    identity_e_38_load_m_fu_5202_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_38_q0.read());
}

void IdentityQuantAct146::thread_identity_e_39_address0() {
    identity_e_39_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_39_address1() {
    identity_e_39_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_39_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_39_ce0 = ap_const_logic_1;
    } else {
        identity_e_39_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_39_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_39_ce1 = ap_const_logic_1;
    } else {
        identity_e_39_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_39_load_m_fu_5181_p3() {
    identity_e_39_load_m_fu_5181_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_39_q0.read());
}

void IdentityQuantAct146::thread_identity_e_3_address0() {
    identity_e_3_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_3_address1() {
    identity_e_3_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_3_ce0 = ap_const_logic_1;
    } else {
        identity_e_3_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_3_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_3_ce1 = ap_const_logic_1;
    } else {
        identity_e_3_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_3_load_mi_fu_5251_p3() {
    identity_e_3_load_mi_fu_5251_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_3_q0.read());
}

void IdentityQuantAct146::thread_identity_e_40_address0() {
    identity_e_40_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_40_address1() {
    identity_e_40_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_40_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_40_ce0 = ap_const_logic_1;
    } else {
        identity_e_40_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_40_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_40_ce1 = ap_const_logic_1;
    } else {
        identity_e_40_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_40_load_m_fu_5160_p3() {
    identity_e_40_load_m_fu_5160_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_40_q0.read());
}

void IdentityQuantAct146::thread_identity_e_41_address0() {
    identity_e_41_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_41_address1() {
    identity_e_41_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_41_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_41_ce0 = ap_const_logic_1;
    } else {
        identity_e_41_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_41_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_41_ce1 = ap_const_logic_1;
    } else {
        identity_e_41_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_41_load_m_fu_5139_p3() {
    identity_e_41_load_m_fu_5139_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_41_q0.read());
}

void IdentityQuantAct146::thread_identity_e_42_address0() {
    identity_e_42_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_42_address1() {
    identity_e_42_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_42_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_42_ce0 = ap_const_logic_1;
    } else {
        identity_e_42_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_42_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_42_ce1 = ap_const_logic_1;
    } else {
        identity_e_42_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_42_load_m_fu_5118_p3() {
    identity_e_42_load_m_fu_5118_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_42_q0.read());
}

void IdentityQuantAct146::thread_identity_e_43_address0() {
    identity_e_43_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_43_address1() {
    identity_e_43_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_43_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_43_ce0 = ap_const_logic_1;
    } else {
        identity_e_43_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_43_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_43_ce1 = ap_const_logic_1;
    } else {
        identity_e_43_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_43_load_m_fu_5097_p3() {
    identity_e_43_load_m_fu_5097_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_43_q0.read());
}

void IdentityQuantAct146::thread_identity_e_44_address0() {
    identity_e_44_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_44_address1() {
    identity_e_44_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_44_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_44_ce0 = ap_const_logic_1;
    } else {
        identity_e_44_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_44_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_44_ce1 = ap_const_logic_1;
    } else {
        identity_e_44_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_44_load_m_fu_5076_p3() {
    identity_e_44_load_m_fu_5076_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_44_q0.read());
}

void IdentityQuantAct146::thread_identity_e_45_address0() {
    identity_e_45_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_45_address1() {
    identity_e_45_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_45_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_45_ce0 = ap_const_logic_1;
    } else {
        identity_e_45_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_45_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_45_ce1 = ap_const_logic_1;
    } else {
        identity_e_45_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_45_load_m_fu_5055_p3() {
    identity_e_45_load_m_fu_5055_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_45_q0.read());
}

void IdentityQuantAct146::thread_identity_e_46_address0() {
    identity_e_46_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_46_address1() {
    identity_e_46_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_46_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_46_ce0 = ap_const_logic_1;
    } else {
        identity_e_46_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_46_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_46_ce1 = ap_const_logic_1;
    } else {
        identity_e_46_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_46_load_m_fu_5034_p3() {
    identity_e_46_load_m_fu_5034_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_46_q0.read());
}

void IdentityQuantAct146::thread_identity_e_47_address0() {
    identity_e_47_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_47_address1() {
    identity_e_47_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_47_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_47_ce0 = ap_const_logic_1;
    } else {
        identity_e_47_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_47_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_47_ce1 = ap_const_logic_1;
    } else {
        identity_e_47_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_47_load_m_fu_5013_p3() {
    identity_e_47_load_m_fu_5013_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_47_q0.read());
}

void IdentityQuantAct146::thread_identity_e_48_address0() {
    identity_e_48_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_48_address1() {
    identity_e_48_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_48_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_48_ce0 = ap_const_logic_1;
    } else {
        identity_e_48_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_48_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_48_ce1 = ap_const_logic_1;
    } else {
        identity_e_48_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_48_load_m_fu_4887_p3() {
    identity_e_48_load_m_fu_4887_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_48_q0.read());
}

void IdentityQuantAct146::thread_identity_e_49_address0() {
    identity_e_49_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_49_address1() {
    identity_e_49_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_49_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_49_ce0 = ap_const_logic_1;
    } else {
        identity_e_49_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_49_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_49_ce1 = ap_const_logic_1;
    } else {
        identity_e_49_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_49_load_m_fu_4894_p3() {
    identity_e_49_load_m_fu_4894_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_49_q0.read());
}

void IdentityQuantAct146::thread_identity_e_4_address0() {
    identity_e_4_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_4_address1() {
    identity_e_4_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_4_ce0 = ap_const_logic_1;
    } else {
        identity_e_4_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_4_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_4_ce1 = ap_const_logic_1;
    } else {
        identity_e_4_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_4_load_mi_fu_5230_p3() {
    identity_e_4_load_mi_fu_5230_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_4_q0.read());
}

void IdentityQuantAct146::thread_identity_e_50_address0() {
    identity_e_50_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_50_address1() {
    identity_e_50_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_50_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_50_ce0 = ap_const_logic_1;
    } else {
        identity_e_50_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_50_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_50_ce1 = ap_const_logic_1;
    } else {
        identity_e_50_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_50_load_m_fu_4901_p3() {
    identity_e_50_load_m_fu_4901_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_50_q0.read());
}

void IdentityQuantAct146::thread_identity_e_51_address0() {
    identity_e_51_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_51_address1() {
    identity_e_51_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_51_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_51_ce0 = ap_const_logic_1;
    } else {
        identity_e_51_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_51_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_51_ce1 = ap_const_logic_1;
    } else {
        identity_e_51_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_51_load_m_fu_4908_p3() {
    identity_e_51_load_m_fu_4908_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_51_q0.read());
}

void IdentityQuantAct146::thread_identity_e_52_address0() {
    identity_e_52_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_52_address1() {
    identity_e_52_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_52_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_52_ce0 = ap_const_logic_1;
    } else {
        identity_e_52_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_52_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_52_ce1 = ap_const_logic_1;
    } else {
        identity_e_52_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_52_load_m_fu_4915_p3() {
    identity_e_52_load_m_fu_4915_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_52_q0.read());
}

void IdentityQuantAct146::thread_identity_e_53_address0() {
    identity_e_53_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_53_address1() {
    identity_e_53_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_53_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_53_ce0 = ap_const_logic_1;
    } else {
        identity_e_53_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_53_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_53_ce1 = ap_const_logic_1;
    } else {
        identity_e_53_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_53_load_m_fu_4922_p3() {
    identity_e_53_load_m_fu_4922_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_53_q0.read());
}

void IdentityQuantAct146::thread_identity_e_54_address0() {
    identity_e_54_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_54_address1() {
    identity_e_54_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_54_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_54_ce0 = ap_const_logic_1;
    } else {
        identity_e_54_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_54_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_54_ce1 = ap_const_logic_1;
    } else {
        identity_e_54_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_54_load_m_fu_4929_p3() {
    identity_e_54_load_m_fu_4929_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_54_q0.read());
}

void IdentityQuantAct146::thread_identity_e_55_address0() {
    identity_e_55_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_55_address1() {
    identity_e_55_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_55_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_55_ce0 = ap_const_logic_1;
    } else {
        identity_e_55_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_55_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_55_ce1 = ap_const_logic_1;
    } else {
        identity_e_55_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_55_load_m_fu_4936_p3() {
    identity_e_55_load_m_fu_4936_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_55_q0.read());
}

void IdentityQuantAct146::thread_identity_e_56_address0() {
    identity_e_56_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_56_address1() {
    identity_e_56_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_56_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_56_ce0 = ap_const_logic_1;
    } else {
        identity_e_56_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_56_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_56_ce1 = ap_const_logic_1;
    } else {
        identity_e_56_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_56_load_m_fu_4943_p3() {
    identity_e_56_load_m_fu_4943_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_56_q0.read());
}

void IdentityQuantAct146::thread_identity_e_57_address0() {
    identity_e_57_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_57_address1() {
    identity_e_57_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_57_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_57_ce0 = ap_const_logic_1;
    } else {
        identity_e_57_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_57_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_57_ce1 = ap_const_logic_1;
    } else {
        identity_e_57_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_57_load_m_fu_4950_p3() {
    identity_e_57_load_m_fu_4950_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_57_q0.read());
}

void IdentityQuantAct146::thread_identity_e_58_address0() {
    identity_e_58_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_58_address1() {
    identity_e_58_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_58_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_58_ce0 = ap_const_logic_1;
    } else {
        identity_e_58_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_58_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_58_ce1 = ap_const_logic_1;
    } else {
        identity_e_58_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_58_load_m_fu_4957_p3() {
    identity_e_58_load_m_fu_4957_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_58_q0.read());
}

void IdentityQuantAct146::thread_identity_e_59_address0() {
    identity_e_59_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_59_address1() {
    identity_e_59_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_59_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_59_ce0 = ap_const_logic_1;
    } else {
        identity_e_59_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_59_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_59_ce1 = ap_const_logic_1;
    } else {
        identity_e_59_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_59_load_m_fu_4964_p3() {
    identity_e_59_load_m_fu_4964_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_59_q0.read());
}

void IdentityQuantAct146::thread_identity_e_5_address0() {
    identity_e_5_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_5_address1() {
    identity_e_5_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_5_ce0 = ap_const_logic_1;
    } else {
        identity_e_5_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_5_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_5_ce1 = ap_const_logic_1;
    } else {
        identity_e_5_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_5_load_mi_fu_5209_p3() {
    identity_e_5_load_mi_fu_5209_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_5_q0.read());
}

void IdentityQuantAct146::thread_identity_e_60_address0() {
    identity_e_60_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_60_address1() {
    identity_e_60_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_60_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_60_ce0 = ap_const_logic_1;
    } else {
        identity_e_60_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_60_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_60_ce1 = ap_const_logic_1;
    } else {
        identity_e_60_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_60_load_m_fu_4971_p3() {
    identity_e_60_load_m_fu_4971_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_60_q0.read());
}

void IdentityQuantAct146::thread_identity_e_61_address0() {
    identity_e_61_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_61_address1() {
    identity_e_61_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_61_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_61_ce0 = ap_const_logic_1;
    } else {
        identity_e_61_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_61_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_61_ce1 = ap_const_logic_1;
    } else {
        identity_e_61_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_61_load_m_fu_4978_p3() {
    identity_e_61_load_m_fu_4978_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_61_q0.read());
}

void IdentityQuantAct146::thread_identity_e_62_address0() {
    identity_e_62_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_62_address1() {
    identity_e_62_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_62_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_62_ce0 = ap_const_logic_1;
    } else {
        identity_e_62_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_62_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_62_ce1 = ap_const_logic_1;
    } else {
        identity_e_62_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_62_load_m_fu_4985_p3() {
    identity_e_62_load_m_fu_4985_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_62_q0.read());
}

void IdentityQuantAct146::thread_identity_e_63_address0() {
    identity_e_63_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_63_address1() {
    identity_e_63_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_63_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_63_ce0 = ap_const_logic_1;
    } else {
        identity_e_63_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_63_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_63_ce1 = ap_const_logic_1;
    } else {
        identity_e_63_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_63_load_m_fu_4992_p3() {
    identity_e_63_load_m_fu_4992_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_63_q0.read());
}

void IdentityQuantAct146::thread_identity_e_6_address0() {
    identity_e_6_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_6_address1() {
    identity_e_6_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_6_ce0 = ap_const_logic_1;
    } else {
        identity_e_6_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_6_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_6_ce1 = ap_const_logic_1;
    } else {
        identity_e_6_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_6_load_mi_fu_5188_p3() {
    identity_e_6_load_mi_fu_5188_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_6_q0.read());
}

void IdentityQuantAct146::thread_identity_e_7_address0() {
    identity_e_7_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_7_address1() {
    identity_e_7_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_7_ce0 = ap_const_logic_1;
    } else {
        identity_e_7_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_7_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_7_ce1 = ap_const_logic_1;
    } else {
        identity_e_7_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_7_load_mi_fu_5167_p3() {
    identity_e_7_load_mi_fu_5167_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_7_q0.read());
}

void IdentityQuantAct146::thread_identity_e_8_address0() {
    identity_e_8_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_8_address1() {
    identity_e_8_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_8_ce0 = ap_const_logic_1;
    } else {
        identity_e_8_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_8_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_8_ce1 = ap_const_logic_1;
    } else {
        identity_e_8_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_8_load_mi_fu_5146_p3() {
    identity_e_8_load_mi_fu_5146_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_8_q0.read());
}

void IdentityQuantAct146::thread_identity_e_9_address0() {
    identity_e_9_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_e_9_address1() {
    identity_e_9_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_e_9_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_9_ce0 = ap_const_logic_1;
    } else {
        identity_e_9_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_9_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_e_9_ce1 = ap_const_logic_1;
    } else {
        identity_e_9_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_e_9_load_mi_fu_5125_p3() {
    identity_e_9_load_mi_fu_5125_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv5_12: identity_e_9_q0.read());
}

void IdentityQuantAct146::thread_identity_m_0_address0() {
    identity_m_0_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_0_address1() {
    identity_m_0_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_0_ce0 = ap_const_logic_1;
    } else {
        identity_m_0_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_0_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_0_ce1 = ap_const_logic_1;
    } else {
        identity_m_0_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_0_load_mi_fu_5650_p3() {
    identity_m_0_load_mi_fu_5650_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_0_q0.read());
}

void IdentityQuantAct146::thread_identity_m_10_address0() {
    identity_m_10_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_10_address1() {
    identity_m_10_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_10_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_10_ce0 = ap_const_logic_1;
    } else {
        identity_m_10_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_10_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_10_ce1 = ap_const_logic_1;
    } else {
        identity_m_10_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_10_load_m_fu_5440_p3() {
    identity_m_10_load_m_fu_5440_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_10_q0.read());
}

void IdentityQuantAct146::thread_identity_m_11_address0() {
    identity_m_11_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_11_address1() {
    identity_m_11_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_11_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_11_ce0 = ap_const_logic_1;
    } else {
        identity_m_11_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_11_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_11_ce1 = ap_const_logic_1;
    } else {
        identity_m_11_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_11_load_m_fu_5419_p3() {
    identity_m_11_load_m_fu_5419_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_11_q0.read());
}

void IdentityQuantAct146::thread_identity_m_12_address0() {
    identity_m_12_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_12_address1() {
    identity_m_12_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_12_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_12_ce0 = ap_const_logic_1;
    } else {
        identity_m_12_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_12_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_12_ce1 = ap_const_logic_1;
    } else {
        identity_m_12_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_12_load_m_fu_5398_p3() {
    identity_m_12_load_m_fu_5398_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_12_q0.read());
}

void IdentityQuantAct146::thread_identity_m_13_address0() {
    identity_m_13_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_13_address1() {
    identity_m_13_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_13_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_13_ce0 = ap_const_logic_1;
    } else {
        identity_m_13_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_13_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_13_ce1 = ap_const_logic_1;
    } else {
        identity_m_13_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_13_load_m_fu_5377_p3() {
    identity_m_13_load_m_fu_5377_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_13_q0.read());
}

void IdentityQuantAct146::thread_identity_m_14_address0() {
    identity_m_14_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_14_address1() {
    identity_m_14_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_14_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_14_ce0 = ap_const_logic_1;
    } else {
        identity_m_14_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_14_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_14_ce1 = ap_const_logic_1;
    } else {
        identity_m_14_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_14_load_m_fu_5356_p3() {
    identity_m_14_load_m_fu_5356_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_14_q0.read());
}

void IdentityQuantAct146::thread_identity_m_15_address0() {
    identity_m_15_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_15_address1() {
    identity_m_15_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_15_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_15_ce0 = ap_const_logic_1;
    } else {
        identity_m_15_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_15_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_15_ce1 = ap_const_logic_1;
    } else {
        identity_m_15_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_15_load_m_fu_5335_p3() {
    identity_m_15_load_m_fu_5335_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_15_q0.read());
}

void IdentityQuantAct146::thread_identity_m_16_address0() {
    identity_m_16_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_16_address1() {
    identity_m_16_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_16_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_16_ce0 = ap_const_logic_1;
    } else {
        identity_m_16_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_16_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_16_ce1 = ap_const_logic_1;
    } else {
        identity_m_16_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_16_load_m_fu_5657_p3() {
    identity_m_16_load_m_fu_5657_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_16_q0.read());
}

void IdentityQuantAct146::thread_identity_m_17_address0() {
    identity_m_17_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_17_address1() {
    identity_m_17_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_17_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_17_ce0 = ap_const_logic_1;
    } else {
        identity_m_17_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_17_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_17_ce1 = ap_const_logic_1;
    } else {
        identity_m_17_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_17_load_m_fu_5636_p3() {
    identity_m_17_load_m_fu_5636_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_17_q0.read());
}

void IdentityQuantAct146::thread_identity_m_18_address0() {
    identity_m_18_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_18_address1() {
    identity_m_18_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_18_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_18_ce0 = ap_const_logic_1;
    } else {
        identity_m_18_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_18_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_18_ce1 = ap_const_logic_1;
    } else {
        identity_m_18_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_18_load_m_fu_5615_p3() {
    identity_m_18_load_m_fu_5615_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_18_q0.read());
}

void IdentityQuantAct146::thread_identity_m_19_address0() {
    identity_m_19_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_19_address1() {
    identity_m_19_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_19_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_19_ce0 = ap_const_logic_1;
    } else {
        identity_m_19_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_19_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_19_ce1 = ap_const_logic_1;
    } else {
        identity_m_19_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_19_load_m_fu_5594_p3() {
    identity_m_19_load_m_fu_5594_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_19_q0.read());
}

void IdentityQuantAct146::thread_identity_m_1_address0() {
    identity_m_1_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_1_address1() {
    identity_m_1_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_1_ce0 = ap_const_logic_1;
    } else {
        identity_m_1_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_1_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_1_ce1 = ap_const_logic_1;
    } else {
        identity_m_1_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_1_load_mi_fu_5629_p3() {
    identity_m_1_load_mi_fu_5629_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_1_q0.read());
}

void IdentityQuantAct146::thread_identity_m_20_address0() {
    identity_m_20_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_20_address1() {
    identity_m_20_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_20_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_20_ce0 = ap_const_logic_1;
    } else {
        identity_m_20_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_20_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_20_ce1 = ap_const_logic_1;
    } else {
        identity_m_20_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_20_load_m_fu_5573_p3() {
    identity_m_20_load_m_fu_5573_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_20_q0.read());
}

void IdentityQuantAct146::thread_identity_m_21_address0() {
    identity_m_21_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_21_address1() {
    identity_m_21_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_21_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_21_ce0 = ap_const_logic_1;
    } else {
        identity_m_21_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_21_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_21_ce1 = ap_const_logic_1;
    } else {
        identity_m_21_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_21_load_m_fu_5552_p3() {
    identity_m_21_load_m_fu_5552_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_21_q0.read());
}

void IdentityQuantAct146::thread_identity_m_22_address0() {
    identity_m_22_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_22_address1() {
    identity_m_22_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_22_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_22_ce0 = ap_const_logic_1;
    } else {
        identity_m_22_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_22_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_22_ce1 = ap_const_logic_1;
    } else {
        identity_m_22_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_22_load_m_fu_5531_p3() {
    identity_m_22_load_m_fu_5531_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_22_q0.read());
}

void IdentityQuantAct146::thread_identity_m_23_address0() {
    identity_m_23_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_23_address1() {
    identity_m_23_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_23_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_23_ce0 = ap_const_logic_1;
    } else {
        identity_m_23_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_23_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_23_ce1 = ap_const_logic_1;
    } else {
        identity_m_23_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_23_load_m_fu_5510_p3() {
    identity_m_23_load_m_fu_5510_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_23_q0.read());
}

void IdentityQuantAct146::thread_identity_m_24_address0() {
    identity_m_24_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_24_address1() {
    identity_m_24_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_24_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_24_ce0 = ap_const_logic_1;
    } else {
        identity_m_24_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_24_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_24_ce1 = ap_const_logic_1;
    } else {
        identity_m_24_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_24_load_m_fu_5489_p3() {
    identity_m_24_load_m_fu_5489_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_24_q0.read());
}

void IdentityQuantAct146::thread_identity_m_25_address0() {
    identity_m_25_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_25_address1() {
    identity_m_25_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_25_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_25_ce0 = ap_const_logic_1;
    } else {
        identity_m_25_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_25_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_25_ce1 = ap_const_logic_1;
    } else {
        identity_m_25_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_25_load_m_fu_5468_p3() {
    identity_m_25_load_m_fu_5468_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_25_q0.read());
}

void IdentityQuantAct146::thread_identity_m_26_address0() {
    identity_m_26_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_26_address1() {
    identity_m_26_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_26_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_26_ce0 = ap_const_logic_1;
    } else {
        identity_m_26_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_26_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_26_ce1 = ap_const_logic_1;
    } else {
        identity_m_26_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_26_load_m_fu_5447_p3() {
    identity_m_26_load_m_fu_5447_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_26_q0.read());
}

void IdentityQuantAct146::thread_identity_m_27_address0() {
    identity_m_27_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_27_address1() {
    identity_m_27_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_27_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_27_ce0 = ap_const_logic_1;
    } else {
        identity_m_27_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_27_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_27_ce1 = ap_const_logic_1;
    } else {
        identity_m_27_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_27_load_m_fu_5426_p3() {
    identity_m_27_load_m_fu_5426_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_27_q0.read());
}

void IdentityQuantAct146::thread_identity_m_28_address0() {
    identity_m_28_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_28_address1() {
    identity_m_28_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_28_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_28_ce0 = ap_const_logic_1;
    } else {
        identity_m_28_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_28_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_28_ce1 = ap_const_logic_1;
    } else {
        identity_m_28_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_28_load_m_fu_5405_p3() {
    identity_m_28_load_m_fu_5405_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_28_q0.read());
}

void IdentityQuantAct146::thread_identity_m_29_address0() {
    identity_m_29_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_29_address1() {
    identity_m_29_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_29_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_29_ce0 = ap_const_logic_1;
    } else {
        identity_m_29_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_29_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_29_ce1 = ap_const_logic_1;
    } else {
        identity_m_29_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_29_load_m_fu_5384_p3() {
    identity_m_29_load_m_fu_5384_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_29_q0.read());
}

void IdentityQuantAct146::thread_identity_m_2_address0() {
    identity_m_2_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_2_address1() {
    identity_m_2_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_2_ce0 = ap_const_logic_1;
    } else {
        identity_m_2_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_2_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_2_ce1 = ap_const_logic_1;
    } else {
        identity_m_2_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_2_load_mi_fu_5608_p3() {
    identity_m_2_load_mi_fu_5608_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_2_q0.read());
}

void IdentityQuantAct146::thread_identity_m_30_address0() {
    identity_m_30_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_30_address1() {
    identity_m_30_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_30_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_30_ce0 = ap_const_logic_1;
    } else {
        identity_m_30_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_30_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_30_ce1 = ap_const_logic_1;
    } else {
        identity_m_30_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_30_load_m_fu_5363_p3() {
    identity_m_30_load_m_fu_5363_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_30_q0.read());
}

void IdentityQuantAct146::thread_identity_m_31_address0() {
    identity_m_31_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_31_address1() {
    identity_m_31_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_31_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_31_ce0 = ap_const_logic_1;
    } else {
        identity_m_31_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_31_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_31_ce1 = ap_const_logic_1;
    } else {
        identity_m_31_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_31_load_m_fu_5342_p3() {
    identity_m_31_load_m_fu_5342_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_31_q0.read());
}

void IdentityQuantAct146::thread_identity_m_32_address0() {
    identity_m_32_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_32_address1() {
    identity_m_32_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_32_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_32_ce0 = ap_const_logic_1;
    } else {
        identity_m_32_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_32_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_32_ce1 = ap_const_logic_1;
    } else {
        identity_m_32_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_32_load_m_fu_5664_p3() {
    identity_m_32_load_m_fu_5664_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_32_q0.read());
}

void IdentityQuantAct146::thread_identity_m_33_address0() {
    identity_m_33_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_33_address1() {
    identity_m_33_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_33_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_33_ce0 = ap_const_logic_1;
    } else {
        identity_m_33_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_33_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_33_ce1 = ap_const_logic_1;
    } else {
        identity_m_33_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_33_load_m_fu_5643_p3() {
    identity_m_33_load_m_fu_5643_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_33_q0.read());
}

void IdentityQuantAct146::thread_identity_m_34_address0() {
    identity_m_34_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_34_address1() {
    identity_m_34_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_34_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_34_ce0 = ap_const_logic_1;
    } else {
        identity_m_34_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_34_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_34_ce1 = ap_const_logic_1;
    } else {
        identity_m_34_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_34_load_m_fu_5622_p3() {
    identity_m_34_load_m_fu_5622_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_34_q0.read());
}

void IdentityQuantAct146::thread_identity_m_35_address0() {
    identity_m_35_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_35_address1() {
    identity_m_35_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_35_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_35_ce0 = ap_const_logic_1;
    } else {
        identity_m_35_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_35_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_35_ce1 = ap_const_logic_1;
    } else {
        identity_m_35_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_35_load_m_fu_5601_p3() {
    identity_m_35_load_m_fu_5601_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_35_q0.read());
}

void IdentityQuantAct146::thread_identity_m_36_address0() {
    identity_m_36_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_36_address1() {
    identity_m_36_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_36_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_36_ce0 = ap_const_logic_1;
    } else {
        identity_m_36_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_36_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_36_ce1 = ap_const_logic_1;
    } else {
        identity_m_36_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_36_load_m_fu_5580_p3() {
    identity_m_36_load_m_fu_5580_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_36_q0.read());
}

void IdentityQuantAct146::thread_identity_m_37_address0() {
    identity_m_37_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_37_address1() {
    identity_m_37_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_37_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_37_ce0 = ap_const_logic_1;
    } else {
        identity_m_37_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_37_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_37_ce1 = ap_const_logic_1;
    } else {
        identity_m_37_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_37_load_m_fu_5559_p3() {
    identity_m_37_load_m_fu_5559_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_37_q0.read());
}

void IdentityQuantAct146::thread_identity_m_38_address0() {
    identity_m_38_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_38_address1() {
    identity_m_38_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_38_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_38_ce0 = ap_const_logic_1;
    } else {
        identity_m_38_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_38_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_38_ce1 = ap_const_logic_1;
    } else {
        identity_m_38_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_38_load_m_fu_5538_p3() {
    identity_m_38_load_m_fu_5538_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_38_q0.read());
}

void IdentityQuantAct146::thread_identity_m_39_address0() {
    identity_m_39_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_39_address1() {
    identity_m_39_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_39_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_39_ce0 = ap_const_logic_1;
    } else {
        identity_m_39_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_39_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_39_ce1 = ap_const_logic_1;
    } else {
        identity_m_39_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_39_load_m_fu_5517_p3() {
    identity_m_39_load_m_fu_5517_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_39_q0.read());
}

void IdentityQuantAct146::thread_identity_m_3_address0() {
    identity_m_3_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_3_address1() {
    identity_m_3_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_3_ce0 = ap_const_logic_1;
    } else {
        identity_m_3_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_3_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_3_ce1 = ap_const_logic_1;
    } else {
        identity_m_3_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_3_load_mi_fu_5587_p3() {
    identity_m_3_load_mi_fu_5587_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_3_q0.read());
}

void IdentityQuantAct146::thread_identity_m_40_address0() {
    identity_m_40_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_40_address1() {
    identity_m_40_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_40_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_40_ce0 = ap_const_logic_1;
    } else {
        identity_m_40_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_40_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_40_ce1 = ap_const_logic_1;
    } else {
        identity_m_40_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_40_load_m_fu_5496_p3() {
    identity_m_40_load_m_fu_5496_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_40_q0.read());
}

void IdentityQuantAct146::thread_identity_m_41_address0() {
    identity_m_41_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_41_address1() {
    identity_m_41_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_41_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_41_ce0 = ap_const_logic_1;
    } else {
        identity_m_41_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_41_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_41_ce1 = ap_const_logic_1;
    } else {
        identity_m_41_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_41_load_m_fu_5475_p3() {
    identity_m_41_load_m_fu_5475_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_41_q0.read());
}

void IdentityQuantAct146::thread_identity_m_42_address0() {
    identity_m_42_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_42_address1() {
    identity_m_42_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_42_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_42_ce0 = ap_const_logic_1;
    } else {
        identity_m_42_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_42_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_42_ce1 = ap_const_logic_1;
    } else {
        identity_m_42_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_42_load_m_fu_5454_p3() {
    identity_m_42_load_m_fu_5454_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_42_q0.read());
}

void IdentityQuantAct146::thread_identity_m_43_address0() {
    identity_m_43_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_43_address1() {
    identity_m_43_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_43_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_43_ce0 = ap_const_logic_1;
    } else {
        identity_m_43_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_43_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_43_ce1 = ap_const_logic_1;
    } else {
        identity_m_43_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_43_load_m_fu_5433_p3() {
    identity_m_43_load_m_fu_5433_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_43_q0.read());
}

void IdentityQuantAct146::thread_identity_m_44_address0() {
    identity_m_44_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_44_address1() {
    identity_m_44_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_44_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_44_ce0 = ap_const_logic_1;
    } else {
        identity_m_44_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_44_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_44_ce1 = ap_const_logic_1;
    } else {
        identity_m_44_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_44_load_m_fu_5412_p3() {
    identity_m_44_load_m_fu_5412_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_44_q0.read());
}

void IdentityQuantAct146::thread_identity_m_45_address0() {
    identity_m_45_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_45_address1() {
    identity_m_45_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_45_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_45_ce0 = ap_const_logic_1;
    } else {
        identity_m_45_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_45_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_45_ce1 = ap_const_logic_1;
    } else {
        identity_m_45_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_45_load_m_fu_5391_p3() {
    identity_m_45_load_m_fu_5391_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_45_q0.read());
}

void IdentityQuantAct146::thread_identity_m_46_address0() {
    identity_m_46_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_46_address1() {
    identity_m_46_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_46_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_46_ce0 = ap_const_logic_1;
    } else {
        identity_m_46_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_46_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_46_ce1 = ap_const_logic_1;
    } else {
        identity_m_46_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_46_load_m_fu_5370_p3() {
    identity_m_46_load_m_fu_5370_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_46_q0.read());
}

void IdentityQuantAct146::thread_identity_m_47_address0() {
    identity_m_47_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_47_address1() {
    identity_m_47_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_47_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_47_ce0 = ap_const_logic_1;
    } else {
        identity_m_47_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_47_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_47_ce1 = ap_const_logic_1;
    } else {
        identity_m_47_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_47_load_m_fu_5349_p3() {
    identity_m_47_load_m_fu_5349_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_47_q0.read());
}

void IdentityQuantAct146::thread_identity_m_48_address0() {
    identity_m_48_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_48_address1() {
    identity_m_48_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_48_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_48_ce0 = ap_const_logic_1;
    } else {
        identity_m_48_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_48_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_48_ce1 = ap_const_logic_1;
    } else {
        identity_m_48_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_48_load_m_fu_4775_p3() {
    identity_m_48_load_m_fu_4775_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_48_q0.read());
}

void IdentityQuantAct146::thread_identity_m_49_address0() {
    identity_m_49_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_49_address1() {
    identity_m_49_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_49_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_49_ce0 = ap_const_logic_1;
    } else {
        identity_m_49_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_49_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_49_ce1 = ap_const_logic_1;
    } else {
        identity_m_49_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_49_load_m_fu_4782_p3() {
    identity_m_49_load_m_fu_4782_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_49_q0.read());
}

void IdentityQuantAct146::thread_identity_m_4_address0() {
    identity_m_4_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_4_address1() {
    identity_m_4_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_4_ce0 = ap_const_logic_1;
    } else {
        identity_m_4_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_4_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_4_ce1 = ap_const_logic_1;
    } else {
        identity_m_4_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_4_load_mi_fu_5566_p3() {
    identity_m_4_load_mi_fu_5566_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_4_q0.read());
}

void IdentityQuantAct146::thread_identity_m_50_address0() {
    identity_m_50_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_50_address1() {
    identity_m_50_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_50_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_50_ce0 = ap_const_logic_1;
    } else {
        identity_m_50_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_50_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_50_ce1 = ap_const_logic_1;
    } else {
        identity_m_50_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_50_load_m_fu_4789_p3() {
    identity_m_50_load_m_fu_4789_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_50_q0.read());
}

void IdentityQuantAct146::thread_identity_m_51_address0() {
    identity_m_51_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_51_address1() {
    identity_m_51_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_51_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_51_ce0 = ap_const_logic_1;
    } else {
        identity_m_51_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_51_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_51_ce1 = ap_const_logic_1;
    } else {
        identity_m_51_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_51_load_m_fu_4796_p3() {
    identity_m_51_load_m_fu_4796_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_51_q0.read());
}

void IdentityQuantAct146::thread_identity_m_52_address0() {
    identity_m_52_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_52_address1() {
    identity_m_52_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_52_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_52_ce0 = ap_const_logic_1;
    } else {
        identity_m_52_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_52_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_52_ce1 = ap_const_logic_1;
    } else {
        identity_m_52_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_52_load_m_fu_4803_p3() {
    identity_m_52_load_m_fu_4803_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_52_q0.read());
}

void IdentityQuantAct146::thread_identity_m_53_address0() {
    identity_m_53_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_53_address1() {
    identity_m_53_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_53_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_53_ce0 = ap_const_logic_1;
    } else {
        identity_m_53_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_53_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_53_ce1 = ap_const_logic_1;
    } else {
        identity_m_53_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_53_load_m_fu_4810_p3() {
    identity_m_53_load_m_fu_4810_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_53_q0.read());
}

void IdentityQuantAct146::thread_identity_m_54_address0() {
    identity_m_54_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_54_address1() {
    identity_m_54_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_54_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_54_ce0 = ap_const_logic_1;
    } else {
        identity_m_54_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_54_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_54_ce1 = ap_const_logic_1;
    } else {
        identity_m_54_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_54_load_m_fu_4817_p3() {
    identity_m_54_load_m_fu_4817_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_54_q0.read());
}

void IdentityQuantAct146::thread_identity_m_55_address0() {
    identity_m_55_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_55_address1() {
    identity_m_55_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_55_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_55_ce0 = ap_const_logic_1;
    } else {
        identity_m_55_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_55_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_55_ce1 = ap_const_logic_1;
    } else {
        identity_m_55_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_55_load_m_fu_4824_p3() {
    identity_m_55_load_m_fu_4824_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_55_q0.read());
}

void IdentityQuantAct146::thread_identity_m_56_address0() {
    identity_m_56_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_56_address1() {
    identity_m_56_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_56_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_56_ce0 = ap_const_logic_1;
    } else {
        identity_m_56_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_56_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_56_ce1 = ap_const_logic_1;
    } else {
        identity_m_56_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_56_load_m_fu_4831_p3() {
    identity_m_56_load_m_fu_4831_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_56_q0.read());
}

void IdentityQuantAct146::thread_identity_m_57_address0() {
    identity_m_57_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_57_address1() {
    identity_m_57_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_57_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_57_ce0 = ap_const_logic_1;
    } else {
        identity_m_57_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_57_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_57_ce1 = ap_const_logic_1;
    } else {
        identity_m_57_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_57_load_m_fu_4838_p3() {
    identity_m_57_load_m_fu_4838_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_57_q0.read());
}

void IdentityQuantAct146::thread_identity_m_58_address0() {
    identity_m_58_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_58_address1() {
    identity_m_58_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_58_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_58_ce0 = ap_const_logic_1;
    } else {
        identity_m_58_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_58_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_58_ce1 = ap_const_logic_1;
    } else {
        identity_m_58_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_58_load_m_fu_4845_p3() {
    identity_m_58_load_m_fu_4845_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_58_q0.read());
}

void IdentityQuantAct146::thread_identity_m_59_address0() {
    identity_m_59_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_59_address1() {
    identity_m_59_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_59_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_59_ce0 = ap_const_logic_1;
    } else {
        identity_m_59_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_59_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_59_ce1 = ap_const_logic_1;
    } else {
        identity_m_59_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_59_load_m_fu_4852_p3() {
    identity_m_59_load_m_fu_4852_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_59_q0.read());
}

void IdentityQuantAct146::thread_identity_m_5_address0() {
    identity_m_5_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_5_address1() {
    identity_m_5_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_5_ce0 = ap_const_logic_1;
    } else {
        identity_m_5_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_5_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_5_ce1 = ap_const_logic_1;
    } else {
        identity_m_5_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_5_load_mi_fu_5545_p3() {
    identity_m_5_load_mi_fu_5545_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_5_q0.read());
}

void IdentityQuantAct146::thread_identity_m_60_address0() {
    identity_m_60_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_60_address1() {
    identity_m_60_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_60_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_60_ce0 = ap_const_logic_1;
    } else {
        identity_m_60_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_60_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_60_ce1 = ap_const_logic_1;
    } else {
        identity_m_60_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_60_load_m_fu_4859_p3() {
    identity_m_60_load_m_fu_4859_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_60_q0.read());
}

void IdentityQuantAct146::thread_identity_m_61_address0() {
    identity_m_61_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_61_address1() {
    identity_m_61_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_61_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_61_ce0 = ap_const_logic_1;
    } else {
        identity_m_61_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_61_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_61_ce1 = ap_const_logic_1;
    } else {
        identity_m_61_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_61_load_m_fu_4866_p3() {
    identity_m_61_load_m_fu_4866_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_61_q0.read());
}

void IdentityQuantAct146::thread_identity_m_62_address0() {
    identity_m_62_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_62_address1() {
    identity_m_62_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_62_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_62_ce0 = ap_const_logic_1;
    } else {
        identity_m_62_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_62_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_62_ce1 = ap_const_logic_1;
    } else {
        identity_m_62_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_62_load_m_fu_4873_p3() {
    identity_m_62_load_m_fu_4873_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_62_q0.read());
}

void IdentityQuantAct146::thread_identity_m_63_address0() {
    identity_m_63_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_63_address1() {
    identity_m_63_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_63_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_63_ce0 = ap_const_logic_1;
    } else {
        identity_m_63_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_63_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_63_ce1 = ap_const_logic_1;
    } else {
        identity_m_63_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_63_load_m_fu_4880_p3() {
    identity_m_63_load_m_fu_4880_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_63_q0.read());
}

void IdentityQuantAct146::thread_identity_m_6_address0() {
    identity_m_6_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_6_address1() {
    identity_m_6_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_6_ce0 = ap_const_logic_1;
    } else {
        identity_m_6_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_6_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_6_ce1 = ap_const_logic_1;
    } else {
        identity_m_6_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_6_load_mi_fu_5524_p3() {
    identity_m_6_load_mi_fu_5524_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_6_q0.read());
}

void IdentityQuantAct146::thread_identity_m_7_address0() {
    identity_m_7_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_7_address1() {
    identity_m_7_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_7_ce0 = ap_const_logic_1;
    } else {
        identity_m_7_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_7_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_7_ce1 = ap_const_logic_1;
    } else {
        identity_m_7_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_7_load_mi_fu_5503_p3() {
    identity_m_7_load_mi_fu_5503_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_7_q0.read());
}

void IdentityQuantAct146::thread_identity_m_8_address0() {
    identity_m_8_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_8_address1() {
    identity_m_8_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_8_ce0 = ap_const_logic_1;
    } else {
        identity_m_8_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_8_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_8_ce1 = ap_const_logic_1;
    } else {
        identity_m_8_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_8_load_mi_fu_5482_p3() {
    identity_m_8_load_mi_fu_5482_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_8_q0.read());
}

void IdentityQuantAct146::thread_identity_m_9_address0() {
    identity_m_9_address0 =  (sc_lv<4>) (tmp_4_fu_4331_p1.read());
}

void IdentityQuantAct146::thread_identity_m_9_address1() {
    identity_m_9_address1 =  (sc_lv<4>) (tmp_4_mid1_fu_4538_p1.read());
}

void IdentityQuantAct146::thread_identity_m_9_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_9_ce0 = ap_const_logic_1;
    } else {
        identity_m_9_ce0 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_9_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        identity_m_9_ce1 = ap_const_logic_1;
    } else {
        identity_m_9_ce1 = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_identity_m_9_load_mi_fu_5461_p3() {
    identity_m_9_load_mi_fu_5461_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<31>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? ap_const_lv31_45F81A0F: identity_m_9_q0.read());
}

void IdentityQuantAct146::thread_in_V_data_V127_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten1_reg_10698.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(tmp_8_reg_11618.read(), ap_const_lv1_1)))) {
        in_V_data_V127_blk_n = in_V_data_V127_empty_n.read();
    } else {
        in_V_data_V127_blk_n = ap_const_logic_1;
    }
}

void IdentityQuantAct146::thread_in_V_data_V127_read() {
    in_V_data_V127_read = in_V_id_V1280_update.read();
}

void IdentityQuantAct146::thread_in_V_dest_V129_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten1_reg_10698.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(tmp_8_reg_11618.read(), ap_const_lv1_1)))) {
        in_V_dest_V129_blk_n = in_V_dest_V129_empty_n.read();
    } else {
        in_V_dest_V129_blk_n = ap_const_logic_1;
    }
}

void IdentityQuantAct146::thread_in_V_dest_V129_read() {
    in_V_dest_V129_read = in_V_id_V1280_update.read();
}

void IdentityQuantAct146::thread_in_V_id_V1280_status() {
    in_V_id_V1280_status = (in_V_data_V127_empty_n.read() & in_V_id_V128_empty_n.read() & in_V_dest_V129_empty_n.read() & in_V_user_V130_empty_n.read() & in_V_last_V131_empty_n.read());
}

void IdentityQuantAct146::thread_in_V_id_V1280_update() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_V_id_V1280_status.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_V_id_V1_status.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1154_read_state3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        in_V_id_V1280_update = ap_const_logic_1;
    } else {
        in_V_id_V1280_update = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_in_V_id_V128_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten1_reg_10698.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(tmp_8_reg_11618.read(), ap_const_lv1_1)))) {
        in_V_id_V128_blk_n = in_V_id_V128_empty_n.read();
    } else {
        in_V_id_V128_blk_n = ap_const_logic_1;
    }
}

void IdentityQuantAct146::thread_in_V_id_V128_read() {
    in_V_id_V128_read = in_V_id_V1280_update.read();
}

void IdentityQuantAct146::thread_in_V_last_V131_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten1_reg_10698.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(tmp_8_reg_11618.read(), ap_const_lv1_1)))) {
        in_V_last_V131_blk_n = in_V_last_V131_empty_n.read();
    } else {
        in_V_last_V131_blk_n = ap_const_logic_1;
    }
}

void IdentityQuantAct146::thread_in_V_last_V131_read() {
    in_V_last_V131_read = in_V_id_V1280_update.read();
}

void IdentityQuantAct146::thread_in_V_user_V130_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten1_reg_10698.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(tmp_8_reg_11618.read(), ap_const_lv1_1)))) {
        in_V_user_V130_blk_n = in_V_user_V130_empty_n.read();
    } else {
        in_V_user_V130_blk_n = ap_const_logic_1;
    }
}

void IdentityQuantAct146::thread_in_V_user_V130_read() {
    in_V_user_V130_read = in_V_id_V1280_update.read();
}

void IdentityQuantAct146::thread_in_data2_0_V_cast_fu_9584_p1() {
    in_data2_0_V_cast_fu_9584_p1 = esl_sext<32,21>(in_data2_0_V_reg_11971.read());
}

void IdentityQuantAct146::thread_in_data2_0_V_fu_8773_p3() {
    in_data2_0_V_fu_8773_p3 = (!p_Result_s_fu_8749_p2.read()[0].is_01())? sc_lv<21>(): ((p_Result_s_fu_8749_p2.read()[0].to_bool())? tmp_125_fu_8763_p1.read(): phitmp_fu_8767_p2.read());
}

void IdentityQuantAct146::thread_in_data2_10_V_cast_fu_9614_p1() {
    in_data2_10_V_cast_fu_9614_p1 = esl_sext<32,21>(in_data2_10_V_reg_12021.read());
}

void IdentityQuantAct146::thread_in_data2_10_V_fu_9303_p3() {
    in_data2_10_V_fu_9303_p3 = (!p_Result_10_fu_9279_p2.read()[0].is_01())? sc_lv<21>(): ((p_Result_10_fu_9279_p2.read()[0].to_bool())? tmp_135_fu_9293_p1.read(): phitmp25_fu_9297_p2.read());
}

void IdentityQuantAct146::thread_in_data2_11_V_cast_fu_9617_p1() {
    in_data2_11_V_cast_fu_9617_p1 = esl_sext<32,21>(in_data2_11_V_reg_12026.read());
}

void IdentityQuantAct146::thread_in_data2_11_V_fu_9356_p3() {
    in_data2_11_V_fu_9356_p3 = (!p_Result_11_fu_9332_p2.read()[0].is_01())? sc_lv<21>(): ((p_Result_11_fu_9332_p2.read()[0].to_bool())? tmp_136_fu_9346_p1.read(): phitmp26_fu_9350_p2.read());
}

void IdentityQuantAct146::thread_in_data2_12_V_cast_fu_9620_p1() {
    in_data2_12_V_cast_fu_9620_p1 = esl_sext<32,21>(in_data2_12_V_reg_12031.read());
}

void IdentityQuantAct146::thread_in_data2_12_V_fu_9409_p3() {
    in_data2_12_V_fu_9409_p3 = (!p_Result_12_fu_9385_p2.read()[0].is_01())? sc_lv<21>(): ((p_Result_12_fu_9385_p2.read()[0].to_bool())? tmp_137_fu_9399_p1.read(): phitmp27_fu_9403_p2.read());
}

void IdentityQuantAct146::thread_in_data2_13_V_cast_fu_9623_p1() {
    in_data2_13_V_cast_fu_9623_p1 = esl_sext<32,21>(in_data2_13_V_reg_12036.read());
}

void IdentityQuantAct146::thread_in_data2_13_V_fu_9462_p3() {
    in_data2_13_V_fu_9462_p3 = (!p_Result_13_fu_9438_p2.read()[0].is_01())? sc_lv<21>(): ((p_Result_13_fu_9438_p2.read()[0].to_bool())? tmp_138_fu_9452_p1.read(): phitmp28_fu_9456_p2.read());
}

void IdentityQuantAct146::thread_in_data2_14_V_cast_fu_9626_p1() {
    in_data2_14_V_cast_fu_9626_p1 = esl_sext<32,21>(in_data2_14_V_reg_12041.read());
}

void IdentityQuantAct146::thread_in_data2_14_V_fu_9515_p3() {
    in_data2_14_V_fu_9515_p3 = (!p_Result_14_fu_9491_p2.read()[0].is_01())? sc_lv<21>(): ((p_Result_14_fu_9491_p2.read()[0].to_bool())? tmp_139_fu_9505_p1.read(): phitmp29_fu_9509_p2.read());
}

void IdentityQuantAct146::thread_in_data2_15_V_fu_9568_p3() {
    in_data2_15_V_fu_9568_p3 = (!p_Result_s_363_fu_9544_p2.read()[0].is_01())? sc_lv<21>(): ((p_Result_s_363_fu_9544_p2.read()[0].to_bool())? tmp_140_fu_9558_p1.read(): phitmp30_fu_9562_p2.read());
}

void IdentityQuantAct146::thread_in_data2_1_V_cast_fu_9587_p1() {
    in_data2_1_V_cast_fu_9587_p1 = esl_sext<32,21>(in_data2_1_V_reg_11976.read());
}

void IdentityQuantAct146::thread_in_data2_1_V_fu_8826_p3() {
    in_data2_1_V_fu_8826_p3 = (!p_Result_1_fu_8802_p2.read()[0].is_01())? sc_lv<21>(): ((p_Result_1_fu_8802_p2.read()[0].to_bool())? tmp_126_fu_8816_p1.read(): phitmp16_fu_8820_p2.read());
}

void IdentityQuantAct146::thread_in_data2_2_V_cast_fu_9590_p1() {
    in_data2_2_V_cast_fu_9590_p1 = esl_sext<32,21>(in_data2_2_V_reg_11981.read());
}

void IdentityQuantAct146::thread_in_data2_2_V_fu_8879_p3() {
    in_data2_2_V_fu_8879_p3 = (!p_Result_2_fu_8855_p2.read()[0].is_01())? sc_lv<21>(): ((p_Result_2_fu_8855_p2.read()[0].to_bool())? tmp_127_fu_8869_p1.read(): phitmp17_fu_8873_p2.read());
}

void IdentityQuantAct146::thread_in_data2_3_V_cast_fu_9593_p1() {
    in_data2_3_V_cast_fu_9593_p1 = esl_sext<32,21>(in_data2_3_V_reg_11986.read());
}

void IdentityQuantAct146::thread_in_data2_3_V_fu_8932_p3() {
    in_data2_3_V_fu_8932_p3 = (!p_Result_3_fu_8908_p2.read()[0].is_01())? sc_lv<21>(): ((p_Result_3_fu_8908_p2.read()[0].to_bool())? tmp_128_fu_8922_p1.read(): phitmp18_fu_8926_p2.read());
}

void IdentityQuantAct146::thread_in_data2_4_V_cast_fu_9596_p1() {
    in_data2_4_V_cast_fu_9596_p1 = esl_sext<32,21>(in_data2_4_V_reg_11991.read());
}

void IdentityQuantAct146::thread_in_data2_4_V_fu_8985_p3() {
    in_data2_4_V_fu_8985_p3 = (!p_Result_4_fu_8961_p2.read()[0].is_01())? sc_lv<21>(): ((p_Result_4_fu_8961_p2.read()[0].to_bool())? tmp_129_fu_8975_p1.read(): phitmp19_fu_8979_p2.read());
}

void IdentityQuantAct146::thread_in_data2_5_V_cast_fu_9599_p1() {
    in_data2_5_V_cast_fu_9599_p1 = esl_sext<32,21>(in_data2_5_V_reg_11996.read());
}

void IdentityQuantAct146::thread_in_data2_5_V_fu_9038_p3() {
    in_data2_5_V_fu_9038_p3 = (!p_Result_5_fu_9014_p2.read()[0].is_01())? sc_lv<21>(): ((p_Result_5_fu_9014_p2.read()[0].to_bool())? tmp_130_fu_9028_p1.read(): phitmp20_fu_9032_p2.read());
}

void IdentityQuantAct146::thread_in_data2_6_V_cast_fu_9602_p1() {
    in_data2_6_V_cast_fu_9602_p1 = esl_sext<32,21>(in_data2_6_V_reg_12001.read());
}

void IdentityQuantAct146::thread_in_data2_6_V_fu_9091_p3() {
    in_data2_6_V_fu_9091_p3 = (!p_Result_6_fu_9067_p2.read()[0].is_01())? sc_lv<21>(): ((p_Result_6_fu_9067_p2.read()[0].to_bool())? tmp_131_fu_9081_p1.read(): phitmp21_fu_9085_p2.read());
}

void IdentityQuantAct146::thread_in_data2_7_V_cast_fu_9605_p1() {
    in_data2_7_V_cast_fu_9605_p1 = esl_sext<32,21>(in_data2_7_V_reg_12006.read());
}

void IdentityQuantAct146::thread_in_data2_7_V_fu_9144_p3() {
    in_data2_7_V_fu_9144_p3 = (!p_Result_7_fu_9120_p2.read()[0].is_01())? sc_lv<21>(): ((p_Result_7_fu_9120_p2.read()[0].to_bool())? tmp_132_fu_9134_p1.read(): phitmp22_fu_9138_p2.read());
}

void IdentityQuantAct146::thread_in_data2_8_V_cast_fu_9608_p1() {
    in_data2_8_V_cast_fu_9608_p1 = esl_sext<32,21>(in_data2_8_V_reg_12011.read());
}

void IdentityQuantAct146::thread_in_data2_8_V_fu_9197_p3() {
    in_data2_8_V_fu_9197_p3 = (!p_Result_8_fu_9173_p2.read()[0].is_01())? sc_lv<21>(): ((p_Result_8_fu_9173_p2.read()[0].to_bool())? tmp_133_fu_9187_p1.read(): phitmp23_fu_9191_p2.read());
}

void IdentityQuantAct146::thread_in_data2_9_V_cast_fu_9611_p1() {
    in_data2_9_V_cast_fu_9611_p1 = esl_sext<32,21>(in_data2_9_V_reg_12016.read());
}

void IdentityQuantAct146::thread_in_data2_9_V_fu_9250_p3() {
    in_data2_9_V_fu_9250_p3 = (!p_Result_9_fu_9226_p2.read()[0].is_01())? sc_lv<21>(): ((p_Result_9_fu_9226_p2.read()[0].to_bool())? tmp_134_fu_9240_p1.read(): phitmp24_fu_9244_p2.read());
}

void IdentityQuantAct146::thread_index_assign_10_fu_9258_p2() {
    index_assign_10_fu_9258_p2 = (!ap_const_lv5_1F.is_01() || !p_Val2_1021_phi_reg_11839_pp0_iter2_reg.read().is_01())? sc_lv<5>(): (sc_bigint<5>(ap_const_lv5_1F) + sc_biguint<5>(p_Val2_1021_phi_reg_11839_pp0_iter2_reg.read()));
}

void IdentityQuantAct146::thread_index_assign_11_fu_9311_p2() {
    index_assign_11_fu_9311_p2 = (!ap_const_lv5_1F.is_01() || !p_Val2_11_phi_reg_11845_pp0_iter2_reg.read().is_01())? sc_lv<5>(): (sc_bigint<5>(ap_const_lv5_1F) + sc_biguint<5>(p_Val2_11_phi_reg_11845_pp0_iter2_reg.read()));
}

void IdentityQuantAct146::thread_index_assign_12_fu_9364_p2() {
    index_assign_12_fu_9364_p2 = (!ap_const_lv5_1F.is_01() || !p_Val2_12_phi_reg_11851_pp0_iter2_reg.read().is_01())? sc_lv<5>(): (sc_bigint<5>(ap_const_lv5_1F) + sc_biguint<5>(p_Val2_12_phi_reg_11851_pp0_iter2_reg.read()));
}

void IdentityQuantAct146::thread_index_assign_13_fu_9417_p2() {
    index_assign_13_fu_9417_p2 = (!ap_const_lv5_1F.is_01() || !p_Val2_13_phi_reg_11857_pp0_iter2_reg.read().is_01())? sc_lv<5>(): (sc_bigint<5>(ap_const_lv5_1F) + sc_biguint<5>(p_Val2_13_phi_reg_11857_pp0_iter2_reg.read()));
}

void IdentityQuantAct146::thread_index_assign_14_fu_9470_p2() {
    index_assign_14_fu_9470_p2 = (!ap_const_lv5_1F.is_01() || !p_Val2_14_phi_reg_11863_pp0_iter2_reg.read().is_01())? sc_lv<5>(): (sc_bigint<5>(ap_const_lv5_1F) + sc_biguint<5>(p_Val2_14_phi_reg_11863_pp0_iter2_reg.read()));
}

void IdentityQuantAct146::thread_index_assign_1_fu_8781_p2() {
    index_assign_1_fu_8781_p2 = (!ap_const_lv5_1F.is_01() || !p_Val2_1_phi_reg_11785_pp0_iter2_reg.read().is_01())? sc_lv<5>(): (sc_bigint<5>(ap_const_lv5_1F) + sc_biguint<5>(p_Val2_1_phi_reg_11785_pp0_iter2_reg.read()));
}

void IdentityQuantAct146::thread_index_assign_2_fu_8834_p2() {
    index_assign_2_fu_8834_p2 = (!ap_const_lv5_1F.is_01() || !p_Val2_2_phi_reg_11791_pp0_iter2_reg.read().is_01())? sc_lv<5>(): (sc_bigint<5>(ap_const_lv5_1F) + sc_biguint<5>(p_Val2_2_phi_reg_11791_pp0_iter2_reg.read()));
}

void IdentityQuantAct146::thread_index_assign_3_fu_8887_p2() {
    index_assign_3_fu_8887_p2 = (!ap_const_lv5_1F.is_01() || !p_Val2_3_phi_reg_11797_pp0_iter2_reg.read().is_01())? sc_lv<5>(): (sc_bigint<5>(ap_const_lv5_1F) + sc_biguint<5>(p_Val2_3_phi_reg_11797_pp0_iter2_reg.read()));
}

void IdentityQuantAct146::thread_index_assign_4_fu_8940_p2() {
    index_assign_4_fu_8940_p2 = (!ap_const_lv5_1F.is_01() || !p_Val2_4_phi_reg_11803_pp0_iter2_reg.read().is_01())? sc_lv<5>(): (sc_bigint<5>(ap_const_lv5_1F) + sc_biguint<5>(p_Val2_4_phi_reg_11803_pp0_iter2_reg.read()));
}

void IdentityQuantAct146::thread_index_assign_5_fu_8993_p2() {
    index_assign_5_fu_8993_p2 = (!ap_const_lv5_1F.is_01() || !p_Val2_5_phi_reg_11809_pp0_iter2_reg.read().is_01())? sc_lv<5>(): (sc_bigint<5>(ap_const_lv5_1F) + sc_biguint<5>(p_Val2_5_phi_reg_11809_pp0_iter2_reg.read()));
}

void IdentityQuantAct146::thread_index_assign_6_fu_9046_p2() {
    index_assign_6_fu_9046_p2 = (!ap_const_lv5_1F.is_01() || !p_Val2_6_phi_reg_11815_pp0_iter2_reg.read().is_01())? sc_lv<5>(): (sc_bigint<5>(ap_const_lv5_1F) + sc_biguint<5>(p_Val2_6_phi_reg_11815_pp0_iter2_reg.read()));
}

void IdentityQuantAct146::thread_index_assign_7_fu_9099_p2() {
    index_assign_7_fu_9099_p2 = (!ap_const_lv5_1F.is_01() || !p_Val2_719_phi_reg_11821_pp0_iter2_reg.read().is_01())? sc_lv<5>(): (sc_bigint<5>(ap_const_lv5_1F) + sc_biguint<5>(p_Val2_719_phi_reg_11821_pp0_iter2_reg.read()));
}

void IdentityQuantAct146::thread_index_assign_8_fu_9152_p2() {
    index_assign_8_fu_9152_p2 = (!ap_const_lv5_1F.is_01() || !p_Val2_8_phi_reg_11827_pp0_iter2_reg.read().is_01())? sc_lv<5>(): (sc_bigint<5>(ap_const_lv5_1F) + sc_biguint<5>(p_Val2_8_phi_reg_11827_pp0_iter2_reg.read()));
}

void IdentityQuantAct146::thread_index_assign_9_fu_9205_p2() {
    index_assign_9_fu_9205_p2 = (!ap_const_lv5_1F.is_01() || !p_Val2_9_phi_reg_11833_pp0_iter2_reg.read().is_01())? sc_lv<5>(): (sc_bigint<5>(ap_const_lv5_1F) + sc_biguint<5>(p_Val2_9_phi_reg_11833_pp0_iter2_reg.read()));
}

void IdentityQuantAct146::thread_index_assign_fu_8728_p2() {
    index_assign_fu_8728_p2 = (!ap_const_lv5_1F.is_01() || !p_Val2_0_phi_reg_11779_pp0_iter2_reg.read().is_01())? sc_lv<5>(): (sc_bigint<5>(ap_const_lv5_1F) + sc_biguint<5>(p_Val2_0_phi_reg_11779_pp0_iter2_reg.read()));
}

void IdentityQuantAct146::thread_index_assign_s_fu_9523_p2() {
    index_assign_s_fu_9523_p2 = (!ap_const_lv5_1F.is_01() || !p_Val2_15_phi_reg_11869_pp0_iter2_reg.read().is_01())? sc_lv<5>(): (sc_bigint<5>(ap_const_lv5_1F) + sc_biguint<5>(p_Val2_15_phi_reg_11869_pp0_iter2_reg.read()));
}

void IdentityQuantAct146::thread_indvar_flatten_next1_fu_4468_p2() {
    indvar_flatten_next1_fu_4468_p2 = (!indvar_flatten1_reg_4237.read().is_01() || !ap_const_lv38_1.is_01())? sc_lv<38>(): (sc_biguint<38>(indvar_flatten1_reg_4237.read()) + sc_biguint<38>(ap_const_lv38_1));
}

void IdentityQuantAct146::thread_indvar_flatten_next_fu_4726_p3() {
    indvar_flatten_next_fu_4726_p3 = (!exitcond_flatten_fu_4474_p2.read()[0].is_01())? sc_lv<7>(): ((exitcond_flatten_fu_4474_p2.read()[0].to_bool())? ap_const_lv7_1: indvar_flatten_op_fu_4720_p2.read());
}

void IdentityQuantAct146::thread_indvar_flatten_op_fu_4720_p2() {
    indvar_flatten_op_fu_4720_p2 = (!ap_const_lv7_1.is_01() || !indvar_flatten_reg_4248.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_1) + sc_biguint<7>(indvar_flatten_reg_4248.read()));
}

void IdentityQuantAct146::thread_j_3_fu_4518_p2() {
    j_3_fu_4518_p2 = (!j_mid_fu_4480_p3.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(j_mid_fu_4480_p3.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void IdentityQuantAct146::thread_j_mid2_fu_4684_p3() {
    j_mid2_fu_4684_p3 = (!tmp_6_mid_fu_4512_p2.read()[0].is_01())? sc_lv<4>(): ((tmp_6_mid_fu_4512_p2.read()[0].to_bool())? j_3_fu_4518_p2.read(): j_mid_fu_4480_p3.read());
}

void IdentityQuantAct146::thread_j_mid_fu_4480_p3() {
    j_mid_fu_4480_p3 = (!exitcond_flatten_fu_4474_p2.read()[0].is_01())? sc_lv<4>(): ((exitcond_flatten_fu_4474_p2.read()[0].to_bool())? ap_const_lv4_0: j_reg_4259.read());
}

void IdentityQuantAct146::thread_k_1_fu_4714_p2() {
    k_1_fu_4714_p2 = (!ap_const_lv3_1.is_01() || !k_mid2_fu_4530_p3.read().is_01())? sc_lv<3>(): (sc_biguint<3>(ap_const_lv3_1) + sc_biguint<3>(k_mid2_fu_4530_p3.read()));
}

void IdentityQuantAct146::thread_k_mid2_fu_4530_p3() {
    k_mid2_fu_4530_p3 = (!tmp_15_fu_4524_p2.read()[0].is_01())? sc_lv<3>(): ((tmp_15_fu_4524_p2.read()[0].to_bool())? ap_const_lv3_0: k_reg_4270.read());
}

void IdentityQuantAct146::thread_m_V_load_0_phi_fu_7528_p1() {
    m_V_load_0_phi_fu_7528_p1 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_0_q1.read(): identity_m_0_load_mi_fu_5650_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_0_phi_fu_7528_p2() {
    m_V_load_0_phi_fu_7528_p2 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_16_q1.read(): identity_m_16_load_m_fu_5657_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_0_phi_fu_7528_p3() {
    m_V_load_0_phi_fu_7528_p3 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_32_q1.read(): identity_m_32_load_m_fu_5664_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_0_phi_fu_7528_p4() {
    m_V_load_0_phi_fu_7528_p4 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_48_q1.read(): identity_m_48_load_m_fu_4775_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_10_phi_fu_7658_p1() {
    m_V_load_10_phi_fu_7658_p1 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_10_q1.read(): identity_m_10_load_m_fu_5440_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_10_phi_fu_7658_p2() {
    m_V_load_10_phi_fu_7658_p2 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_26_q1.read(): identity_m_26_load_m_fu_5447_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_10_phi_fu_7658_p3() {
    m_V_load_10_phi_fu_7658_p3 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_42_q1.read(): identity_m_42_load_m_fu_5454_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_10_phi_fu_7658_p4() {
    m_V_load_10_phi_fu_7658_p4 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_58_q1.read(): identity_m_58_load_m_fu_4845_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_11_phi_fu_7671_p1() {
    m_V_load_11_phi_fu_7671_p1 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_11_q1.read(): identity_m_11_load_m_fu_5419_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_11_phi_fu_7671_p2() {
    m_V_load_11_phi_fu_7671_p2 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_27_q1.read(): identity_m_27_load_m_fu_5426_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_11_phi_fu_7671_p3() {
    m_V_load_11_phi_fu_7671_p3 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_43_q1.read(): identity_m_43_load_m_fu_5433_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_11_phi_fu_7671_p4() {
    m_V_load_11_phi_fu_7671_p4 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_59_q1.read(): identity_m_59_load_m_fu_4852_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_12_phi_fu_7684_p1() {
    m_V_load_12_phi_fu_7684_p1 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_12_q1.read(): identity_m_12_load_m_fu_5398_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_12_phi_fu_7684_p2() {
    m_V_load_12_phi_fu_7684_p2 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_28_q1.read(): identity_m_28_load_m_fu_5405_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_12_phi_fu_7684_p3() {
    m_V_load_12_phi_fu_7684_p3 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_44_q1.read(): identity_m_44_load_m_fu_5412_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_12_phi_fu_7684_p4() {
    m_V_load_12_phi_fu_7684_p4 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_60_q1.read(): identity_m_60_load_m_fu_4859_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_13_phi_fu_7697_p1() {
    m_V_load_13_phi_fu_7697_p1 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_13_q1.read(): identity_m_13_load_m_fu_5377_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_13_phi_fu_7697_p2() {
    m_V_load_13_phi_fu_7697_p2 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_29_q1.read(): identity_m_29_load_m_fu_5384_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_13_phi_fu_7697_p3() {
    m_V_load_13_phi_fu_7697_p3 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_45_q1.read(): identity_m_45_load_m_fu_5391_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_13_phi_fu_7697_p4() {
    m_V_load_13_phi_fu_7697_p4 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_61_q1.read(): identity_m_61_load_m_fu_4866_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_14_phi_fu_7710_p1() {
    m_V_load_14_phi_fu_7710_p1 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_14_q1.read(): identity_m_14_load_m_fu_5356_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_14_phi_fu_7710_p2() {
    m_V_load_14_phi_fu_7710_p2 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_30_q1.read(): identity_m_30_load_m_fu_5363_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_14_phi_fu_7710_p3() {
    m_V_load_14_phi_fu_7710_p3 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_46_q1.read(): identity_m_46_load_m_fu_5370_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_14_phi_fu_7710_p4() {
    m_V_load_14_phi_fu_7710_p4 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_62_q1.read(): identity_m_62_load_m_fu_4873_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_15_phi_fu_7723_p1() {
    m_V_load_15_phi_fu_7723_p1 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_15_q1.read(): identity_m_15_load_m_fu_5335_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_15_phi_fu_7723_p2() {
    m_V_load_15_phi_fu_7723_p2 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_31_q1.read(): identity_m_31_load_m_fu_5342_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_15_phi_fu_7723_p3() {
    m_V_load_15_phi_fu_7723_p3 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_47_q1.read(): identity_m_47_load_m_fu_5349_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_15_phi_fu_7723_p4() {
    m_V_load_15_phi_fu_7723_p4 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_63_q1.read(): identity_m_63_load_m_fu_4880_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_1_phi_fu_7541_p1() {
    m_V_load_1_phi_fu_7541_p1 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_1_q1.read(): identity_m_1_load_mi_fu_5629_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_1_phi_fu_7541_p2() {
    m_V_load_1_phi_fu_7541_p2 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_17_q1.read(): identity_m_17_load_m_fu_5636_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_1_phi_fu_7541_p3() {
    m_V_load_1_phi_fu_7541_p3 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_33_q1.read(): identity_m_33_load_m_fu_5643_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_1_phi_fu_7541_p4() {
    m_V_load_1_phi_fu_7541_p4 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_49_q1.read(): identity_m_49_load_m_fu_4782_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_2_phi_fu_7554_p1() {
    m_V_load_2_phi_fu_7554_p1 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_2_q1.read(): identity_m_2_load_mi_fu_5608_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_2_phi_fu_7554_p2() {
    m_V_load_2_phi_fu_7554_p2 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_18_q1.read(): identity_m_18_load_m_fu_5615_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_2_phi_fu_7554_p3() {
    m_V_load_2_phi_fu_7554_p3 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_34_q1.read(): identity_m_34_load_m_fu_5622_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_2_phi_fu_7554_p4() {
    m_V_load_2_phi_fu_7554_p4 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_50_q1.read(): identity_m_50_load_m_fu_4789_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_3_phi_fu_7567_p1() {
    m_V_load_3_phi_fu_7567_p1 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_3_q1.read(): identity_m_3_load_mi_fu_5587_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_3_phi_fu_7567_p2() {
    m_V_load_3_phi_fu_7567_p2 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_19_q1.read(): identity_m_19_load_m_fu_5594_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_3_phi_fu_7567_p3() {
    m_V_load_3_phi_fu_7567_p3 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_35_q1.read(): identity_m_35_load_m_fu_5601_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_3_phi_fu_7567_p4() {
    m_V_load_3_phi_fu_7567_p4 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_51_q1.read(): identity_m_51_load_m_fu_4796_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_4_phi_fu_7580_p1() {
    m_V_load_4_phi_fu_7580_p1 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_4_q1.read(): identity_m_4_load_mi_fu_5566_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_4_phi_fu_7580_p2() {
    m_V_load_4_phi_fu_7580_p2 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_20_q1.read(): identity_m_20_load_m_fu_5573_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_4_phi_fu_7580_p3() {
    m_V_load_4_phi_fu_7580_p3 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_36_q1.read(): identity_m_36_load_m_fu_5580_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_4_phi_fu_7580_p4() {
    m_V_load_4_phi_fu_7580_p4 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_52_q1.read(): identity_m_52_load_m_fu_4803_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_5_phi_fu_7593_p1() {
    m_V_load_5_phi_fu_7593_p1 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_5_q1.read(): identity_m_5_load_mi_fu_5545_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_5_phi_fu_7593_p2() {
    m_V_load_5_phi_fu_7593_p2 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_21_q1.read(): identity_m_21_load_m_fu_5552_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_5_phi_fu_7593_p3() {
    m_V_load_5_phi_fu_7593_p3 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_37_q1.read(): identity_m_37_load_m_fu_5559_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_5_phi_fu_7593_p4() {
    m_V_load_5_phi_fu_7593_p4 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_53_q1.read(): identity_m_53_load_m_fu_4810_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_6_phi_fu_7606_p1() {
    m_V_load_6_phi_fu_7606_p1 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_6_q1.read(): identity_m_6_load_mi_fu_5524_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_6_phi_fu_7606_p2() {
    m_V_load_6_phi_fu_7606_p2 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_22_q1.read(): identity_m_22_load_m_fu_5531_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_6_phi_fu_7606_p3() {
    m_V_load_6_phi_fu_7606_p3 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_38_q1.read(): identity_m_38_load_m_fu_5538_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_6_phi_fu_7606_p4() {
    m_V_load_6_phi_fu_7606_p4 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_54_q1.read(): identity_m_54_load_m_fu_4817_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_7_phi_fu_7619_p1() {
    m_V_load_7_phi_fu_7619_p1 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_7_q1.read(): identity_m_7_load_mi_fu_5503_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_7_phi_fu_7619_p2() {
    m_V_load_7_phi_fu_7619_p2 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_23_q1.read(): identity_m_23_load_m_fu_5510_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_7_phi_fu_7619_p3() {
    m_V_load_7_phi_fu_7619_p3 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_39_q1.read(): identity_m_39_load_m_fu_5517_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_7_phi_fu_7619_p4() {
    m_V_load_7_phi_fu_7619_p4 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_55_q1.read(): identity_m_55_load_m_fu_4824_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_8_phi_fu_7632_p1() {
    m_V_load_8_phi_fu_7632_p1 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_8_q1.read(): identity_m_8_load_mi_fu_5482_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_8_phi_fu_7632_p2() {
    m_V_load_8_phi_fu_7632_p2 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_24_q1.read(): identity_m_24_load_m_fu_5489_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_8_phi_fu_7632_p3() {
    m_V_load_8_phi_fu_7632_p3 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_40_q1.read(): identity_m_40_load_m_fu_5496_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_8_phi_fu_7632_p4() {
    m_V_load_8_phi_fu_7632_p4 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_56_q1.read(): identity_m_56_load_m_fu_4831_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_9_phi_fu_7645_p1() {
    m_V_load_9_phi_fu_7645_p1 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_9_q1.read(): identity_m_9_load_mi_fu_5461_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_9_phi_fu_7645_p2() {
    m_V_load_9_phi_fu_7645_p2 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_25_q1.read(): identity_m_25_load_m_fu_5468_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_9_phi_fu_7645_p3() {
    m_V_load_9_phi_fu_7645_p3 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_41_q1.read(): identity_m_41_load_m_fu_5475_p3.read());
}

void IdentityQuantAct146::thread_m_V_load_9_phi_fu_7645_p4() {
    m_V_load_9_phi_fu_7645_p4 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<31>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_m_57_q1.read(): identity_m_57_load_m_fu_4838_p3.read());
}

void IdentityQuantAct146::thread_not_exitcond_flatten_fu_4488_p2() {
    not_exitcond_flatten_fu_4488_p2 = (exitcond_flatten_fu_4474_p2.read() ^ ap_const_lv1_1);
}

void IdentityQuantAct146::thread_out_V_data_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1))) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_reg_10698_pp0_iter3_reg.read())))) {
        out_V_data_V_blk_n = out_V_data_V_full_n.read();
    } else {
        out_V_data_V_blk_n = ap_const_logic_1;
    }
}

void IdentityQuantAct146::thread_out_V_data_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_reg_10698_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_V_data_V_din = tmp_data_V_10_fu_9664_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_V_id_V1280_status.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_V_id_V1_status.read())))) {
        out_V_data_V_din = out_data_data_V_fu_4300_p1.read();
    } else {
        out_V_data_V_din = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void IdentityQuantAct146::thread_out_V_data_V_write() {
    out_V_data_V_write = out_V_id_V1_update.read();
}

void IdentityQuantAct146::thread_out_V_dest_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1))) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_reg_10698_pp0_iter3_reg.read())))) {
        out_V_dest_V_blk_n = out_V_dest_V_full_n.read();
    } else {
        out_V_dest_V_blk_n = ap_const_logic_1;
    }
}

void IdentityQuantAct146::thread_out_V_dest_V_din() {
    out_V_dest_V_din = ap_const_lv8_FF;
}

void IdentityQuantAct146::thread_out_V_dest_V_write() {
    out_V_dest_V_write = out_V_id_V1_update.read();
}

void IdentityQuantAct146::thread_out_V_id_V1_status() {
    out_V_id_V1_status = (out_V_data_V_full_n.read() & out_V_id_V_full_n.read() & out_V_dest_V_full_n.read() & out_V_user_V_full_n.read() & out_V_last_V_full_n.read());
}

void IdentityQuantAct146::thread_out_V_id_V1_update() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_V_id_V1280_status.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_V_id_V1_status.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_reg_10698_pp0_iter3_reg.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        out_V_id_V1_update = ap_const_logic_1;
    } else {
        out_V_id_V1_update = ap_const_logic_0;
    }
}

void IdentityQuantAct146::thread_out_V_id_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1))) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_reg_10698_pp0_iter3_reg.read())))) {
        out_V_id_V_blk_n = out_V_id_V_full_n.read();
    } else {
        out_V_id_V_blk_n = ap_const_logic_1;
    }
}

void IdentityQuantAct146::thread_out_V_id_V_din() {
    out_V_id_V_din = ap_const_lv8_0;
}

void IdentityQuantAct146::thread_out_V_id_V_write() {
    out_V_id_V_write = out_V_id_V1_update.read();
}

void IdentityQuantAct146::thread_out_V_last_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1))) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_reg_10698_pp0_iter3_reg.read())))) {
        out_V_last_V_blk_n = out_V_last_V_full_n.read();
    } else {
        out_V_last_V_blk_n = ap_const_logic_1;
    }
}

void IdentityQuantAct146::thread_out_V_last_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_reg_10698_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_V_last_V_din = out_data_last_V_reg_11674_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_V_id_V1280_status.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_V_id_V1_status.read())))) {
        out_V_last_V_din = ap_const_lv1_0;
    } else {
        out_V_last_V_din =  (sc_lv<1>) ("X");
    }
}

void IdentityQuantAct146::thread_out_V_last_V_write() {
    out_V_last_V_write = out_V_id_V1_update.read();
}

void IdentityQuantAct146::thread_out_V_user_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1))) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_reg_10698_pp0_iter3_reg.read())))) {
        out_V_user_V_blk_n = out_V_user_V_full_n.read();
    } else {
        out_V_user_V_blk_n = ap_const_logic_1;
    }
}

void IdentityQuantAct146::thread_out_V_user_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_reg_10698_pp0_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_V_user_V_din = tmp_user_V_13_cast_fu_9579_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_V_id_V1280_status.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_V_id_V1_status.read())))) {
        out_V_user_V_din = ap_const_lv16_31;
    } else {
        out_V_user_V_din =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void IdentityQuantAct146::thread_out_V_user_V_write() {
    out_V_user_V_write = out_V_id_V1_update.read();
}

void IdentityQuantAct146::thread_out_data_data_V_fu_4300_p1() {
    out_data_data_V_fu_4300_p1 = esl_zext<512,32>(N_fu_4296_p1.read());
}

void IdentityQuantAct146::thread_out_data_last_V_fu_4708_p2() {
    out_data_last_V_fu_4708_p2 = (tmp_5_mid2_fu_4676_p3.read() & tmp_10_fu_4702_p2.read());
}

void IdentityQuantAct146::thread_p_Result_10_fu_9279_p2() {
    p_Result_10_fu_9279_p2 = (!tmp_96_s_fu_9273_p2.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_96_s_fu_9273_p2.read() == ap_const_lv18_0);
}

void IdentityQuantAct146::thread_p_Result_11_fu_9332_p2() {
    p_Result_11_fu_9332_p2 = (!tmp_96_10_fu_9326_p2.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_96_10_fu_9326_p2.read() == ap_const_lv18_0);
}

void IdentityQuantAct146::thread_p_Result_12_fu_9385_p2() {
    p_Result_12_fu_9385_p2 = (!tmp_96_11_fu_9379_p2.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_96_11_fu_9379_p2.read() == ap_const_lv18_0);
}

void IdentityQuantAct146::thread_p_Result_13_fu_9438_p2() {
    p_Result_13_fu_9438_p2 = (!tmp_96_12_fu_9432_p2.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_96_12_fu_9432_p2.read() == ap_const_lv18_0);
}

void IdentityQuantAct146::thread_p_Result_14_fu_9491_p2() {
    p_Result_14_fu_9491_p2 = (!tmp_96_13_fu_9485_p2.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_96_13_fu_9485_p2.read() == ap_const_lv18_0);
}

void IdentityQuantAct146::thread_p_Result_1_fu_8802_p2() {
    p_Result_1_fu_8802_p2 = (!tmp_96_1_fu_8796_p2.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_96_1_fu_8796_p2.read() == ap_const_lv18_0);
}

void IdentityQuantAct146::thread_p_Result_2_fu_8855_p2() {
    p_Result_2_fu_8855_p2 = (!tmp_96_2_fu_8849_p2.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_96_2_fu_8849_p2.read() == ap_const_lv18_0);
}

void IdentityQuantAct146::thread_p_Result_3_fu_8908_p2() {
    p_Result_3_fu_8908_p2 = (!tmp_96_3_fu_8902_p2.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_96_3_fu_8902_p2.read() == ap_const_lv18_0);
}

void IdentityQuantAct146::thread_p_Result_4_fu_8961_p2() {
    p_Result_4_fu_8961_p2 = (!tmp_96_4_fu_8955_p2.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_96_4_fu_8955_p2.read() == ap_const_lv18_0);
}

void IdentityQuantAct146::thread_p_Result_5_fu_9014_p2() {
    p_Result_5_fu_9014_p2 = (!tmp_96_5_fu_9008_p2.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_96_5_fu_9008_p2.read() == ap_const_lv18_0);
}

void IdentityQuantAct146::thread_p_Result_6_fu_9067_p2() {
    p_Result_6_fu_9067_p2 = (!tmp_96_6_fu_9061_p2.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_96_6_fu_9061_p2.read() == ap_const_lv18_0);
}

void IdentityQuantAct146::thread_p_Result_7_fu_9120_p2() {
    p_Result_7_fu_9120_p2 = (!tmp_96_7_fu_9114_p2.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_96_7_fu_9114_p2.read() == ap_const_lv18_0);
}

void IdentityQuantAct146::thread_p_Result_8_fu_9173_p2() {
    p_Result_8_fu_9173_p2 = (!tmp_96_8_fu_9167_p2.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_96_8_fu_9167_p2.read() == ap_const_lv18_0);
}

void IdentityQuantAct146::thread_p_Result_9_fu_9226_p2() {
    p_Result_9_fu_9226_p2 = (!tmp_96_9_fu_9220_p2.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_96_9_fu_9220_p2.read() == ap_const_lv18_0);
}

void IdentityQuantAct146::thread_p_Result_s_363_fu_9544_p2() {
    p_Result_s_363_fu_9544_p2 = (!tmp_96_14_fu_9538_p2.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_96_14_fu_9538_p2.read() == ap_const_lv18_0);
}

void IdentityQuantAct146::thread_p_Result_s_fu_8749_p2() {
    p_Result_s_fu_8749_p2 = (!tmp_2_fu_8743_p2.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_2_fu_8743_p2.read() == ap_const_lv18_0);
}

void IdentityQuantAct146::thread_p_Val2_0_phi_fu_7736_p1() {
    p_Val2_0_phi_fu_7736_p1 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_0_q1.read(): identity_e_0_load_mi_fu_5314_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_0_phi_fu_7736_p2() {
    p_Val2_0_phi_fu_7736_p2 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_16_q1.read(): identity_e_16_load_m_fu_5321_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_0_phi_fu_7736_p3() {
    p_Val2_0_phi_fu_7736_p3 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_32_q1.read(): identity_e_32_load_m_fu_5328_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_0_phi_fu_7736_p4() {
    p_Val2_0_phi_fu_7736_p4 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_48_q1.read(): identity_e_48_load_m_fu_4887_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_1021_phi_fu_7866_p1() {
    p_Val2_1021_phi_fu_7866_p1 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_10_q1.read(): identity_e_10_load_m_fu_5104_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_1021_phi_fu_7866_p2() {
    p_Val2_1021_phi_fu_7866_p2 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_26_q1.read(): identity_e_26_load_m_fu_5111_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_1021_phi_fu_7866_p3() {
    p_Val2_1021_phi_fu_7866_p3 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_42_q1.read(): identity_e_42_load_m_fu_5118_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_1021_phi_fu_7866_p4() {
    p_Val2_1021_phi_fu_7866_p4 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_58_q1.read(): identity_e_58_load_m_fu_4957_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_11_phi_fu_7879_p1() {
    p_Val2_11_phi_fu_7879_p1 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_11_q1.read(): identity_e_11_load_m_fu_5083_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_11_phi_fu_7879_p2() {
    p_Val2_11_phi_fu_7879_p2 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_27_q1.read(): identity_e_27_load_m_fu_5090_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_11_phi_fu_7879_p3() {
    p_Val2_11_phi_fu_7879_p3 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_43_q1.read(): identity_e_43_load_m_fu_5097_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_11_phi_fu_7879_p4() {
    p_Val2_11_phi_fu_7879_p4 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_59_q1.read(): identity_e_59_load_m_fu_4964_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_12_phi_fu_7892_p1() {
    p_Val2_12_phi_fu_7892_p1 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_12_q1.read(): identity_e_12_load_m_fu_5062_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_12_phi_fu_7892_p2() {
    p_Val2_12_phi_fu_7892_p2 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_28_q1.read(): identity_e_28_load_m_fu_5069_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_12_phi_fu_7892_p3() {
    p_Val2_12_phi_fu_7892_p3 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_44_q1.read(): identity_e_44_load_m_fu_5076_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_12_phi_fu_7892_p4() {
    p_Val2_12_phi_fu_7892_p4 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_60_q1.read(): identity_e_60_load_m_fu_4971_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_13_phi_fu_7905_p1() {
    p_Val2_13_phi_fu_7905_p1 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_13_q1.read(): identity_e_13_load_m_fu_5041_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_13_phi_fu_7905_p2() {
    p_Val2_13_phi_fu_7905_p2 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_29_q1.read(): identity_e_29_load_m_fu_5048_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_13_phi_fu_7905_p3() {
    p_Val2_13_phi_fu_7905_p3 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_45_q1.read(): identity_e_45_load_m_fu_5055_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_13_phi_fu_7905_p4() {
    p_Val2_13_phi_fu_7905_p4 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_61_q1.read(): identity_e_61_load_m_fu_4978_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_14_phi_fu_7918_p1() {
    p_Val2_14_phi_fu_7918_p1 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_14_q1.read(): identity_e_14_load_m_fu_5020_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_14_phi_fu_7918_p2() {
    p_Val2_14_phi_fu_7918_p2 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_30_q1.read(): identity_e_30_load_m_fu_5027_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_14_phi_fu_7918_p3() {
    p_Val2_14_phi_fu_7918_p3 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_46_q1.read(): identity_e_46_load_m_fu_5034_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_14_phi_fu_7918_p4() {
    p_Val2_14_phi_fu_7918_p4 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_62_q1.read(): identity_e_62_load_m_fu_4985_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_15_phi_fu_7931_p1() {
    p_Val2_15_phi_fu_7931_p1 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_15_q1.read(): identity_e_15_load_m_fu_4999_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_15_phi_fu_7931_p2() {
    p_Val2_15_phi_fu_7931_p2 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_31_q1.read(): identity_e_31_load_m_fu_5006_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_15_phi_fu_7931_p3() {
    p_Val2_15_phi_fu_7931_p3 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_47_q1.read(): identity_e_47_load_m_fu_5013_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_15_phi_fu_7931_p4() {
    p_Val2_15_phi_fu_7931_p4 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_63_q1.read(): identity_e_63_load_m_fu_4992_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_1_phi_fu_7749_p1() {
    p_Val2_1_phi_fu_7749_p1 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_1_q1.read(): identity_e_1_load_mi_fu_5293_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_1_phi_fu_7749_p2() {
    p_Val2_1_phi_fu_7749_p2 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_17_q1.read(): identity_e_17_load_m_fu_5300_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_1_phi_fu_7749_p3() {
    p_Val2_1_phi_fu_7749_p3 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_33_q1.read(): identity_e_33_load_m_fu_5307_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_1_phi_fu_7749_p4() {
    p_Val2_1_phi_fu_7749_p4 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_49_q1.read(): identity_e_49_load_m_fu_4894_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_2_phi_fu_7762_p1() {
    p_Val2_2_phi_fu_7762_p1 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_2_q1.read(): identity_e_2_load_mi_fu_5272_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_2_phi_fu_7762_p2() {
    p_Val2_2_phi_fu_7762_p2 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_18_q1.read(): identity_e_18_load_m_fu_5279_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_2_phi_fu_7762_p3() {
    p_Val2_2_phi_fu_7762_p3 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_34_q1.read(): identity_e_34_load_m_fu_5286_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_2_phi_fu_7762_p4() {
    p_Val2_2_phi_fu_7762_p4 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_50_q1.read(): identity_e_50_load_m_fu_4901_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_3_phi_fu_7775_p1() {
    p_Val2_3_phi_fu_7775_p1 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_3_q1.read(): identity_e_3_load_mi_fu_5251_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_3_phi_fu_7775_p2() {
    p_Val2_3_phi_fu_7775_p2 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_19_q1.read(): identity_e_19_load_m_fu_5258_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_3_phi_fu_7775_p3() {
    p_Val2_3_phi_fu_7775_p3 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_35_q1.read(): identity_e_35_load_m_fu_5265_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_3_phi_fu_7775_p4() {
    p_Val2_3_phi_fu_7775_p4 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_51_q1.read(): identity_e_51_load_m_fu_4908_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_4_phi_fu_7788_p1() {
    p_Val2_4_phi_fu_7788_p1 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_4_q1.read(): identity_e_4_load_mi_fu_5230_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_4_phi_fu_7788_p2() {
    p_Val2_4_phi_fu_7788_p2 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_20_q1.read(): identity_e_20_load_m_fu_5237_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_4_phi_fu_7788_p3() {
    p_Val2_4_phi_fu_7788_p3 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_36_q1.read(): identity_e_36_load_m_fu_5244_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_4_phi_fu_7788_p4() {
    p_Val2_4_phi_fu_7788_p4 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_52_q1.read(): identity_e_52_load_m_fu_4915_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_5_phi_fu_7801_p1() {
    p_Val2_5_phi_fu_7801_p1 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_5_q1.read(): identity_e_5_load_mi_fu_5209_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_5_phi_fu_7801_p2() {
    p_Val2_5_phi_fu_7801_p2 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_21_q1.read(): identity_e_21_load_m_fu_5216_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_5_phi_fu_7801_p3() {
    p_Val2_5_phi_fu_7801_p3 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_37_q1.read(): identity_e_37_load_m_fu_5223_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_5_phi_fu_7801_p4() {
    p_Val2_5_phi_fu_7801_p4 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_53_q1.read(): identity_e_53_load_m_fu_4922_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_6_phi_fu_7814_p1() {
    p_Val2_6_phi_fu_7814_p1 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_6_q1.read(): identity_e_6_load_mi_fu_5188_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_6_phi_fu_7814_p2() {
    p_Val2_6_phi_fu_7814_p2 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_22_q1.read(): identity_e_22_load_m_fu_5195_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_6_phi_fu_7814_p3() {
    p_Val2_6_phi_fu_7814_p3 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_38_q1.read(): identity_e_38_load_m_fu_5202_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_6_phi_fu_7814_p4() {
    p_Val2_6_phi_fu_7814_p4 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_54_q1.read(): identity_e_54_load_m_fu_4929_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_719_phi_fu_7827_p1() {
    p_Val2_719_phi_fu_7827_p1 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_7_q1.read(): identity_e_7_load_mi_fu_5167_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_719_phi_fu_7827_p2() {
    p_Val2_719_phi_fu_7827_p2 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_23_q1.read(): identity_e_23_load_m_fu_5174_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_719_phi_fu_7827_p3() {
    p_Val2_719_phi_fu_7827_p3 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_39_q1.read(): identity_e_39_load_m_fu_5181_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_719_phi_fu_7827_p4() {
    p_Val2_719_phi_fu_7827_p4 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_55_q1.read(): identity_e_55_load_m_fu_4936_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_8_phi_fu_7840_p1() {
    p_Val2_8_phi_fu_7840_p1 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_8_q1.read(): identity_e_8_load_mi_fu_5146_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_8_phi_fu_7840_p2() {
    p_Val2_8_phi_fu_7840_p2 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_24_q1.read(): identity_e_24_load_m_fu_5153_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_8_phi_fu_7840_p3() {
    p_Val2_8_phi_fu_7840_p3 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_40_q1.read(): identity_e_40_load_m_fu_5160_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_8_phi_fu_7840_p4() {
    p_Val2_8_phi_fu_7840_p4 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_56_q1.read(): identity_e_56_load_m_fu_4943_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_9_phi_fu_7853_p1() {
    p_Val2_9_phi_fu_7853_p1 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_9_q1.read(): identity_e_9_load_mi_fu_5125_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_9_phi_fu_7853_p2() {
    p_Val2_9_phi_fu_7853_p2 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_25_q1.read(): identity_e_25_load_m_fu_5132_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_9_phi_fu_7853_p3() {
    p_Val2_9_phi_fu_7853_p3 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_41_q1.read(): identity_e_41_load_m_fu_5139_p3.read());
}

void IdentityQuantAct146::thread_p_Val2_9_phi_fu_7853_p4() {
    p_Val2_9_phi_fu_7853_p4 = (!tmp_6_mid_reg_10841.read()[0].is_01())? sc_lv<5>(): ((tmp_6_mid_reg_10841.read()[0].to_bool())? identity_e_57_q1.read(): identity_e_57_load_m_fu_4950_p3.read());
}

void IdentityQuantAct146::thread_p_shl1_fu_4321_p1() {
    p_shl1_fu_4321_p1 = esl_zext<38,36>(tmp_12_fu_4313_p3.read());
}

void IdentityQuantAct146::thread_p_shl_fu_4305_p3() {
    p_shl_fu_4305_p3 = esl_concat<32,6>(N_fu_4296_p1.read(), ap_const_lv6_0);
}

void IdentityQuantAct146::thread_phitmp16_fu_8820_p2() {
    phitmp16_fu_8820_p2 = (!ap_const_lv21_1.is_01() || !tmp_126_fu_8816_p1.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_1) + sc_biguint<21>(tmp_126_fu_8816_p1.read()));
}

void IdentityQuantAct146::thread_phitmp17_fu_8873_p2() {
    phitmp17_fu_8873_p2 = (!ap_const_lv21_1.is_01() || !tmp_127_fu_8869_p1.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_1) + sc_biguint<21>(tmp_127_fu_8869_p1.read()));
}

void IdentityQuantAct146::thread_phitmp18_fu_8926_p2() {
    phitmp18_fu_8926_p2 = (!ap_const_lv21_1.is_01() || !tmp_128_fu_8922_p1.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_1) + sc_biguint<21>(tmp_128_fu_8922_p1.read()));
}

void IdentityQuantAct146::thread_phitmp19_fu_8979_p2() {
    phitmp19_fu_8979_p2 = (!ap_const_lv21_1.is_01() || !tmp_129_fu_8975_p1.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_1) + sc_biguint<21>(tmp_129_fu_8975_p1.read()));
}

void IdentityQuantAct146::thread_phitmp20_fu_9032_p2() {
    phitmp20_fu_9032_p2 = (!ap_const_lv21_1.is_01() || !tmp_130_fu_9028_p1.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_1) + sc_biguint<21>(tmp_130_fu_9028_p1.read()));
}

void IdentityQuantAct146::thread_phitmp21_fu_9085_p2() {
    phitmp21_fu_9085_p2 = (!ap_const_lv21_1.is_01() || !tmp_131_fu_9081_p1.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_1) + sc_biguint<21>(tmp_131_fu_9081_p1.read()));
}

void IdentityQuantAct146::thread_phitmp22_fu_9138_p2() {
    phitmp22_fu_9138_p2 = (!ap_const_lv21_1.is_01() || !tmp_132_fu_9134_p1.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_1) + sc_biguint<21>(tmp_132_fu_9134_p1.read()));
}

void IdentityQuantAct146::thread_phitmp23_fu_9191_p2() {
    phitmp23_fu_9191_p2 = (!ap_const_lv21_1.is_01() || !tmp_133_fu_9187_p1.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_1) + sc_biguint<21>(tmp_133_fu_9187_p1.read()));
}

void IdentityQuantAct146::thread_phitmp24_fu_9244_p2() {
    phitmp24_fu_9244_p2 = (!ap_const_lv21_1.is_01() || !tmp_134_fu_9240_p1.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_1) + sc_biguint<21>(tmp_134_fu_9240_p1.read()));
}

void IdentityQuantAct146::thread_phitmp25_fu_9297_p2() {
    phitmp25_fu_9297_p2 = (!ap_const_lv21_1.is_01() || !tmp_135_fu_9293_p1.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_1) + sc_biguint<21>(tmp_135_fu_9293_p1.read()));
}

void IdentityQuantAct146::thread_phitmp26_fu_9350_p2() {
    phitmp26_fu_9350_p2 = (!ap_const_lv21_1.is_01() || !tmp_136_fu_9346_p1.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_1) + sc_biguint<21>(tmp_136_fu_9346_p1.read()));
}

void IdentityQuantAct146::thread_phitmp27_fu_9403_p2() {
    phitmp27_fu_9403_p2 = (!ap_const_lv21_1.is_01() || !tmp_137_fu_9399_p1.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_1) + sc_biguint<21>(tmp_137_fu_9399_p1.read()));
}

void IdentityQuantAct146::thread_phitmp28_fu_9456_p2() {
    phitmp28_fu_9456_p2 = (!ap_const_lv21_1.is_01() || !tmp_138_fu_9452_p1.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_1) + sc_biguint<21>(tmp_138_fu_9452_p1.read()));
}

void IdentityQuantAct146::thread_phitmp29_fu_9509_p2() {
    phitmp29_fu_9509_p2 = (!ap_const_lv21_1.is_01() || !tmp_139_fu_9505_p1.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_1) + sc_biguint<21>(tmp_139_fu_9505_p1.read()));
}

void IdentityQuantAct146::thread_phitmp30_fu_9562_p2() {
    phitmp30_fu_9562_p2 = (!ap_const_lv21_1.is_01() || !tmp_140_fu_9558_p1.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_1) + sc_biguint<21>(tmp_140_fu_9558_p1.read()));
}

void IdentityQuantAct146::thread_phitmp_fu_8767_p2() {
    phitmp_fu_8767_p2 = (!ap_const_lv21_1.is_01() || !tmp_125_fu_8763_p1.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_1) + sc_biguint<21>(tmp_125_fu_8763_p1.read()));
}

void IdentityQuantAct146::thread_r_V_5_10_fu_9341_p2() {
    r_V_5_10_fu_9341_p2 = (!ret_V_11_10_reg_11941.read().is_01() || !tmp_101_10_cast_fu_9338_p1.read().is_01())? sc_lv<39>(): sc_bigint<39>(ret_V_11_10_reg_11941.read()) >> (unsigned short)tmp_101_10_cast_fu_9338_p1.read().to_uint();
}

void IdentityQuantAct146::thread_r_V_5_11_fu_9394_p2() {
    r_V_5_11_fu_9394_p2 = (!ret_V_11_11_reg_11947.read().is_01() || !tmp_101_11_cast_fu_9391_p1.read().is_01())? sc_lv<39>(): sc_bigint<39>(ret_V_11_11_reg_11947.read()) >> (unsigned short)tmp_101_11_cast_fu_9391_p1.read().to_uint();
}

void IdentityQuantAct146::thread_r_V_5_12_fu_9447_p2() {
    r_V_5_12_fu_9447_p2 = (!ret_V_11_12_reg_11953.read().is_01() || !tmp_101_12_cast_fu_9444_p1.read().is_01())? sc_lv<39>(): sc_bigint<39>(ret_V_11_12_reg_11953.read()) >> (unsigned short)tmp_101_12_cast_fu_9444_p1.read().to_uint();
}

void IdentityQuantAct146::thread_r_V_5_13_fu_9500_p2() {
    r_V_5_13_fu_9500_p2 = (!ret_V_11_13_reg_11959.read().is_01() || !tmp_101_13_cast_fu_9497_p1.read().is_01())? sc_lv<39>(): sc_bigint<39>(ret_V_11_13_reg_11959.read()) >> (unsigned short)tmp_101_13_cast_fu_9497_p1.read().to_uint();
}

void IdentityQuantAct146::thread_r_V_5_14_fu_9553_p2() {
    r_V_5_14_fu_9553_p2 = (!ret_V_11_14_reg_11965.read().is_01() || !tmp_101_14_cast_fu_9550_p1.read().is_01())? sc_lv<39>(): sc_bigint<39>(ret_V_11_14_reg_11965.read()) >> (unsigned short)tmp_101_14_cast_fu_9550_p1.read().to_uint();
}

void IdentityQuantAct146::thread_r_V_5_1_fu_8811_p2() {
    r_V_5_1_fu_8811_p2 = (!ret_V_11_1_reg_11881.read().is_01() || !tmp_101_1_cast_fu_8808_p1.read().is_01())? sc_lv<39>(): sc_bigint<39>(ret_V_11_1_reg_11881.read()) >> (unsigned short)tmp_101_1_cast_fu_8808_p1.read().to_uint();
}

void IdentityQuantAct146::thread_r_V_5_2_fu_8864_p2() {
    r_V_5_2_fu_8864_p2 = (!ret_V_11_2_reg_11887.read().is_01() || !tmp_101_2_cast_fu_8861_p1.read().is_01())? sc_lv<39>(): sc_bigint<39>(ret_V_11_2_reg_11887.read()) >> (unsigned short)tmp_101_2_cast_fu_8861_p1.read().to_uint();
}

void IdentityQuantAct146::thread_r_V_5_3_fu_8917_p2() {
    r_V_5_3_fu_8917_p2 = (!ret_V_11_3_reg_11893.read().is_01() || !tmp_101_3_cast_fu_8914_p1.read().is_01())? sc_lv<39>(): sc_bigint<39>(ret_V_11_3_reg_11893.read()) >> (unsigned short)tmp_101_3_cast_fu_8914_p1.read().to_uint();
}

void IdentityQuantAct146::thread_r_V_5_4_fu_8970_p2() {
    r_V_5_4_fu_8970_p2 = (!ret_V_11_4_reg_11899.read().is_01() || !tmp_101_4_cast_fu_8967_p1.read().is_01())? sc_lv<39>(): sc_bigint<39>(ret_V_11_4_reg_11899.read()) >> (unsigned short)tmp_101_4_cast_fu_8967_p1.read().to_uint();
}

void IdentityQuantAct146::thread_r_V_5_5_fu_9023_p2() {
    r_V_5_5_fu_9023_p2 = (!ret_V_11_5_reg_11905.read().is_01() || !tmp_101_5_cast_fu_9020_p1.read().is_01())? sc_lv<39>(): sc_bigint<39>(ret_V_11_5_reg_11905.read()) >> (unsigned short)tmp_101_5_cast_fu_9020_p1.read().to_uint();
}

void IdentityQuantAct146::thread_r_V_5_6_fu_9076_p2() {
    r_V_5_6_fu_9076_p2 = (!ret_V_11_6_reg_11911.read().is_01() || !tmp_101_6_cast_fu_9073_p1.read().is_01())? sc_lv<39>(): sc_bigint<39>(ret_V_11_6_reg_11911.read()) >> (unsigned short)tmp_101_6_cast_fu_9073_p1.read().to_uint();
}

void IdentityQuantAct146::thread_r_V_5_7_fu_9129_p2() {
    r_V_5_7_fu_9129_p2 = (!ret_V_11_7_reg_11917.read().is_01() || !tmp_101_7_cast_fu_9126_p1.read().is_01())? sc_lv<39>(): sc_bigint<39>(ret_V_11_7_reg_11917.read()) >> (unsigned short)tmp_101_7_cast_fu_9126_p1.read().to_uint();
}

void IdentityQuantAct146::thread_r_V_5_8_fu_9182_p2() {
    r_V_5_8_fu_9182_p2 = (!ret_V_11_8_reg_11923.read().is_01() || !tmp_101_8_cast_fu_9179_p1.read().is_01())? sc_lv<39>(): sc_bigint<39>(ret_V_11_8_reg_11923.read()) >> (unsigned short)tmp_101_8_cast_fu_9179_p1.read().to_uint();
}

void IdentityQuantAct146::thread_r_V_5_9_fu_9235_p2() {
    r_V_5_9_fu_9235_p2 = (!ret_V_11_9_reg_11929.read().is_01() || !tmp_101_9_cast_fu_9232_p1.read().is_01())? sc_lv<39>(): sc_bigint<39>(ret_V_11_9_reg_11929.read()) >> (unsigned short)tmp_101_9_cast_fu_9232_p1.read().to_uint();
}

void IdentityQuantAct146::thread_r_V_5_fu_8758_p2() {
    r_V_5_fu_8758_p2 = (!ret_V_s_reg_11875.read().is_01() || !tmp_101_cast_fu_8755_p1.read().is_01())? sc_lv<39>(): sc_bigint<39>(ret_V_s_reg_11875.read()) >> (unsigned short)tmp_101_cast_fu_8755_p1.read().to_uint();
}

void IdentityQuantAct146::thread_r_V_5_s_fu_9288_p2() {
    r_V_5_s_fu_9288_p2 = (!ret_V_11_s_reg_11935.read().is_01() || !tmp_101_cast_362_fu_9285_p1.read().is_01())? sc_lv<39>(): sc_bigint<39>(ret_V_11_s_reg_11935.read()) >> (unsigned short)tmp_101_cast_362_fu_9285_p1.read().to_uint();
}

void IdentityQuantAct146::thread_ret_V_11_10_fu_8622_p0() {
    ret_V_11_10_fu_8622_p0 = temp_data_V_load_11_s_fu_8407_p6.read();
}

void IdentityQuantAct146::thread_ret_V_11_10_fu_8622_p1() {
    ret_V_11_10_fu_8622_p1 =  (sc_lv<31>) (ret_V_11_10_fu_8622_p10.read());
}

void IdentityQuantAct146::thread_ret_V_11_10_fu_8622_p10() {
    ret_V_11_10_fu_8622_p10 = esl_zext<39,31>(m_V_load_11_phi_reg_11754.read());
}

void IdentityQuantAct146::thread_ret_V_11_10_fu_8622_p2() {
    ret_V_11_10_fu_8622_p2 = (!ret_V_11_10_fu_8622_p0.read().is_01() || !ret_V_11_10_fu_8622_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(ret_V_11_10_fu_8622_p0.read()) * sc_biguint<31>(ret_V_11_10_fu_8622_p1.read());
}

void IdentityQuantAct146::thread_ret_V_11_11_fu_8635_p0() {
    ret_V_11_11_fu_8635_p0 = temp_data_V_load_12_s_fu_8420_p6.read();
}

void IdentityQuantAct146::thread_ret_V_11_11_fu_8635_p1() {
    ret_V_11_11_fu_8635_p1 =  (sc_lv<31>) (ret_V_11_11_fu_8635_p10.read());
}

void IdentityQuantAct146::thread_ret_V_11_11_fu_8635_p10() {
    ret_V_11_11_fu_8635_p10 = esl_zext<39,31>(m_V_load_12_phi_reg_11759.read());
}

void IdentityQuantAct146::thread_ret_V_11_11_fu_8635_p2() {
    ret_V_11_11_fu_8635_p2 = (!ret_V_11_11_fu_8635_p0.read().is_01() || !ret_V_11_11_fu_8635_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(ret_V_11_11_fu_8635_p0.read()) * sc_biguint<31>(ret_V_11_11_fu_8635_p1.read());
}

void IdentityQuantAct146::thread_ret_V_11_12_fu_8648_p0() {
    ret_V_11_12_fu_8648_p0 = temp_data_V_load_13_s_fu_8433_p6.read();
}

void IdentityQuantAct146::thread_ret_V_11_12_fu_8648_p1() {
    ret_V_11_12_fu_8648_p1 =  (sc_lv<31>) (ret_V_11_12_fu_8648_p10.read());
}

void IdentityQuantAct146::thread_ret_V_11_12_fu_8648_p10() {
    ret_V_11_12_fu_8648_p10 = esl_zext<39,31>(m_V_load_13_phi_reg_11764.read());
}

void IdentityQuantAct146::thread_ret_V_11_12_fu_8648_p2() {
    ret_V_11_12_fu_8648_p2 = (!ret_V_11_12_fu_8648_p0.read().is_01() || !ret_V_11_12_fu_8648_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(ret_V_11_12_fu_8648_p0.read()) * sc_biguint<31>(ret_V_11_12_fu_8648_p1.read());
}

void IdentityQuantAct146::thread_ret_V_11_13_fu_8661_p0() {
    ret_V_11_13_fu_8661_p0 = temp_data_V_load_14_s_fu_8446_p6.read();
}

void IdentityQuantAct146::thread_ret_V_11_13_fu_8661_p1() {
    ret_V_11_13_fu_8661_p1 =  (sc_lv<31>) (ret_V_11_13_fu_8661_p10.read());
}

void IdentityQuantAct146::thread_ret_V_11_13_fu_8661_p10() {
    ret_V_11_13_fu_8661_p10 = esl_zext<39,31>(m_V_load_14_phi_reg_11769.read());
}

void IdentityQuantAct146::thread_ret_V_11_13_fu_8661_p2() {
    ret_V_11_13_fu_8661_p2 = (!ret_V_11_13_fu_8661_p0.read().is_01() || !ret_V_11_13_fu_8661_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(ret_V_11_13_fu_8661_p0.read()) * sc_biguint<31>(ret_V_11_13_fu_8661_p1.read());
}

void IdentityQuantAct146::thread_ret_V_11_14_fu_8674_p0() {
    ret_V_11_14_fu_8674_p0 = temp_data_V_load_15_s_fu_8459_p6.read();
}

void IdentityQuantAct146::thread_ret_V_11_14_fu_8674_p1() {
    ret_V_11_14_fu_8674_p1 =  (sc_lv<31>) (ret_V_11_14_fu_8674_p10.read());
}

void IdentityQuantAct146::thread_ret_V_11_14_fu_8674_p10() {
    ret_V_11_14_fu_8674_p10 = esl_zext<39,31>(m_V_load_15_phi_reg_11774.read());
}

void IdentityQuantAct146::thread_ret_V_11_14_fu_8674_p2() {
    ret_V_11_14_fu_8674_p2 = (!ret_V_11_14_fu_8674_p0.read().is_01() || !ret_V_11_14_fu_8674_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(ret_V_11_14_fu_8674_p0.read()) * sc_biguint<31>(ret_V_11_14_fu_8674_p1.read());
}

void IdentityQuantAct146::thread_ret_V_11_1_fu_8492_p0() {
    ret_V_11_1_fu_8492_p0 = temp_data_V_load_1_p_fu_8277_p6.read();
}

void IdentityQuantAct146::thread_ret_V_11_1_fu_8492_p1() {
    ret_V_11_1_fu_8492_p1 =  (sc_lv<31>) (ret_V_11_1_fu_8492_p10.read());
}

void IdentityQuantAct146::thread_ret_V_11_1_fu_8492_p10() {
    ret_V_11_1_fu_8492_p10 = esl_zext<39,31>(m_V_load_1_phi_reg_11704.read());
}

void IdentityQuantAct146::thread_ret_V_11_1_fu_8492_p2() {
    ret_V_11_1_fu_8492_p2 = (!ret_V_11_1_fu_8492_p0.read().is_01() || !ret_V_11_1_fu_8492_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(ret_V_11_1_fu_8492_p0.read()) * sc_biguint<31>(ret_V_11_1_fu_8492_p1.read());
}

void IdentityQuantAct146::thread_ret_V_11_2_fu_8505_p0() {
    ret_V_11_2_fu_8505_p0 = temp_data_V_load_2_p_fu_8290_p6.read();
}

void IdentityQuantAct146::thread_ret_V_11_2_fu_8505_p1() {
    ret_V_11_2_fu_8505_p1 =  (sc_lv<31>) (ret_V_11_2_fu_8505_p10.read());
}

void IdentityQuantAct146::thread_ret_V_11_2_fu_8505_p10() {
    ret_V_11_2_fu_8505_p10 = esl_zext<39,31>(m_V_load_2_phi_reg_11709.read());
}

void IdentityQuantAct146::thread_ret_V_11_2_fu_8505_p2() {
    ret_V_11_2_fu_8505_p2 = (!ret_V_11_2_fu_8505_p0.read().is_01() || !ret_V_11_2_fu_8505_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(ret_V_11_2_fu_8505_p0.read()) * sc_biguint<31>(ret_V_11_2_fu_8505_p1.read());
}

void IdentityQuantAct146::thread_ret_V_11_3_fu_8518_p0() {
    ret_V_11_3_fu_8518_p0 = temp_data_V_load_3_p_fu_8303_p6.read();
}

void IdentityQuantAct146::thread_ret_V_11_3_fu_8518_p1() {
    ret_V_11_3_fu_8518_p1 =  (sc_lv<31>) (ret_V_11_3_fu_8518_p10.read());
}

void IdentityQuantAct146::thread_ret_V_11_3_fu_8518_p10() {
    ret_V_11_3_fu_8518_p10 = esl_zext<39,31>(m_V_load_3_phi_reg_11714.read());
}

void IdentityQuantAct146::thread_ret_V_11_3_fu_8518_p2() {
    ret_V_11_3_fu_8518_p2 = (!ret_V_11_3_fu_8518_p0.read().is_01() || !ret_V_11_3_fu_8518_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(ret_V_11_3_fu_8518_p0.read()) * sc_biguint<31>(ret_V_11_3_fu_8518_p1.read());
}

void IdentityQuantAct146::thread_ret_V_11_4_fu_8531_p0() {
    ret_V_11_4_fu_8531_p0 = temp_data_V_load_4_p_fu_8316_p6.read();
}

void IdentityQuantAct146::thread_ret_V_11_4_fu_8531_p1() {
    ret_V_11_4_fu_8531_p1 =  (sc_lv<31>) (ret_V_11_4_fu_8531_p10.read());
}

void IdentityQuantAct146::thread_ret_V_11_4_fu_8531_p10() {
    ret_V_11_4_fu_8531_p10 = esl_zext<39,31>(m_V_load_4_phi_reg_11719.read());
}

void IdentityQuantAct146::thread_ret_V_11_4_fu_8531_p2() {
    ret_V_11_4_fu_8531_p2 = (!ret_V_11_4_fu_8531_p0.read().is_01() || !ret_V_11_4_fu_8531_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(ret_V_11_4_fu_8531_p0.read()) * sc_biguint<31>(ret_V_11_4_fu_8531_p1.read());
}

void IdentityQuantAct146::thread_ret_V_11_5_fu_8544_p0() {
    ret_V_11_5_fu_8544_p0 = temp_data_V_load_5_p_fu_8329_p6.read();
}

void IdentityQuantAct146::thread_ret_V_11_5_fu_8544_p1() {
    ret_V_11_5_fu_8544_p1 =  (sc_lv<31>) (ret_V_11_5_fu_8544_p10.read());
}

void IdentityQuantAct146::thread_ret_V_11_5_fu_8544_p10() {
    ret_V_11_5_fu_8544_p10 = esl_zext<39,31>(m_V_load_5_phi_reg_11724.read());
}

void IdentityQuantAct146::thread_ret_V_11_5_fu_8544_p2() {
    ret_V_11_5_fu_8544_p2 = (!ret_V_11_5_fu_8544_p0.read().is_01() || !ret_V_11_5_fu_8544_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(ret_V_11_5_fu_8544_p0.read()) * sc_biguint<31>(ret_V_11_5_fu_8544_p1.read());
}

void IdentityQuantAct146::thread_ret_V_11_6_fu_8557_p0() {
    ret_V_11_6_fu_8557_p0 = temp_data_V_load_6_p_fu_8342_p6.read();
}

void IdentityQuantAct146::thread_ret_V_11_6_fu_8557_p1() {
    ret_V_11_6_fu_8557_p1 =  (sc_lv<31>) (ret_V_11_6_fu_8557_p10.read());
}

void IdentityQuantAct146::thread_ret_V_11_6_fu_8557_p10() {
    ret_V_11_6_fu_8557_p10 = esl_zext<39,31>(m_V_load_6_phi_reg_11729.read());
}

void IdentityQuantAct146::thread_ret_V_11_6_fu_8557_p2() {
    ret_V_11_6_fu_8557_p2 = (!ret_V_11_6_fu_8557_p0.read().is_01() || !ret_V_11_6_fu_8557_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(ret_V_11_6_fu_8557_p0.read()) * sc_biguint<31>(ret_V_11_6_fu_8557_p1.read());
}

void IdentityQuantAct146::thread_ret_V_11_7_fu_8570_p0() {
    ret_V_11_7_fu_8570_p0 = temp_data_V_load_7_p_fu_8355_p6.read();
}

void IdentityQuantAct146::thread_ret_V_11_7_fu_8570_p1() {
    ret_V_11_7_fu_8570_p1 =  (sc_lv<31>) (ret_V_11_7_fu_8570_p10.read());
}

void IdentityQuantAct146::thread_ret_V_11_7_fu_8570_p10() {
    ret_V_11_7_fu_8570_p10 = esl_zext<39,31>(m_V_load_7_phi_reg_11734.read());
}

void IdentityQuantAct146::thread_ret_V_11_7_fu_8570_p2() {
    ret_V_11_7_fu_8570_p2 = (!ret_V_11_7_fu_8570_p0.read().is_01() || !ret_V_11_7_fu_8570_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(ret_V_11_7_fu_8570_p0.read()) * sc_biguint<31>(ret_V_11_7_fu_8570_p1.read());
}

void IdentityQuantAct146::thread_ret_V_11_8_fu_8583_p0() {
    ret_V_11_8_fu_8583_p0 = temp_data_V_load_8_p_fu_8368_p6.read();
}

void IdentityQuantAct146::thread_ret_V_11_8_fu_8583_p1() {
    ret_V_11_8_fu_8583_p1 =  (sc_lv<31>) (ret_V_11_8_fu_8583_p10.read());
}

void IdentityQuantAct146::thread_ret_V_11_8_fu_8583_p10() {
    ret_V_11_8_fu_8583_p10 = esl_zext<39,31>(m_V_load_8_phi_reg_11739.read());
}

void IdentityQuantAct146::thread_ret_V_11_8_fu_8583_p2() {
    ret_V_11_8_fu_8583_p2 = (!ret_V_11_8_fu_8583_p0.read().is_01() || !ret_V_11_8_fu_8583_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(ret_V_11_8_fu_8583_p0.read()) * sc_biguint<31>(ret_V_11_8_fu_8583_p1.read());
}

void IdentityQuantAct146::thread_ret_V_11_9_fu_8596_p0() {
    ret_V_11_9_fu_8596_p0 = temp_data_V_load_9_p_fu_8381_p6.read();
}

void IdentityQuantAct146::thread_ret_V_11_9_fu_8596_p1() {
    ret_V_11_9_fu_8596_p1 =  (sc_lv<31>) (ret_V_11_9_fu_8596_p10.read());
}

void IdentityQuantAct146::thread_ret_V_11_9_fu_8596_p10() {
    ret_V_11_9_fu_8596_p10 = esl_zext<39,31>(m_V_load_9_phi_reg_11744.read());
}

void IdentityQuantAct146::thread_ret_V_11_9_fu_8596_p2() {
    ret_V_11_9_fu_8596_p2 = (!ret_V_11_9_fu_8596_p0.read().is_01() || !ret_V_11_9_fu_8596_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(ret_V_11_9_fu_8596_p0.read()) * sc_biguint<31>(ret_V_11_9_fu_8596_p1.read());
}

void IdentityQuantAct146::thread_ret_V_11_s_fu_8609_p0() {
    ret_V_11_s_fu_8609_p0 = temp_data_V_load_10_s_fu_8394_p6.read();
}

void IdentityQuantAct146::thread_ret_V_11_s_fu_8609_p1() {
    ret_V_11_s_fu_8609_p1 =  (sc_lv<31>) (ret_V_11_s_fu_8609_p10.read());
}

void IdentityQuantAct146::thread_ret_V_11_s_fu_8609_p10() {
    ret_V_11_s_fu_8609_p10 = esl_zext<39,31>(m_V_load_10_phi_reg_11749.read());
}

void IdentityQuantAct146::thread_ret_V_11_s_fu_8609_p2() {
    ret_V_11_s_fu_8609_p2 = (!ret_V_11_s_fu_8609_p0.read().is_01() || !ret_V_11_s_fu_8609_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(ret_V_11_s_fu_8609_p0.read()) * sc_biguint<31>(ret_V_11_s_fu_8609_p1.read());
}

void IdentityQuantAct146::thread_ret_V_s_fu_8479_p0() {
    ret_V_s_fu_8479_p0 = temp_data_V_load_0_p_fu_8143_p66.read();
}

void IdentityQuantAct146::thread_ret_V_s_fu_8479_p1() {
    ret_V_s_fu_8479_p1 =  (sc_lv<31>) (ret_V_s_fu_8479_p10.read());
}

void IdentityQuantAct146::thread_ret_V_s_fu_8479_p10() {
    ret_V_s_fu_8479_p10 = esl_zext<39,31>(m_V_load_0_phi_reg_11699.read());
}

void IdentityQuantAct146::thread_ret_V_s_fu_8479_p2() {
    ret_V_s_fu_8479_p2 = (!ret_V_s_fu_8479_p0.read().is_01() || !ret_V_s_fu_8479_p1.read().is_01())? sc_lv<39>(): sc_bigint<8>(ret_V_s_fu_8479_p0.read()) * sc_biguint<31>(ret_V_s_fu_8479_p1.read());
}

void IdentityQuantAct146::thread_temp_data_0_V_1_fu_6574_p1() {
    temp_data_0_V_1_fu_6574_p1 = in_V_data_V127_dout.read().range(8-1, 0);
}

void IdentityQuantAct146::thread_temp_data_V_load_0_p_fu_8143_p65() {
    temp_data_V_load_0_p_fu_8143_p65 = esl_concat<2,4>(tmp_reg_11622_pp0_iter1_reg.read(), ap_const_lv4_0);
}

void IdentityQuantAct146::thread_tmp_101_10_cast_fu_9338_p1() {
    tmp_101_10_cast_fu_9338_p1 = esl_zext<39,5>(p_Val2_11_phi_reg_11845_pp0_iter2_reg.read());
}

void IdentityQuantAct146::thread_tmp_101_11_cast_fu_9391_p1() {
    tmp_101_11_cast_fu_9391_p1 = esl_zext<39,5>(p_Val2_12_phi_reg_11851_pp0_iter2_reg.read());
}

void IdentityQuantAct146::thread_tmp_101_12_cast_fu_9444_p1() {
    tmp_101_12_cast_fu_9444_p1 = esl_zext<39,5>(p_Val2_13_phi_reg_11857_pp0_iter2_reg.read());
}

}

