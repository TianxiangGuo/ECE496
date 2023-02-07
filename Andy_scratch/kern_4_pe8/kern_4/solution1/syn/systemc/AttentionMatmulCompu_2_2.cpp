#include "AttentionMatmulCompu_2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void AttentionMatmulCompu_2::thread_ap_clk_no_reset_() {
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
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
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
                    !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_c_V_V8_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_r_V_V1_empty_n.read())))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            if (esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state2.read())) {
                ap_enable_reg_pp0_iter1 = (ap_condition_pp0_exit_iter0_state2.read() ^ ap_const_logic_1);
            } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
                ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
            }
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter2 = ap_enable_reg_pp0_iter1.read();
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
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter5 = ap_enable_reg_pp0_iter4.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_c_V_V8_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_r_V_V1_empty_n.read())))) {
            ap_enable_reg_pp0_iter5 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_4290_p2.read()))) {
        i_op_assign_5_reg_4257 = j_fu_4320_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_c_V_V8_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_r_V_V1_empty_n.read())))) {
        i_op_assign_5_reg_4257 = ap_const_lv13_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_4290_p2.read()))) {
        indvar_flatten_reg_4246 = indvar_flatten_next_fu_4295_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_c_V_V8_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_r_V_V1_empty_n.read())))) {
        indvar_flatten_reg_4246 = ap_const_lv29_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_c_V_V8_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_r_V_V1_empty_n.read())))) {
        bound_reg_12442 = bound_fu_11343_p2.read();
        tmp_81_cast1_reg_12437 = in_n_c_V_V8_dout.read().range(15, 3);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        exitcond_flatten_reg_12447 = exitcond_flatten_fu_4290_p2.read();
        exitcond_flatten_reg_12447_pp0_iter1_reg = exitcond_flatten_reg_12447.read();
    }
    if (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) {
        exitcond_flatten_reg_12447_pp0_iter2_reg = exitcond_flatten_reg_12447_pp0_iter1_reg.read();
        exitcond_flatten_reg_12447_pp0_iter3_reg = exitcond_flatten_reg_12447_pp0_iter2_reg.read();
        exitcond_flatten_reg_12447_pp0_iter4_reg = exitcond_flatten_reg_12447_pp0_iter3_reg.read();
        tmp57_reg_13904_pp0_iter3_reg = tmp57_reg_13904.read();
        tmp_286_reg_12727_pp0_iter2_reg = tmp_286_reg_12727.read();
        tmp_302_reg_12983_pp0_iter2_reg = tmp_302_reg_12983.read();
        tmp_V_1763_reg_12721_pp0_iter2_reg = tmp_V_1763_reg_12721.read();
        tmp_V_1764_reg_12732_pp0_iter2_reg = tmp_V_1764_reg_12732.read();
        tmp_V_1795_reg_12977_pp0_iter2_reg = tmp_V_1795_reg_12977.read();
        tmp_V_1796_reg_12988_pp0_iter2_reg = tmp_V_1796_reg_12988.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_12447_pp0_iter1_reg.read()))) {
        temp1_V_1_reg_13839 = temp1_V_1_fu_9636_p2.read();
        tmp11_reg_13854 = tmp11_fu_9694_p2.read();
        tmp13_reg_13859 = tmp13_fu_9700_p2.read();
        tmp15_reg_13864 = tmp15_fu_9706_p2.read();
        tmp1_reg_13844 = tmp1_fu_9650_p2.read();
        tmp26_reg_13869 = tmp26_fu_9768_p2.read();
        tmp28_reg_13874 = tmp28_fu_9774_p2.read();
        tmp29_reg_13879 = tmp29_fu_9780_p2.read();
        tmp32_reg_13884 = tmp32_fu_9786_p2.read();
        tmp33_reg_13889 = tmp33_fu_9792_p2.read();
        tmp35_reg_13894 = tmp35_fu_9798_p2.read();
        tmp37_reg_13899 = tmp37_fu_9804_p2.read();
        tmp57_reg_13904 = tmp57_fu_9930_p2.read();
        tmp59_reg_13909 = tmp59_fu_9936_p2.read();
        tmp5_reg_13849 = tmp5_fu_9664_p2.read();
        tmp60_reg_13914 = tmp60_fu_9942_p2.read();
        tmp63_reg_13919 = tmp63_fu_9948_p2.read();
        tmp64_reg_13924 = tmp64_fu_9954_p2.read();
        tmp66_reg_13929 = tmp66_fu_9960_p2.read();
        tmp67_reg_13934 = tmp67_fu_9966_p2.read();
        tmp71_reg_13939 = tmp71_fu_9972_p2.read();
        tmp72_reg_13944 = tmp72_fu_9978_p2.read();
        tmp74_reg_13949 = tmp74_fu_9984_p2.read();
        tmp75_reg_13954 = tmp75_fu_9990_p2.read();
        tmp78_reg_13959 = tmp78_fu_9996_p2.read();
        tmp79_reg_13964 = tmp79_fu_10002_p2.read();
        tmp81_reg_13969 = tmp81_fu_10008_p2.read();
        tmp83_reg_13974 = tmp83_fu_10014_p2.read();
        tmp_159_10_reg_13564 = tmp_159_10_fu_8143_p2.read();
        tmp_159_11_reg_13569 = tmp_159_11_fu_8172_p2.read();
        tmp_159_12_reg_13574 = tmp_159_12_fu_8201_p2.read();
        tmp_159_13_reg_13584 = tmp_159_13_fu_8230_p2.read();
        tmp_159_14_reg_13589 = tmp_159_14_fu_8259_p2.read();
        tmp_159_15_reg_13594 = tmp_159_15_fu_8288_p2.read();
        tmp_159_17_reg_13599 = tmp_159_17_fu_8317_p2.read();
        tmp_159_18_reg_13604 = tmp_159_18_fu_8346_p2.read();
        tmp_159_19_reg_13609 = tmp_159_19_fu_8375_p2.read();
        tmp_159_1_reg_13504 = tmp_159_1_fu_7882_p2.read();
        tmp_159_20_reg_13614 = tmp_159_20_fu_8404_p2.read();
        tmp_159_21_reg_13619 = tmp_159_21_fu_8433_p2.read();
        tmp_159_22_reg_13624 = tmp_159_22_fu_8462_p2.read();
        tmp_159_23_reg_13629 = tmp_159_23_fu_8491_p2.read();
        tmp_159_24_reg_13634 = tmp_159_24_fu_8520_p2.read();
        tmp_159_25_reg_13639 = tmp_159_25_fu_8549_p2.read();
        tmp_159_26_reg_13644 = tmp_159_26_fu_8578_p2.read();
        tmp_159_27_reg_13649 = tmp_159_27_fu_8607_p2.read();
        tmp_159_28_reg_13654 = tmp_159_28_fu_8636_p2.read();
        tmp_159_29_reg_13664 = tmp_159_29_fu_8665_p2.read();
        tmp_159_2_reg_13509 = tmp_159_2_fu_7911_p2.read();
        tmp_159_30_reg_13669 = tmp_159_30_fu_8694_p2.read();
        tmp_159_31_reg_13674 = tmp_159_31_fu_8723_p2.read();
        tmp_159_33_reg_13679 = tmp_159_33_fu_8752_p2.read();
        tmp_159_34_reg_13684 = tmp_159_34_fu_8781_p2.read();
        tmp_159_35_reg_13689 = tmp_159_35_fu_8810_p2.read();
        tmp_159_36_reg_13694 = tmp_159_36_fu_8839_p2.read();
        tmp_159_37_reg_13699 = tmp_159_37_fu_8868_p2.read();
        tmp_159_38_reg_13704 = tmp_159_38_fu_8897_p2.read();
        tmp_159_39_reg_13709 = tmp_159_39_fu_8926_p2.read();
        tmp_159_3_reg_13514 = tmp_159_3_fu_7940_p2.read();
        tmp_159_40_reg_13714 = tmp_159_40_fu_8955_p2.read();
        tmp_159_41_reg_13719 = tmp_159_41_fu_8984_p2.read();
        tmp_159_42_reg_13724 = tmp_159_42_fu_9013_p2.read();
        tmp_159_43_reg_13729 = tmp_159_43_fu_9042_p2.read();
        tmp_159_44_reg_13734 = tmp_159_44_fu_9071_p2.read();
        tmp_159_45_reg_13739 = tmp_159_45_fu_9100_p2.read();
        tmp_159_46_reg_13744 = tmp_159_46_fu_9129_p2.read();
        tmp_159_47_reg_13749 = tmp_159_47_fu_9158_p2.read();
        tmp_159_48_reg_13754 = tmp_159_48_fu_9187_p2.read();
        tmp_159_49_reg_13759 = tmp_159_49_fu_9216_p2.read();
        tmp_159_4_reg_13524 = tmp_159_4_fu_7969_p2.read();
        tmp_159_50_reg_13764 = tmp_159_50_fu_9245_p2.read();
        tmp_159_51_reg_13769 = tmp_159_51_fu_9274_p2.read();
        tmp_159_52_reg_13774 = tmp_159_52_fu_9303_p2.read();
        tmp_159_53_reg_13779 = tmp_159_53_fu_9332_p2.read();
        tmp_159_54_reg_13784 = tmp_159_54_fu_9361_p2.read();
        tmp_159_55_reg_13789 = tmp_159_55_fu_9390_p2.read();
        tmp_159_56_reg_13794 = tmp_159_56_fu_9419_p2.read();
        tmp_159_57_reg_13799 = tmp_159_57_fu_9448_p2.read();
        tmp_159_58_reg_13804 = tmp_159_58_fu_9477_p2.read();
        tmp_159_59_reg_13809 = tmp_159_59_fu_9506_p2.read();
        tmp_159_5_reg_13534 = tmp_159_5_fu_7998_p2.read();
        tmp_159_60_reg_13814 = tmp_159_60_fu_9535_p2.read();
        tmp_159_61_reg_13824 = tmp_159_61_fu_9564_p2.read();
        tmp_159_62_reg_13829 = tmp_159_62_fu_9593_p2.read();
        tmp_159_6_reg_13539 = tmp_159_6_fu_8027_p2.read();
        tmp_159_7_reg_13544 = tmp_159_7_fu_8056_p2.read();
        tmp_159_8_reg_13554 = tmp_159_8_fu_8085_p2.read();
        tmp_159_9_reg_13559 = tmp_159_9_fu_8114_p2.read();
        tmp_159_s_reg_13834 = tmp_159_s_fu_9622_p2.read();
        tmp_20_reg_13499 = tmp_20_fu_7853_p2.read();
        tmp_342_reg_13519 = tmp_342_fu_7946_p1.read();
        tmp_344_reg_13529 = tmp_344_fu_7975_p1.read();
        tmp_350_reg_13549 = tmp_350_fu_8062_p1.read();
        tmp_360_reg_13579 = tmp_360_fu_8207_p1.read();
        tmp_392_reg_13659 = tmp_392_fu_8642_p1.read();
        tmp_456_reg_13819 = tmp_456_fu_9541_p1.read();
        tmp_V_1643_load_reg_13489 = tmp_V_1643_fu_2980.read();
        tmp_V_1659_load_reg_13494 = tmp_V_1659_fu_3044.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_12447_pp0_iter2_reg.read()))) {
        temp2_V_s_reg_13994 = temp2_V_s_fu_10440_p2.read();
        tmp24_reg_13999 = tmp24_fu_10504_p2.read();
        tmp27_reg_14004 = tmp27_fu_10516_p2.read();
        tmp30_reg_14009 = tmp30_fu_10564_p2.read();
        tmp41_reg_14014 = tmp41_fu_10573_p2.read();
        tmp42_reg_14019 = tmp42_fu_10599_p2.read();
        tmp45_reg_14024 = tmp45_fu_10675_p2.read();
        tmp58_reg_14029 = tmp58_fu_10780_p2.read();
        tmp61_reg_14034 = tmp61_fu_10818_p2.read();
        tmp68_reg_14039 = tmp68_fu_10918_p2.read();
        tmp88_reg_14044 = tmp88_fu_10927_p2.read();
        tmp89_reg_14049 = tmp89_fu_10953_p2.read();
        tmp92_reg_14054 = tmp92_fu_11019_p2.read();
        tmp99_reg_14059 = tmp99_fu_11175_p2.read();
        tmp_159_16_reg_13979 = tmp_159_16_fu_10121_p2.read();
        tmp_159_32_reg_13989 = tmp_159_32_fu_10150_p2.read();
        tmp_398_reg_13984 = tmp_398_fu_10127_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_4290_p2.read()))) {
        tmp_16_reg_12456 = tmp_16_fu_4314_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(exitcond_flatten_reg_12447.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        tmp_270_reg_12471 = in_buffer_2_V_V18127_dout.read().range(7, 7);
        tmp_271_reg_12487 = in_buffer_2_V_V18128_dout.read().range(7, 7);
        tmp_272_reg_12503 = in_buffer_2_V_V18129_dout.read().range(7, 7);
        tmp_273_reg_12519 = in_buffer_2_V_V18130_dout.read().range(7, 7);
        tmp_274_reg_12535 = in_buffer_2_V_V18131_dout.read().range(7, 7);
        tmp_275_reg_12551 = in_buffer_2_V_V18132_dout.read().range(7, 7);
        tmp_276_reg_12567 = in_buffer_2_V_V18133_dout.read().range(7, 7);
        tmp_277_reg_12583 = in_buffer_2_V_V18134_dout.read().range(7, 7);
        tmp_278_reg_12599 = in_buffer_2_V_V18135_dout.read().range(7, 7);
        tmp_279_reg_12615 = in_buffer_2_V_V18136_dout.read().range(7, 7);
        tmp_280_reg_12631 = in_buffer_2_V_V18137_dout.read().range(7, 7);
        tmp_281_reg_12647 = in_buffer_2_V_V18138_dout.read().range(7, 7);
        tmp_282_reg_12663 = in_buffer_2_V_V18139_dout.read().range(7, 7);
        tmp_283_reg_12679 = in_buffer_2_V_V18140_dout.read().range(7, 7);
        tmp_284_reg_12695 = in_buffer_2_V_V18141_dout.read().range(7, 7);
        tmp_285_reg_12711 = in_buffer_2_V_V18142_dout.read().range(7, 7);
        tmp_286_reg_12727 = in_buffer_2_V_V18143_dout.read().range(7, 7);
        tmp_287_reg_12743 = in_buffer_2_V_V18144_dout.read().range(7, 7);
        tmp_288_reg_12759 = in_buffer_2_V_V18145_dout.read().range(7, 7);
        tmp_289_reg_12775 = in_buffer_2_V_V18146_dout.read().range(7, 7);
        tmp_290_reg_12791 = in_buffer_2_V_V18147_dout.read().range(7, 7);
        tmp_291_reg_12807 = in_buffer_2_V_V18148_dout.read().range(7, 7);
        tmp_292_reg_12823 = in_buffer_2_V_V18149_dout.read().range(7, 7);
        tmp_293_reg_12839 = in_buffer_2_V_V18150_dout.read().range(7, 7);
        tmp_294_reg_12855 = in_buffer_2_V_V18151_dout.read().range(7, 7);
        tmp_295_reg_12871 = in_buffer_2_V_V18152_dout.read().range(7, 7);
        tmp_296_reg_12887 = in_buffer_2_V_V18153_dout.read().range(7, 7);
        tmp_297_reg_12903 = in_buffer_2_V_V18154_dout.read().range(7, 7);
        tmp_298_reg_12919 = in_buffer_2_V_V18155_dout.read().range(7, 7);
        tmp_299_reg_12935 = in_buffer_2_V_V18156_dout.read().range(7, 7);
        tmp_300_reg_12951 = in_buffer_2_V_V18157_dout.read().range(7, 7);
        tmp_301_reg_12967 = in_buffer_2_V_V18158_dout.read().range(7, 7);
        tmp_302_reg_12983 = in_buffer_2_V_V18159_dout.read().range(7, 7);
        tmp_303_reg_12999 = in_buffer_2_V_V18160_dout.read().range(7, 7);
        tmp_304_reg_13015 = in_buffer_2_V_V18161_dout.read().range(7, 7);
        tmp_305_reg_13031 = in_buffer_2_V_V18162_dout.read().range(7, 7);
        tmp_306_reg_13047 = in_buffer_2_V_V18163_dout.read().range(7, 7);
        tmp_307_reg_13063 = in_buffer_2_V_V18164_dout.read().range(7, 7);
        tmp_308_reg_13079 = in_buffer_2_V_V18165_dout.read().range(7, 7);
        tmp_309_reg_13095 = in_buffer_2_V_V18166_dout.read().range(7, 7);
        tmp_310_reg_13111 = in_buffer_2_V_V18167_dout.read().range(7, 7);
        tmp_311_reg_13127 = in_buffer_2_V_V18168_dout.read().range(7, 7);
        tmp_312_reg_13143 = in_buffer_2_V_V18169_dout.read().range(7, 7);
        tmp_313_reg_13159 = in_buffer_2_V_V18170_dout.read().range(7, 7);
        tmp_314_reg_13175 = in_buffer_2_V_V18171_dout.read().range(7, 7);
        tmp_315_reg_13191 = in_buffer_2_V_V18172_dout.read().range(7, 7);
        tmp_316_reg_13207 = in_buffer_2_V_V18173_dout.read().range(7, 7);
        tmp_317_reg_13223 = in_buffer_2_V_V18174_dout.read().range(7, 7);
        tmp_318_reg_13239 = in_buffer_2_V_V18175_dout.read().range(7, 7);
        tmp_319_reg_13255 = in_buffer_2_V_V18176_dout.read().range(7, 7);
        tmp_320_reg_13271 = in_buffer_2_V_V18177_dout.read().range(7, 7);
        tmp_321_reg_13287 = in_buffer_2_V_V18178_dout.read().range(7, 7);
        tmp_322_reg_13303 = in_buffer_2_V_V18179_dout.read().range(7, 7);
        tmp_323_reg_13319 = in_buffer_2_V_V18180_dout.read().range(7, 7);
        tmp_324_reg_13335 = in_buffer_2_V_V18181_dout.read().range(7, 7);
        tmp_325_reg_13351 = in_buffer_2_V_V18182_dout.read().range(7, 7);
        tmp_326_reg_13367 = in_buffer_2_V_V18183_dout.read().range(7, 7);
        tmp_327_reg_13383 = in_buffer_2_V_V18184_dout.read().range(7, 7);
        tmp_328_reg_13399 = in_buffer_2_V_V18185_dout.read().range(7, 7);
        tmp_329_reg_13415 = in_buffer_2_V_V18186_dout.read().range(7, 7);
        tmp_330_reg_13431 = in_buffer_2_V_V18187_dout.read().range(7, 7);
        tmp_331_reg_13447 = in_buffer_2_V_V18188_dout.read().range(7, 7);
        tmp_332_reg_13463 = in_buffer_2_V_V18189_dout.read().range(7, 7);
        tmp_333_reg_13479 = in_buffer_2_V_V18190_dout.read().range(7, 7);
        tmp_V_1731_reg_12465 = in_buffer_2_V_V18127_dout.read();
        tmp_V_1732_reg_12476 = in_buffer_2_V_V18257_dout.read();
        tmp_V_1733_reg_12481 = in_buffer_2_V_V18128_dout.read();
        tmp_V_1734_reg_12492 = in_buffer_2_V_V18257191_dout.read();
        tmp_V_1735_reg_12497 = in_buffer_2_V_V18129_dout.read();
        tmp_V_1736_reg_12508 = in_buffer_2_V_V18257192_dout.read();
        tmp_V_1737_reg_12513 = in_buffer_2_V_V18130_dout.read();
        tmp_V_1738_reg_12524 = in_buffer_2_V_V18257193_dout.read();
        tmp_V_1739_reg_12529 = in_buffer_2_V_V18131_dout.read();
        tmp_V_1740_reg_12540 = in_buffer_2_V_V18257194_dout.read();
        tmp_V_1741_reg_12545 = in_buffer_2_V_V18132_dout.read();
        tmp_V_1742_reg_12556 = in_buffer_2_V_V18257195_dout.read();
        tmp_V_1743_reg_12561 = in_buffer_2_V_V18133_dout.read();
        tmp_V_1744_reg_12572 = in_buffer_2_V_V18257196_dout.read();
        tmp_V_1745_reg_12577 = in_buffer_2_V_V18134_dout.read();
        tmp_V_1746_reg_12588 = in_buffer_2_V_V18257197_dout.read();
        tmp_V_1747_reg_12593 = in_buffer_2_V_V18135_dout.read();
        tmp_V_1748_reg_12604 = in_buffer_2_V_V18257198_dout.read();
        tmp_V_1749_reg_12609 = in_buffer_2_V_V18136_dout.read();
        tmp_V_1750_reg_12620 = in_buffer_2_V_V18257199_dout.read();
        tmp_V_1751_reg_12625 = in_buffer_2_V_V18137_dout.read();
        tmp_V_1752_reg_12636 = in_buffer_2_V_V18257200_dout.read();
        tmp_V_1753_reg_12641 = in_buffer_2_V_V18138_dout.read();
        tmp_V_1754_reg_12652 = in_buffer_2_V_V18257201_dout.read();
        tmp_V_1755_reg_12657 = in_buffer_2_V_V18139_dout.read();
        tmp_V_1756_reg_12668 = in_buffer_2_V_V18257202_dout.read();
        tmp_V_1757_reg_12673 = in_buffer_2_V_V18140_dout.read();
        tmp_V_1758_reg_12684 = in_buffer_2_V_V18257203_dout.read();
        tmp_V_1759_reg_12689 = in_buffer_2_V_V18141_dout.read();
        tmp_V_1760_reg_12700 = in_buffer_2_V_V18257204_dout.read();
        tmp_V_1761_reg_12705 = in_buffer_2_V_V18142_dout.read();
        tmp_V_1762_reg_12716 = in_buffer_2_V_V18257205_dout.read();
        tmp_V_1763_reg_12721 = in_buffer_2_V_V18143_dout.read();
        tmp_V_1764_reg_12732 = in_buffer_2_V_V18257206_dout.read();
        tmp_V_1765_reg_12737 = in_buffer_2_V_V18144_dout.read();
        tmp_V_1766_reg_12748 = in_buffer_2_V_V18257207_dout.read();
        tmp_V_1767_reg_12753 = in_buffer_2_V_V18145_dout.read();
        tmp_V_1768_reg_12764 = in_buffer_2_V_V18257208_dout.read();
        tmp_V_1769_reg_12769 = in_buffer_2_V_V18146_dout.read();
        tmp_V_1770_reg_12780 = in_buffer_2_V_V18257209_dout.read();
        tmp_V_1771_reg_12785 = in_buffer_2_V_V18147_dout.read();
        tmp_V_1772_reg_12796 = in_buffer_2_V_V18257210_dout.read();
        tmp_V_1773_reg_12801 = in_buffer_2_V_V18148_dout.read();
        tmp_V_1774_reg_12812 = in_buffer_2_V_V18257211_dout.read();
        tmp_V_1775_reg_12817 = in_buffer_2_V_V18149_dout.read();
        tmp_V_1776_reg_12828 = in_buffer_2_V_V18257212_dout.read();
        tmp_V_1777_reg_12833 = in_buffer_2_V_V18150_dout.read();
        tmp_V_1778_reg_12844 = in_buffer_2_V_V18257213_dout.read();
        tmp_V_1779_reg_12849 = in_buffer_2_V_V18151_dout.read();
        tmp_V_1780_reg_12860 = in_buffer_2_V_V18257214_dout.read();
        tmp_V_1781_reg_12865 = in_buffer_2_V_V18152_dout.read();
        tmp_V_1782_reg_12876 = in_buffer_2_V_V18257215_dout.read();
        tmp_V_1783_reg_12881 = in_buffer_2_V_V18153_dout.read();
        tmp_V_1784_reg_12892 = in_buffer_2_V_V18257216_dout.read();
        tmp_V_1785_reg_12897 = in_buffer_2_V_V18154_dout.read();
        tmp_V_1786_reg_12908 = in_buffer_2_V_V18257217_dout.read();
        tmp_V_1787_reg_12913 = in_buffer_2_V_V18155_dout.read();
        tmp_V_1788_reg_12924 = in_buffer_2_V_V18257218_dout.read();
        tmp_V_1789_reg_12929 = in_buffer_2_V_V18156_dout.read();
        tmp_V_1790_reg_12940 = in_buffer_2_V_V18257219_dout.read();
        tmp_V_1791_reg_12945 = in_buffer_2_V_V18157_dout.read();
        tmp_V_1792_reg_12956 = in_buffer_2_V_V18257220_dout.read();
        tmp_V_1793_reg_12961 = in_buffer_2_V_V18158_dout.read();
        tmp_V_1794_reg_12972 = in_buffer_2_V_V18257221_dout.read();
        tmp_V_1795_reg_12977 = in_buffer_2_V_V18159_dout.read();
        tmp_V_1796_reg_12988 = in_buffer_2_V_V18257222_dout.read();
        tmp_V_1797_reg_12993 = in_buffer_2_V_V18160_dout.read();
        tmp_V_1798_reg_13004 = in_buffer_2_V_V18257223_dout.read();
        tmp_V_1799_reg_13009 = in_buffer_2_V_V18161_dout.read();
        tmp_V_1800_reg_13020 = in_buffer_2_V_V18257224_dout.read();
        tmp_V_1801_reg_13025 = in_buffer_2_V_V18162_dout.read();
        tmp_V_1802_reg_13036 = in_buffer_2_V_V18257225_dout.read();
        tmp_V_1803_reg_13041 = in_buffer_2_V_V18163_dout.read();
        tmp_V_1804_reg_13052 = in_buffer_2_V_V18257226_dout.read();
        tmp_V_1805_reg_13057 = in_buffer_2_V_V18164_dout.read();
        tmp_V_1806_reg_13068 = in_buffer_2_V_V18257227_dout.read();
        tmp_V_1807_reg_13073 = in_buffer_2_V_V18165_dout.read();
        tmp_V_1808_reg_13084 = in_buffer_2_V_V18257228_dout.read();
        tmp_V_1809_reg_13089 = in_buffer_2_V_V18166_dout.read();
        tmp_V_1810_reg_13100 = in_buffer_2_V_V18257229_dout.read();
        tmp_V_1811_reg_13105 = in_buffer_2_V_V18167_dout.read();
        tmp_V_1812_reg_13116 = in_buffer_2_V_V18257230_dout.read();
        tmp_V_1813_reg_13121 = in_buffer_2_V_V18168_dout.read();
        tmp_V_1814_reg_13132 = in_buffer_2_V_V18257231_dout.read();
        tmp_V_1815_reg_13137 = in_buffer_2_V_V18169_dout.read();
        tmp_V_1816_reg_13148 = in_buffer_2_V_V18257232_dout.read();
        tmp_V_1817_reg_13153 = in_buffer_2_V_V18170_dout.read();
        tmp_V_1818_reg_13164 = in_buffer_2_V_V18257233_dout.read();
        tmp_V_1819_reg_13169 = in_buffer_2_V_V18171_dout.read();
        tmp_V_1820_reg_13180 = in_buffer_2_V_V18257234_dout.read();
        tmp_V_1821_reg_13185 = in_buffer_2_V_V18172_dout.read();
        tmp_V_1822_reg_13196 = in_buffer_2_V_V18257235_dout.read();
        tmp_V_1823_reg_13201 = in_buffer_2_V_V18173_dout.read();
        tmp_V_1824_reg_13212 = in_buffer_2_V_V18257236_dout.read();
        tmp_V_1825_reg_13217 = in_buffer_2_V_V18174_dout.read();
        tmp_V_1826_reg_13228 = in_buffer_2_V_V18257237_dout.read();
        tmp_V_1827_reg_13233 = in_buffer_2_V_V18175_dout.read();
        tmp_V_1828_reg_13244 = in_buffer_2_V_V18257238_dout.read();
        tmp_V_1829_reg_13249 = in_buffer_2_V_V18176_dout.read();
        tmp_V_1830_reg_13260 = in_buffer_2_V_V18257239_dout.read();
        tmp_V_1831_reg_13265 = in_buffer_2_V_V18177_dout.read();
        tmp_V_1832_reg_13276 = in_buffer_2_V_V18257240_dout.read();
        tmp_V_1833_reg_13281 = in_buffer_2_V_V18178_dout.read();
        tmp_V_1834_reg_13292 = in_buffer_2_V_V18257241_dout.read();
        tmp_V_1835_reg_13297 = in_buffer_2_V_V18179_dout.read();
        tmp_V_1836_reg_13308 = in_buffer_2_V_V18257242_dout.read();
        tmp_V_1837_reg_13313 = in_buffer_2_V_V18180_dout.read();
        tmp_V_1838_reg_13324 = in_buffer_2_V_V18257243_dout.read();
        tmp_V_1839_reg_13329 = in_buffer_2_V_V18181_dout.read();
        tmp_V_1840_reg_13340 = in_buffer_2_V_V18257244_dout.read();
        tmp_V_1841_reg_13345 = in_buffer_2_V_V18182_dout.read();
        tmp_V_1842_reg_13356 = in_buffer_2_V_V18257245_dout.read();
        tmp_V_1843_reg_13361 = in_buffer_2_V_V18183_dout.read();
        tmp_V_1844_reg_13372 = in_buffer_2_V_V18257246_dout.read();
        tmp_V_1845_reg_13377 = in_buffer_2_V_V18184_dout.read();
        tmp_V_1846_reg_13388 = in_buffer_2_V_V18257247_dout.read();
        tmp_V_1847_reg_13393 = in_buffer_2_V_V18185_dout.read();
        tmp_V_1848_reg_13404 = in_buffer_2_V_V18257248_dout.read();
        tmp_V_1849_reg_13409 = in_buffer_2_V_V18186_dout.read();
        tmp_V_1850_reg_13420 = in_buffer_2_V_V18257249_dout.read();
        tmp_V_1851_reg_13425 = in_buffer_2_V_V18187_dout.read();
        tmp_V_1852_reg_13436 = in_buffer_2_V_V18257250_dout.read();
        tmp_V_1853_reg_13441 = in_buffer_2_V_V18188_dout.read();
        tmp_V_1854_reg_13452 = in_buffer_2_V_V18257251_dout.read();
        tmp_V_1855_reg_13457 = in_buffer_2_V_V18189_dout.read();
        tmp_V_1856_reg_13468 = in_buffer_2_V_V18257252_dout.read();
        tmp_V_1857_reg_13473 = in_buffer_2_V_V18190_dout.read();
        tmp_V_1858_reg_13484 = in_buffer_2_V_V18257253_dout.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(tmp_16_reg_12456.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        tmp_V_1602_fu_2816 = in_buffer_1_V_V15126_dout.read();
        tmp_V_1603_fu_2820 = in_buffer_1_V_V15125_dout.read();
        tmp_V_1604_fu_2824 = in_buffer_1_V_V15124_dout.read();
        tmp_V_1605_fu_2828 = in_buffer_1_V_V15123_dout.read();
        tmp_V_1606_fu_2832 = in_buffer_1_V_V15122_dout.read();
        tmp_V_1607_fu_2836 = in_buffer_1_V_V15121_dout.read();
        tmp_V_1608_fu_2840 = in_buffer_1_V_V15120_dout.read();
        tmp_V_1609_fu_2844 = in_buffer_1_V_V15119_dout.read();
        tmp_V_1610_fu_2848 = in_buffer_1_V_V15118_dout.read();
        tmp_V_1611_fu_2852 = in_buffer_1_V_V15117_dout.read();
        tmp_V_1612_fu_2856 = in_buffer_1_V_V15116_dout.read();
        tmp_V_1613_fu_2860 = in_buffer_1_V_V15115_dout.read();
        tmp_V_1614_fu_2864 = in_buffer_1_V_V15114_dout.read();
        tmp_V_1615_fu_2868 = in_buffer_1_V_V15113_dout.read();
        tmp_V_1616_fu_2872 = in_buffer_1_V_V15112_dout.read();
        tmp_V_1617_fu_2876 = in_buffer_1_V_V15111_dout.read();
        tmp_V_1618_fu_2880 = in_buffer_1_V_V15110_dout.read();
        tmp_V_1619_fu_2884 = in_buffer_1_V_V15109_dout.read();
        tmp_V_1620_fu_2888 = in_buffer_1_V_V15108_dout.read();
        tmp_V_1621_fu_2892 = in_buffer_1_V_V15107_dout.read();
        tmp_V_1622_fu_2896 = in_buffer_1_V_V15106_dout.read();
        tmp_V_1623_fu_2900 = in_buffer_1_V_V15105_dout.read();
        tmp_V_1624_fu_2904 = in_buffer_1_V_V15104_dout.read();
        tmp_V_1625_fu_2908 = in_buffer_1_V_V15103_dout.read();
        tmp_V_1626_fu_2912 = in_buffer_1_V_V15102_dout.read();
        tmp_V_1627_fu_2916 = in_buffer_1_V_V1564_dout.read();
        tmp_V_1628_fu_2920 = in_buffer_1_V_V1565_dout.read();
        tmp_V_1629_fu_2924 = in_buffer_1_V_V1566_dout.read();
        tmp_V_1630_fu_2928 = in_buffer_1_V_V1567_dout.read();
        tmp_V_1631_fu_2932 = in_buffer_1_V_V1568_dout.read();
        tmp_V_1632_fu_2936 = in_buffer_1_V_V1569_dout.read();
        tmp_V_1633_fu_2940 = in_buffer_1_V_V1570_dout.read();
        tmp_V_1634_fu_2944 = in_buffer_1_V_V1571_dout.read();
        tmp_V_1635_fu_2948 = in_buffer_1_V_V1572_dout.read();
        tmp_V_1636_fu_2952 = in_buffer_1_V_V1573_dout.read();
        tmp_V_1637_fu_2956 = in_buffer_1_V_V1574_dout.read();
        tmp_V_1638_fu_2960 = in_buffer_1_V_V1575_dout.read();
        tmp_V_1639_fu_2964 = in_buffer_1_V_V1576_dout.read();
        tmp_V_1640_fu_2968 = in_buffer_1_V_V1577_dout.read();
        tmp_V_1641_fu_2972 = in_buffer_1_V_V1578_dout.read();
        tmp_V_1642_fu_2976 = in_buffer_1_V_V1579_dout.read();
        tmp_V_1643_fu_2980 = in_buffer_1_V_V1580_dout.read();
        tmp_V_1644_fu_2984 = in_buffer_1_V_V1581_dout.read();
        tmp_V_1645_fu_2988 = in_buffer_1_V_V1582_dout.read();
        tmp_V_1646_fu_2992 = in_buffer_1_V_V1583_dout.read();
        tmp_V_1647_fu_2996 = in_buffer_1_V_V1584_dout.read();
        tmp_V_1648_fu_3000 = in_buffer_1_V_V1585_dout.read();
        tmp_V_1649_fu_3004 = in_buffer_1_V_V1586_dout.read();
        tmp_V_1650_fu_3008 = in_buffer_1_V_V1587_dout.read();
        tmp_V_1651_fu_3012 = in_buffer_1_V_V1588_dout.read();
        tmp_V_1652_fu_3016 = in_buffer_1_V_V1589_dout.read();
        tmp_V_1653_fu_3020 = in_buffer_1_V_V1590_dout.read();
        tmp_V_1654_fu_3024 = in_buffer_1_V_V1591_dout.read();
        tmp_V_1655_fu_3028 = in_buffer_1_V_V1592_dout.read();
        tmp_V_1656_fu_3032 = in_buffer_1_V_V1593_dout.read();
        tmp_V_1657_fu_3036 = in_buffer_1_V_V1594_dout.read();
        tmp_V_1658_fu_3040 = in_buffer_1_V_V1595_dout.read();
        tmp_V_1659_fu_3044 = in_buffer_1_V_V1596_dout.read();
        tmp_V_1660_fu_3048 = in_buffer_1_V_V1597_dout.read();
        tmp_V_1661_fu_3052 = in_buffer_1_V_V1598_dout.read();
        tmp_V_1662_fu_3056 = in_buffer_1_V_V1599_dout.read();
        tmp_V_1663_fu_3060 = in_buffer_1_V_V15100_dout.read();
        tmp_V_1664_fu_3064 = in_buffer_1_V_V15101_dout.read();
        tmp_V_fu_2812 = in_buffer_1_V_V15127_dout.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_12447_pp0_iter3_reg.read()))) {
        tmp_V_1859_reg_14064 = tmp_V_1859_fu_11287_p2.read();
        tmp_V_3_reg_14069 = tmp_V_3_fu_11329_p2.read();
    }
}

void AttentionMatmulCompu_2::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_c_V_V8_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_r_V_V1_empty_n.read())))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter4.read(), ap_const_logic_0)) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_flatten_fu_4290_p2.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter4.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_flatten_fu_4290_p2.read()) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_state8;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm = "XXX";
            break;
    }
}

}

