#include "AttentionMatmulCompu_1.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void AttentionMatmulCompu_1::thread_ap_clk_no_reset_() {
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
                    !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_c_V_V9_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_r_V_V2_empty_n.read())))) {
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
                    !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_c_V_V9_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_r_V_V2_empty_n.read())))) {
            ap_enable_reg_pp0_iter5 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_4290_p2.read()))) {
        i_op_assign_4_reg_4257 = j_fu_4320_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_c_V_V9_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_r_V_V2_empty_n.read())))) {
        i_op_assign_4_reg_4257 = ap_const_lv13_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_4290_p2.read()))) {
        indvar_flatten_reg_4246 = indvar_flatten_next_fu_4295_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_c_V_V9_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_r_V_V2_empty_n.read())))) {
        indvar_flatten_reg_4246 = ap_const_lv29_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_c_V_V9_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_r_V_V2_empty_n.read())))) {
        bound_reg_12442 = bound_fu_11343_p2.read();
        tmp_77_cast1_reg_12437 = in_n_c_V_V9_dout.read().range(15, 3);
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
        tmp_479_reg_12727_pp0_iter2_reg = tmp_479_reg_12727.read();
        tmp_495_reg_12983_pp0_iter2_reg = tmp_495_reg_12983.read();
        tmp_V_2087_reg_12721_pp0_iter2_reg = tmp_V_2087_reg_12721.read();
        tmp_V_2088_reg_12732_pp0_iter2_reg = tmp_V_2088_reg_12732.read();
        tmp_V_2119_reg_12977_pp0_iter2_reg = tmp_V_2119_reg_12977.read();
        tmp_V_2120_reg_12988_pp0_iter2_reg = tmp_V_2120_reg_12988.read();
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
        tmp_26_reg_13499 = tmp_26_fu_7853_p2.read();
        tmp_535_reg_13519 = tmp_535_fu_7946_p1.read();
        tmp_537_reg_13529 = tmp_537_fu_7975_p1.read();
        tmp_543_reg_13549 = tmp_543_fu_8062_p1.read();
        tmp_553_reg_13579 = tmp_553_fu_8207_p1.read();
        tmp_585_reg_13659 = tmp_585_fu_8642_p1.read();
        tmp_649_reg_13819 = tmp_649_fu_9541_p1.read();
        tmp_V_1967_load_reg_13489 = tmp_V_1967_fu_2980.read();
        tmp_V_1983_load_reg_13494 = tmp_V_1983_fu_3044.read();
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
        tmp_591_reg_13984 = tmp_591_fu_10127_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_4290_p2.read()))) {
        tmp_22_reg_12456 = tmp_22_fu_4314_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(exitcond_flatten_reg_12447.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        tmp_463_reg_12471 = in_buffer_2_V_V19254_dout.read().range(7, 7);
        tmp_464_reg_12487 = in_buffer_2_V_V19255_dout.read().range(7, 7);
        tmp_465_reg_12503 = in_buffer_2_V_V19256_dout.read().range(7, 7);
        tmp_466_reg_12519 = in_buffer_2_V_V19257_dout.read().range(7, 7);
        tmp_467_reg_12535 = in_buffer_2_V_V19258_dout.read().range(7, 7);
        tmp_468_reg_12551 = in_buffer_2_V_V19259_dout.read().range(7, 7);
        tmp_469_reg_12567 = in_buffer_2_V_V19260_dout.read().range(7, 7);
        tmp_470_reg_12583 = in_buffer_2_V_V19261_dout.read().range(7, 7);
        tmp_471_reg_12599 = in_buffer_2_V_V19262_dout.read().range(7, 7);
        tmp_472_reg_12615 = in_buffer_2_V_V19263_dout.read().range(7, 7);
        tmp_473_reg_12631 = in_buffer_2_V_V19264_dout.read().range(7, 7);
        tmp_474_reg_12647 = in_buffer_2_V_V19265_dout.read().range(7, 7);
        tmp_475_reg_12663 = in_buffer_2_V_V19266_dout.read().range(7, 7);
        tmp_476_reg_12679 = in_buffer_2_V_V19267_dout.read().range(7, 7);
        tmp_477_reg_12695 = in_buffer_2_V_V19268_dout.read().range(7, 7);
        tmp_478_reg_12711 = in_buffer_2_V_V19269_dout.read().range(7, 7);
        tmp_479_reg_12727 = in_buffer_2_V_V19270_dout.read().range(7, 7);
        tmp_480_reg_12743 = in_buffer_2_V_V19271_dout.read().range(7, 7);
        tmp_481_reg_12759 = in_buffer_2_V_V19272_dout.read().range(7, 7);
        tmp_482_reg_12775 = in_buffer_2_V_V19273_dout.read().range(7, 7);
        tmp_483_reg_12791 = in_buffer_2_V_V19274_dout.read().range(7, 7);
        tmp_484_reg_12807 = in_buffer_2_V_V19275_dout.read().range(7, 7);
        tmp_485_reg_12823 = in_buffer_2_V_V19276_dout.read().range(7, 7);
        tmp_486_reg_12839 = in_buffer_2_V_V19277_dout.read().range(7, 7);
        tmp_487_reg_12855 = in_buffer_2_V_V19278_dout.read().range(7, 7);
        tmp_488_reg_12871 = in_buffer_2_V_V19279_dout.read().range(7, 7);
        tmp_489_reg_12887 = in_buffer_2_V_V19280_dout.read().range(7, 7);
        tmp_490_reg_12903 = in_buffer_2_V_V19281_dout.read().range(7, 7);
        tmp_491_reg_12919 = in_buffer_2_V_V19282_dout.read().range(7, 7);
        tmp_492_reg_12935 = in_buffer_2_V_V19283_dout.read().range(7, 7);
        tmp_493_reg_12951 = in_buffer_2_V_V19284_dout.read().range(7, 7);
        tmp_494_reg_12967 = in_buffer_2_V_V19285_dout.read().range(7, 7);
        tmp_495_reg_12983 = in_buffer_2_V_V19286_dout.read().range(7, 7);
        tmp_496_reg_12999 = in_buffer_2_V_V19287_dout.read().range(7, 7);
        tmp_497_reg_13015 = in_buffer_2_V_V19288_dout.read().range(7, 7);
        tmp_498_reg_13031 = in_buffer_2_V_V19289_dout.read().range(7, 7);
        tmp_499_reg_13047 = in_buffer_2_V_V19290_dout.read().range(7, 7);
        tmp_500_reg_13063 = in_buffer_2_V_V19291_dout.read().range(7, 7);
        tmp_501_reg_13079 = in_buffer_2_V_V19292_dout.read().range(7, 7);
        tmp_502_reg_13095 = in_buffer_2_V_V19293_dout.read().range(7, 7);
        tmp_503_reg_13111 = in_buffer_2_V_V19294_dout.read().range(7, 7);
        tmp_504_reg_13127 = in_buffer_2_V_V19295_dout.read().range(7, 7);
        tmp_505_reg_13143 = in_buffer_2_V_V19296_dout.read().range(7, 7);
        tmp_506_reg_13159 = in_buffer_2_V_V19297_dout.read().range(7, 7);
        tmp_507_reg_13175 = in_buffer_2_V_V19298_dout.read().range(7, 7);
        tmp_508_reg_13191 = in_buffer_2_V_V19299_dout.read().range(7, 7);
        tmp_509_reg_13207 = in_buffer_2_V_V19300_dout.read().range(7, 7);
        tmp_510_reg_13223 = in_buffer_2_V_V19301_dout.read().range(7, 7);
        tmp_511_reg_13239 = in_buffer_2_V_V19302_dout.read().range(7, 7);
        tmp_512_reg_13255 = in_buffer_2_V_V19303_dout.read().range(7, 7);
        tmp_513_reg_13271 = in_buffer_2_V_V19304_dout.read().range(7, 7);
        tmp_514_reg_13287 = in_buffer_2_V_V19305_dout.read().range(7, 7);
        tmp_515_reg_13303 = in_buffer_2_V_V19306_dout.read().range(7, 7);
        tmp_516_reg_13319 = in_buffer_2_V_V19307_dout.read().range(7, 7);
        tmp_517_reg_13335 = in_buffer_2_V_V19308_dout.read().range(7, 7);
        tmp_518_reg_13351 = in_buffer_2_V_V19309_dout.read().range(7, 7);
        tmp_519_reg_13367 = in_buffer_2_V_V19310_dout.read().range(7, 7);
        tmp_520_reg_13383 = in_buffer_2_V_V19311_dout.read().range(7, 7);
        tmp_521_reg_13399 = in_buffer_2_V_V19312_dout.read().range(7, 7);
        tmp_522_reg_13415 = in_buffer_2_V_V19313_dout.read().range(7, 7);
        tmp_523_reg_13431 = in_buffer_2_V_V19314_dout.read().range(7, 7);
        tmp_524_reg_13447 = in_buffer_2_V_V19315_dout.read().range(7, 7);
        tmp_525_reg_13463 = in_buffer_2_V_V19316_dout.read().range(7, 7);
        tmp_526_reg_13479 = in_buffer_2_V_V19317_dout.read().range(7, 7);
        tmp_V_2055_reg_12465 = in_buffer_2_V_V19254_dout.read();
        tmp_V_2056_reg_12476 = in_buffer_2_V_V19258318_dout.read();
        tmp_V_2057_reg_12481 = in_buffer_2_V_V19255_dout.read();
        tmp_V_2058_reg_12492 = in_buffer_2_V_V19258319_dout.read();
        tmp_V_2059_reg_12497 = in_buffer_2_V_V19256_dout.read();
        tmp_V_2060_reg_12508 = in_buffer_2_V_V19258320_dout.read();
        tmp_V_2061_reg_12513 = in_buffer_2_V_V19257_dout.read();
        tmp_V_2062_reg_12524 = in_buffer_2_V_V19258321_dout.read();
        tmp_V_2063_reg_12529 = in_buffer_2_V_V19258_dout.read();
        tmp_V_2064_reg_12540 = in_buffer_2_V_V19258322_dout.read();
        tmp_V_2065_reg_12545 = in_buffer_2_V_V19259_dout.read();
        tmp_V_2066_reg_12556 = in_buffer_2_V_V19258323_dout.read();
        tmp_V_2067_reg_12561 = in_buffer_2_V_V19260_dout.read();
        tmp_V_2068_reg_12572 = in_buffer_2_V_V19258324_dout.read();
        tmp_V_2069_reg_12577 = in_buffer_2_V_V19261_dout.read();
        tmp_V_2070_reg_12588 = in_buffer_2_V_V19258325_dout.read();
        tmp_V_2071_reg_12593 = in_buffer_2_V_V19262_dout.read();
        tmp_V_2072_reg_12604 = in_buffer_2_V_V19258326_dout.read();
        tmp_V_2073_reg_12609 = in_buffer_2_V_V19263_dout.read();
        tmp_V_2074_reg_12620 = in_buffer_2_V_V19258327_dout.read();
        tmp_V_2075_reg_12625 = in_buffer_2_V_V19264_dout.read();
        tmp_V_2076_reg_12636 = in_buffer_2_V_V19258328_dout.read();
        tmp_V_2077_reg_12641 = in_buffer_2_V_V19265_dout.read();
        tmp_V_2078_reg_12652 = in_buffer_2_V_V19258329_dout.read();
        tmp_V_2079_reg_12657 = in_buffer_2_V_V19266_dout.read();
        tmp_V_2080_reg_12668 = in_buffer_2_V_V19258330_dout.read();
        tmp_V_2081_reg_12673 = in_buffer_2_V_V19267_dout.read();
        tmp_V_2082_reg_12684 = in_buffer_2_V_V19258331_dout.read();
        tmp_V_2083_reg_12689 = in_buffer_2_V_V19268_dout.read();
        tmp_V_2084_reg_12700 = in_buffer_2_V_V19258332_dout.read();
        tmp_V_2085_reg_12705 = in_buffer_2_V_V19269_dout.read();
        tmp_V_2086_reg_12716 = in_buffer_2_V_V19258333_dout.read();
        tmp_V_2087_reg_12721 = in_buffer_2_V_V19270_dout.read();
        tmp_V_2088_reg_12732 = in_buffer_2_V_V19258334_dout.read();
        tmp_V_2089_reg_12737 = in_buffer_2_V_V19271_dout.read();
        tmp_V_2090_reg_12748 = in_buffer_2_V_V19258335_dout.read();
        tmp_V_2091_reg_12753 = in_buffer_2_V_V19272_dout.read();
        tmp_V_2092_reg_12764 = in_buffer_2_V_V19258336_dout.read();
        tmp_V_2093_reg_12769 = in_buffer_2_V_V19273_dout.read();
        tmp_V_2094_reg_12780 = in_buffer_2_V_V19258337_dout.read();
        tmp_V_2095_reg_12785 = in_buffer_2_V_V19274_dout.read();
        tmp_V_2096_reg_12796 = in_buffer_2_V_V19258338_dout.read();
        tmp_V_2097_reg_12801 = in_buffer_2_V_V19275_dout.read();
        tmp_V_2098_reg_12812 = in_buffer_2_V_V19258339_dout.read();
        tmp_V_2099_reg_12817 = in_buffer_2_V_V19276_dout.read();
        tmp_V_2100_reg_12828 = in_buffer_2_V_V19258340_dout.read();
        tmp_V_2101_reg_12833 = in_buffer_2_V_V19277_dout.read();
        tmp_V_2102_reg_12844 = in_buffer_2_V_V19258341_dout.read();
        tmp_V_2103_reg_12849 = in_buffer_2_V_V19278_dout.read();
        tmp_V_2104_reg_12860 = in_buffer_2_V_V19258342_dout.read();
        tmp_V_2105_reg_12865 = in_buffer_2_V_V19279_dout.read();
        tmp_V_2106_reg_12876 = in_buffer_2_V_V19258343_dout.read();
        tmp_V_2107_reg_12881 = in_buffer_2_V_V19280_dout.read();
        tmp_V_2108_reg_12892 = in_buffer_2_V_V19258344_dout.read();
        tmp_V_2109_reg_12897 = in_buffer_2_V_V19281_dout.read();
        tmp_V_2110_reg_12908 = in_buffer_2_V_V19258345_dout.read();
        tmp_V_2111_reg_12913 = in_buffer_2_V_V19282_dout.read();
        tmp_V_2112_reg_12924 = in_buffer_2_V_V19258346_dout.read();
        tmp_V_2113_reg_12929 = in_buffer_2_V_V19283_dout.read();
        tmp_V_2114_reg_12940 = in_buffer_2_V_V19258347_dout.read();
        tmp_V_2115_reg_12945 = in_buffer_2_V_V19284_dout.read();
        tmp_V_2116_reg_12956 = in_buffer_2_V_V19258348_dout.read();
        tmp_V_2117_reg_12961 = in_buffer_2_V_V19285_dout.read();
        tmp_V_2118_reg_12972 = in_buffer_2_V_V19258349_dout.read();
        tmp_V_2119_reg_12977 = in_buffer_2_V_V19286_dout.read();
        tmp_V_2120_reg_12988 = in_buffer_2_V_V19258350_dout.read();
        tmp_V_2121_reg_12993 = in_buffer_2_V_V19287_dout.read();
        tmp_V_2122_reg_13004 = in_buffer_2_V_V19258351_dout.read();
        tmp_V_2123_reg_13009 = in_buffer_2_V_V19288_dout.read();
        tmp_V_2124_reg_13020 = in_buffer_2_V_V19258352_dout.read();
        tmp_V_2125_reg_13025 = in_buffer_2_V_V19289_dout.read();
        tmp_V_2126_reg_13036 = in_buffer_2_V_V19258353_dout.read();
        tmp_V_2127_reg_13041 = in_buffer_2_V_V19290_dout.read();
        tmp_V_2128_reg_13052 = in_buffer_2_V_V19258354_dout.read();
        tmp_V_2129_reg_13057 = in_buffer_2_V_V19291_dout.read();
        tmp_V_2130_reg_13068 = in_buffer_2_V_V19258355_dout.read();
        tmp_V_2131_reg_13073 = in_buffer_2_V_V19292_dout.read();
        tmp_V_2132_reg_13084 = in_buffer_2_V_V19258356_dout.read();
        tmp_V_2133_reg_13089 = in_buffer_2_V_V19293_dout.read();
        tmp_V_2134_reg_13100 = in_buffer_2_V_V19258357_dout.read();
        tmp_V_2135_reg_13105 = in_buffer_2_V_V19294_dout.read();
        tmp_V_2136_reg_13116 = in_buffer_2_V_V19258358_dout.read();
        tmp_V_2137_reg_13121 = in_buffer_2_V_V19295_dout.read();
        tmp_V_2138_reg_13132 = in_buffer_2_V_V19258359_dout.read();
        tmp_V_2139_reg_13137 = in_buffer_2_V_V19296_dout.read();
        tmp_V_2140_reg_13148 = in_buffer_2_V_V19258360_dout.read();
        tmp_V_2141_reg_13153 = in_buffer_2_V_V19297_dout.read();
        tmp_V_2142_reg_13164 = in_buffer_2_V_V19258361_dout.read();
        tmp_V_2143_reg_13169 = in_buffer_2_V_V19298_dout.read();
        tmp_V_2144_reg_13180 = in_buffer_2_V_V19258362_dout.read();
        tmp_V_2145_reg_13185 = in_buffer_2_V_V19299_dout.read();
        tmp_V_2146_reg_13196 = in_buffer_2_V_V19258363_dout.read();
        tmp_V_2147_reg_13201 = in_buffer_2_V_V19300_dout.read();
        tmp_V_2148_reg_13212 = in_buffer_2_V_V19258364_dout.read();
        tmp_V_2149_reg_13217 = in_buffer_2_V_V19301_dout.read();
        tmp_V_2150_reg_13228 = in_buffer_2_V_V19258365_dout.read();
        tmp_V_2151_reg_13233 = in_buffer_2_V_V19302_dout.read();
        tmp_V_2152_reg_13244 = in_buffer_2_V_V19258366_dout.read();
        tmp_V_2153_reg_13249 = in_buffer_2_V_V19303_dout.read();
        tmp_V_2154_reg_13260 = in_buffer_2_V_V19258367_dout.read();
        tmp_V_2155_reg_13265 = in_buffer_2_V_V19304_dout.read();
        tmp_V_2156_reg_13276 = in_buffer_2_V_V19258368_dout.read();
        tmp_V_2157_reg_13281 = in_buffer_2_V_V19305_dout.read();
        tmp_V_2158_reg_13292 = in_buffer_2_V_V19258369_dout.read();
        tmp_V_2159_reg_13297 = in_buffer_2_V_V19306_dout.read();
        tmp_V_2160_reg_13308 = in_buffer_2_V_V19258370_dout.read();
        tmp_V_2161_reg_13313 = in_buffer_2_V_V19307_dout.read();
        tmp_V_2162_reg_13324 = in_buffer_2_V_V19258371_dout.read();
        tmp_V_2163_reg_13329 = in_buffer_2_V_V19308_dout.read();
        tmp_V_2164_reg_13340 = in_buffer_2_V_V19258372_dout.read();
        tmp_V_2165_reg_13345 = in_buffer_2_V_V19309_dout.read();
        tmp_V_2166_reg_13356 = in_buffer_2_V_V19258373_dout.read();
        tmp_V_2167_reg_13361 = in_buffer_2_V_V19310_dout.read();
        tmp_V_2168_reg_13372 = in_buffer_2_V_V19258374_dout.read();
        tmp_V_2169_reg_13377 = in_buffer_2_V_V19311_dout.read();
        tmp_V_2170_reg_13388 = in_buffer_2_V_V19258375_dout.read();
        tmp_V_2171_reg_13393 = in_buffer_2_V_V19312_dout.read();
        tmp_V_2172_reg_13404 = in_buffer_2_V_V19258376_dout.read();
        tmp_V_2173_reg_13409 = in_buffer_2_V_V19313_dout.read();
        tmp_V_2174_reg_13420 = in_buffer_2_V_V19258377_dout.read();
        tmp_V_2175_reg_13425 = in_buffer_2_V_V19314_dout.read();
        tmp_V_2176_reg_13436 = in_buffer_2_V_V19258378_dout.read();
        tmp_V_2177_reg_13441 = in_buffer_2_V_V19315_dout.read();
        tmp_V_2178_reg_13452 = in_buffer_2_V_V19258379_dout.read();
        tmp_V_2179_reg_13457 = in_buffer_2_V_V19316_dout.read();
        tmp_V_2180_reg_13468 = in_buffer_2_V_V19258380_dout.read();
        tmp_V_2181_reg_13473 = in_buffer_2_V_V19317_dout.read();
        tmp_V_2182_reg_13484 = in_buffer_2_V_V19258381_dout.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(tmp_22_reg_12456.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        tmp_V_1926_fu_2816 = in_buffer_1_V_V16190_dout.read();
        tmp_V_1927_fu_2820 = in_buffer_1_V_V16189_dout.read();
        tmp_V_1928_fu_2824 = in_buffer_1_V_V16188_dout.read();
        tmp_V_1929_fu_2828 = in_buffer_1_V_V16187_dout.read();
        tmp_V_1930_fu_2832 = in_buffer_1_V_V16186_dout.read();
        tmp_V_1931_fu_2836 = in_buffer_1_V_V16185_dout.read();
        tmp_V_1932_fu_2840 = in_buffer_1_V_V16184_dout.read();
        tmp_V_1933_fu_2844 = in_buffer_1_V_V16183_dout.read();
        tmp_V_1934_fu_2848 = in_buffer_1_V_V16182_dout.read();
        tmp_V_1935_fu_2852 = in_buffer_1_V_V16181_dout.read();
        tmp_V_1936_fu_2856 = in_buffer_1_V_V16180_dout.read();
        tmp_V_1937_fu_2860 = in_buffer_1_V_V16179_dout.read();
        tmp_V_1938_fu_2864 = in_buffer_1_V_V16178_dout.read();
        tmp_V_1939_fu_2868 = in_buffer_1_V_V16177_dout.read();
        tmp_V_1940_fu_2872 = in_buffer_1_V_V16176_dout.read();
        tmp_V_1941_fu_2876 = in_buffer_1_V_V16175_dout.read();
        tmp_V_1942_fu_2880 = in_buffer_1_V_V16174_dout.read();
        tmp_V_1943_fu_2884 = in_buffer_1_V_V16173_dout.read();
        tmp_V_1944_fu_2888 = in_buffer_1_V_V16172_dout.read();
        tmp_V_1945_fu_2892 = in_buffer_1_V_V16171_dout.read();
        tmp_V_1946_fu_2896 = in_buffer_1_V_V16170_dout.read();
        tmp_V_1947_fu_2900 = in_buffer_1_V_V16169_dout.read();
        tmp_V_1948_fu_2904 = in_buffer_1_V_V16168_dout.read();
        tmp_V_1949_fu_2908 = in_buffer_1_V_V16167_dout.read();
        tmp_V_1950_fu_2912 = in_buffer_1_V_V16166_dout.read();
        tmp_V_1951_fu_2916 = in_buffer_1_V_V16128_dout.read();
        tmp_V_1952_fu_2920 = in_buffer_1_V_V16129_dout.read();
        tmp_V_1953_fu_2924 = in_buffer_1_V_V16130_dout.read();
        tmp_V_1954_fu_2928 = in_buffer_1_V_V16131_dout.read();
        tmp_V_1955_fu_2932 = in_buffer_1_V_V16132_dout.read();
        tmp_V_1956_fu_2936 = in_buffer_1_V_V16133_dout.read();
        tmp_V_1957_fu_2940 = in_buffer_1_V_V16134_dout.read();
        tmp_V_1958_fu_2944 = in_buffer_1_V_V16135_dout.read();
        tmp_V_1959_fu_2948 = in_buffer_1_V_V16136_dout.read();
        tmp_V_1960_fu_2952 = in_buffer_1_V_V16137_dout.read();
        tmp_V_1961_fu_2956 = in_buffer_1_V_V16138_dout.read();
        tmp_V_1962_fu_2960 = in_buffer_1_V_V16139_dout.read();
        tmp_V_1963_fu_2964 = in_buffer_1_V_V16140_dout.read();
        tmp_V_1964_fu_2968 = in_buffer_1_V_V16141_dout.read();
        tmp_V_1965_fu_2972 = in_buffer_1_V_V16142_dout.read();
        tmp_V_1966_fu_2976 = in_buffer_1_V_V16143_dout.read();
        tmp_V_1967_fu_2980 = in_buffer_1_V_V16144_dout.read();
        tmp_V_1968_fu_2984 = in_buffer_1_V_V16145_dout.read();
        tmp_V_1969_fu_2988 = in_buffer_1_V_V16146_dout.read();
        tmp_V_1970_fu_2992 = in_buffer_1_V_V16147_dout.read();
        tmp_V_1971_fu_2996 = in_buffer_1_V_V16148_dout.read();
        tmp_V_1972_fu_3000 = in_buffer_1_V_V16149_dout.read();
        tmp_V_1973_fu_3004 = in_buffer_1_V_V16150_dout.read();
        tmp_V_1974_fu_3008 = in_buffer_1_V_V16151_dout.read();
        tmp_V_1975_fu_3012 = in_buffer_1_V_V16152_dout.read();
        tmp_V_1976_fu_3016 = in_buffer_1_V_V16153_dout.read();
        tmp_V_1977_fu_3020 = in_buffer_1_V_V16154_dout.read();
        tmp_V_1978_fu_3024 = in_buffer_1_V_V16155_dout.read();
        tmp_V_1979_fu_3028 = in_buffer_1_V_V16156_dout.read();
        tmp_V_1980_fu_3032 = in_buffer_1_V_V16157_dout.read();
        tmp_V_1981_fu_3036 = in_buffer_1_V_V16158_dout.read();
        tmp_V_1982_fu_3040 = in_buffer_1_V_V16159_dout.read();
        tmp_V_1983_fu_3044 = in_buffer_1_V_V16160_dout.read();
        tmp_V_1984_fu_3048 = in_buffer_1_V_V16161_dout.read();
        tmp_V_1985_fu_3052 = in_buffer_1_V_V16162_dout.read();
        tmp_V_1986_fu_3056 = in_buffer_1_V_V16163_dout.read();
        tmp_V_1987_fu_3060 = in_buffer_1_V_V16164_dout.read();
        tmp_V_1988_fu_3064 = in_buffer_1_V_V16165_dout.read();
        tmp_V_fu_2812 = in_buffer_1_V_V16191_dout.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_12447_pp0_iter3_reg.read()))) {
        tmp_V_2183_reg_14064 = tmp_V_2183_fu_11287_p2.read();
        tmp_V_2_reg_14069 = tmp_V_2_fu_11329_p2.read();
    }
}

void AttentionMatmulCompu_1::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_c_V_V9_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_r_V_V2_empty_n.read())))) {
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

