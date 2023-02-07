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
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln997_fu_4288_p2.read()))) {
        i_op_assign_3_reg_4255 = j_fu_4318_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_c_V_V_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_r_V_V_empty_n.read())))) {
        i_op_assign_3_reg_4255 = ap_const_lv15_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln997_fu_4288_p2.read()))) {
        indvar_flatten_reg_4244 = add_ln997_fu_4293_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_c_V_V_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_r_V_V_empty_n.read())))) {
        indvar_flatten_reg_4244 = ap_const_lv31_0;
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln997_reg_12445_pp0_iter2_reg.read()))) {
        add_ln700_100_reg_14047 = add_ln700_100_fu_10951_p2.read();
        add_ln700_108_reg_14052 = add_ln700_108_fu_11017_p2.read();
        add_ln700_125_reg_14057 = add_ln700_125_fu_11173_p2.read();
        add_ln700_30_reg_13992 = add_ln700_30_fu_10438_p2.read();
        add_ln700_33_reg_13997 = add_ln700_33_fu_10502_p2.read();
        add_ln700_36_reg_14002 = add_ln700_36_fu_10514_p2.read();
        add_ln700_45_reg_14007 = add_ln700_45_fu_10562_p2.read();
        add_ln700_48_reg_14012 = add_ln700_48_fu_10571_p2.read();
        add_ln700_52_reg_14017 = add_ln700_52_fu_10597_p2.read();
        add_ln700_61_reg_14022 = add_ln700_61_fu_10673_p2.read();
        add_ln700_68_reg_14027 = add_ln700_68_fu_10778_p2.read();
        add_ln700_76_reg_14032 = add_ln700_76_fu_10816_p2.read();
        add_ln700_93_reg_14037 = add_ln700_93_fu_10916_p2.read();
        add_ln700_96_reg_14042 = add_ln700_96_fu_10925_p2.read();
        add_ln78_16_reg_13977 = add_ln78_16_fu_10119_p2.read();
        add_ln78_32_reg_13987 = add_ln78_32_fu_10148_p2.read();
        trunc_ln647_32_reg_13982 = trunc_ln647_32_fu_10125_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln997_reg_12445_pp0_iter1_reg.read()))) {
        add_ln700_16_reg_13852 = add_ln700_16_fu_9692_p2.read();
        add_ln700_18_reg_13857 = add_ln700_18_fu_9698_p2.read();
        add_ln700_19_reg_13862 = add_ln700_19_fu_9704_p2.read();
        add_ln700_32_reg_13867 = add_ln700_32_fu_9766_p2.read();
        add_ln700_34_reg_13872 = add_ln700_34_fu_9772_p2.read();
        add_ln700_35_reg_13877 = add_ln700_35_fu_9778_p2.read();
        add_ln700_38_reg_13882 = add_ln700_38_fu_9784_p2.read();
        add_ln700_39_reg_13887 = add_ln700_39_fu_9790_p2.read();
        add_ln700_3_reg_13842 = add_ln700_3_fu_9648_p2.read();
        add_ln700_41_reg_13892 = add_ln700_41_fu_9796_p2.read();
        add_ln700_42_reg_13897 = add_ln700_42_fu_9802_p2.read();
        add_ln700_64_reg_13902 = add_ln700_64_fu_9928_p2.read();
        add_ln700_66_reg_13907 = add_ln700_66_fu_9934_p2.read();
        add_ln700_67_reg_13912 = add_ln700_67_fu_9940_p2.read();
        add_ln700_70_reg_13917 = add_ln700_70_fu_9946_p2.read();
        add_ln700_71_reg_13922 = add_ln700_71_fu_9952_p2.read();
        add_ln700_73_reg_13927 = add_ln700_73_fu_9958_p2.read();
        add_ln700_74_reg_13932 = add_ln700_74_fu_9964_p2.read();
        add_ln700_78_reg_13937 = add_ln700_78_fu_9970_p2.read();
        add_ln700_79_reg_13942 = add_ln700_79_fu_9976_p2.read();
        add_ln700_81_reg_13947 = add_ln700_81_fu_9982_p2.read();
        add_ln700_82_reg_13952 = add_ln700_82_fu_9988_p2.read();
        add_ln700_85_reg_13957 = add_ln700_85_fu_9994_p2.read();
        add_ln700_86_reg_13962 = add_ln700_86_fu_10000_p2.read();
        add_ln700_88_reg_13967 = add_ln700_88_fu_10006_p2.read();
        add_ln700_89_reg_13972 = add_ln700_89_fu_10012_p2.read();
        add_ln700_8_reg_13847 = add_ln700_8_fu_9662_p2.read();
        add_ln700_reg_13837 = add_ln700_fu_9634_p2.read();
        add_ln78_10_reg_13562 = add_ln78_10_fu_8141_p2.read();
        add_ln78_11_reg_13567 = add_ln78_11_fu_8170_p2.read();
        add_ln78_12_reg_13572 = add_ln78_12_fu_8199_p2.read();
        add_ln78_13_reg_13582 = add_ln78_13_fu_8228_p2.read();
        add_ln78_14_reg_13587 = add_ln78_14_fu_8257_p2.read();
        add_ln78_15_reg_13592 = add_ln78_15_fu_8286_p2.read();
        add_ln78_17_reg_13597 = add_ln78_17_fu_8315_p2.read();
        add_ln78_18_reg_13602 = add_ln78_18_fu_8344_p2.read();
        add_ln78_19_reg_13607 = add_ln78_19_fu_8373_p2.read();
        add_ln78_1_reg_13502 = add_ln78_1_fu_7880_p2.read();
        add_ln78_20_reg_13612 = add_ln78_20_fu_8402_p2.read();
        add_ln78_21_reg_13617 = add_ln78_21_fu_8431_p2.read();
        add_ln78_22_reg_13622 = add_ln78_22_fu_8460_p2.read();
        add_ln78_23_reg_13627 = add_ln78_23_fu_8489_p2.read();
        add_ln78_24_reg_13632 = add_ln78_24_fu_8518_p2.read();
        add_ln78_25_reg_13637 = add_ln78_25_fu_8547_p2.read();
        add_ln78_26_reg_13642 = add_ln78_26_fu_8576_p2.read();
        add_ln78_27_reg_13647 = add_ln78_27_fu_8605_p2.read();
        add_ln78_28_reg_13652 = add_ln78_28_fu_8634_p2.read();
        add_ln78_29_reg_13662 = add_ln78_29_fu_8663_p2.read();
        add_ln78_2_reg_13507 = add_ln78_2_fu_7909_p2.read();
        add_ln78_30_reg_13667 = add_ln78_30_fu_8692_p2.read();
        add_ln78_31_reg_13672 = add_ln78_31_fu_8721_p2.read();
        add_ln78_33_reg_13677 = add_ln78_33_fu_8750_p2.read();
        add_ln78_34_reg_13682 = add_ln78_34_fu_8779_p2.read();
        add_ln78_35_reg_13687 = add_ln78_35_fu_8808_p2.read();
        add_ln78_36_reg_13692 = add_ln78_36_fu_8837_p2.read();
        add_ln78_37_reg_13697 = add_ln78_37_fu_8866_p2.read();
        add_ln78_38_reg_13702 = add_ln78_38_fu_8895_p2.read();
        add_ln78_39_reg_13707 = add_ln78_39_fu_8924_p2.read();
        add_ln78_3_reg_13512 = add_ln78_3_fu_7938_p2.read();
        add_ln78_40_reg_13712 = add_ln78_40_fu_8953_p2.read();
        add_ln78_41_reg_13717 = add_ln78_41_fu_8982_p2.read();
        add_ln78_42_reg_13722 = add_ln78_42_fu_9011_p2.read();
        add_ln78_43_reg_13727 = add_ln78_43_fu_9040_p2.read();
        add_ln78_44_reg_13732 = add_ln78_44_fu_9069_p2.read();
        add_ln78_45_reg_13737 = add_ln78_45_fu_9098_p2.read();
        add_ln78_46_reg_13742 = add_ln78_46_fu_9127_p2.read();
        add_ln78_47_reg_13747 = add_ln78_47_fu_9156_p2.read();
        add_ln78_48_reg_13752 = add_ln78_48_fu_9185_p2.read();
        add_ln78_49_reg_13757 = add_ln78_49_fu_9214_p2.read();
        add_ln78_4_reg_13522 = add_ln78_4_fu_7967_p2.read();
        add_ln78_50_reg_13762 = add_ln78_50_fu_9243_p2.read();
        add_ln78_51_reg_13767 = add_ln78_51_fu_9272_p2.read();
        add_ln78_52_reg_13772 = add_ln78_52_fu_9301_p2.read();
        add_ln78_53_reg_13777 = add_ln78_53_fu_9330_p2.read();
        add_ln78_54_reg_13782 = add_ln78_54_fu_9359_p2.read();
        add_ln78_55_reg_13787 = add_ln78_55_fu_9388_p2.read();
        add_ln78_56_reg_13792 = add_ln78_56_fu_9417_p2.read();
        add_ln78_57_reg_13797 = add_ln78_57_fu_9446_p2.read();
        add_ln78_58_reg_13802 = add_ln78_58_fu_9475_p2.read();
        add_ln78_59_reg_13807 = add_ln78_59_fu_9504_p2.read();
        add_ln78_5_reg_13532 = add_ln78_5_fu_7996_p2.read();
        add_ln78_60_reg_13812 = add_ln78_60_fu_9533_p2.read();
        add_ln78_61_reg_13822 = add_ln78_61_fu_9562_p2.read();
        add_ln78_62_reg_13827 = add_ln78_62_fu_9591_p2.read();
        add_ln78_63_reg_13832 = add_ln78_63_fu_9620_p2.read();
        add_ln78_6_reg_13537 = add_ln78_6_fu_8025_p2.read();
        add_ln78_7_reg_13542 = add_ln78_7_fu_8054_p2.read();
        add_ln78_8_reg_13552 = add_ln78_8_fu_8083_p2.read();
        add_ln78_9_reg_13557 = add_ln78_9_fu_8112_p2.read();
        add_ln78_reg_13497 = add_ln78_fu_7851_p2.read();
        tmp_V_358_load_reg_13487 = tmp_V_358_fu_2978.read();
        tmp_V_374_load_reg_13492 = tmp_V_374_fu_3042.read();
        trunc_ln647_13_reg_13577 = trunc_ln647_13_fu_8205_p1.read();
        trunc_ln647_29_reg_13657 = trunc_ln647_29_fu_8640_p1.read();
        trunc_ln647_4_reg_13517 = trunc_ln647_4_fu_7944_p1.read();
        trunc_ln647_5_reg_13527 = trunc_ln647_5_fu_7973_p1.read();
        trunc_ln647_61_reg_13817 = trunc_ln647_61_fu_9539_p1.read();
        trunc_ln647_8_reg_13547 = trunc_ln647_8_fu_8060_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) {
        add_ln700_64_reg_13902_pp0_iter3_reg = add_ln700_64_reg_13902.read();
        icmp_ln997_reg_12445_pp0_iter2_reg = icmp_ln997_reg_12445_pp0_iter1_reg.read();
        icmp_ln997_reg_12445_pp0_iter3_reg = icmp_ln997_reg_12445_pp0_iter2_reg.read();
        icmp_ln997_reg_12445_pp0_iter4_reg = icmp_ln997_reg_12445_pp0_iter3_reg.read();
        tmp_32_reg_12725_pp0_iter2_reg = tmp_32_reg_12725.read();
        tmp_48_reg_12981_pp0_iter2_reg = tmp_48_reg_12981.read();
        tmp_V_478_reg_12719_pp0_iter2_reg = tmp_V_478_reg_12719.read();
        tmp_V_479_reg_12730_pp0_iter2_reg = tmp_V_479_reg_12730.read();
        tmp_V_510_reg_12975_pp0_iter2_reg = tmp_V_510_reg_12975.read();
        tmp_V_511_reg_12986_pp0_iter2_reg = tmp_V_511_reg_12986.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_c_V_V_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_r_V_V_empty_n.read())))) {
        bound_reg_12440 = bound_fu_11341_p2.read();
        p_cast_reg_12435 = in_n_c_V_V_dout.read().range(15, 1);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln997_fu_4288_p2.read()))) {
        icmp_ln1003_reg_12454 = icmp_ln1003_fu_4312_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        icmp_ln997_reg_12445 = icmp_ln997_fu_4288_p2.read();
        icmp_ln997_reg_12445_pp0_iter1_reg = icmp_ln997_reg_12445.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(icmp_ln997_reg_12445.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        tmp_17_reg_12485 = in_buffer_2_V_V1_dout.read().range(7, 7);
        tmp_18_reg_12501 = in_buffer_2_V_V2_dout.read().range(7, 7);
        tmp_19_reg_12517 = in_buffer_2_V_V3_dout.read().range(7, 7);
        tmp_20_reg_12533 = in_buffer_2_V_V4_dout.read().range(7, 7);
        tmp_21_reg_12549 = in_buffer_2_V_V5_dout.read().range(7, 7);
        tmp_22_reg_12565 = in_buffer_2_V_V6_dout.read().range(7, 7);
        tmp_23_reg_12581 = in_buffer_2_V_V7_dout.read().range(7, 7);
        tmp_24_reg_12597 = in_buffer_2_V_V8_dout.read().range(7, 7);
        tmp_25_reg_12613 = in_buffer_2_V_V9_dout.read().range(7, 7);
        tmp_26_reg_12629 = in_buffer_2_V_V10_dout.read().range(7, 7);
        tmp_27_reg_12645 = in_buffer_2_V_V11_dout.read().range(7, 7);
        tmp_28_reg_12661 = in_buffer_2_V_V12_dout.read().range(7, 7);
        tmp_29_reg_12677 = in_buffer_2_V_V13_dout.read().range(7, 7);
        tmp_30_reg_12693 = in_buffer_2_V_V14_dout.read().range(7, 7);
        tmp_31_reg_12709 = in_buffer_2_V_V15_dout.read().range(7, 7);
        tmp_32_reg_12725 = in_buffer_2_V_V16_dout.read().range(7, 7);
        tmp_33_reg_12741 = in_buffer_2_V_V17_dout.read().range(7, 7);
        tmp_34_reg_12757 = in_buffer_2_V_V18_dout.read().range(7, 7);
        tmp_35_reg_12773 = in_buffer_2_V_V19_dout.read().range(7, 7);
        tmp_36_reg_12789 = in_buffer_2_V_V20_dout.read().range(7, 7);
        tmp_37_reg_12805 = in_buffer_2_V_V21_dout.read().range(7, 7);
        tmp_38_reg_12821 = in_buffer_2_V_V22_dout.read().range(7, 7);
        tmp_39_reg_12837 = in_buffer_2_V_V23_dout.read().range(7, 7);
        tmp_40_reg_12853 = in_buffer_2_V_V24_dout.read().range(7, 7);
        tmp_41_reg_12869 = in_buffer_2_V_V25_dout.read().range(7, 7);
        tmp_42_reg_12885 = in_buffer_2_V_V26_dout.read().range(7, 7);
        tmp_43_reg_12901 = in_buffer_2_V_V27_dout.read().range(7, 7);
        tmp_44_reg_12917 = in_buffer_2_V_V28_dout.read().range(7, 7);
        tmp_45_reg_12933 = in_buffer_2_V_V29_dout.read().range(7, 7);
        tmp_46_reg_12949 = in_buffer_2_V_V30_dout.read().range(7, 7);
        tmp_47_reg_12965 = in_buffer_2_V_V31_dout.read().range(7, 7);
        tmp_48_reg_12981 = in_buffer_2_V_V32_dout.read().range(7, 7);
        tmp_49_reg_12997 = in_buffer_2_V_V33_dout.read().range(7, 7);
        tmp_50_reg_13013 = in_buffer_2_V_V34_dout.read().range(7, 7);
        tmp_51_reg_13029 = in_buffer_2_V_V35_dout.read().range(7, 7);
        tmp_52_reg_13045 = in_buffer_2_V_V36_dout.read().range(7, 7);
        tmp_53_reg_13061 = in_buffer_2_V_V37_dout.read().range(7, 7);
        tmp_54_reg_13077 = in_buffer_2_V_V38_dout.read().range(7, 7);
        tmp_55_reg_13093 = in_buffer_2_V_V39_dout.read().range(7, 7);
        tmp_56_reg_13109 = in_buffer_2_V_V40_dout.read().range(7, 7);
        tmp_57_reg_13125 = in_buffer_2_V_V41_dout.read().range(7, 7);
        tmp_58_reg_13141 = in_buffer_2_V_V42_dout.read().range(7, 7);
        tmp_59_reg_13157 = in_buffer_2_V_V43_dout.read().range(7, 7);
        tmp_60_reg_13173 = in_buffer_2_V_V44_dout.read().range(7, 7);
        tmp_61_reg_13189 = in_buffer_2_V_V45_dout.read().range(7, 7);
        tmp_62_reg_13205 = in_buffer_2_V_V46_dout.read().range(7, 7);
        tmp_63_reg_13221 = in_buffer_2_V_V47_dout.read().range(7, 7);
        tmp_64_reg_13237 = in_buffer_2_V_V48_dout.read().range(7, 7);
        tmp_65_reg_13253 = in_buffer_2_V_V49_dout.read().range(7, 7);
        tmp_66_reg_13269 = in_buffer_2_V_V50_dout.read().range(7, 7);
        tmp_67_reg_13285 = in_buffer_2_V_V51_dout.read().range(7, 7);
        tmp_68_reg_13301 = in_buffer_2_V_V52_dout.read().range(7, 7);
        tmp_69_reg_13317 = in_buffer_2_V_V53_dout.read().range(7, 7);
        tmp_70_reg_13333 = in_buffer_2_V_V54_dout.read().range(7, 7);
        tmp_71_reg_13349 = in_buffer_2_V_V55_dout.read().range(7, 7);
        tmp_72_reg_13365 = in_buffer_2_V_V56_dout.read().range(7, 7);
        tmp_73_reg_13381 = in_buffer_2_V_V57_dout.read().range(7, 7);
        tmp_74_reg_13397 = in_buffer_2_V_V58_dout.read().range(7, 7);
        tmp_75_reg_13413 = in_buffer_2_V_V59_dout.read().range(7, 7);
        tmp_76_reg_13429 = in_buffer_2_V_V60_dout.read().range(7, 7);
        tmp_77_reg_13445 = in_buffer_2_V_V61_dout.read().range(7, 7);
        tmp_78_reg_13461 = in_buffer_2_V_V62_dout.read().range(7, 7);
        tmp_79_reg_13477 = in_buffer_2_V_V63_dout.read().range(7, 7);
        tmp_V_446_reg_12463 = in_buffer_2_V_V_dout.read();
        tmp_V_447_reg_12474 = in_buffer_2_V_V64_dout.read();
        tmp_V_448_reg_12479 = in_buffer_2_V_V1_dout.read();
        tmp_V_449_reg_12490 = in_buffer_2_V_V6464_dout.read();
        tmp_V_450_reg_12495 = in_buffer_2_V_V2_dout.read();
        tmp_V_451_reg_12506 = in_buffer_2_V_V6465_dout.read();
        tmp_V_452_reg_12511 = in_buffer_2_V_V3_dout.read();
        tmp_V_453_reg_12522 = in_buffer_2_V_V6466_dout.read();
        tmp_V_454_reg_12527 = in_buffer_2_V_V4_dout.read();
        tmp_V_455_reg_12538 = in_buffer_2_V_V6467_dout.read();
        tmp_V_456_reg_12543 = in_buffer_2_V_V5_dout.read();
        tmp_V_457_reg_12554 = in_buffer_2_V_V6468_dout.read();
        tmp_V_458_reg_12559 = in_buffer_2_V_V6_dout.read();
        tmp_V_459_reg_12570 = in_buffer_2_V_V6469_dout.read();
        tmp_V_460_reg_12575 = in_buffer_2_V_V7_dout.read();
        tmp_V_461_reg_12586 = in_buffer_2_V_V6470_dout.read();
        tmp_V_462_reg_12591 = in_buffer_2_V_V8_dout.read();
        tmp_V_463_reg_12602 = in_buffer_2_V_V6471_dout.read();
        tmp_V_464_reg_12607 = in_buffer_2_V_V9_dout.read();
        tmp_V_465_reg_12618 = in_buffer_2_V_V6472_dout.read();
        tmp_V_466_reg_12623 = in_buffer_2_V_V10_dout.read();
        tmp_V_467_reg_12634 = in_buffer_2_V_V6473_dout.read();
        tmp_V_468_reg_12639 = in_buffer_2_V_V11_dout.read();
        tmp_V_469_reg_12650 = in_buffer_2_V_V6474_dout.read();
        tmp_V_470_reg_12655 = in_buffer_2_V_V12_dout.read();
        tmp_V_471_reg_12666 = in_buffer_2_V_V6475_dout.read();
        tmp_V_472_reg_12671 = in_buffer_2_V_V13_dout.read();
        tmp_V_473_reg_12682 = in_buffer_2_V_V6476_dout.read();
        tmp_V_474_reg_12687 = in_buffer_2_V_V14_dout.read();
        tmp_V_475_reg_12698 = in_buffer_2_V_V6477_dout.read();
        tmp_V_476_reg_12703 = in_buffer_2_V_V15_dout.read();
        tmp_V_477_reg_12714 = in_buffer_2_V_V6478_dout.read();
        tmp_V_478_reg_12719 = in_buffer_2_V_V16_dout.read();
        tmp_V_479_reg_12730 = in_buffer_2_V_V6479_dout.read();
        tmp_V_480_reg_12735 = in_buffer_2_V_V17_dout.read();
        tmp_V_481_reg_12746 = in_buffer_2_V_V6480_dout.read();
        tmp_V_482_reg_12751 = in_buffer_2_V_V18_dout.read();
        tmp_V_483_reg_12762 = in_buffer_2_V_V6481_dout.read();
        tmp_V_484_reg_12767 = in_buffer_2_V_V19_dout.read();
        tmp_V_485_reg_12778 = in_buffer_2_V_V6482_dout.read();
        tmp_V_486_reg_12783 = in_buffer_2_V_V20_dout.read();
        tmp_V_487_reg_12794 = in_buffer_2_V_V6483_dout.read();
        tmp_V_488_reg_12799 = in_buffer_2_V_V21_dout.read();
        tmp_V_489_reg_12810 = in_buffer_2_V_V6484_dout.read();
        tmp_V_490_reg_12815 = in_buffer_2_V_V22_dout.read();
        tmp_V_491_reg_12826 = in_buffer_2_V_V6485_dout.read();
        tmp_V_492_reg_12831 = in_buffer_2_V_V23_dout.read();
        tmp_V_493_reg_12842 = in_buffer_2_V_V6486_dout.read();
        tmp_V_494_reg_12847 = in_buffer_2_V_V24_dout.read();
        tmp_V_495_reg_12858 = in_buffer_2_V_V6487_dout.read();
        tmp_V_496_reg_12863 = in_buffer_2_V_V25_dout.read();
        tmp_V_497_reg_12874 = in_buffer_2_V_V6488_dout.read();
        tmp_V_498_reg_12879 = in_buffer_2_V_V26_dout.read();
        tmp_V_499_reg_12890 = in_buffer_2_V_V6489_dout.read();
        tmp_V_500_reg_12895 = in_buffer_2_V_V27_dout.read();
        tmp_V_501_reg_12906 = in_buffer_2_V_V6490_dout.read();
        tmp_V_502_reg_12911 = in_buffer_2_V_V28_dout.read();
        tmp_V_503_reg_12922 = in_buffer_2_V_V6491_dout.read();
        tmp_V_504_reg_12927 = in_buffer_2_V_V29_dout.read();
        tmp_V_505_reg_12938 = in_buffer_2_V_V6492_dout.read();
        tmp_V_506_reg_12943 = in_buffer_2_V_V30_dout.read();
        tmp_V_507_reg_12954 = in_buffer_2_V_V6493_dout.read();
        tmp_V_508_reg_12959 = in_buffer_2_V_V31_dout.read();
        tmp_V_509_reg_12970 = in_buffer_2_V_V6494_dout.read();
        tmp_V_510_reg_12975 = in_buffer_2_V_V32_dout.read();
        tmp_V_511_reg_12986 = in_buffer_2_V_V6495_dout.read();
        tmp_V_512_reg_12991 = in_buffer_2_V_V33_dout.read();
        tmp_V_513_reg_13002 = in_buffer_2_V_V6496_dout.read();
        tmp_V_514_reg_13007 = in_buffer_2_V_V34_dout.read();
        tmp_V_515_reg_13018 = in_buffer_2_V_V6497_dout.read();
        tmp_V_516_reg_13023 = in_buffer_2_V_V35_dout.read();
        tmp_V_517_reg_13034 = in_buffer_2_V_V6498_dout.read();
        tmp_V_518_reg_13039 = in_buffer_2_V_V36_dout.read();
        tmp_V_519_reg_13050 = in_buffer_2_V_V6499_dout.read();
        tmp_V_520_reg_13055 = in_buffer_2_V_V37_dout.read();
        tmp_V_521_reg_13066 = in_buffer_2_V_V64100_dout.read();
        tmp_V_522_reg_13071 = in_buffer_2_V_V38_dout.read();
        tmp_V_523_reg_13082 = in_buffer_2_V_V64101_dout.read();
        tmp_V_524_reg_13087 = in_buffer_2_V_V39_dout.read();
        tmp_V_525_reg_13098 = in_buffer_2_V_V64102_dout.read();
        tmp_V_526_reg_13103 = in_buffer_2_V_V40_dout.read();
        tmp_V_527_reg_13114 = in_buffer_2_V_V64103_dout.read();
        tmp_V_528_reg_13119 = in_buffer_2_V_V41_dout.read();
        tmp_V_529_reg_13130 = in_buffer_2_V_V64104_dout.read();
        tmp_V_530_reg_13135 = in_buffer_2_V_V42_dout.read();
        tmp_V_531_reg_13146 = in_buffer_2_V_V64105_dout.read();
        tmp_V_532_reg_13151 = in_buffer_2_V_V43_dout.read();
        tmp_V_533_reg_13162 = in_buffer_2_V_V64106_dout.read();
        tmp_V_534_reg_13167 = in_buffer_2_V_V44_dout.read();
        tmp_V_535_reg_13178 = in_buffer_2_V_V64107_dout.read();
        tmp_V_536_reg_13183 = in_buffer_2_V_V45_dout.read();
        tmp_V_537_reg_13194 = in_buffer_2_V_V64108_dout.read();
        tmp_V_538_reg_13199 = in_buffer_2_V_V46_dout.read();
        tmp_V_539_reg_13210 = in_buffer_2_V_V64109_dout.read();
        tmp_V_540_reg_13215 = in_buffer_2_V_V47_dout.read();
        tmp_V_541_reg_13226 = in_buffer_2_V_V64110_dout.read();
        tmp_V_542_reg_13231 = in_buffer_2_V_V48_dout.read();
        tmp_V_543_reg_13242 = in_buffer_2_V_V64111_dout.read();
        tmp_V_544_reg_13247 = in_buffer_2_V_V49_dout.read();
        tmp_V_545_reg_13258 = in_buffer_2_V_V64112_dout.read();
        tmp_V_546_reg_13263 = in_buffer_2_V_V50_dout.read();
        tmp_V_547_reg_13274 = in_buffer_2_V_V64113_dout.read();
        tmp_V_548_reg_13279 = in_buffer_2_V_V51_dout.read();
        tmp_V_549_reg_13290 = in_buffer_2_V_V64114_dout.read();
        tmp_V_550_reg_13295 = in_buffer_2_V_V52_dout.read();
        tmp_V_551_reg_13306 = in_buffer_2_V_V64115_dout.read();
        tmp_V_552_reg_13311 = in_buffer_2_V_V53_dout.read();
        tmp_V_553_reg_13322 = in_buffer_2_V_V64116_dout.read();
        tmp_V_554_reg_13327 = in_buffer_2_V_V54_dout.read();
        tmp_V_555_reg_13338 = in_buffer_2_V_V64117_dout.read();
        tmp_V_556_reg_13343 = in_buffer_2_V_V55_dout.read();
        tmp_V_557_reg_13354 = in_buffer_2_V_V64118_dout.read();
        tmp_V_558_reg_13359 = in_buffer_2_V_V56_dout.read();
        tmp_V_559_reg_13370 = in_buffer_2_V_V64119_dout.read();
        tmp_V_560_reg_13375 = in_buffer_2_V_V57_dout.read();
        tmp_V_561_reg_13386 = in_buffer_2_V_V64120_dout.read();
        tmp_V_562_reg_13391 = in_buffer_2_V_V58_dout.read();
        tmp_V_563_reg_13402 = in_buffer_2_V_V64121_dout.read();
        tmp_V_564_reg_13407 = in_buffer_2_V_V59_dout.read();
        tmp_V_565_reg_13418 = in_buffer_2_V_V64122_dout.read();
        tmp_V_566_reg_13423 = in_buffer_2_V_V60_dout.read();
        tmp_V_567_reg_13434 = in_buffer_2_V_V64123_dout.read();
        tmp_V_568_reg_13439 = in_buffer_2_V_V61_dout.read();
        tmp_V_569_reg_13450 = in_buffer_2_V_V64124_dout.read();
        tmp_V_570_reg_13455 = in_buffer_2_V_V62_dout.read();
        tmp_V_571_reg_13466 = in_buffer_2_V_V64125_dout.read();
        tmp_V_572_reg_13471 = in_buffer_2_V_V63_dout.read();
        tmp_V_573_reg_13482 = in_buffer_2_V_V64126_dout.read();
        tmp_reg_12469 = in_buffer_2_V_V_dout.read().range(7, 7);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(icmp_ln1003_reg_12454.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        tmp_V_313_fu_2814 = in_buffer_1_V_V62_dout.read();
        tmp_V_314_fu_2818 = in_buffer_1_V_V61_dout.read();
        tmp_V_315_fu_2822 = in_buffer_1_V_V60_dout.read();
        tmp_V_316_fu_2826 = in_buffer_1_V_V59_dout.read();
        tmp_V_317_fu_2830 = in_buffer_1_V_V58_dout.read();
        tmp_V_318_fu_2834 = in_buffer_1_V_V57_dout.read();
        tmp_V_319_fu_2838 = in_buffer_1_V_V56_dout.read();
        tmp_V_320_fu_2842 = in_buffer_1_V_V55_dout.read();
        tmp_V_321_fu_2846 = in_buffer_1_V_V54_dout.read();
        tmp_V_322_fu_2850 = in_buffer_1_V_V53_dout.read();
        tmp_V_323_fu_2854 = in_buffer_1_V_V52_dout.read();
        tmp_V_324_fu_2858 = in_buffer_1_V_V51_dout.read();
        tmp_V_329_fu_2862 = in_buffer_1_V_V50_dout.read();
        tmp_V_330_fu_2866 = in_buffer_1_V_V49_dout.read();
        tmp_V_331_fu_2870 = in_buffer_1_V_V48_dout.read();
        tmp_V_332_fu_2874 = in_buffer_1_V_V47_dout.read();
        tmp_V_333_fu_2878 = in_buffer_1_V_V46_dout.read();
        tmp_V_334_fu_2882 = in_buffer_1_V_V45_dout.read();
        tmp_V_335_fu_2886 = in_buffer_1_V_V44_dout.read();
        tmp_V_336_fu_2890 = in_buffer_1_V_V43_dout.read();
        tmp_V_337_fu_2894 = in_buffer_1_V_V42_dout.read();
        tmp_V_338_fu_2898 = in_buffer_1_V_V41_dout.read();
        tmp_V_339_fu_2902 = in_buffer_1_V_V40_dout.read();
        tmp_V_340_fu_2906 = in_buffer_1_V_V39_dout.read();
        tmp_V_341_fu_2910 = in_buffer_1_V_V38_dout.read();
        tmp_V_342_fu_2914 = in_buffer_1_V_V_dout.read();
        tmp_V_343_fu_2918 = in_buffer_1_V_V1_dout.read();
        tmp_V_344_fu_2922 = in_buffer_1_V_V2_dout.read();
        tmp_V_345_fu_2926 = in_buffer_1_V_V3_dout.read();
        tmp_V_346_fu_2930 = in_buffer_1_V_V4_dout.read();
        tmp_V_347_fu_2934 = in_buffer_1_V_V5_dout.read();
        tmp_V_348_fu_2938 = in_buffer_1_V_V6_dout.read();
        tmp_V_349_fu_2942 = in_buffer_1_V_V7_dout.read();
        tmp_V_350_fu_2946 = in_buffer_1_V_V8_dout.read();
        tmp_V_351_fu_2950 = in_buffer_1_V_V9_dout.read();
        tmp_V_352_fu_2954 = in_buffer_1_V_V10_dout.read();
        tmp_V_353_fu_2958 = in_buffer_1_V_V11_dout.read();
        tmp_V_354_fu_2962 = in_buffer_1_V_V12_dout.read();
        tmp_V_355_fu_2966 = in_buffer_1_V_V13_dout.read();
        tmp_V_356_fu_2970 = in_buffer_1_V_V14_dout.read();
        tmp_V_357_fu_2974 = in_buffer_1_V_V15_dout.read();
        tmp_V_358_fu_2978 = in_buffer_1_V_V16_dout.read();
        tmp_V_359_fu_2982 = in_buffer_1_V_V17_dout.read();
        tmp_V_360_fu_2986 = in_buffer_1_V_V18_dout.read();
        tmp_V_361_fu_2990 = in_buffer_1_V_V19_dout.read();
        tmp_V_362_fu_2994 = in_buffer_1_V_V20_dout.read();
        tmp_V_363_fu_2998 = in_buffer_1_V_V21_dout.read();
        tmp_V_364_fu_3002 = in_buffer_1_V_V22_dout.read();
        tmp_V_365_fu_3006 = in_buffer_1_V_V23_dout.read();
        tmp_V_366_fu_3010 = in_buffer_1_V_V24_dout.read();
        tmp_V_367_fu_3014 = in_buffer_1_V_V25_dout.read();
        tmp_V_368_fu_3018 = in_buffer_1_V_V26_dout.read();
        tmp_V_369_fu_3022 = in_buffer_1_V_V27_dout.read();
        tmp_V_370_fu_3026 = in_buffer_1_V_V28_dout.read();
        tmp_V_371_fu_3030 = in_buffer_1_V_V29_dout.read();
        tmp_V_372_fu_3034 = in_buffer_1_V_V30_dout.read();
        tmp_V_373_fu_3038 = in_buffer_1_V_V31_dout.read();
        tmp_V_374_fu_3042 = in_buffer_1_V_V32_dout.read();
        tmp_V_375_fu_3046 = in_buffer_1_V_V33_dout.read();
        tmp_V_376_fu_3050 = in_buffer_1_V_V34_dout.read();
        tmp_V_377_fu_3054 = in_buffer_1_V_V35_dout.read();
        tmp_V_378_fu_3058 = in_buffer_1_V_V36_dout.read();
        tmp_V_379_fu_3062 = in_buffer_1_V_V37_dout.read();
        tmp_V_fu_2810 = in_buffer_1_V_V63_dout.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln997_reg_12445_pp0_iter3_reg.read()))) {
        tmp_V_574_reg_14062 = tmp_V_574_fu_11285_p2.read();
        tmp_V_576_reg_14067 = tmp_V_576_fu_11327_p2.read();
    }
}

void AttentionMatmulCompu::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_c_V_V_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, in_n_r_V_V_empty_n.read())))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter4.read(), ap_const_logic_0)) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln997_fu_4288_p2.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter4.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln997_fu_4288_p2.read()) && 
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

