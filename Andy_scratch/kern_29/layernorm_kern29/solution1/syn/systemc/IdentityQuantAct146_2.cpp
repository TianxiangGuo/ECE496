#include "IdentityQuantAct146.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void IdentityQuantAct146::thread_ap_clk_no_reset_() {
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
             esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_flatten1_fu_4463_p2.read()))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_V_id_V1280_status.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_V_id_V1_status.read())))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            if (esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter1_state3.read())) {
                ap_enable_reg_pp0_iter2 = ap_enable_reg_pp0_iter0.read();
            } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
                ap_enable_reg_pp0_iter2 = ap_enable_reg_pp0_iter1.read();
            }
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter3 = ap_enable_reg_pp0_iter2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter4 = ap_enable_reg_pp0_iter3.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_V_id_V1280_status.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_V_id_V1_status.read())))) {
            ap_enable_reg_pp0_iter4 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten1_reg_10698.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        i_reg_4281 = i_mid2_fu_5671_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_V_id_V1280_status.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_V_id_V1_status.read())))) {
        i_reg_4281 = ap_const_lv32_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_4463_p2.read()))) {
        indvar_flatten1_reg_4237 = indvar_flatten_next1_fu_4468_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_V_id_V1280_status.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_V_id_V1_status.read())))) {
        indvar_flatten1_reg_4237 = ap_const_lv38_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_4463_p2.read()))) {
        indvar_flatten_reg_4248 = indvar_flatten_next_fu_4726_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_V_id_V1280_status.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_V_id_V1_status.read())))) {
        indvar_flatten_reg_4248 = ap_const_lv7_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_4463_p2.read()))) {
        j_reg_4259 = j_mid2_fu_4684_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_V_id_V1280_status.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_V_id_V1_status.read())))) {
        j_reg_4259 = ap_const_lv4_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_4463_p2.read()))) {
        k_reg_4270 = k_1_fu_4714_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_V_id_V1280_status.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_V_id_V1_status.read())))) {
        k_reg_4270 = ap_const_lv3_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_V_id_V1280_status.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_V_id_V1_status.read())))) {
        bound_reg_10053 = bound_fu_4325_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        exitcond_flatten1_reg_10698 = exitcond_flatten1_fu_4463_p2.read();
        exitcond_flatten1_reg_10698_pp0_iter1_reg = exitcond_flatten1_reg_10698.read();
        out_data_last_V_reg_11674_pp0_iter1_reg = out_data_last_V_reg_11674.read();
        tmp_reg_11622_pp0_iter1_reg = tmp_reg_11622.read();
    }
    if (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) {
        exitcond_flatten1_reg_10698_pp0_iter2_reg = exitcond_flatten1_reg_10698_pp0_iter1_reg.read();
        exitcond_flatten1_reg_10698_pp0_iter3_reg = exitcond_flatten1_reg_10698_pp0_iter2_reg.read();
        out_data_last_V_reg_11674_pp0_iter2_reg = out_data_last_V_reg_11674_pp0_iter1_reg.read();
        out_data_last_V_reg_11674_pp0_iter3_reg = out_data_last_V_reg_11674_pp0_iter2_reg.read();
        p_Val2_0_phi_reg_11779_pp0_iter2_reg = p_Val2_0_phi_reg_11779.read();
        p_Val2_1021_phi_reg_11839_pp0_iter2_reg = p_Val2_1021_phi_reg_11839.read();
        p_Val2_11_phi_reg_11845_pp0_iter2_reg = p_Val2_11_phi_reg_11845.read();
        p_Val2_12_phi_reg_11851_pp0_iter2_reg = p_Val2_12_phi_reg_11851.read();
        p_Val2_13_phi_reg_11857_pp0_iter2_reg = p_Val2_13_phi_reg_11857.read();
        p_Val2_14_phi_reg_11863_pp0_iter2_reg = p_Val2_14_phi_reg_11863.read();
        p_Val2_15_phi_reg_11869_pp0_iter2_reg = p_Val2_15_phi_reg_11869.read();
        p_Val2_1_phi_reg_11785_pp0_iter2_reg = p_Val2_1_phi_reg_11785.read();
        p_Val2_2_phi_reg_11791_pp0_iter2_reg = p_Val2_2_phi_reg_11791.read();
        p_Val2_3_phi_reg_11797_pp0_iter2_reg = p_Val2_3_phi_reg_11797.read();
        p_Val2_4_phi_reg_11803_pp0_iter2_reg = p_Val2_4_phi_reg_11803.read();
        p_Val2_5_phi_reg_11809_pp0_iter2_reg = p_Val2_5_phi_reg_11809.read();
        p_Val2_6_phi_reg_11815_pp0_iter2_reg = p_Val2_6_phi_reg_11815.read();
        p_Val2_719_phi_reg_11821_pp0_iter2_reg = p_Val2_719_phi_reg_11821.read();
        p_Val2_8_phi_reg_11827_pp0_iter2_reg = p_Val2_8_phi_reg_11827.read();
        p_Val2_9_phi_reg_11833_pp0_iter2_reg = p_Val2_9_phi_reg_11833.read();
        tmp_user_V_1_reg_11689_pp0_iter2_reg = tmp_user_V_1_reg_11689.read();
        tmp_user_V_1_reg_11689_pp0_iter3_reg = tmp_user_V_1_reg_11689_pp0_iter2_reg.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_4463_p2.read()))) {
        exitcond_flatten_reg_10707 = exitcond_flatten_fu_4474_p2.read();
        out_data_last_V_reg_11674 = out_data_last_V_fu_4708_p2.read();
        tmp_6_mid_reg_10841 = tmp_6_mid_fu_4512_p2.read();
        tmp_8_reg_11618 = tmp_8_fu_4692_p2.read();
        tmp_reg_11622 = tmp_fu_4698_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_reg_10698_pp0_iter2_reg.read()))) {
        in_data2_0_V_reg_11971 = in_data2_0_V_fu_8773_p3.read();
        in_data2_10_V_reg_12021 = in_data2_10_V_fu_9303_p3.read();
        in_data2_11_V_reg_12026 = in_data2_11_V_fu_9356_p3.read();
        in_data2_12_V_reg_12031 = in_data2_12_V_fu_9409_p3.read();
        in_data2_13_V_reg_12036 = in_data2_13_V_fu_9462_p3.read();
        in_data2_14_V_reg_12041 = in_data2_14_V_fu_9515_p3.read();
        in_data2_15_V_reg_12046 = in_data2_15_V_fu_9568_p3.read();
        in_data2_1_V_reg_11976 = in_data2_1_V_fu_8826_p3.read();
        in_data2_2_V_reg_11981 = in_data2_2_V_fu_8879_p3.read();
        in_data2_3_V_reg_11986 = in_data2_3_V_fu_8932_p3.read();
        in_data2_4_V_reg_11991 = in_data2_4_V_fu_8985_p3.read();
        in_data2_5_V_reg_11996 = in_data2_5_V_fu_9038_p3.read();
        in_data2_6_V_reg_12001 = in_data2_6_V_fu_9091_p3.read();
        in_data2_7_V_reg_12006 = in_data2_7_V_fu_9144_p3.read();
        in_data2_8_V_reg_12011 = in_data2_8_V_fu_9197_p3.read();
        in_data2_9_V_reg_12016 = in_data2_9_V_fu_9250_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(exitcond_flatten1_reg_10698.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        m_V_load_0_phi_reg_11699 = m_V_load_0_phi_fu_7528_p6.read();
        m_V_load_10_phi_reg_11749 = m_V_load_10_phi_fu_7658_p6.read();
        m_V_load_11_phi_reg_11754 = m_V_load_11_phi_fu_7671_p6.read();
        m_V_load_12_phi_reg_11759 = m_V_load_12_phi_fu_7684_p6.read();
        m_V_load_13_phi_reg_11764 = m_V_load_13_phi_fu_7697_p6.read();
        m_V_load_14_phi_reg_11769 = m_V_load_14_phi_fu_7710_p6.read();
        m_V_load_15_phi_reg_11774 = m_V_load_15_phi_fu_7723_p6.read();
        m_V_load_1_phi_reg_11704 = m_V_load_1_phi_fu_7541_p6.read();
        m_V_load_2_phi_reg_11709 = m_V_load_2_phi_fu_7554_p6.read();
        m_V_load_3_phi_reg_11714 = m_V_load_3_phi_fu_7567_p6.read();
        m_V_load_4_phi_reg_11719 = m_V_load_4_phi_fu_7580_p6.read();
        m_V_load_5_phi_reg_11724 = m_V_load_5_phi_fu_7593_p6.read();
        m_V_load_6_phi_reg_11729 = m_V_load_6_phi_fu_7606_p6.read();
        m_V_load_7_phi_reg_11734 = m_V_load_7_phi_fu_7619_p6.read();
        m_V_load_8_phi_reg_11739 = m_V_load_8_phi_fu_7632_p6.read();
        m_V_load_9_phi_reg_11744 = m_V_load_9_phi_fu_7645_p6.read();
        p_Val2_0_phi_reg_11779 = p_Val2_0_phi_fu_7736_p6.read();
        p_Val2_1021_phi_reg_11839 = p_Val2_1021_phi_fu_7866_p6.read();
        p_Val2_11_phi_reg_11845 = p_Val2_11_phi_fu_7879_p6.read();
        p_Val2_12_phi_reg_11851 = p_Val2_12_phi_fu_7892_p6.read();
        p_Val2_13_phi_reg_11857 = p_Val2_13_phi_fu_7905_p6.read();
        p_Val2_14_phi_reg_11863 = p_Val2_14_phi_fu_7918_p6.read();
        p_Val2_15_phi_reg_11869 = p_Val2_15_phi_fu_7931_p6.read();
        p_Val2_1_phi_reg_11785 = p_Val2_1_phi_fu_7749_p6.read();
        p_Val2_2_phi_reg_11791 = p_Val2_2_phi_fu_7762_p6.read();
        p_Val2_3_phi_reg_11797 = p_Val2_3_phi_fu_7775_p6.read();
        p_Val2_4_phi_reg_11803 = p_Val2_4_phi_fu_7788_p6.read();
        p_Val2_5_phi_reg_11809 = p_Val2_5_phi_fu_7801_p6.read();
        p_Val2_6_phi_reg_11815 = p_Val2_6_phi_fu_7814_p6.read();
        p_Val2_719_phi_reg_11821 = p_Val2_719_phi_fu_7827_p6.read();
        p_Val2_8_phi_reg_11827 = p_Val2_8_phi_fu_7840_p6.read();
        p_Val2_9_phi_reg_11833 = p_Val2_9_phi_fu_7853_p6.read();
        tmp_user_V_1_reg_11689 = tmp_user_V_1_fu_4768_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_reg_10698_pp0_iter1_reg.read()))) {
        ret_V_11_10_reg_11941 = ret_V_11_10_fu_8622_p2.read();
        ret_V_11_11_reg_11947 = ret_V_11_11_fu_8635_p2.read();
        ret_V_11_12_reg_11953 = ret_V_11_12_fu_8648_p2.read();
        ret_V_11_13_reg_11959 = ret_V_11_13_fu_8661_p2.read();
        ret_V_11_14_reg_11965 = ret_V_11_14_fu_8674_p2.read();
        ret_V_11_1_reg_11881 = ret_V_11_1_fu_8492_p2.read();
        ret_V_11_2_reg_11887 = ret_V_11_2_fu_8505_p2.read();
        ret_V_11_3_reg_11893 = ret_V_11_3_fu_8518_p2.read();
        ret_V_11_4_reg_11899 = ret_V_11_4_fu_8531_p2.read();
        ret_V_11_5_reg_11905 = ret_V_11_5_fu_8544_p2.read();
        ret_V_11_6_reg_11911 = ret_V_11_6_fu_8557_p2.read();
        ret_V_11_7_reg_11917 = ret_V_11_7_fu_8570_p2.read();
        ret_V_11_8_reg_11923 = ret_V_11_8_fu_8583_p2.read();
        ret_V_11_9_reg_11929 = ret_V_11_9_fu_8596_p2.read();
        ret_V_11_s_reg_11935 = ret_V_11_s_fu_8609_p2.read();
        ret_V_s_reg_11875 = ret_V_s_fu_8479_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(exitcond_flatten1_reg_10698.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(tmp_8_reg_11618.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        temp_data_0_V_fu_744 = temp_data_0_V_1_fu_6574_p1.read();
        temp_data_10_V_1_fu_784 = in_V_data_V127_dout.read().range(87, 80);
        temp_data_11_V_1_fu_788 = in_V_data_V127_dout.read().range(95, 88);
        temp_data_12_V_1_fu_792 = in_V_data_V127_dout.read().range(103, 96);
        temp_data_13_V_1_fu_796 = in_V_data_V127_dout.read().range(111, 104);
        temp_data_14_V_1_fu_800 = in_V_data_V127_dout.read().range(119, 112);
        temp_data_15_V_1_fu_804 = in_V_data_V127_dout.read().range(127, 120);
        temp_data_16_V_1_fu_808 = in_V_data_V127_dout.read().range(135, 128);
        temp_data_17_V_1_fu_812 = in_V_data_V127_dout.read().range(143, 136);
        temp_data_18_V_1_fu_816 = in_V_data_V127_dout.read().range(151, 144);
        temp_data_19_V_1_fu_820 = in_V_data_V127_dout.read().range(159, 152);
        temp_data_1_V_1_fu_748 = in_V_data_V127_dout.read().range(15, 8);
        temp_data_20_V_1_fu_824 = in_V_data_V127_dout.read().range(167, 160);
        temp_data_21_V_1_fu_828 = in_V_data_V127_dout.read().range(175, 168);
        temp_data_22_V_1_fu_832 = in_V_data_V127_dout.read().range(183, 176);
        temp_data_23_V_1_fu_836 = in_V_data_V127_dout.read().range(191, 184);
        temp_data_24_V_1_fu_840 = in_V_data_V127_dout.read().range(199, 192);
        temp_data_25_V_1_fu_844 = in_V_data_V127_dout.read().range(207, 200);
        temp_data_26_V_1_fu_848 = in_V_data_V127_dout.read().range(215, 208);
        temp_data_27_V_1_fu_852 = in_V_data_V127_dout.read().range(223, 216);
        temp_data_28_V_1_fu_856 = in_V_data_V127_dout.read().range(231, 224);
        temp_data_29_V_1_fu_860 = in_V_data_V127_dout.read().range(239, 232);
        temp_data_2_V_1_fu_752 = in_V_data_V127_dout.read().range(23, 16);
        temp_data_30_V_1_fu_864 = in_V_data_V127_dout.read().range(247, 240);
        temp_data_31_V_1_fu_868 = in_V_data_V127_dout.read().range(255, 248);
        temp_data_32_V_1_fu_872 = in_V_data_V127_dout.read().range(263, 256);
        temp_data_33_V_1_fu_876 = in_V_data_V127_dout.read().range(271, 264);
        temp_data_34_V_1_fu_880 = in_V_data_V127_dout.read().range(279, 272);
        temp_data_35_V_1_fu_884 = in_V_data_V127_dout.read().range(287, 280);
        temp_data_36_V_1_fu_888 = in_V_data_V127_dout.read().range(295, 288);
        temp_data_37_V_1_fu_892 = in_V_data_V127_dout.read().range(303, 296);
        temp_data_38_V_1_fu_896 = in_V_data_V127_dout.read().range(311, 304);
        temp_data_39_V_1_fu_900 = in_V_data_V127_dout.read().range(319, 312);
        temp_data_3_V_1_fu_756 = in_V_data_V127_dout.read().range(31, 24);
        temp_data_40_V_1_fu_904 = in_V_data_V127_dout.read().range(327, 320);
        temp_data_41_V_1_fu_908 = in_V_data_V127_dout.read().range(335, 328);
        temp_data_42_V_1_fu_912 = in_V_data_V127_dout.read().range(343, 336);
        temp_data_43_V_1_fu_916 = in_V_data_V127_dout.read().range(351, 344);
        temp_data_44_V_1_fu_920 = in_V_data_V127_dout.read().range(359, 352);
        temp_data_45_V_1_fu_924 = in_V_data_V127_dout.read().range(367, 360);
        temp_data_46_V_1_fu_928 = in_V_data_V127_dout.read().range(375, 368);
        temp_data_47_V_1_fu_932 = in_V_data_V127_dout.read().range(383, 376);
        temp_data_48_V_1_fu_936 = in_V_data_V127_dout.read().range(391, 384);
        temp_data_49_V_1_fu_940 = in_V_data_V127_dout.read().range(399, 392);
        temp_data_4_V_1_fu_760 = in_V_data_V127_dout.read().range(39, 32);
        temp_data_50_V_1_fu_944 = in_V_data_V127_dout.read().range(407, 400);
        temp_data_51_V_1_fu_948 = in_V_data_V127_dout.read().range(415, 408);
        temp_data_52_V_1_fu_952 = in_V_data_V127_dout.read().range(423, 416);
        temp_data_53_V_1_fu_956 = in_V_data_V127_dout.read().range(431, 424);
        temp_data_54_V_1_fu_960 = in_V_data_V127_dout.read().range(439, 432);
        temp_data_55_V_1_fu_964 = in_V_data_V127_dout.read().range(447, 440);
        temp_data_56_V_1_fu_968 = in_V_data_V127_dout.read().range(455, 448);
        temp_data_57_V_1_fu_972 = in_V_data_V127_dout.read().range(463, 456);
        temp_data_58_V_1_fu_976 = in_V_data_V127_dout.read().range(471, 464);
        temp_data_59_V_1_fu_980 = in_V_data_V127_dout.read().range(479, 472);
        temp_data_5_V_1_fu_764 = in_V_data_V127_dout.read().range(47, 40);
        temp_data_60_V_1_fu_984 = in_V_data_V127_dout.read().range(487, 480);
        temp_data_61_V_1_fu_988 = in_V_data_V127_dout.read().range(495, 488);
        temp_data_62_V_1_fu_992 = in_V_data_V127_dout.read().range(503, 496);
        temp_data_63_V_1_fu_996 = in_V_data_V127_dout.read().range(511, 504);
        temp_data_6_V_1_fu_768 = in_V_data_V127_dout.read().range(55, 48);
        temp_data_7_V_1_fu_772 = in_V_data_V127_dout.read().range(63, 56);
        temp_data_8_V_1_fu_776 = in_V_data_V127_dout.read().range(71, 64);
        temp_data_9_V_1_fu_780 = in_V_data_V127_dout.read().range(79, 72);
    }
}

void IdentityQuantAct146::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_V_id_V1280_status.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_V_id_V1_status.read())))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_0)) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_0) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter2.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter2.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_state7;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<3>) ("XXX");
            break;
    }
}

}

