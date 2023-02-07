#include "AttentionMatmulCompu.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void AttentionMatmulCompu::thread_ap_clk_no_reset_() {
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
                    !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_c_V_V10_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_r_V_V3_empty_n.read())))) {
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
                    !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_c_V_V10_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_r_V_V3_empty_n.read())))) {
            ap_enable_reg_pp0_iter5 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_4290_p2.read()))) {
        i_op_assign_3_reg_4257 = j_fu_4320_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_c_V_V10_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_r_V_V3_empty_n.read())))) {
        i_op_assign_3_reg_4257 = ap_const_lv13_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_4290_p2.read()))) {
        indvar_flatten_reg_4246 = indvar_flatten_next_fu_4295_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_c_V_V10_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_r_V_V3_empty_n.read())))) {
        indvar_flatten_reg_4246 = ap_const_lv29_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_c_V_V10_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_r_V_V3_empty_n.read())))) {
        bound_reg_12442 = bound_fu_11343_p2.read();
        tmp_73_cast1_reg_12437 = in_n_c_V_V10_dout.read().range(15, 3);
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
        tmp_672_reg_12727_pp0_iter2_reg = tmp_672_reg_12727.read();
        tmp_688_reg_12983_pp0_iter2_reg = tmp_688_reg_12983.read();
        tmp_V_2411_reg_12721_pp0_iter2_reg = tmp_V_2411_reg_12721.read();
        tmp_V_2412_reg_12732_pp0_iter2_reg = tmp_V_2412_reg_12732.read();
        tmp_V_2443_reg_12977_pp0_iter2_reg = tmp_V_2443_reg_12977.read();
        tmp_V_2444_reg_12988_pp0_iter2_reg = tmp_V_2444_reg_12988.read();
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
        tmp_159_10_reg_13569 = tmp_159_10_fu_8172_p2.read();
        tmp_159_11_reg_13574 = tmp_159_11_fu_8201_p2.read();
        tmp_159_12_reg_13584 = tmp_159_12_fu_8230_p2.read();
        tmp_159_13_reg_13589 = tmp_159_13_fu_8259_p2.read();
        tmp_159_14_reg_13594 = tmp_159_14_fu_8288_p2.read();
        tmp_159_16_reg_13599 = tmp_159_16_fu_8317_p2.read();
        tmp_159_17_reg_13604 = tmp_159_17_fu_8346_p2.read();
        tmp_159_18_reg_13609 = tmp_159_18_fu_8375_p2.read();
        tmp_159_19_reg_13614 = tmp_159_19_fu_8404_p2.read();
        tmp_159_1_reg_13504 = tmp_159_1_fu_7882_p2.read();
        tmp_159_20_reg_13619 = tmp_159_20_fu_8433_p2.read();
        tmp_159_21_reg_13624 = tmp_159_21_fu_8462_p2.read();
        tmp_159_22_reg_13629 = tmp_159_22_fu_8491_p2.read();
        tmp_159_23_reg_13634 = tmp_159_23_fu_8520_p2.read();
        tmp_159_24_reg_13639 = tmp_159_24_fu_8549_p2.read();
        tmp_159_25_reg_13644 = tmp_159_25_fu_8578_p2.read();
        tmp_159_26_reg_13649 = tmp_159_26_fu_8607_p2.read();
        tmp_159_27_reg_13654 = tmp_159_27_fu_8636_p2.read();
        tmp_159_28_reg_13664 = tmp_159_28_fu_8665_p2.read();
        tmp_159_29_reg_13669 = tmp_159_29_fu_8694_p2.read();
        tmp_159_2_reg_13509 = tmp_159_2_fu_7911_p2.read();
        tmp_159_30_reg_13674 = tmp_159_30_fu_8723_p2.read();
        tmp_159_32_reg_13679 = tmp_159_32_fu_8752_p2.read();
        tmp_159_33_reg_13684 = tmp_159_33_fu_8781_p2.read();
        tmp_159_34_reg_13689 = tmp_159_34_fu_8810_p2.read();
        tmp_159_35_reg_13694 = tmp_159_35_fu_8839_p2.read();
        tmp_159_36_reg_13699 = tmp_159_36_fu_8868_p2.read();
        tmp_159_37_reg_13704 = tmp_159_37_fu_8897_p2.read();
        tmp_159_38_reg_13709 = tmp_159_38_fu_8926_p2.read();
        tmp_159_39_reg_13714 = tmp_159_39_fu_8955_p2.read();
        tmp_159_3_reg_13514 = tmp_159_3_fu_7940_p2.read();
        tmp_159_40_reg_13719 = tmp_159_40_fu_8984_p2.read();
        tmp_159_41_reg_13724 = tmp_159_41_fu_9013_p2.read();
        tmp_159_42_reg_13729 = tmp_159_42_fu_9042_p2.read();
        tmp_159_43_reg_13734 = tmp_159_43_fu_9071_p2.read();
        tmp_159_44_reg_13739 = tmp_159_44_fu_9100_p2.read();
        tmp_159_45_reg_13744 = tmp_159_45_fu_9129_p2.read();
        tmp_159_46_reg_13749 = tmp_159_46_fu_9158_p2.read();
        tmp_159_47_reg_13754 = tmp_159_47_fu_9187_p2.read();
        tmp_159_48_reg_13759 = tmp_159_48_fu_9216_p2.read();
        tmp_159_49_reg_13764 = tmp_159_49_fu_9245_p2.read();
        tmp_159_4_reg_13524 = tmp_159_4_fu_7969_p2.read();
        tmp_159_50_reg_13769 = tmp_159_50_fu_9274_p2.read();
        tmp_159_51_reg_13774 = tmp_159_51_fu_9303_p2.read();
        tmp_159_52_reg_13779 = tmp_159_52_fu_9332_p2.read();
        tmp_159_53_reg_13784 = tmp_159_53_fu_9361_p2.read();
        tmp_159_54_reg_13789 = tmp_159_54_fu_9390_p2.read();
        tmp_159_55_reg_13794 = tmp_159_55_fu_9419_p2.read();
        tmp_159_56_reg_13799 = tmp_159_56_fu_9448_p2.read();
        tmp_159_57_reg_13804 = tmp_159_57_fu_9477_p2.read();
        tmp_159_58_reg_13809 = tmp_159_58_fu_9506_p2.read();
        tmp_159_59_reg_13814 = tmp_159_59_fu_9535_p2.read();
        tmp_159_5_reg_13534 = tmp_159_5_fu_7998_p2.read();
        tmp_159_60_reg_13824 = tmp_159_60_fu_9564_p2.read();
        tmp_159_61_reg_13829 = tmp_159_61_fu_9593_p2.read();
        tmp_159_62_reg_13834 = tmp_159_62_fu_9622_p2.read();
        tmp_159_6_reg_13539 = tmp_159_6_fu_8027_p2.read();
        tmp_159_7_reg_13544 = tmp_159_7_fu_8056_p2.read();
        tmp_159_8_reg_13554 = tmp_159_8_fu_8085_p2.read();
        tmp_159_9_reg_13559 = tmp_159_9_fu_8114_p2.read();
        tmp_159_s_reg_13564 = tmp_159_s_fu_8143_p2.read();
        tmp_24_reg_13499 = tmp_24_fu_7853_p2.read();
        tmp_728_reg_13519 = tmp_728_fu_7946_p1.read();
        tmp_730_reg_13529 = tmp_730_fu_7975_p1.read();
        tmp_736_reg_13549 = tmp_736_fu_8062_p1.read();
        tmp_746_reg_13579 = tmp_746_fu_8207_p1.read();
        tmp_778_reg_13659 = tmp_778_fu_8642_p1.read();
        tmp_842_reg_13819 = tmp_842_fu_9541_p1.read();
        tmp_V_2291_load_reg_13489 = tmp_V_2291_fu_2980.read();
        tmp_V_2307_load_reg_13494 = tmp_V_2307_fu_3044.read();
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
        tmp_159_15_reg_13979 = tmp_159_15_fu_10121_p2.read();
        tmp_159_31_reg_13989 = tmp_159_31_fu_10150_p2.read();
        tmp_784_reg_13984 = tmp_784_fu_10127_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_4290_p2.read()))) {
        tmp_20_reg_12456 = tmp_20_fu_4314_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(exitcond_flatten_reg_12447.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        tmp_656_reg_12471 = in_buffer_2_V_V20382_dout.read().range(7, 7);
        tmp_657_reg_12487 = in_buffer_2_V_V20383_dout.read().range(7, 7);
        tmp_658_reg_12503 = in_buffer_2_V_V20384_dout.read().range(7, 7);
        tmp_659_reg_12519 = in_buffer_2_V_V20385_dout.read().range(7, 7);
        tmp_660_reg_12535 = in_buffer_2_V_V20386_dout.read().range(7, 7);
        tmp_661_reg_12551 = in_buffer_2_V_V20387_dout.read().range(7, 7);
        tmp_662_reg_12567 = in_buffer_2_V_V20388_dout.read().range(7, 7);
        tmp_663_reg_12583 = in_buffer_2_V_V20389_dout.read().range(7, 7);
        tmp_664_reg_12599 = in_buffer_2_V_V20390_dout.read().range(7, 7);
        tmp_665_reg_12615 = in_buffer_2_V_V20391_dout.read().range(7, 7);
        tmp_666_reg_12631 = in_buffer_2_V_V20392_dout.read().range(7, 7);
        tmp_667_reg_12647 = in_buffer_2_V_V20393_dout.read().range(7, 7);
        tmp_668_reg_12663 = in_buffer_2_V_V20394_dout.read().range(7, 7);
        tmp_669_reg_12679 = in_buffer_2_V_V20395_dout.read().range(7, 7);
        tmp_670_reg_12695 = in_buffer_2_V_V20396_dout.read().range(7, 7);
        tmp_671_reg_12711 = in_buffer_2_V_V20397_dout.read().range(7, 7);
        tmp_672_reg_12727 = in_buffer_2_V_V20398_dout.read().range(7, 7);
        tmp_673_reg_12743 = in_buffer_2_V_V20399_dout.read().range(7, 7);
        tmp_674_reg_12759 = in_buffer_2_V_V20400_dout.read().range(7, 7);
        tmp_675_reg_12775 = in_buffer_2_V_V20401_dout.read().range(7, 7);
        tmp_676_reg_12791 = in_buffer_2_V_V20402_dout.read().range(7, 7);
        tmp_677_reg_12807 = in_buffer_2_V_V20403_dout.read().range(7, 7);
        tmp_678_reg_12823 = in_buffer_2_V_V20404_dout.read().range(7, 7);
        tmp_679_reg_12839 = in_buffer_2_V_V20405_dout.read().range(7, 7);
        tmp_680_reg_12855 = in_buffer_2_V_V20406_dout.read().range(7, 7);
        tmp_681_reg_12871 = in_buffer_2_V_V20407_dout.read().range(7, 7);
        tmp_682_reg_12887 = in_buffer_2_V_V20408_dout.read().range(7, 7);
        tmp_683_reg_12903 = in_buffer_2_V_V20409_dout.read().range(7, 7);
        tmp_684_reg_12919 = in_buffer_2_V_V20410_dout.read().range(7, 7);
        tmp_685_reg_12935 = in_buffer_2_V_V20411_dout.read().range(7, 7);
        tmp_686_reg_12951 = in_buffer_2_V_V20412_dout.read().range(7, 7);
        tmp_687_reg_12967 = in_buffer_2_V_V20413_dout.read().range(7, 7);
        tmp_688_reg_12983 = in_buffer_2_V_V20414_dout.read().range(7, 7);
        tmp_689_reg_12999 = in_buffer_2_V_V20415_dout.read().range(7, 7);
        tmp_690_reg_13015 = in_buffer_2_V_V20416_dout.read().range(7, 7);
        tmp_691_reg_13031 = in_buffer_2_V_V20417_dout.read().range(7, 7);
        tmp_692_reg_13047 = in_buffer_2_V_V20418_dout.read().range(7, 7);
        tmp_693_reg_13063 = in_buffer_2_V_V20419_dout.read().range(7, 7);
        tmp_694_reg_13079 = in_buffer_2_V_V20420_dout.read().range(7, 7);
        tmp_695_reg_13095 = in_buffer_2_V_V20421_dout.read().range(7, 7);
        tmp_696_reg_13111 = in_buffer_2_V_V20422_dout.read().range(7, 7);
        tmp_697_reg_13127 = in_buffer_2_V_V20423_dout.read().range(7, 7);
        tmp_698_reg_13143 = in_buffer_2_V_V20424_dout.read().range(7, 7);
        tmp_699_reg_13159 = in_buffer_2_V_V20425_dout.read().range(7, 7);
        tmp_700_reg_13175 = in_buffer_2_V_V20426_dout.read().range(7, 7);
        tmp_701_reg_13191 = in_buffer_2_V_V20427_dout.read().range(7, 7);
        tmp_702_reg_13207 = in_buffer_2_V_V20428_dout.read().range(7, 7);
        tmp_703_reg_13223 = in_buffer_2_V_V20429_dout.read().range(7, 7);
        tmp_704_reg_13239 = in_buffer_2_V_V20430_dout.read().range(7, 7);
        tmp_705_reg_13255 = in_buffer_2_V_V20431_dout.read().range(7, 7);
        tmp_706_reg_13271 = in_buffer_2_V_V20432_dout.read().range(7, 7);
        tmp_707_reg_13287 = in_buffer_2_V_V20433_dout.read().range(7, 7);
        tmp_708_reg_13303 = in_buffer_2_V_V20434_dout.read().range(7, 7);
        tmp_709_reg_13319 = in_buffer_2_V_V20435_dout.read().range(7, 7);
        tmp_710_reg_13335 = in_buffer_2_V_V20436_dout.read().range(7, 7);
        tmp_711_reg_13351 = in_buffer_2_V_V20437_dout.read().range(7, 7);
        tmp_712_reg_13367 = in_buffer_2_V_V20438_dout.read().range(7, 7);
        tmp_713_reg_13383 = in_buffer_2_V_V20439_dout.read().range(7, 7);
        tmp_714_reg_13399 = in_buffer_2_V_V20440_dout.read().range(7, 7);
        tmp_715_reg_13415 = in_buffer_2_V_V20441_dout.read().range(7, 7);
        tmp_716_reg_13431 = in_buffer_2_V_V20442_dout.read().range(7, 7);
        tmp_717_reg_13447 = in_buffer_2_V_V20443_dout.read().range(7, 7);
        tmp_718_reg_13463 = in_buffer_2_V_V20444_dout.read().range(7, 7);
        tmp_719_reg_13479 = in_buffer_2_V_V20445_dout.read().range(7, 7);
        tmp_V_2379_reg_12465 = in_buffer_2_V_V20382_dout.read();
        tmp_V_2380_reg_12476 = in_buffer_2_V_V20259_dout.read();
        tmp_V_2381_reg_12481 = in_buffer_2_V_V20383_dout.read();
        tmp_V_2382_reg_12492 = in_buffer_2_V_V20259446_dout.read();
        tmp_V_2383_reg_12497 = in_buffer_2_V_V20384_dout.read();
        tmp_V_2384_reg_12508 = in_buffer_2_V_V20259447_dout.read();
        tmp_V_2385_reg_12513 = in_buffer_2_V_V20385_dout.read();
        tmp_V_2386_reg_12524 = in_buffer_2_V_V20259448_dout.read();
        tmp_V_2387_reg_12529 = in_buffer_2_V_V20386_dout.read();
        tmp_V_2388_reg_12540 = in_buffer_2_V_V20259449_dout.read();
        tmp_V_2389_reg_12545 = in_buffer_2_V_V20387_dout.read();
        tmp_V_2390_reg_12556 = in_buffer_2_V_V20259450_dout.read();
        tmp_V_2391_reg_12561 = in_buffer_2_V_V20388_dout.read();
        tmp_V_2392_reg_12572 = in_buffer_2_V_V20259451_dout.read();
        tmp_V_2393_reg_12577 = in_buffer_2_V_V20389_dout.read();
        tmp_V_2394_reg_12588 = in_buffer_2_V_V20259452_dout.read();
        tmp_V_2395_reg_12593 = in_buffer_2_V_V20390_dout.read();
        tmp_V_2396_reg_12604 = in_buffer_2_V_V20259453_dout.read();
        tmp_V_2397_reg_12609 = in_buffer_2_V_V20391_dout.read();
        tmp_V_2398_reg_12620 = in_buffer_2_V_V20259454_dout.read();
        tmp_V_2399_reg_12625 = in_buffer_2_V_V20392_dout.read();
        tmp_V_2400_reg_12636 = in_buffer_2_V_V20259455_dout.read();
        tmp_V_2401_reg_12641 = in_buffer_2_V_V20393_dout.read();
        tmp_V_2402_reg_12652 = in_buffer_2_V_V20259456_dout.read();
        tmp_V_2403_reg_12657 = in_buffer_2_V_V20394_dout.read();
        tmp_V_2404_reg_12668 = in_buffer_2_V_V20259457_dout.read();
        tmp_V_2405_reg_12673 = in_buffer_2_V_V20395_dout.read();
        tmp_V_2406_reg_12684 = in_buffer_2_V_V20259458_dout.read();
        tmp_V_2407_reg_12689 = in_buffer_2_V_V20396_dout.read();
        tmp_V_2408_reg_12700 = in_buffer_2_V_V20259459_dout.read();
        tmp_V_2409_reg_12705 = in_buffer_2_V_V20397_dout.read();
        tmp_V_2410_reg_12716 = in_buffer_2_V_V20259460_dout.read();
        tmp_V_2411_reg_12721 = in_buffer_2_V_V20398_dout.read();
        tmp_V_2412_reg_12732 = in_buffer_2_V_V20259461_dout.read();
        tmp_V_2413_reg_12737 = in_buffer_2_V_V20399_dout.read();
        tmp_V_2414_reg_12748 = in_buffer_2_V_V20259462_dout.read();
        tmp_V_2415_reg_12753 = in_buffer_2_V_V20400_dout.read();
        tmp_V_2416_reg_12764 = in_buffer_2_V_V20259463_dout.read();
        tmp_V_2417_reg_12769 = in_buffer_2_V_V20401_dout.read();
        tmp_V_2418_reg_12780 = in_buffer_2_V_V20259464_dout.read();
        tmp_V_2419_reg_12785 = in_buffer_2_V_V20402_dout.read();
        tmp_V_2420_reg_12796 = in_buffer_2_V_V20259465_dout.read();
        tmp_V_2421_reg_12801 = in_buffer_2_V_V20403_dout.read();
        tmp_V_2422_reg_12812 = in_buffer_2_V_V20259466_dout.read();
        tmp_V_2423_reg_12817 = in_buffer_2_V_V20404_dout.read();
        tmp_V_2424_reg_12828 = in_buffer_2_V_V20259467_dout.read();
        tmp_V_2425_reg_12833 = in_buffer_2_V_V20405_dout.read();
        tmp_V_2426_reg_12844 = in_buffer_2_V_V20259468_dout.read();
        tmp_V_2427_reg_12849 = in_buffer_2_V_V20406_dout.read();
        tmp_V_2428_reg_12860 = in_buffer_2_V_V20259469_dout.read();
        tmp_V_2429_reg_12865 = in_buffer_2_V_V20407_dout.read();
        tmp_V_2430_reg_12876 = in_buffer_2_V_V20259470_dout.read();
        tmp_V_2431_reg_12881 = in_buffer_2_V_V20408_dout.read();
        tmp_V_2432_reg_12892 = in_buffer_2_V_V20259471_dout.read();
        tmp_V_2433_reg_12897 = in_buffer_2_V_V20409_dout.read();
        tmp_V_2434_reg_12908 = in_buffer_2_V_V20259472_dout.read();
        tmp_V_2435_reg_12913 = in_buffer_2_V_V20410_dout.read();
        tmp_V_2436_reg_12924 = in_buffer_2_V_V20259473_dout.read();
        tmp_V_2437_reg_12929 = in_buffer_2_V_V20411_dout.read();
        tmp_V_2438_reg_12940 = in_buffer_2_V_V20259474_dout.read();
        tmp_V_2439_reg_12945 = in_buffer_2_V_V20412_dout.read();
        tmp_V_2440_reg_12956 = in_buffer_2_V_V20259475_dout.read();
        tmp_V_2441_reg_12961 = in_buffer_2_V_V20413_dout.read();
        tmp_V_2442_reg_12972 = in_buffer_2_V_V20259476_dout.read();
        tmp_V_2443_reg_12977 = in_buffer_2_V_V20414_dout.read();
        tmp_V_2444_reg_12988 = in_buffer_2_V_V20259477_dout.read();
        tmp_V_2445_reg_12993 = in_buffer_2_V_V20415_dout.read();
        tmp_V_2446_reg_13004 = in_buffer_2_V_V20259478_dout.read();
        tmp_V_2447_reg_13009 = in_buffer_2_V_V20416_dout.read();
        tmp_V_2448_reg_13020 = in_buffer_2_V_V20259479_dout.read();
        tmp_V_2449_reg_13025 = in_buffer_2_V_V20417_dout.read();
        tmp_V_2450_reg_13036 = in_buffer_2_V_V20259480_dout.read();
        tmp_V_2451_reg_13041 = in_buffer_2_V_V20418_dout.read();
        tmp_V_2452_reg_13052 = in_buffer_2_V_V20259481_dout.read();
        tmp_V_2453_reg_13057 = in_buffer_2_V_V20419_dout.read();
        tmp_V_2454_reg_13068 = in_buffer_2_V_V20259482_dout.read();
        tmp_V_2455_reg_13073 = in_buffer_2_V_V20420_dout.read();
        tmp_V_2456_reg_13084 = in_buffer_2_V_V20259483_dout.read();
        tmp_V_2457_reg_13089 = in_buffer_2_V_V20421_dout.read();
        tmp_V_2458_reg_13100 = in_buffer_2_V_V20259484_dout.read();
        tmp_V_2459_reg_13105 = in_buffer_2_V_V20422_dout.read();
        tmp_V_2460_reg_13116 = in_buffer_2_V_V20259485_dout.read();
        tmp_V_2461_reg_13121 = in_buffer_2_V_V20423_dout.read();
        tmp_V_2462_reg_13132 = in_buffer_2_V_V20259486_dout.read();
        tmp_V_2463_reg_13137 = in_buffer_2_V_V20424_dout.read();
        tmp_V_2464_reg_13148 = in_buffer_2_V_V20259487_dout.read();
        tmp_V_2465_reg_13153 = in_buffer_2_V_V20425_dout.read();
        tmp_V_2466_reg_13164 = in_buffer_2_V_V20259488_dout.read();
        tmp_V_2467_reg_13169 = in_buffer_2_V_V20426_dout.read();
        tmp_V_2468_reg_13180 = in_buffer_2_V_V20259489_dout.read();
        tmp_V_2469_reg_13185 = in_buffer_2_V_V20427_dout.read();
        tmp_V_2470_reg_13196 = in_buffer_2_V_V20259490_dout.read();
        tmp_V_2471_reg_13201 = in_buffer_2_V_V20428_dout.read();
        tmp_V_2472_reg_13212 = in_buffer_2_V_V20259491_dout.read();
        tmp_V_2473_reg_13217 = in_buffer_2_V_V20429_dout.read();
        tmp_V_2474_reg_13228 = in_buffer_2_V_V20259492_dout.read();
        tmp_V_2475_reg_13233 = in_buffer_2_V_V20430_dout.read();
        tmp_V_2476_reg_13244 = in_buffer_2_V_V20259493_dout.read();
        tmp_V_2477_reg_13249 = in_buffer_2_V_V20431_dout.read();
        tmp_V_2478_reg_13260 = in_buffer_2_V_V20259494_dout.read();
        tmp_V_2479_reg_13265 = in_buffer_2_V_V20432_dout.read();
        tmp_V_2480_reg_13276 = in_buffer_2_V_V20259495_dout.read();
        tmp_V_2481_reg_13281 = in_buffer_2_V_V20433_dout.read();
        tmp_V_2482_reg_13292 = in_buffer_2_V_V20259496_dout.read();
        tmp_V_2483_reg_13297 = in_buffer_2_V_V20434_dout.read();
        tmp_V_2484_reg_13308 = in_buffer_2_V_V20259497_dout.read();
        tmp_V_2485_reg_13313 = in_buffer_2_V_V20435_dout.read();
        tmp_V_2486_reg_13324 = in_buffer_2_V_V20259498_dout.read();
        tmp_V_2487_reg_13329 = in_buffer_2_V_V20436_dout.read();
        tmp_V_2488_reg_13340 = in_buffer_2_V_V20259499_dout.read();
        tmp_V_2489_reg_13345 = in_buffer_2_V_V20437_dout.read();
        tmp_V_2490_reg_13356 = in_buffer_2_V_V20259500_dout.read();
        tmp_V_2491_reg_13361 = in_buffer_2_V_V20438_dout.read();
        tmp_V_2492_reg_13372 = in_buffer_2_V_V20259501_dout.read();
        tmp_V_2493_reg_13377 = in_buffer_2_V_V20439_dout.read();
        tmp_V_2494_reg_13388 = in_buffer_2_V_V20259502_dout.read();
        tmp_V_2495_reg_13393 = in_buffer_2_V_V20440_dout.read();
        tmp_V_2496_reg_13404 = in_buffer_2_V_V20259503_dout.read();
        tmp_V_2497_reg_13409 = in_buffer_2_V_V20441_dout.read();
        tmp_V_2498_reg_13420 = in_buffer_2_V_V20259504_dout.read();
        tmp_V_2499_reg_13425 = in_buffer_2_V_V20442_dout.read();
        tmp_V_2500_reg_13436 = in_buffer_2_V_V20259505_dout.read();
        tmp_V_2501_reg_13441 = in_buffer_2_V_V20443_dout.read();
        tmp_V_2502_reg_13452 = in_buffer_2_V_V20259506_dout.read();
        tmp_V_2503_reg_13457 = in_buffer_2_V_V20444_dout.read();
        tmp_V_2504_reg_13468 = in_buffer_2_V_V20259507_dout.read();
        tmp_V_2505_reg_13473 = in_buffer_2_V_V20445_dout.read();
        tmp_V_2506_reg_13484 = in_buffer_2_V_V20259508_dout.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_12447_pp0_iter3_reg.read()))) {
        tmp_V_1_reg_14069 = tmp_V_1_fu_11329_p2.read();
        tmp_V_2507_reg_14064 = tmp_V_2507_fu_11287_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(tmp_20_reg_12456.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        tmp_V_2250_fu_2816 = in_buffer_1_V_V17254_dout.read();
        tmp_V_2251_fu_2820 = in_buffer_1_V_V17253_dout.read();
        tmp_V_2252_fu_2824 = in_buffer_1_V_V17252_dout.read();
        tmp_V_2253_fu_2828 = in_buffer_1_V_V17251_dout.read();
        tmp_V_2254_fu_2832 = in_buffer_1_V_V17250_dout.read();
        tmp_V_2255_fu_2836 = in_buffer_1_V_V17249_dout.read();
        tmp_V_2256_fu_2840 = in_buffer_1_V_V17248_dout.read();
        tmp_V_2257_fu_2844 = in_buffer_1_V_V17247_dout.read();
        tmp_V_2258_fu_2848 = in_buffer_1_V_V17246_dout.read();
        tmp_V_2259_fu_2852 = in_buffer_1_V_V17245_dout.read();
        tmp_V_2260_fu_2856 = in_buffer_1_V_V17244_dout.read();
        tmp_V_2261_fu_2860 = in_buffer_1_V_V17243_dout.read();
        tmp_V_2262_fu_2864 = in_buffer_1_V_V17242_dout.read();
        tmp_V_2263_fu_2868 = in_buffer_1_V_V17241_dout.read();
        tmp_V_2264_fu_2872 = in_buffer_1_V_V17240_dout.read();
        tmp_V_2265_fu_2876 = in_buffer_1_V_V17239_dout.read();
        tmp_V_2266_fu_2880 = in_buffer_1_V_V17238_dout.read();
        tmp_V_2267_fu_2884 = in_buffer_1_V_V17237_dout.read();
        tmp_V_2268_fu_2888 = in_buffer_1_V_V17236_dout.read();
        tmp_V_2269_fu_2892 = in_buffer_1_V_V17235_dout.read();
        tmp_V_2270_fu_2896 = in_buffer_1_V_V17234_dout.read();
        tmp_V_2271_fu_2900 = in_buffer_1_V_V17233_dout.read();
        tmp_V_2272_fu_2904 = in_buffer_1_V_V17232_dout.read();
        tmp_V_2273_fu_2908 = in_buffer_1_V_V17231_dout.read();
        tmp_V_2274_fu_2912 = in_buffer_1_V_V17230_dout.read();
        tmp_V_2275_fu_2916 = in_buffer_1_V_V17192_dout.read();
        tmp_V_2276_fu_2920 = in_buffer_1_V_V17193_dout.read();
        tmp_V_2277_fu_2924 = in_buffer_1_V_V17194_dout.read();
        tmp_V_2278_fu_2928 = in_buffer_1_V_V17195_dout.read();
        tmp_V_2279_fu_2932 = in_buffer_1_V_V17196_dout.read();
        tmp_V_2280_fu_2936 = in_buffer_1_V_V17197_dout.read();
        tmp_V_2281_fu_2940 = in_buffer_1_V_V17198_dout.read();
        tmp_V_2282_fu_2944 = in_buffer_1_V_V17199_dout.read();
        tmp_V_2283_fu_2948 = in_buffer_1_V_V17200_dout.read();
        tmp_V_2284_fu_2952 = in_buffer_1_V_V17201_dout.read();
        tmp_V_2285_fu_2956 = in_buffer_1_V_V17202_dout.read();
        tmp_V_2286_fu_2960 = in_buffer_1_V_V17203_dout.read();
        tmp_V_2287_fu_2964 = in_buffer_1_V_V17204_dout.read();
        tmp_V_2288_fu_2968 = in_buffer_1_V_V17205_dout.read();
        tmp_V_2289_fu_2972 = in_buffer_1_V_V17206_dout.read();
        tmp_V_2290_fu_2976 = in_buffer_1_V_V17207_dout.read();
        tmp_V_2291_fu_2980 = in_buffer_1_V_V17208_dout.read();
        tmp_V_2292_fu_2984 = in_buffer_1_V_V17209_dout.read();
        tmp_V_2293_fu_2988 = in_buffer_1_V_V17210_dout.read();
        tmp_V_2294_fu_2992 = in_buffer_1_V_V17211_dout.read();
        tmp_V_2295_fu_2996 = in_buffer_1_V_V17212_dout.read();
        tmp_V_2296_fu_3000 = in_buffer_1_V_V17213_dout.read();
        tmp_V_2297_fu_3004 = in_buffer_1_V_V17214_dout.read();
        tmp_V_2298_fu_3008 = in_buffer_1_V_V17215_dout.read();
        tmp_V_2299_fu_3012 = in_buffer_1_V_V17216_dout.read();
        tmp_V_2300_fu_3016 = in_buffer_1_V_V17217_dout.read();
        tmp_V_2301_fu_3020 = in_buffer_1_V_V17218_dout.read();
        tmp_V_2302_fu_3024 = in_buffer_1_V_V17219_dout.read();
        tmp_V_2303_fu_3028 = in_buffer_1_V_V17220_dout.read();
        tmp_V_2304_fu_3032 = in_buffer_1_V_V17221_dout.read();
        tmp_V_2305_fu_3036 = in_buffer_1_V_V17222_dout.read();
        tmp_V_2306_fu_3040 = in_buffer_1_V_V17223_dout.read();
        tmp_V_2307_fu_3044 = in_buffer_1_V_V17224_dout.read();
        tmp_V_2308_fu_3048 = in_buffer_1_V_V17225_dout.read();
        tmp_V_2309_fu_3052 = in_buffer_1_V_V17226_dout.read();
        tmp_V_2310_fu_3056 = in_buffer_1_V_V17227_dout.read();
        tmp_V_2311_fu_3060 = in_buffer_1_V_V17228_dout.read();
        tmp_V_2312_fu_3064 = in_buffer_1_V_V17229_dout.read();
        tmp_V_fu_2812 = in_buffer_1_V_V17255_dout.read();
    }
}

void AttentionMatmulCompu::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_c_V_V10_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_r_V_V3_empty_n.read())))) {
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

