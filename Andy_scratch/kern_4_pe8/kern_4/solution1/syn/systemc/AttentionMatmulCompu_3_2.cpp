#include "AttentionMatmulCompu_3.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void AttentionMatmulCompu_3::thread_ap_clk_no_reset_() {
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
                    !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_c_V_V_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_r_V_V_empty_n.read())))) {
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
                    !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_c_V_V_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_r_V_V_empty_n.read())))) {
            ap_enable_reg_pp0_iter5 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_4290_p2.read()))) {
        i_op_assign_6_reg_4257 = j_fu_4320_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_c_V_V_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_r_V_V_empty_n.read())))) {
        i_op_assign_6_reg_4257 = ap_const_lv13_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_4290_p2.read()))) {
        indvar_flatten_reg_4246 = indvar_flatten_next_fu_4295_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_c_V_V_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_r_V_V_empty_n.read())))) {
        indvar_flatten_reg_4246 = ap_const_lv29_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_c_V_V_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_r_V_V_empty_n.read())))) {
        bound_reg_12442 = bound_fu_11343_p2.read();
        tmp_85_cast1_reg_12437 = in_n_c_V_V_dout.read().range(15, 3);
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
        tmp_109_reg_12983_pp0_iter2_reg = tmp_109_reg_12983.read();
        tmp_93_reg_12727_pp0_iter2_reg = tmp_93_reg_12727.read();
        tmp_V_1439_reg_12721_pp0_iter2_reg = tmp_V_1439_reg_12721.read();
        tmp_V_1440_reg_12732_pp0_iter2_reg = tmp_V_1440_reg_12732.read();
        tmp_V_1471_reg_12977_pp0_iter2_reg = tmp_V_1471_reg_12977.read();
        tmp_V_1472_reg_12988_pp0_iter2_reg = tmp_V_1472_reg_12988.read();
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
        tmp_149_reg_13519 = tmp_149_fu_7946_p1.read();
        tmp_151_reg_13529 = tmp_151_fu_7975_p1.read();
        tmp_157_reg_13549 = tmp_157_fu_8062_p1.read();
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
        tmp_167_reg_13579 = tmp_167_fu_8207_p1.read();
        tmp_199_reg_13659 = tmp_199_fu_8642_p1.read();
        tmp_263_reg_13819 = tmp_263_fu_9541_p1.read();
        tmp_4_reg_13499 = tmp_4_fu_7853_p2.read();
        tmp_V_1319_load_reg_13489 = tmp_V_1319_fu_2980.read();
        tmp_V_1335_load_reg_13494 = tmp_V_1335_fu_3044.read();
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
        tmp_205_reg_13984 = tmp_205_fu_10127_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(exitcond_flatten_reg_12447.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        tmp_100_reg_12839 = in_buffer_2_V_V23_dout.read().range(7, 7);
        tmp_101_reg_12855 = in_buffer_2_V_V24_dout.read().range(7, 7);
        tmp_102_reg_12871 = in_buffer_2_V_V25_dout.read().range(7, 7);
        tmp_103_reg_12887 = in_buffer_2_V_V26_dout.read().range(7, 7);
        tmp_104_reg_12903 = in_buffer_2_V_V27_dout.read().range(7, 7);
        tmp_105_reg_12919 = in_buffer_2_V_V28_dout.read().range(7, 7);
        tmp_106_reg_12935 = in_buffer_2_V_V29_dout.read().range(7, 7);
        tmp_107_reg_12951 = in_buffer_2_V_V30_dout.read().range(7, 7);
        tmp_108_reg_12967 = in_buffer_2_V_V31_dout.read().range(7, 7);
        tmp_109_reg_12983 = in_buffer_2_V_V32_dout.read().range(7, 7);
        tmp_110_reg_12999 = in_buffer_2_V_V33_dout.read().range(7, 7);
        tmp_111_reg_13015 = in_buffer_2_V_V34_dout.read().range(7, 7);
        tmp_112_reg_13031 = in_buffer_2_V_V35_dout.read().range(7, 7);
        tmp_113_reg_13047 = in_buffer_2_V_V36_dout.read().range(7, 7);
        tmp_114_reg_13063 = in_buffer_2_V_V37_dout.read().range(7, 7);
        tmp_115_reg_13079 = in_buffer_2_V_V38_dout.read().range(7, 7);
        tmp_116_reg_13095 = in_buffer_2_V_V39_dout.read().range(7, 7);
        tmp_117_reg_13111 = in_buffer_2_V_V40_dout.read().range(7, 7);
        tmp_118_reg_13127 = in_buffer_2_V_V41_dout.read().range(7, 7);
        tmp_119_reg_13143 = in_buffer_2_V_V42_dout.read().range(7, 7);
        tmp_120_reg_13159 = in_buffer_2_V_V43_dout.read().range(7, 7);
        tmp_121_reg_13175 = in_buffer_2_V_V44_dout.read().range(7, 7);
        tmp_122_reg_13191 = in_buffer_2_V_V45_dout.read().range(7, 7);
        tmp_123_reg_13207 = in_buffer_2_V_V46_dout.read().range(7, 7);
        tmp_124_reg_13223 = in_buffer_2_V_V47_dout.read().range(7, 7);
        tmp_125_reg_13239 = in_buffer_2_V_V48_dout.read().range(7, 7);
        tmp_126_reg_13255 = in_buffer_2_V_V49_dout.read().range(7, 7);
        tmp_127_reg_13271 = in_buffer_2_V_V50_dout.read().range(7, 7);
        tmp_128_reg_13287 = in_buffer_2_V_V51_dout.read().range(7, 7);
        tmp_129_reg_13303 = in_buffer_2_V_V52_dout.read().range(7, 7);
        tmp_130_reg_13319 = in_buffer_2_V_V53_dout.read().range(7, 7);
        tmp_131_reg_13335 = in_buffer_2_V_V54_dout.read().range(7, 7);
        tmp_132_reg_13351 = in_buffer_2_V_V55_dout.read().range(7, 7);
        tmp_133_reg_13367 = in_buffer_2_V_V56_dout.read().range(7, 7);
        tmp_134_reg_13383 = in_buffer_2_V_V57_dout.read().range(7, 7);
        tmp_135_reg_13399 = in_buffer_2_V_V58_dout.read().range(7, 7);
        tmp_136_reg_13415 = in_buffer_2_V_V59_dout.read().range(7, 7);
        tmp_137_reg_13431 = in_buffer_2_V_V60_dout.read().range(7, 7);
        tmp_138_reg_13447 = in_buffer_2_V_V61_dout.read().range(7, 7);
        tmp_139_reg_13463 = in_buffer_2_V_V62_dout.read().range(7, 7);
        tmp_140_reg_13479 = in_buffer_2_V_V63_dout.read().range(7, 7);
        tmp_77_reg_12471 = in_buffer_2_V_V_dout.read().range(7, 7);
        tmp_78_reg_12487 = in_buffer_2_V_V1_dout.read().range(7, 7);
        tmp_79_reg_12503 = in_buffer_2_V_V2_dout.read().range(7, 7);
        tmp_80_reg_12519 = in_buffer_2_V_V3_dout.read().range(7, 7);
        tmp_81_reg_12535 = in_buffer_2_V_V4_dout.read().range(7, 7);
        tmp_82_reg_12551 = in_buffer_2_V_V5_dout.read().range(7, 7);
        tmp_83_reg_12567 = in_buffer_2_V_V6_dout.read().range(7, 7);
        tmp_84_reg_12583 = in_buffer_2_V_V7_dout.read().range(7, 7);
        tmp_85_reg_12599 = in_buffer_2_V_V8_dout.read().range(7, 7);
        tmp_86_reg_12615 = in_buffer_2_V_V9_dout.read().range(7, 7);
        tmp_87_reg_12631 = in_buffer_2_V_V10_dout.read().range(7, 7);
        tmp_88_reg_12647 = in_buffer_2_V_V11_dout.read().range(7, 7);
        tmp_89_reg_12663 = in_buffer_2_V_V12_dout.read().range(7, 7);
        tmp_90_reg_12679 = in_buffer_2_V_V13_dout.read().range(7, 7);
        tmp_91_reg_12695 = in_buffer_2_V_V14_dout.read().range(7, 7);
        tmp_92_reg_12711 = in_buffer_2_V_V15_dout.read().range(7, 7);
        tmp_93_reg_12727 = in_buffer_2_V_V16_dout.read().range(7, 7);
        tmp_94_reg_12743 = in_buffer_2_V_V17_dout.read().range(7, 7);
        tmp_95_reg_12759 = in_buffer_2_V_V18_dout.read().range(7, 7);
        tmp_96_reg_12775 = in_buffer_2_V_V19_dout.read().range(7, 7);
        tmp_97_reg_12791 = in_buffer_2_V_V20_dout.read().range(7, 7);
        tmp_98_reg_12807 = in_buffer_2_V_V21_dout.read().range(7, 7);
        tmp_99_reg_12823 = in_buffer_2_V_V22_dout.read().range(7, 7);
        tmp_V_1407_reg_12465 = in_buffer_2_V_V_dout.read();
        tmp_V_1408_reg_12476 = in_buffer_2_V_V256_dout.read();
        tmp_V_1409_reg_12481 = in_buffer_2_V_V1_dout.read();
        tmp_V_1410_reg_12492 = in_buffer_2_V_V25664_dout.read();
        tmp_V_1411_reg_12497 = in_buffer_2_V_V2_dout.read();
        tmp_V_1412_reg_12508 = in_buffer_2_V_V25665_dout.read();
        tmp_V_1413_reg_12513 = in_buffer_2_V_V3_dout.read();
        tmp_V_1414_reg_12524 = in_buffer_2_V_V25666_dout.read();
        tmp_V_1415_reg_12529 = in_buffer_2_V_V4_dout.read();
        tmp_V_1416_reg_12540 = in_buffer_2_V_V25667_dout.read();
        tmp_V_1417_reg_12545 = in_buffer_2_V_V5_dout.read();
        tmp_V_1418_reg_12556 = in_buffer_2_V_V25668_dout.read();
        tmp_V_1419_reg_12561 = in_buffer_2_V_V6_dout.read();
        tmp_V_1420_reg_12572 = in_buffer_2_V_V25669_dout.read();
        tmp_V_1421_reg_12577 = in_buffer_2_V_V7_dout.read();
        tmp_V_1422_reg_12588 = in_buffer_2_V_V25670_dout.read();
        tmp_V_1423_reg_12593 = in_buffer_2_V_V8_dout.read();
        tmp_V_1424_reg_12604 = in_buffer_2_V_V25671_dout.read();
        tmp_V_1425_reg_12609 = in_buffer_2_V_V9_dout.read();
        tmp_V_1426_reg_12620 = in_buffer_2_V_V25672_dout.read();
        tmp_V_1427_reg_12625 = in_buffer_2_V_V10_dout.read();
        tmp_V_1428_reg_12636 = in_buffer_2_V_V25673_dout.read();
        tmp_V_1429_reg_12641 = in_buffer_2_V_V11_dout.read();
        tmp_V_1430_reg_12652 = in_buffer_2_V_V25674_dout.read();
        tmp_V_1431_reg_12657 = in_buffer_2_V_V12_dout.read();
        tmp_V_1432_reg_12668 = in_buffer_2_V_V25675_dout.read();
        tmp_V_1433_reg_12673 = in_buffer_2_V_V13_dout.read();
        tmp_V_1434_reg_12684 = in_buffer_2_V_V25676_dout.read();
        tmp_V_1435_reg_12689 = in_buffer_2_V_V14_dout.read();
        tmp_V_1436_reg_12700 = in_buffer_2_V_V25677_dout.read();
        tmp_V_1437_reg_12705 = in_buffer_2_V_V15_dout.read();
        tmp_V_1438_reg_12716 = in_buffer_2_V_V25678_dout.read();
        tmp_V_1439_reg_12721 = in_buffer_2_V_V16_dout.read();
        tmp_V_1440_reg_12732 = in_buffer_2_V_V25679_dout.read();
        tmp_V_1441_reg_12737 = in_buffer_2_V_V17_dout.read();
        tmp_V_1442_reg_12748 = in_buffer_2_V_V25680_dout.read();
        tmp_V_1443_reg_12753 = in_buffer_2_V_V18_dout.read();
        tmp_V_1444_reg_12764 = in_buffer_2_V_V25681_dout.read();
        tmp_V_1445_reg_12769 = in_buffer_2_V_V19_dout.read();
        tmp_V_1446_reg_12780 = in_buffer_2_V_V25682_dout.read();
        tmp_V_1447_reg_12785 = in_buffer_2_V_V20_dout.read();
        tmp_V_1448_reg_12796 = in_buffer_2_V_V25683_dout.read();
        tmp_V_1449_reg_12801 = in_buffer_2_V_V21_dout.read();
        tmp_V_1450_reg_12812 = in_buffer_2_V_V25684_dout.read();
        tmp_V_1451_reg_12817 = in_buffer_2_V_V22_dout.read();
        tmp_V_1452_reg_12828 = in_buffer_2_V_V25685_dout.read();
        tmp_V_1453_reg_12833 = in_buffer_2_V_V23_dout.read();
        tmp_V_1454_reg_12844 = in_buffer_2_V_V25686_dout.read();
        tmp_V_1455_reg_12849 = in_buffer_2_V_V24_dout.read();
        tmp_V_1456_reg_12860 = in_buffer_2_V_V25687_dout.read();
        tmp_V_1457_reg_12865 = in_buffer_2_V_V25_dout.read();
        tmp_V_1458_reg_12876 = in_buffer_2_V_V25688_dout.read();
        tmp_V_1459_reg_12881 = in_buffer_2_V_V26_dout.read();
        tmp_V_1460_reg_12892 = in_buffer_2_V_V25689_dout.read();
        tmp_V_1461_reg_12897 = in_buffer_2_V_V27_dout.read();
        tmp_V_1462_reg_12908 = in_buffer_2_V_V25690_dout.read();
        tmp_V_1463_reg_12913 = in_buffer_2_V_V28_dout.read();
        tmp_V_1464_reg_12924 = in_buffer_2_V_V25691_dout.read();
        tmp_V_1465_reg_12929 = in_buffer_2_V_V29_dout.read();
        tmp_V_1466_reg_12940 = in_buffer_2_V_V25692_dout.read();
        tmp_V_1467_reg_12945 = in_buffer_2_V_V30_dout.read();
        tmp_V_1468_reg_12956 = in_buffer_2_V_V25693_dout.read();
        tmp_V_1469_reg_12961 = in_buffer_2_V_V31_dout.read();
        tmp_V_1470_reg_12972 = in_buffer_2_V_V25694_dout.read();
        tmp_V_1471_reg_12977 = in_buffer_2_V_V32_dout.read();
        tmp_V_1472_reg_12988 = in_buffer_2_V_V25695_dout.read();
        tmp_V_1473_reg_12993 = in_buffer_2_V_V33_dout.read();
        tmp_V_1474_reg_13004 = in_buffer_2_V_V25696_dout.read();
        tmp_V_1475_reg_13009 = in_buffer_2_V_V34_dout.read();
        tmp_V_1476_reg_13020 = in_buffer_2_V_V25697_dout.read();
        tmp_V_1477_reg_13025 = in_buffer_2_V_V35_dout.read();
        tmp_V_1478_reg_13036 = in_buffer_2_V_V25698_dout.read();
        tmp_V_1479_reg_13041 = in_buffer_2_V_V36_dout.read();
        tmp_V_1480_reg_13052 = in_buffer_2_V_V25699_dout.read();
        tmp_V_1481_reg_13057 = in_buffer_2_V_V37_dout.read();
        tmp_V_1482_reg_13068 = in_buffer_2_V_V256100_dout.read();
        tmp_V_1483_reg_13073 = in_buffer_2_V_V38_dout.read();
        tmp_V_1484_reg_13084 = in_buffer_2_V_V256101_dout.read();
        tmp_V_1485_reg_13089 = in_buffer_2_V_V39_dout.read();
        tmp_V_1486_reg_13100 = in_buffer_2_V_V256102_dout.read();
        tmp_V_1487_reg_13105 = in_buffer_2_V_V40_dout.read();
        tmp_V_1488_reg_13116 = in_buffer_2_V_V256103_dout.read();
        tmp_V_1489_reg_13121 = in_buffer_2_V_V41_dout.read();
        tmp_V_1490_reg_13132 = in_buffer_2_V_V256104_dout.read();
        tmp_V_1491_reg_13137 = in_buffer_2_V_V42_dout.read();
        tmp_V_1492_reg_13148 = in_buffer_2_V_V256105_dout.read();
        tmp_V_1493_reg_13153 = in_buffer_2_V_V43_dout.read();
        tmp_V_1494_reg_13164 = in_buffer_2_V_V256106_dout.read();
        tmp_V_1495_reg_13169 = in_buffer_2_V_V44_dout.read();
        tmp_V_1496_reg_13180 = in_buffer_2_V_V256107_dout.read();
        tmp_V_1497_reg_13185 = in_buffer_2_V_V45_dout.read();
        tmp_V_1498_reg_13196 = in_buffer_2_V_V256108_dout.read();
        tmp_V_1499_reg_13201 = in_buffer_2_V_V46_dout.read();
        tmp_V_1500_reg_13212 = in_buffer_2_V_V256109_dout.read();
        tmp_V_1501_reg_13217 = in_buffer_2_V_V47_dout.read();
        tmp_V_1502_reg_13228 = in_buffer_2_V_V256110_dout.read();
        tmp_V_1503_reg_13233 = in_buffer_2_V_V48_dout.read();
        tmp_V_1504_reg_13244 = in_buffer_2_V_V256111_dout.read();
        tmp_V_1505_reg_13249 = in_buffer_2_V_V49_dout.read();
        tmp_V_1506_reg_13260 = in_buffer_2_V_V256112_dout.read();
        tmp_V_1507_reg_13265 = in_buffer_2_V_V50_dout.read();
        tmp_V_1508_reg_13276 = in_buffer_2_V_V256113_dout.read();
        tmp_V_1509_reg_13281 = in_buffer_2_V_V51_dout.read();
        tmp_V_1510_reg_13292 = in_buffer_2_V_V256114_dout.read();
        tmp_V_1511_reg_13297 = in_buffer_2_V_V52_dout.read();
        tmp_V_1512_reg_13308 = in_buffer_2_V_V256115_dout.read();
        tmp_V_1513_reg_13313 = in_buffer_2_V_V53_dout.read();
        tmp_V_1514_reg_13324 = in_buffer_2_V_V256116_dout.read();
        tmp_V_1515_reg_13329 = in_buffer_2_V_V54_dout.read();
        tmp_V_1516_reg_13340 = in_buffer_2_V_V256117_dout.read();
        tmp_V_1517_reg_13345 = in_buffer_2_V_V55_dout.read();
        tmp_V_1518_reg_13356 = in_buffer_2_V_V256118_dout.read();
        tmp_V_1519_reg_13361 = in_buffer_2_V_V56_dout.read();
        tmp_V_1520_reg_13372 = in_buffer_2_V_V256119_dout.read();
        tmp_V_1521_reg_13377 = in_buffer_2_V_V57_dout.read();
        tmp_V_1522_reg_13388 = in_buffer_2_V_V256120_dout.read();
        tmp_V_1523_reg_13393 = in_buffer_2_V_V58_dout.read();
        tmp_V_1524_reg_13404 = in_buffer_2_V_V256121_dout.read();
        tmp_V_1525_reg_13409 = in_buffer_2_V_V59_dout.read();
        tmp_V_1526_reg_13420 = in_buffer_2_V_V256122_dout.read();
        tmp_V_1527_reg_13425 = in_buffer_2_V_V60_dout.read();
        tmp_V_1528_reg_13436 = in_buffer_2_V_V256123_dout.read();
        tmp_V_1529_reg_13441 = in_buffer_2_V_V61_dout.read();
        tmp_V_1530_reg_13452 = in_buffer_2_V_V256124_dout.read();
        tmp_V_1531_reg_13457 = in_buffer_2_V_V62_dout.read();
        tmp_V_1532_reg_13468 = in_buffer_2_V_V256125_dout.read();
        tmp_V_1533_reg_13473 = in_buffer_2_V_V63_dout.read();
        tmp_V_1534_reg_13484 = in_buffer_2_V_V256126_dout.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(tmp_s_reg_12456.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        tmp_V_1278_fu_2816 = in_buffer_1_V_V62_dout.read();
        tmp_V_1279_fu_2820 = in_buffer_1_V_V61_dout.read();
        tmp_V_1280_fu_2824 = in_buffer_1_V_V60_dout.read();
        tmp_V_1281_fu_2828 = in_buffer_1_V_V59_dout.read();
        tmp_V_1282_fu_2832 = in_buffer_1_V_V58_dout.read();
        tmp_V_1283_fu_2836 = in_buffer_1_V_V57_dout.read();
        tmp_V_1284_fu_2840 = in_buffer_1_V_V56_dout.read();
        tmp_V_1285_fu_2844 = in_buffer_1_V_V55_dout.read();
        tmp_V_1286_fu_2848 = in_buffer_1_V_V54_dout.read();
        tmp_V_1287_fu_2852 = in_buffer_1_V_V53_dout.read();
        tmp_V_1288_fu_2856 = in_buffer_1_V_V52_dout.read();
        tmp_V_1289_fu_2860 = in_buffer_1_V_V51_dout.read();
        tmp_V_1290_fu_2864 = in_buffer_1_V_V50_dout.read();
        tmp_V_1291_fu_2868 = in_buffer_1_V_V49_dout.read();
        tmp_V_1292_fu_2872 = in_buffer_1_V_V48_dout.read();
        tmp_V_1293_fu_2876 = in_buffer_1_V_V47_dout.read();
        tmp_V_1294_fu_2880 = in_buffer_1_V_V46_dout.read();
        tmp_V_1295_fu_2884 = in_buffer_1_V_V45_dout.read();
        tmp_V_1296_fu_2888 = in_buffer_1_V_V44_dout.read();
        tmp_V_1297_fu_2892 = in_buffer_1_V_V43_dout.read();
        tmp_V_1298_fu_2896 = in_buffer_1_V_V42_dout.read();
        tmp_V_1299_fu_2900 = in_buffer_1_V_V41_dout.read();
        tmp_V_1300_fu_2904 = in_buffer_1_V_V40_dout.read();
        tmp_V_1301_fu_2908 = in_buffer_1_V_V39_dout.read();
        tmp_V_1302_fu_2912 = in_buffer_1_V_V38_dout.read();
        tmp_V_1303_fu_2916 = in_buffer_1_V_V_dout.read();
        tmp_V_1304_fu_2920 = in_buffer_1_V_V1_dout.read();
        tmp_V_1305_fu_2924 = in_buffer_1_V_V2_dout.read();
        tmp_V_1306_fu_2928 = in_buffer_1_V_V3_dout.read();
        tmp_V_1307_fu_2932 = in_buffer_1_V_V4_dout.read();
        tmp_V_1308_fu_2936 = in_buffer_1_V_V5_dout.read();
        tmp_V_1309_fu_2940 = in_buffer_1_V_V6_dout.read();
        tmp_V_1310_fu_2944 = in_buffer_1_V_V7_dout.read();
        tmp_V_1311_fu_2948 = in_buffer_1_V_V8_dout.read();
        tmp_V_1312_fu_2952 = in_buffer_1_V_V9_dout.read();
        tmp_V_1313_fu_2956 = in_buffer_1_V_V10_dout.read();
        tmp_V_1314_fu_2960 = in_buffer_1_V_V11_dout.read();
        tmp_V_1315_fu_2964 = in_buffer_1_V_V12_dout.read();
        tmp_V_1316_fu_2968 = in_buffer_1_V_V13_dout.read();
        tmp_V_1317_fu_2972 = in_buffer_1_V_V14_dout.read();
        tmp_V_1318_fu_2976 = in_buffer_1_V_V15_dout.read();
        tmp_V_1319_fu_2980 = in_buffer_1_V_V16_dout.read();
        tmp_V_1320_fu_2984 = in_buffer_1_V_V17_dout.read();
        tmp_V_1321_fu_2988 = in_buffer_1_V_V18_dout.read();
        tmp_V_1322_fu_2992 = in_buffer_1_V_V19_dout.read();
        tmp_V_1323_fu_2996 = in_buffer_1_V_V20_dout.read();
        tmp_V_1324_fu_3000 = in_buffer_1_V_V21_dout.read();
        tmp_V_1325_fu_3004 = in_buffer_1_V_V22_dout.read();
        tmp_V_1326_fu_3008 = in_buffer_1_V_V23_dout.read();
        tmp_V_1327_fu_3012 = in_buffer_1_V_V24_dout.read();
        tmp_V_1328_fu_3016 = in_buffer_1_V_V25_dout.read();
        tmp_V_1329_fu_3020 = in_buffer_1_V_V26_dout.read();
        tmp_V_1330_fu_3024 = in_buffer_1_V_V27_dout.read();
        tmp_V_1331_fu_3028 = in_buffer_1_V_V28_dout.read();
        tmp_V_1332_fu_3032 = in_buffer_1_V_V29_dout.read();
        tmp_V_1333_fu_3036 = in_buffer_1_V_V30_dout.read();
        tmp_V_1334_fu_3040 = in_buffer_1_V_V31_dout.read();
        tmp_V_1335_fu_3044 = in_buffer_1_V_V32_dout.read();
        tmp_V_1336_fu_3048 = in_buffer_1_V_V33_dout.read();
        tmp_V_1337_fu_3052 = in_buffer_1_V_V34_dout.read();
        tmp_V_1338_fu_3056 = in_buffer_1_V_V35_dout.read();
        tmp_V_1339_fu_3060 = in_buffer_1_V_V36_dout.read();
        tmp_V_1340_fu_3064 = in_buffer_1_V_V37_dout.read();
        tmp_V_fu_2812 = in_buffer_1_V_V63_dout.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_12447_pp0_iter3_reg.read()))) {
        tmp_V_1535_reg_14064 = tmp_V_1535_fu_11287_p2.read();
        tmp_V_4_reg_14069 = tmp_V_4_fu_11329_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_4290_p2.read()))) {
        tmp_s_reg_12456 = tmp_s_fu_4314_p2.read();
    }
}

void AttentionMatmulCompu_3::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_c_V_V_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_r_V_V_empty_n.read())))) {
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

