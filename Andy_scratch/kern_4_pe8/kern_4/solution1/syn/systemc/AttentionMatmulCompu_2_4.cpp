#include "AttentionMatmulCompu_2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void AttentionMatmulCompu_2::thread_tmp_129_fu_9589_p1() {
    tmp_129_fu_9589_p1 = esl_zext<16,1>(tmp_459_fu_9582_p3.read());
}

void AttentionMatmulCompu_2::thread_tmp_130_fu_9618_p1() {
    tmp_130_fu_9618_p1 = esl_zext<16,1>(tmp_461_fu_9611_p3.read());
}

void AttentionMatmulCompu_2::thread_tmp_159_10_fu_8143_p2() {
    tmp_159_10_fu_8143_p2 = (!p_Result_42_10_fu_8123_p4.read().is_01() || !tmp_77_fu_8139_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_10_fu_8123_p4.read()) + sc_biguint<16>(tmp_77_fu_8139_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_11_fu_8172_p2() {
    tmp_159_11_fu_8172_p2 = (!p_Result_42_11_fu_8152_p4.read().is_01() || !tmp_78_fu_8168_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_11_fu_8152_p4.read()) + sc_biguint<16>(tmp_78_fu_8168_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_12_fu_8201_p2() {
    tmp_159_12_fu_8201_p2 = (!p_Result_42_12_fu_8181_p4.read().is_01() || !tmp_79_fu_8197_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_12_fu_8181_p4.read()) + sc_biguint<16>(tmp_79_fu_8197_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_13_fu_8230_p2() {
    tmp_159_13_fu_8230_p2 = (!p_Result_42_13_fu_8210_p4.read().is_01() || !tmp_80_fu_8226_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_13_fu_8210_p4.read()) + sc_biguint<16>(tmp_80_fu_8226_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_14_fu_8259_p2() {
    tmp_159_14_fu_8259_p2 = (!p_Result_42_14_fu_8239_p4.read().is_01() || !tmp_81_fu_8255_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_14_fu_8239_p4.read()) + sc_biguint<16>(tmp_81_fu_8255_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_15_fu_8288_p2() {
    tmp_159_15_fu_8288_p2 = (!p_Result_42_15_fu_8268_p4.read().is_01() || !tmp_82_fu_8284_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_15_fu_8268_p4.read()) + sc_biguint<16>(tmp_82_fu_8284_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_16_fu_10121_p2() {
    tmp_159_16_fu_10121_p2 = (!p_Result_42_16_fu_10101_p4.read().is_01() || !tmp_83_fu_10117_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_16_fu_10101_p4.read()) + sc_biguint<16>(tmp_83_fu_10117_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_17_fu_8317_p2() {
    tmp_159_17_fu_8317_p2 = (!p_Result_42_17_fu_8297_p4.read().is_01() || !tmp_84_fu_8313_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_17_fu_8297_p4.read()) + sc_biguint<16>(tmp_84_fu_8313_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_18_fu_8346_p2() {
    tmp_159_18_fu_8346_p2 = (!p_Result_42_18_fu_8326_p4.read().is_01() || !tmp_85_fu_8342_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_18_fu_8326_p4.read()) + sc_biguint<16>(tmp_85_fu_8342_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_19_fu_8375_p2() {
    tmp_159_19_fu_8375_p2 = (!p_Result_42_19_fu_8355_p4.read().is_01() || !tmp_86_fu_8371_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_19_fu_8355_p4.read()) + sc_biguint<16>(tmp_86_fu_8371_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_1_fu_7882_p2() {
    tmp_159_1_fu_7882_p2 = (!p_Result_42_1_fu_7862_p4.read().is_01() || !tmp_s_fu_7878_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_1_fu_7862_p4.read()) + sc_biguint<16>(tmp_s_fu_7878_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_20_fu_8404_p2() {
    tmp_159_20_fu_8404_p2 = (!p_Result_42_20_fu_8384_p4.read().is_01() || !tmp_87_fu_8400_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_20_fu_8384_p4.read()) + sc_biguint<16>(tmp_87_fu_8400_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_21_fu_8433_p2() {
    tmp_159_21_fu_8433_p2 = (!p_Result_42_21_fu_8413_p4.read().is_01() || !tmp_88_fu_8429_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_21_fu_8413_p4.read()) + sc_biguint<16>(tmp_88_fu_8429_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_22_fu_8462_p2() {
    tmp_159_22_fu_8462_p2 = (!p_Result_42_22_fu_8442_p4.read().is_01() || !tmp_89_fu_8458_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_22_fu_8442_p4.read()) + sc_biguint<16>(tmp_89_fu_8458_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_23_fu_8491_p2() {
    tmp_159_23_fu_8491_p2 = (!p_Result_42_23_fu_8471_p4.read().is_01() || !tmp_90_fu_8487_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_23_fu_8471_p4.read()) + sc_biguint<16>(tmp_90_fu_8487_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_24_fu_8520_p2() {
    tmp_159_24_fu_8520_p2 = (!p_Result_42_24_fu_8500_p4.read().is_01() || !tmp_91_fu_8516_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_24_fu_8500_p4.read()) + sc_biguint<16>(tmp_91_fu_8516_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_25_fu_8549_p2() {
    tmp_159_25_fu_8549_p2 = (!p_Result_42_25_fu_8529_p4.read().is_01() || !tmp_92_fu_8545_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_25_fu_8529_p4.read()) + sc_biguint<16>(tmp_92_fu_8545_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_26_fu_8578_p2() {
    tmp_159_26_fu_8578_p2 = (!p_Result_42_26_fu_8558_p4.read().is_01() || !tmp_93_fu_8574_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_26_fu_8558_p4.read()) + sc_biguint<16>(tmp_93_fu_8574_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_27_fu_8607_p2() {
    tmp_159_27_fu_8607_p2 = (!p_Result_42_27_fu_8587_p4.read().is_01() || !tmp_94_fu_8603_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_27_fu_8587_p4.read()) + sc_biguint<16>(tmp_94_fu_8603_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_28_fu_8636_p2() {
    tmp_159_28_fu_8636_p2 = (!p_Result_42_28_fu_8616_p4.read().is_01() || !tmp_95_fu_8632_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_28_fu_8616_p4.read()) + sc_biguint<16>(tmp_95_fu_8632_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_29_fu_8665_p2() {
    tmp_159_29_fu_8665_p2 = (!p_Result_42_29_fu_8645_p4.read().is_01() || !tmp_96_fu_8661_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_29_fu_8645_p4.read()) + sc_biguint<16>(tmp_96_fu_8661_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_2_fu_7911_p2() {
    tmp_159_2_fu_7911_p2 = (!p_Result_42_2_fu_7891_p4.read().is_01() || !tmp_69_fu_7907_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_2_fu_7891_p4.read()) + sc_biguint<16>(tmp_69_fu_7907_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_30_fu_8694_p2() {
    tmp_159_30_fu_8694_p2 = (!p_Result_42_30_fu_8674_p4.read().is_01() || !tmp_97_fu_8690_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_30_fu_8674_p4.read()) + sc_biguint<16>(tmp_97_fu_8690_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_31_fu_8723_p2() {
    tmp_159_31_fu_8723_p2 = (!p_Result_42_31_fu_8703_p4.read().is_01() || !tmp_98_fu_8719_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_31_fu_8703_p4.read()) + sc_biguint<16>(tmp_98_fu_8719_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_32_fu_10150_p2() {
    tmp_159_32_fu_10150_p2 = (!p_Result_42_32_fu_10130_p4.read().is_01() || !tmp_99_fu_10146_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_32_fu_10130_p4.read()) + sc_biguint<16>(tmp_99_fu_10146_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_33_fu_8752_p2() {
    tmp_159_33_fu_8752_p2 = (!p_Result_42_33_fu_8732_p4.read().is_01() || !tmp_100_fu_8748_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_33_fu_8732_p4.read()) + sc_biguint<16>(tmp_100_fu_8748_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_34_fu_8781_p2() {
    tmp_159_34_fu_8781_p2 = (!p_Result_42_34_fu_8761_p4.read().is_01() || !tmp_101_fu_8777_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_34_fu_8761_p4.read()) + sc_biguint<16>(tmp_101_fu_8777_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_35_fu_8810_p2() {
    tmp_159_35_fu_8810_p2 = (!p_Result_42_35_fu_8790_p4.read().is_01() || !tmp_102_fu_8806_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_35_fu_8790_p4.read()) + sc_biguint<16>(tmp_102_fu_8806_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_36_fu_8839_p2() {
    tmp_159_36_fu_8839_p2 = (!p_Result_42_36_fu_8819_p4.read().is_01() || !tmp_103_fu_8835_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_36_fu_8819_p4.read()) + sc_biguint<16>(tmp_103_fu_8835_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_37_fu_8868_p2() {
    tmp_159_37_fu_8868_p2 = (!p_Result_42_37_fu_8848_p4.read().is_01() || !tmp_104_fu_8864_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_37_fu_8848_p4.read()) + sc_biguint<16>(tmp_104_fu_8864_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_38_fu_8897_p2() {
    tmp_159_38_fu_8897_p2 = (!p_Result_42_38_fu_8877_p4.read().is_01() || !tmp_105_fu_8893_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_38_fu_8877_p4.read()) + sc_biguint<16>(tmp_105_fu_8893_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_39_fu_8926_p2() {
    tmp_159_39_fu_8926_p2 = (!p_Result_42_39_fu_8906_p4.read().is_01() || !tmp_106_fu_8922_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_39_fu_8906_p4.read()) + sc_biguint<16>(tmp_106_fu_8922_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_3_fu_7940_p2() {
    tmp_159_3_fu_7940_p2 = (!p_Result_42_3_fu_7920_p4.read().is_01() || !tmp_70_fu_7936_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_3_fu_7920_p4.read()) + sc_biguint<16>(tmp_70_fu_7936_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_40_fu_8955_p2() {
    tmp_159_40_fu_8955_p2 = (!p_Result_42_40_fu_8935_p4.read().is_01() || !tmp_107_fu_8951_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_40_fu_8935_p4.read()) + sc_biguint<16>(tmp_107_fu_8951_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_41_fu_8984_p2() {
    tmp_159_41_fu_8984_p2 = (!p_Result_42_41_fu_8964_p4.read().is_01() || !tmp_108_fu_8980_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_41_fu_8964_p4.read()) + sc_biguint<16>(tmp_108_fu_8980_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_42_fu_9013_p2() {
    tmp_159_42_fu_9013_p2 = (!p_Result_42_42_fu_8993_p4.read().is_01() || !tmp_109_fu_9009_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_42_fu_8993_p4.read()) + sc_biguint<16>(tmp_109_fu_9009_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_43_fu_9042_p2() {
    tmp_159_43_fu_9042_p2 = (!p_Result_42_43_fu_9022_p4.read().is_01() || !tmp_110_fu_9038_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_43_fu_9022_p4.read()) + sc_biguint<16>(tmp_110_fu_9038_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_44_fu_9071_p2() {
    tmp_159_44_fu_9071_p2 = (!p_Result_42_44_fu_9051_p4.read().is_01() || !tmp_111_fu_9067_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_44_fu_9051_p4.read()) + sc_biguint<16>(tmp_111_fu_9067_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_45_fu_9100_p2() {
    tmp_159_45_fu_9100_p2 = (!p_Result_42_45_fu_9080_p4.read().is_01() || !tmp_112_fu_9096_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_45_fu_9080_p4.read()) + sc_biguint<16>(tmp_112_fu_9096_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_46_fu_9129_p2() {
    tmp_159_46_fu_9129_p2 = (!p_Result_42_46_fu_9109_p4.read().is_01() || !tmp_113_fu_9125_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_46_fu_9109_p4.read()) + sc_biguint<16>(tmp_113_fu_9125_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_47_fu_9158_p2() {
    tmp_159_47_fu_9158_p2 = (!p_Result_42_47_fu_9138_p4.read().is_01() || !tmp_114_fu_9154_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_47_fu_9138_p4.read()) + sc_biguint<16>(tmp_114_fu_9154_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_48_fu_9187_p2() {
    tmp_159_48_fu_9187_p2 = (!p_Result_42_48_fu_9167_p4.read().is_01() || !tmp_115_fu_9183_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_48_fu_9167_p4.read()) + sc_biguint<16>(tmp_115_fu_9183_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_49_fu_9216_p2() {
    tmp_159_49_fu_9216_p2 = (!p_Result_42_49_fu_9196_p4.read().is_01() || !tmp_116_fu_9212_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_49_fu_9196_p4.read()) + sc_biguint<16>(tmp_116_fu_9212_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_4_fu_7969_p2() {
    tmp_159_4_fu_7969_p2 = (!p_Result_42_4_fu_7949_p4.read().is_01() || !tmp_71_fu_7965_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_4_fu_7949_p4.read()) + sc_biguint<16>(tmp_71_fu_7965_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_50_fu_9245_p2() {
    tmp_159_50_fu_9245_p2 = (!p_Result_42_50_fu_9225_p4.read().is_01() || !tmp_117_fu_9241_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_50_fu_9225_p4.read()) + sc_biguint<16>(tmp_117_fu_9241_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_51_fu_9274_p2() {
    tmp_159_51_fu_9274_p2 = (!p_Result_42_51_fu_9254_p4.read().is_01() || !tmp_118_fu_9270_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_51_fu_9254_p4.read()) + sc_biguint<16>(tmp_118_fu_9270_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_52_fu_9303_p2() {
    tmp_159_52_fu_9303_p2 = (!p_Result_42_52_fu_9283_p4.read().is_01() || !tmp_119_fu_9299_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_52_fu_9283_p4.read()) + sc_biguint<16>(tmp_119_fu_9299_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_53_fu_9332_p2() {
    tmp_159_53_fu_9332_p2 = (!p_Result_42_53_fu_9312_p4.read().is_01() || !tmp_120_fu_9328_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_53_fu_9312_p4.read()) + sc_biguint<16>(tmp_120_fu_9328_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_54_fu_9361_p2() {
    tmp_159_54_fu_9361_p2 = (!p_Result_42_54_fu_9341_p4.read().is_01() || !tmp_121_fu_9357_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_54_fu_9341_p4.read()) + sc_biguint<16>(tmp_121_fu_9357_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_55_fu_9390_p2() {
    tmp_159_55_fu_9390_p2 = (!p_Result_42_55_fu_9370_p4.read().is_01() || !tmp_122_fu_9386_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_55_fu_9370_p4.read()) + sc_biguint<16>(tmp_122_fu_9386_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_56_fu_9419_p2() {
    tmp_159_56_fu_9419_p2 = (!p_Result_42_56_fu_9399_p4.read().is_01() || !tmp_123_fu_9415_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_56_fu_9399_p4.read()) + sc_biguint<16>(tmp_123_fu_9415_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_57_fu_9448_p2() {
    tmp_159_57_fu_9448_p2 = (!p_Result_42_57_fu_9428_p4.read().is_01() || !tmp_124_fu_9444_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_57_fu_9428_p4.read()) + sc_biguint<16>(tmp_124_fu_9444_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_58_fu_9477_p2() {
    tmp_159_58_fu_9477_p2 = (!p_Result_42_58_fu_9457_p4.read().is_01() || !tmp_125_fu_9473_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_58_fu_9457_p4.read()) + sc_biguint<16>(tmp_125_fu_9473_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_59_fu_9506_p2() {
    tmp_159_59_fu_9506_p2 = (!p_Result_42_59_fu_9486_p4.read().is_01() || !tmp_126_fu_9502_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_59_fu_9486_p4.read()) + sc_biguint<16>(tmp_126_fu_9502_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_5_fu_7998_p2() {
    tmp_159_5_fu_7998_p2 = (!p_Result_42_5_fu_7978_p4.read().is_01() || !tmp_72_fu_7994_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_5_fu_7978_p4.read()) + sc_biguint<16>(tmp_72_fu_7994_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_60_fu_9535_p2() {
    tmp_159_60_fu_9535_p2 = (!p_Result_42_60_fu_9515_p4.read().is_01() || !tmp_127_fu_9531_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_60_fu_9515_p4.read()) + sc_biguint<16>(tmp_127_fu_9531_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_61_fu_9564_p2() {
    tmp_159_61_fu_9564_p2 = (!p_Result_42_61_fu_9544_p4.read().is_01() || !tmp_128_fu_9560_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_61_fu_9544_p4.read()) + sc_biguint<16>(tmp_128_fu_9560_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_62_fu_9593_p2() {
    tmp_159_62_fu_9593_p2 = (!p_Result_42_62_fu_9573_p4.read().is_01() || !tmp_129_fu_9589_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_62_fu_9573_p4.read()) + sc_biguint<16>(tmp_129_fu_9589_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_6_fu_8027_p2() {
    tmp_159_6_fu_8027_p2 = (!p_Result_42_6_fu_8007_p4.read().is_01() || !tmp_73_fu_8023_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_6_fu_8007_p4.read()) + sc_biguint<16>(tmp_73_fu_8023_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_7_fu_8056_p2() {
    tmp_159_7_fu_8056_p2 = (!p_Result_42_7_fu_8036_p4.read().is_01() || !tmp_74_fu_8052_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_7_fu_8036_p4.read()) + sc_biguint<16>(tmp_74_fu_8052_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_8_fu_8085_p2() {
    tmp_159_8_fu_8085_p2 = (!p_Result_42_8_fu_8065_p4.read().is_01() || !tmp_75_fu_8081_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_8_fu_8065_p4.read()) + sc_biguint<16>(tmp_75_fu_8081_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_9_fu_8114_p2() {
    tmp_159_9_fu_8114_p2 = (!p_Result_42_9_fu_8094_p4.read().is_01() || !tmp_76_fu_8110_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_9_fu_8094_p4.read()) + sc_biguint<16>(tmp_76_fu_8110_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_159_s_fu_9622_p2() {
    tmp_159_s_fu_9622_p2 = (!p_Result_42_s_fu_9602_p4.read().is_01() || !tmp_130_fu_9618_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_42_s_fu_9602_p4.read()) + sc_biguint<16>(tmp_130_fu_9618_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_162_10_cast_cast_fu_9674_p1() {
    tmp_162_10_cast_cast_fu_9674_p1 = esl_sext<17,16>(tmp_354_fu_8120_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_11_cast_cast_fu_9678_p1() {
    tmp_162_11_cast_cast_fu_9678_p1 = esl_sext<17,16>(tmp_356_fu_8149_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_12_cast_cast_fu_9682_p1() {
    tmp_162_12_cast_cast_fu_9682_p1 = esl_sext<17,16>(tmp_358_fu_8178_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_13_cast_cast_fu_10315_p1() {
    tmp_162_13_cast_cast_fu_10315_p1 = esl_sext<18,16>(tmp_360_reg_13579.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_14_cast_cast_fu_9686_p1() {
    tmp_162_14_cast_cast_fu_9686_p1 = esl_sext<17,16>(tmp_362_fu_8236_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_15_cast_cast_fu_9690_p1() {
    tmp_162_15_cast_cast_fu_9690_p1 = esl_sext<17,16>(tmp_364_fu_8265_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_16_cast_fu_10446_p1() {
    tmp_162_16_cast_fu_10446_p1 = esl_sext<21,16>(tmp_366_fu_10098_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_17_cast_cast_fu_9712_p1() {
    tmp_162_17_cast_cast_fu_9712_p1 = esl_sext<17,16>(tmp_368_fu_8294_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_18_cast_cast_fu_9716_p1() {
    tmp_162_18_cast_cast_fu_9716_p1 = esl_sext<17,16>(tmp_370_fu_8323_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_19_cast_cast_fu_9720_p1() {
    tmp_162_19_cast_cast_fu_9720_p1 = esl_sext<17,16>(tmp_372_fu_8352_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_1_cast_fu_9632_p1() {
    tmp_162_1_cast_fu_9632_p1 = esl_sext<17,16>(tmp_336_fu_7859_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_20_cast_cast_fu_9724_p1() {
    tmp_162_20_cast_cast_fu_9724_p1 = esl_sext<17,16>(tmp_374_fu_8381_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_21_cast_cast_fu_9728_p1() {
    tmp_162_21_cast_cast_fu_9728_p1 = esl_sext<17,16>(tmp_376_fu_8410_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_22_cast_cast_fu_9732_p1() {
    tmp_162_22_cast_cast_fu_9732_p1 = esl_sext<17,16>(tmp_378_fu_8439_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_23_cast_cast_fu_9736_p1() {
    tmp_162_23_cast_cast_fu_9736_p1 = esl_sext<17,16>(tmp_380_fu_8468_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_24_cast_cast_fu_9740_p1() {
    tmp_162_24_cast_cast_fu_9740_p1 = esl_sext<17,16>(tmp_382_fu_8497_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_25_cast_cast_fu_9744_p1() {
    tmp_162_25_cast_cast_fu_9744_p1 = esl_sext<17,16>(tmp_384_fu_8526_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_26_cast_cast_fu_9748_p1() {
    tmp_162_26_cast_cast_fu_9748_p1 = esl_sext<17,16>(tmp_386_fu_8555_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_27_cast_cast_fu_9752_p1() {
    tmp_162_27_cast_cast_fu_9752_p1 = esl_sext<17,16>(tmp_388_fu_8584_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_28_cast_cast_fu_9756_p1() {
    tmp_162_28_cast_cast_fu_9756_p1 = esl_sext<17,16>(tmp_390_fu_8613_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_29_cast_cast_fu_10486_p1() {
    tmp_162_29_cast_cast_fu_10486_p1 = esl_sext<18,16>(tmp_392_reg_13659.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_2_cast_cast_fu_9642_p1() {
    tmp_162_2_cast_cast_fu_9642_p1 = esl_sext<17,16>(tmp_338_fu_7888_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_30_cast_cast_fu_9760_p1() {
    tmp_162_30_cast_cast_fu_9760_p1 = esl_sext<17,16>(tmp_394_fu_8671_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_31_cast_cast_fu_9764_p1() {
    tmp_162_31_cast_cast_fu_9764_p1 = esl_sext<17,16>(tmp_396_fu_8700_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_32_cast_fu_11245_p1() {
    tmp_162_32_cast_fu_11245_p1 = esl_sext<22,16>(tmp_398_reg_13984.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_33_cast_cast_fu_9810_p1() {
    tmp_162_33_cast_cast_fu_9810_p1 = esl_sext<17,16>(tmp_400_fu_8729_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_34_cast_cast_fu_9814_p1() {
    tmp_162_34_cast_cast_fu_9814_p1 = esl_sext<17,16>(tmp_402_fu_8758_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_35_cast_cast_fu_9818_p1() {
    tmp_162_35_cast_cast_fu_9818_p1 = esl_sext<17,16>(tmp_404_fu_8787_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_36_cast_cast_fu_9822_p1() {
    tmp_162_36_cast_cast_fu_9822_p1 = esl_sext<17,16>(tmp_406_fu_8816_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_37_cast_cast_fu_9826_p1() {
    tmp_162_37_cast_cast_fu_9826_p1 = esl_sext<17,16>(tmp_408_fu_8845_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_38_cast_cast_fu_9830_p1() {
    tmp_162_38_cast_cast_fu_9830_p1 = esl_sext<17,16>(tmp_410_fu_8874_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_39_cast_cast_fu_9834_p1() {
    tmp_162_39_cast_cast_fu_9834_p1 = esl_sext<17,16>(tmp_412_fu_8903_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_3_cast_cast_fu_9646_p1() {
    tmp_162_3_cast_cast_fu_9646_p1 = esl_sext<17,16>(tmp_340_fu_7917_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_40_cast_cast_fu_9838_p1() {
    tmp_162_40_cast_cast_fu_9838_p1 = esl_sext<17,16>(tmp_414_fu_8932_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_41_cast_cast_fu_9842_p1() {
    tmp_162_41_cast_cast_fu_9842_p1 = esl_sext<17,16>(tmp_416_fu_8961_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_42_cast_cast_fu_9846_p1() {
    tmp_162_42_cast_cast_fu_9846_p1 = esl_sext<17,16>(tmp_418_fu_8990_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_43_cast_cast_fu_9850_p1() {
    tmp_162_43_cast_cast_fu_9850_p1 = esl_sext<17,16>(tmp_420_fu_9019_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_44_cast_cast_fu_9854_p1() {
    tmp_162_44_cast_cast_fu_9854_p1 = esl_sext<17,16>(tmp_422_fu_9048_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_45_cast_cast_fu_9858_p1() {
    tmp_162_45_cast_cast_fu_9858_p1 = esl_sext<17,16>(tmp_424_fu_9077_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_46_cast_cast_fu_9862_p1() {
    tmp_162_46_cast_cast_fu_9862_p1 = esl_sext<17,16>(tmp_426_fu_9106_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_47_cast_cast_fu_9866_p1() {
    tmp_162_47_cast_cast_fu_9866_p1 = esl_sext<17,16>(tmp_428_fu_9135_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_48_cast_cast_fu_9870_p1() {
    tmp_162_48_cast_cast_fu_9870_p1 = esl_sext<17,16>(tmp_430_fu_9164_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_49_cast_cast_fu_9874_p1() {
    tmp_162_49_cast_cast_fu_9874_p1 = esl_sext<17,16>(tmp_432_fu_9193_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_4_cast_fu_10214_p1() {
    tmp_162_4_cast_fu_10214_p1 = esl_sext<19,16>(tmp_342_reg_13519.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_50_cast_cast_fu_9878_p1() {
    tmp_162_50_cast_cast_fu_9878_p1 = esl_sext<17,16>(tmp_434_fu_9222_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_51_cast_cast_fu_9882_p1() {
    tmp_162_51_cast_cast_fu_9882_p1 = esl_sext<17,16>(tmp_436_fu_9251_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_52_cast_cast_fu_9886_p1() {
    tmp_162_52_cast_cast_fu_9886_p1 = esl_sext<17,16>(tmp_438_fu_9280_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_53_cast_cast_fu_9890_p1() {
    tmp_162_53_cast_cast_fu_9890_p1 = esl_sext<17,16>(tmp_440_fu_9309_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_54_cast_cast_fu_9894_p1() {
    tmp_162_54_cast_cast_fu_9894_p1 = esl_sext<17,16>(tmp_442_fu_9338_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_55_cast_cast_fu_9898_p1() {
    tmp_162_55_cast_cast_fu_9898_p1 = esl_sext<17,16>(tmp_444_fu_9367_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_56_cast_cast_fu_9902_p1() {
    tmp_162_56_cast_cast_fu_9902_p1 = esl_sext<17,16>(tmp_446_fu_9396_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_57_cast_cast_fu_9906_p1() {
    tmp_162_57_cast_cast_fu_9906_p1 = esl_sext<17,16>(tmp_448_fu_9425_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_58_cast_cast_fu_9910_p1() {
    tmp_162_58_cast_cast_fu_9910_p1 = esl_sext<17,16>(tmp_450_fu_9454_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_59_cast_cast_fu_9914_p1() {
    tmp_162_59_cast_cast_fu_9914_p1 = esl_sext<17,16>(tmp_452_fu_9483_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_5_cast_cast_fu_10220_p1() {
    tmp_162_5_cast_cast_fu_10220_p1 = esl_sext<18,16>(tmp_344_reg_13529.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_60_cast_cast_fu_9918_p1() {
    tmp_162_60_cast_cast_fu_9918_p1 = esl_sext<17,16>(tmp_454_fu_9512_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_61_cast_cast_fu_10765_p1() {
    tmp_162_61_cast_cast_fu_10765_p1 = esl_sext<18,16>(tmp_456_reg_13819.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_62_cast_cast_fu_9922_p1() {
    tmp_162_62_cast_cast_fu_9922_p1 = esl_sext<17,16>(tmp_458_fu_9570_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_6_cast_cast_fu_9656_p1() {
    tmp_162_6_cast_cast_fu_9656_p1 = esl_sext<17,16>(tmp_346_fu_8004_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_7_cast_cast_fu_9660_p1() {
    tmp_162_7_cast_cast_fu_9660_p1 = esl_sext<17,16>(tmp_348_fu_8033_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_8_cast_fu_10297_p1() {
    tmp_162_8_cast_fu_10297_p1 = esl_sext<20,16>(tmp_350_reg_13549.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_9_cast_cast_fu_9670_p1() {
    tmp_162_9_cast_cast_fu_9670_p1 = esl_sext<17,16>(tmp_352_fu_8091_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_cast_cast_fu_9926_p1() {
    tmp_162_cast_cast_fu_9926_p1 = esl_sext<17,16>(tmp_460_fu_9599_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_162_cast_fu_9628_p1() {
    tmp_162_cast_fu_9628_p1 = esl_sext<17,16>(tmp_334_fu_7830_p1.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_10_cast_cast_fu_10306_p1() {
    tmp_163_10_cast_cast_fu_10306_p1 = esl_sext<17,16>(tmp_159_10_reg_13564.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_11_cast_cast_fu_10309_p1() {
    tmp_163_11_cast_cast_fu_10309_p1 = esl_sext<17,16>(tmp_159_11_reg_13569.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_12_cast_cast_fu_10312_p1() {
    tmp_163_12_cast_cast_fu_10312_p1 = esl_sext<17,16>(tmp_159_12_reg_13574.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_13_cast_cast_fu_10318_p1() {
    tmp_163_13_cast_cast_fu_10318_p1 = esl_sext<18,16>(tmp_159_13_reg_13584.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_14_cast_cast_fu_10321_p1() {
    tmp_163_14_cast_cast_fu_10321_p1 = esl_sext<17,16>(tmp_159_14_reg_13589.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_15_cast_cast_fu_10375_p1() {
    tmp_163_15_cast_cast_fu_10375_p1 = esl_sext<17,16>(tmp_159_15_reg_13594.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_16_cast_fu_11184_p1() {
    tmp_163_16_cast_fu_11184_p1 = esl_sext<21,16>(tmp_159_16_reg_13979.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_17_cast_cast_fu_10450_p1() {
    tmp_163_17_cast_cast_fu_10450_p1 = esl_sext<17,16>(tmp_159_17_reg_13599.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_18_cast_cast_fu_10453_p1() {
    tmp_163_18_cast_cast_fu_10453_p1 = esl_sext<17,16>(tmp_159_18_reg_13604.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_19_cast_cast_fu_10456_p1() {
    tmp_163_19_cast_cast_fu_10456_p1 = esl_sext<17,16>(tmp_159_19_reg_13609.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_1_cast_fu_10162_p1() {
    tmp_163_1_cast_fu_10162_p1 = esl_sext<17,16>(tmp_159_1_reg_13504.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_20_cast_cast_fu_10459_p1() {
    tmp_163_20_cast_cast_fu_10459_p1 = esl_sext<17,16>(tmp_159_20_reg_13614.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_21_cast_cast_fu_10462_p1() {
    tmp_163_21_cast_cast_fu_10462_p1 = esl_sext<17,16>(tmp_159_21_reg_13619.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_22_cast_cast_fu_10465_p1() {
    tmp_163_22_cast_cast_fu_10465_p1 = esl_sext<17,16>(tmp_159_22_reg_13624.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_23_cast_cast_fu_10468_p1() {
    tmp_163_23_cast_cast_fu_10468_p1 = esl_sext<17,16>(tmp_159_23_reg_13629.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_24_cast_cast_fu_10471_p1() {
    tmp_163_24_cast_cast_fu_10471_p1 = esl_sext<17,16>(tmp_159_24_reg_13634.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_25_cast_cast_fu_10474_p1() {
    tmp_163_25_cast_cast_fu_10474_p1 = esl_sext<17,16>(tmp_159_25_reg_13639.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_26_cast_cast_fu_10477_p1() {
    tmp_163_26_cast_cast_fu_10477_p1 = esl_sext<17,16>(tmp_159_26_reg_13644.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_27_cast_cast_fu_10480_p1() {
    tmp_163_27_cast_cast_fu_10480_p1 = esl_sext<17,16>(tmp_159_27_reg_13649.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_28_cast_cast_fu_10483_p1() {
    tmp_163_28_cast_cast_fu_10483_p1 = esl_sext<17,16>(tmp_159_28_reg_13654.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_29_cast_cast_fu_10489_p1() {
    tmp_163_29_cast_cast_fu_10489_p1 = esl_sext<18,16>(tmp_159_29_reg_13664.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_2_cast_cast_fu_10175_p1() {
    tmp_163_2_cast_cast_fu_10175_p1 = esl_sext<17,16>(tmp_159_2_reg_13509.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_30_cast_cast_fu_10492_p1() {
    tmp_163_30_cast_cast_fu_10492_p1 = esl_sext<17,16>(tmp_159_30_reg_13669.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_31_cast_cast_fu_10570_p1() {
    tmp_163_31_cast_cast_fu_10570_p1 = esl_sext<17,16>(tmp_159_31_reg_13674.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_32_cast_fu_11248_p1() {
    tmp_163_32_cast_fu_11248_p1 = esl_sext<22,16>(tmp_159_32_reg_13989.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_33_cast_cast_fu_10681_p1() {
    tmp_163_33_cast_cast_fu_10681_p1 = esl_sext<17,16>(tmp_159_33_reg_13679.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_34_cast_cast_fu_10684_p1() {
    tmp_163_34_cast_cast_fu_10684_p1 = esl_sext<17,16>(tmp_159_34_reg_13684.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_35_cast_cast_fu_10687_p1() {
    tmp_163_35_cast_cast_fu_10687_p1 = esl_sext<17,16>(tmp_159_35_reg_13689.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_36_cast_cast_fu_10690_p1() {
    tmp_163_36_cast_cast_fu_10690_p1 = esl_sext<17,16>(tmp_159_36_reg_13694.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_37_cast_cast_fu_10693_p1() {
    tmp_163_37_cast_cast_fu_10693_p1 = esl_sext<17,16>(tmp_159_37_reg_13699.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_38_cast_cast_fu_10696_p1() {
    tmp_163_38_cast_cast_fu_10696_p1 = esl_sext<17,16>(tmp_159_38_reg_13704.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_39_cast_cast_fu_10699_p1() {
    tmp_163_39_cast_cast_fu_10699_p1 = esl_sext<17,16>(tmp_159_39_reg_13709.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_3_cast_cast_fu_10191_p1() {
    tmp_163_3_cast_cast_fu_10191_p1 = esl_sext<17,16>(tmp_159_3_reg_13514.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_40_cast_cast_fu_10702_p1() {
    tmp_163_40_cast_cast_fu_10702_p1 = esl_sext<17,16>(tmp_159_40_reg_13714.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_41_cast_cast_fu_10705_p1() {
    tmp_163_41_cast_cast_fu_10705_p1 = esl_sext<17,16>(tmp_159_41_reg_13719.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_42_cast_cast_fu_10708_p1() {
    tmp_163_42_cast_cast_fu_10708_p1 = esl_sext<17,16>(tmp_159_42_reg_13724.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_43_cast_cast_fu_10711_p1() {
    tmp_163_43_cast_cast_fu_10711_p1 = esl_sext<17,16>(tmp_159_43_reg_13729.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_44_cast_cast_fu_10714_p1() {
    tmp_163_44_cast_cast_fu_10714_p1 = esl_sext<17,16>(tmp_159_44_reg_13734.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_45_cast_cast_fu_10717_p1() {
    tmp_163_45_cast_cast_fu_10717_p1 = esl_sext<17,16>(tmp_159_45_reg_13739.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_46_cast_cast_fu_10720_p1() {
    tmp_163_46_cast_cast_fu_10720_p1 = esl_sext<17,16>(tmp_159_46_reg_13744.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_47_cast_cast_fu_10723_p1() {
    tmp_163_47_cast_cast_fu_10723_p1 = esl_sext<17,16>(tmp_159_47_reg_13749.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_48_cast_cast_fu_10726_p1() {
    tmp_163_48_cast_cast_fu_10726_p1 = esl_sext<17,16>(tmp_159_48_reg_13754.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_49_cast_cast_fu_10729_p1() {
    tmp_163_49_cast_cast_fu_10729_p1 = esl_sext<17,16>(tmp_159_49_reg_13759.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_4_cast_fu_10217_p1() {
    tmp_163_4_cast_fu_10217_p1 = esl_sext<19,16>(tmp_159_4_reg_13524.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_50_cast_cast_fu_10732_p1() {
    tmp_163_50_cast_cast_fu_10732_p1 = esl_sext<17,16>(tmp_159_50_reg_13764.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_51_cast_cast_fu_10735_p1() {
    tmp_163_51_cast_cast_fu_10735_p1 = esl_sext<17,16>(tmp_159_51_reg_13769.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_52_cast_cast_fu_10738_p1() {
    tmp_163_52_cast_cast_fu_10738_p1 = esl_sext<17,16>(tmp_159_52_reg_13774.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_53_cast_cast_fu_10741_p1() {
    tmp_163_53_cast_cast_fu_10741_p1 = esl_sext<17,16>(tmp_159_53_reg_13779.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_54_cast_cast_fu_10744_p1() {
    tmp_163_54_cast_cast_fu_10744_p1 = esl_sext<17,16>(tmp_159_54_reg_13784.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_55_cast_cast_fu_10747_p1() {
    tmp_163_55_cast_cast_fu_10747_p1 = esl_sext<17,16>(tmp_159_55_reg_13789.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_56_cast_cast_fu_10750_p1() {
    tmp_163_56_cast_cast_fu_10750_p1 = esl_sext<17,16>(tmp_159_56_reg_13794.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_57_cast_cast_fu_10753_p1() {
    tmp_163_57_cast_cast_fu_10753_p1 = esl_sext<17,16>(tmp_159_57_reg_13799.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_58_cast_cast_fu_10756_p1() {
    tmp_163_58_cast_cast_fu_10756_p1 = esl_sext<17,16>(tmp_159_58_reg_13804.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_59_cast_cast_fu_10759_p1() {
    tmp_163_59_cast_cast_fu_10759_p1 = esl_sext<17,16>(tmp_159_59_reg_13809.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_5_cast_cast_fu_10223_p1() {
    tmp_163_5_cast_cast_fu_10223_p1 = esl_sext<18,16>(tmp_159_5_reg_13534.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_60_cast_cast_fu_10762_p1() {
    tmp_163_60_cast_cast_fu_10762_p1 = esl_sext<17,16>(tmp_159_60_reg_13814.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_61_cast_cast_fu_10768_p1() {
    tmp_163_61_cast_cast_fu_10768_p1 = esl_sext<18,16>(tmp_159_61_reg_13824.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_62_cast_cast_fu_10771_p1() {
    tmp_163_62_cast_cast_fu_10771_p1 = esl_sext<17,16>(tmp_159_62_reg_13829.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_6_cast_cast_fu_10226_p1() {
    tmp_163_6_cast_cast_fu_10226_p1 = esl_sext<17,16>(tmp_159_6_reg_13539.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_7_cast_cast_fu_10258_p1() {
    tmp_163_7_cast_cast_fu_10258_p1 = esl_sext<17,16>(tmp_159_7_reg_13544.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_8_cast_fu_10300_p1() {
    tmp_163_8_cast_fu_10300_p1 = esl_sext<20,16>(tmp_159_8_reg_13554.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_9_cast_cast_fu_10303_p1() {
    tmp_163_9_cast_cast_fu_10303_p1 = esl_sext<17,16>(tmp_159_9_reg_13559.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_cast_cast_fu_10924_p1() {
    tmp_163_cast_cast_fu_10924_p1 = esl_sext<17,16>(tmp_159_s_reg_13834.read());
}

void AttentionMatmulCompu_2::thread_tmp_163_cast_fu_10156_p1() {
    tmp_163_cast_fu_10156_p1 = esl_sext<17,16>(tmp_20_reg_13499.read());
}

void AttentionMatmulCompu_2::thread_tmp_16_fu_4314_p2() {
    tmp_16_fu_4314_p2 = (!i_op_assign_5_mid2_fu_4306_p3.read().is_01() || !ap_const_lv13_0.is_01())? sc_lv<1>(): sc_lv<1>(i_op_assign_5_mid2_fu_4306_p3.read() == ap_const_lv13_0);
}

void AttentionMatmulCompu_2::thread_tmp_20_fu_7853_p2() {
    tmp_20_fu_7853_p2 = (!p_Result_4_fu_7833_p4.read().is_01() || !tmp_fu_7849_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_Result_4_fu_7833_p4.read()) + sc_biguint<16>(tmp_fu_7849_p1.read()));
}

void AttentionMatmulCompu_2::thread_tmp_269_fu_4278_p1() {
    tmp_269_fu_4278_p1 = in_n_r_V_V1_dout.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_334_fu_7830_p1() {
    tmp_334_fu_7830_p1 = grp_fu_11349_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_335_fu_7842_p3() {
    tmp_335_fu_7842_p3 = grp_fu_11349_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_336_fu_7859_p1() {
    tmp_336_fu_7859_p1 = grp_fu_11360_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_337_fu_7871_p3() {
    tmp_337_fu_7871_p3 = grp_fu_11360_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_338_fu_7888_p1() {
    tmp_338_fu_7888_p1 = grp_fu_11371_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_339_fu_7900_p3() {
    tmp_339_fu_7900_p3 = grp_fu_11371_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_340_fu_7917_p1() {
    tmp_340_fu_7917_p1 = grp_fu_11382_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_341_fu_7929_p3() {
    tmp_341_fu_7929_p3 = grp_fu_11382_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_342_fu_7946_p1() {
    tmp_342_fu_7946_p1 = grp_fu_11393_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_343_fu_7958_p3() {
    tmp_343_fu_7958_p3 = grp_fu_11393_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_344_fu_7975_p1() {
    tmp_344_fu_7975_p1 = grp_fu_11404_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_345_fu_7987_p3() {
    tmp_345_fu_7987_p3 = grp_fu_11404_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_346_fu_8004_p1() {
    tmp_346_fu_8004_p1 = grp_fu_11415_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_347_fu_8016_p3() {
    tmp_347_fu_8016_p3 = grp_fu_11415_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_348_fu_8033_p1() {
    tmp_348_fu_8033_p1 = grp_fu_11426_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_349_fu_8045_p3() {
    tmp_349_fu_8045_p3 = grp_fu_11426_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_350_fu_8062_p1() {
    tmp_350_fu_8062_p1 = grp_fu_11437_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_351_fu_8074_p3() {
    tmp_351_fu_8074_p3 = grp_fu_11437_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_352_fu_8091_p1() {
    tmp_352_fu_8091_p1 = grp_fu_11448_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_353_fu_8103_p3() {
    tmp_353_fu_8103_p3 = grp_fu_11448_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_354_fu_8120_p1() {
    tmp_354_fu_8120_p1 = grp_fu_11459_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_355_fu_8132_p3() {
    tmp_355_fu_8132_p3 = grp_fu_11459_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_356_fu_8149_p1() {
    tmp_356_fu_8149_p1 = grp_fu_11470_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_357_fu_8161_p3() {
    tmp_357_fu_8161_p3 = grp_fu_11470_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_358_fu_8178_p1() {
    tmp_358_fu_8178_p1 = grp_fu_11481_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_359_fu_8190_p3() {
    tmp_359_fu_8190_p3 = grp_fu_11481_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_360_fu_8207_p1() {
    tmp_360_fu_8207_p1 = grp_fu_11492_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_361_fu_8219_p3() {
    tmp_361_fu_8219_p3 = grp_fu_11492_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_362_fu_8236_p1() {
    tmp_362_fu_8236_p1 = grp_fu_11503_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_363_fu_8248_p3() {
    tmp_363_fu_8248_p3 = grp_fu_11503_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_364_fu_8265_p1() {
    tmp_364_fu_8265_p1 = grp_fu_11514_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_365_fu_8277_p3() {
    tmp_365_fu_8277_p3 = grp_fu_11514_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_366_fu_10098_p1() {
    tmp_366_fu_10098_p1 = grp_fu_12031_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_367_fu_10110_p3() {
    tmp_367_fu_10110_p3 = grp_fu_12031_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_368_fu_8294_p1() {
    tmp_368_fu_8294_p1 = grp_fu_11525_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_369_fu_8306_p3() {
    tmp_369_fu_8306_p3 = grp_fu_11525_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_370_fu_8323_p1() {
    tmp_370_fu_8323_p1 = grp_fu_11536_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_371_fu_8335_p3() {
    tmp_371_fu_8335_p3 = grp_fu_11536_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_372_fu_8352_p1() {
    tmp_372_fu_8352_p1 = grp_fu_11547_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_373_fu_8364_p3() {
    tmp_373_fu_8364_p3 = grp_fu_11547_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_374_fu_8381_p1() {
    tmp_374_fu_8381_p1 = grp_fu_11558_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_375_fu_8393_p3() {
    tmp_375_fu_8393_p3 = grp_fu_11558_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_376_fu_8410_p1() {
    tmp_376_fu_8410_p1 = grp_fu_11569_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_377_fu_8422_p3() {
    tmp_377_fu_8422_p3 = grp_fu_11569_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_378_fu_8439_p1() {
    tmp_378_fu_8439_p1 = grp_fu_11580_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_379_fu_8451_p3() {
    tmp_379_fu_8451_p3 = grp_fu_11580_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_380_fu_8468_p1() {
    tmp_380_fu_8468_p1 = grp_fu_11591_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_381_fu_8480_p3() {
    tmp_381_fu_8480_p3 = grp_fu_11591_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_382_fu_8497_p1() {
    tmp_382_fu_8497_p1 = grp_fu_11602_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_383_fu_8509_p3() {
    tmp_383_fu_8509_p3 = grp_fu_11602_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_384_fu_8526_p1() {
    tmp_384_fu_8526_p1 = grp_fu_11613_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_385_fu_8538_p3() {
    tmp_385_fu_8538_p3 = grp_fu_11613_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_386_fu_8555_p1() {
    tmp_386_fu_8555_p1 = grp_fu_11624_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_387_fu_8567_p3() {
    tmp_387_fu_8567_p3 = grp_fu_11624_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_388_fu_8584_p1() {
    tmp_388_fu_8584_p1 = grp_fu_11635_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_389_fu_8596_p3() {
    tmp_389_fu_8596_p3 = grp_fu_11635_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_390_fu_8613_p1() {
    tmp_390_fu_8613_p1 = grp_fu_11646_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_391_fu_8625_p3() {
    tmp_391_fu_8625_p3 = grp_fu_11646_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_392_fu_8642_p1() {
    tmp_392_fu_8642_p1 = grp_fu_11657_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_393_fu_8654_p3() {
    tmp_393_fu_8654_p3 = grp_fu_11657_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_394_fu_8671_p1() {
    tmp_394_fu_8671_p1 = grp_fu_11668_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_395_fu_8683_p3() {
    tmp_395_fu_8683_p3 = grp_fu_11668_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_396_fu_8700_p1() {
    tmp_396_fu_8700_p1 = grp_fu_11679_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_397_fu_8712_p3() {
    tmp_397_fu_8712_p3 = grp_fu_11679_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_398_fu_10127_p1() {
    tmp_398_fu_10127_p1 = grp_fu_12042_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_399_fu_10139_p3() {
    tmp_399_fu_10139_p3 = grp_fu_12042_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_400_fu_8729_p1() {
    tmp_400_fu_8729_p1 = grp_fu_11690_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_401_fu_8741_p3() {
    tmp_401_fu_8741_p3 = grp_fu_11690_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_402_fu_8758_p1() {
    tmp_402_fu_8758_p1 = grp_fu_11701_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_403_fu_8770_p3() {
    tmp_403_fu_8770_p3 = grp_fu_11701_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_404_fu_8787_p1() {
    tmp_404_fu_8787_p1 = grp_fu_11712_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_405_fu_8799_p3() {
    tmp_405_fu_8799_p3 = grp_fu_11712_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_406_fu_8816_p1() {
    tmp_406_fu_8816_p1 = grp_fu_11723_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_407_fu_8828_p3() {
    tmp_407_fu_8828_p3 = grp_fu_11723_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_408_fu_8845_p1() {
    tmp_408_fu_8845_p1 = grp_fu_11734_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_409_fu_8857_p3() {
    tmp_409_fu_8857_p3 = grp_fu_11734_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_410_fu_8874_p1() {
    tmp_410_fu_8874_p1 = grp_fu_11745_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_411_fu_8886_p3() {
    tmp_411_fu_8886_p3 = grp_fu_11745_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_412_fu_8903_p1() {
    tmp_412_fu_8903_p1 = grp_fu_11756_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_413_fu_8915_p3() {
    tmp_413_fu_8915_p3 = grp_fu_11756_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_414_fu_8932_p1() {
    tmp_414_fu_8932_p1 = grp_fu_11767_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_415_fu_8944_p3() {
    tmp_415_fu_8944_p3 = grp_fu_11767_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_416_fu_8961_p1() {
    tmp_416_fu_8961_p1 = grp_fu_11778_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_417_fu_8973_p3() {
    tmp_417_fu_8973_p3 = grp_fu_11778_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_418_fu_8990_p1() {
    tmp_418_fu_8990_p1 = grp_fu_11789_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_419_fu_9002_p3() {
    tmp_419_fu_9002_p3 = grp_fu_11789_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_420_fu_9019_p1() {
    tmp_420_fu_9019_p1 = grp_fu_11800_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_421_fu_9031_p3() {
    tmp_421_fu_9031_p3 = grp_fu_11800_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_422_fu_9048_p1() {
    tmp_422_fu_9048_p1 = grp_fu_11811_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_423_fu_9060_p3() {
    tmp_423_fu_9060_p3 = grp_fu_11811_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_424_fu_9077_p1() {
    tmp_424_fu_9077_p1 = grp_fu_11822_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_425_fu_9089_p3() {
    tmp_425_fu_9089_p3 = grp_fu_11822_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_426_fu_9106_p1() {
    tmp_426_fu_9106_p1 = grp_fu_11833_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_427_fu_9118_p3() {
    tmp_427_fu_9118_p3 = grp_fu_11833_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_428_fu_9135_p1() {
    tmp_428_fu_9135_p1 = grp_fu_11844_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_429_fu_9147_p3() {
    tmp_429_fu_9147_p3 = grp_fu_11844_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_430_fu_9164_p1() {
    tmp_430_fu_9164_p1 = grp_fu_11855_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_431_fu_9176_p3() {
    tmp_431_fu_9176_p3 = grp_fu_11855_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_432_fu_9193_p1() {
    tmp_432_fu_9193_p1 = grp_fu_11866_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_433_fu_9205_p3() {
    tmp_433_fu_9205_p3 = grp_fu_11866_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_434_fu_9222_p1() {
    tmp_434_fu_9222_p1 = grp_fu_11877_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_435_fu_9234_p3() {
    tmp_435_fu_9234_p3 = grp_fu_11877_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_436_fu_9251_p1() {
    tmp_436_fu_9251_p1 = grp_fu_11888_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_437_fu_9263_p3() {
    tmp_437_fu_9263_p3 = grp_fu_11888_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_438_fu_9280_p1() {
    tmp_438_fu_9280_p1 = grp_fu_11899_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_439_fu_9292_p3() {
    tmp_439_fu_9292_p3 = grp_fu_11899_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_440_fu_9309_p1() {
    tmp_440_fu_9309_p1 = grp_fu_11910_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_441_fu_9321_p3() {
    tmp_441_fu_9321_p3 = grp_fu_11910_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_442_fu_9338_p1() {
    tmp_442_fu_9338_p1 = grp_fu_11921_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_443_fu_9350_p3() {
    tmp_443_fu_9350_p3 = grp_fu_11921_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_444_fu_9367_p1() {
    tmp_444_fu_9367_p1 = grp_fu_11932_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_445_fu_9379_p3() {
    tmp_445_fu_9379_p3 = grp_fu_11932_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_446_fu_9396_p1() {
    tmp_446_fu_9396_p1 = grp_fu_11943_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_447_fu_9408_p3() {
    tmp_447_fu_9408_p3 = grp_fu_11943_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_448_fu_9425_p1() {
    tmp_448_fu_9425_p1 = grp_fu_11954_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_449_fu_9437_p3() {
    tmp_449_fu_9437_p3 = grp_fu_11954_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_450_fu_9454_p1() {
    tmp_450_fu_9454_p1 = grp_fu_11965_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_451_fu_9466_p3() {
    tmp_451_fu_9466_p3 = grp_fu_11965_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_452_fu_9483_p1() {
    tmp_452_fu_9483_p1 = grp_fu_11976_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_453_fu_9495_p3() {
    tmp_453_fu_9495_p3 = grp_fu_11976_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_454_fu_9512_p1() {
    tmp_454_fu_9512_p1 = grp_fu_11987_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_455_fu_9524_p3() {
    tmp_455_fu_9524_p3 = grp_fu_11987_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_456_fu_9541_p1() {
    tmp_456_fu_9541_p1 = grp_fu_11998_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_457_fu_9553_p3() {
    tmp_457_fu_9553_p3 = grp_fu_11998_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_458_fu_9570_p1() {
    tmp_458_fu_9570_p1 = grp_fu_12009_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_459_fu_9582_p3() {
    tmp_459_fu_9582_p3 = grp_fu_12009_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_460_fu_9599_p1() {
    tmp_460_fu_9599_p1 = grp_fu_12020_p3.read().range(16-1, 0);
}

void AttentionMatmulCompu_2::thread_tmp_461_fu_9611_p3() {
    tmp_461_fu_9611_p3 = grp_fu_12020_p3.read().range(15, 15);
}

void AttentionMatmulCompu_2::thread_tmp_69_fu_7907_p1() {
    tmp_69_fu_7907_p1 = esl_zext<16,1>(tmp_339_fu_7900_p3.read());
}

void AttentionMatmulCompu_2::thread_tmp_70_fu_7936_p1() {
    tmp_70_fu_7936_p1 = esl_zext<16,1>(tmp_341_fu_7929_p3.read());
}

void AttentionMatmulCompu_2::thread_tmp_71_fu_7965_p1() {
    tmp_71_fu_7965_p1 = esl_zext<16,1>(tmp_343_fu_7958_p3.read());
}

void AttentionMatmulCompu_2::thread_tmp_72_fu_7994_p1() {
    tmp_72_fu_7994_p1 = esl_zext<16,1>(tmp_345_fu_7987_p3.read());
}

void AttentionMatmulCompu_2::thread_tmp_73_fu_8023_p1() {
    tmp_73_fu_8023_p1 = esl_zext<16,1>(tmp_347_fu_8016_p3.read());
}

void AttentionMatmulCompu_2::thread_tmp_74_fu_8052_p1() {
    tmp_74_fu_8052_p1 = esl_zext<16,1>(tmp_349_fu_8045_p3.read());
}

void AttentionMatmulCompu_2::thread_tmp_75_fu_8081_p1() {
    tmp_75_fu_8081_p1 = esl_zext<16,1>(tmp_351_fu_8074_p3.read());
}

void AttentionMatmulCompu_2::thread_tmp_76_fu_8110_p1() {
    tmp_76_fu_8110_p1 = esl_zext<16,1>(tmp_353_fu_8103_p3.read());
}

void AttentionMatmulCompu_2::thread_tmp_77_fu_8139_p1() {
    tmp_77_fu_8139_p1 = esl_zext<16,1>(tmp_355_fu_8132_p3.read());
}

void AttentionMatmulCompu_2::thread_tmp_78_fu_8168_p1() {
    tmp_78_fu_8168_p1 = esl_zext<16,1>(tmp_357_fu_8161_p3.read());
}

void AttentionMatmulCompu_2::thread_tmp_79_fu_8197_p1() {
    tmp_79_fu_8197_p1 = esl_zext<16,1>(tmp_359_fu_8190_p3.read());
}

void AttentionMatmulCompu_2::thread_tmp_80_fu_8226_p1() {
    tmp_80_fu_8226_p1 = esl_zext<16,1>(tmp_361_fu_8219_p3.read());
}

void AttentionMatmulCompu_2::thread_tmp_81_cast1_fu_4268_p4() {
    tmp_81_cast1_fu_4268_p4 = in_n_c_V_V8_dout.read().range(15, 3);
}

void AttentionMatmulCompu_2::thread_tmp_81_fu_8255_p1() {
    tmp_81_fu_8255_p1 = esl_zext<16,1>(tmp_363_fu_8248_p3.read());
}

void AttentionMatmulCompu_2::thread_tmp_82_fu_8284_p1() {
    tmp_82_fu_8284_p1 = esl_zext<16,1>(tmp_365_fu_8277_p3.read());
}

void AttentionMatmulCompu_2::thread_tmp_83_fu_10117_p1() {
    tmp_83_fu_10117_p1 = esl_zext<16,1>(tmp_367_fu_10110_p3.read());
}

void AttentionMatmulCompu_2::thread_tmp_84_fu_8313_p1() {
    tmp_84_fu_8313_p1 = esl_zext<16,1>(tmp_369_fu_8306_p3.read());
}

void AttentionMatmulCompu_2::thread_tmp_85_fu_8342_p1() {
    tmp_85_fu_8342_p1 = esl_zext<16,1>(tmp_371_fu_8335_p3.read());
}

void AttentionMatmulCompu_2::thread_tmp_86_fu_8371_p1() {
    tmp_86_fu_8371_p1 = esl_zext<16,1>(tmp_373_fu_8364_p3.read());
}

void AttentionMatmulCompu_2::thread_tmp_87_fu_8400_p1() {
    tmp_87_fu_8400_p1 = esl_zext<16,1>(tmp_375_fu_8393_p3.read());
}

void AttentionMatmulCompu_2::thread_tmp_88_fu_8429_p1() {
    tmp_88_fu_8429_p1 = esl_zext<16,1>(tmp_377_fu_8422_p3.read());
}

void AttentionMatmulCompu_2::thread_tmp_89_fu_8458_p1() {
    tmp_89_fu_8458_p1 = esl_zext<16,1>(tmp_379_fu_8451_p3.read());
}

void AttentionMatmulCompu_2::thread_tmp_90_fu_8487_p1() {
    tmp_90_fu_8487_p1 = esl_zext<16,1>(tmp_381_fu_8480_p3.read());
}

void AttentionMatmulCompu_2::thread_tmp_91_fu_8516_p1() {
    tmp_91_fu_8516_p1 = esl_zext<16,1>(tmp_383_fu_8509_p3.read());
}

void AttentionMatmulCompu_2::thread_tmp_92_fu_8545_p1() {
    tmp_92_fu_8545_p1 = esl_zext<16,1>(tmp_385_fu_8538_p3.read());
}

void AttentionMatmulCompu_2::thread_tmp_93_fu_8574_p1() {
    tmp_93_fu_8574_p1 = esl_zext<16,1>(tmp_387_fu_8567_p3.read());
}

void AttentionMatmulCompu_2::thread_tmp_94_fu_8603_p1() {
    tmp_94_fu_8603_p1 = esl_zext<16,1>(tmp_389_fu_8596_p3.read());
}

void AttentionMatmulCompu_2::thread_tmp_95_fu_8632_p1() {
    tmp_95_fu_8632_p1 = esl_zext<16,1>(tmp_391_fu_8625_p3.read());
}

void AttentionMatmulCompu_2::thread_tmp_96_fu_8661_p1() {
    tmp_96_fu_8661_p1 = esl_zext<16,1>(tmp_393_fu_8654_p3.read());
}

void AttentionMatmulCompu_2::thread_tmp_97_fu_8690_p1() {
    tmp_97_fu_8690_p1 = esl_zext<16,1>(tmp_395_fu_8683_p3.read());
}

void AttentionMatmulCompu_2::thread_tmp_98_fu_8719_p1() {
    tmp_98_fu_8719_p1 = esl_zext<16,1>(tmp_397_fu_8712_p3.read());
}

void AttentionMatmulCompu_2::thread_tmp_99_fu_10146_p1() {
    tmp_99_fu_10146_p1 = esl_zext<16,1>(tmp_399_fu_10139_p3.read());
}

void AttentionMatmulCompu_2::thread_tmp_V_1859_fu_11287_p2() {
    tmp_V_1859_fu_11287_p2 = (!tmp68_cast_fu_11284_p1.read().is_01() || !tmp53_fu_11278_p2.read().is_01())? sc_lv<22>(): (sc_bigint<22>(tmp68_cast_fu_11284_p1.read()) + sc_biguint<22>(tmp53_fu_11278_p2.read()));
}

void AttentionMatmulCompu_2::thread_tmp_V_3_fu_11329_p2() {
    tmp_V_3_fu_11329_p2 = (!tmp99_cast_fu_11326_p1.read().is_01() || !tmp84_fu_11320_p2.read().is_01())? sc_lv<22>(): (sc_bigint<22>(tmp99_cast_fu_11326_p1.read()) + sc_biguint<22>(tmp84_fu_11320_p2.read()));
}

void AttentionMatmulCompu_2::thread_tmp_fu_7849_p1() {
    tmp_fu_7849_p1 = esl_zext<16,1>(tmp_335_fu_7842_p3.read());
}

void AttentionMatmulCompu_2::thread_tmp_s_fu_7878_p1() {
    tmp_s_fu_7878_p1 = esl_zext<16,1>(tmp_337_fu_7871_p3.read());
}

}

