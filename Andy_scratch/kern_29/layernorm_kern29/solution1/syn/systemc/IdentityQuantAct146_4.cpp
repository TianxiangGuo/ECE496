#include "IdentityQuantAct146.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void IdentityQuantAct146::thread_tmp_101_13_cast_fu_9497_p1() {
    tmp_101_13_cast_fu_9497_p1 = esl_zext<39,5>(p_Val2_14_phi_reg_11863_pp0_iter2_reg.read());
}

void IdentityQuantAct146::thread_tmp_101_14_cast_fu_9550_p1() {
    tmp_101_14_cast_fu_9550_p1 = esl_zext<39,5>(p_Val2_15_phi_reg_11869_pp0_iter2_reg.read());
}

void IdentityQuantAct146::thread_tmp_101_1_cast_fu_8808_p1() {
    tmp_101_1_cast_fu_8808_p1 = esl_zext<39,5>(p_Val2_1_phi_reg_11785_pp0_iter2_reg.read());
}

void IdentityQuantAct146::thread_tmp_101_2_cast_fu_8861_p1() {
    tmp_101_2_cast_fu_8861_p1 = esl_zext<39,5>(p_Val2_2_phi_reg_11791_pp0_iter2_reg.read());
}

void IdentityQuantAct146::thread_tmp_101_3_cast_fu_8914_p1() {
    tmp_101_3_cast_fu_8914_p1 = esl_zext<39,5>(p_Val2_3_phi_reg_11797_pp0_iter2_reg.read());
}

void IdentityQuantAct146::thread_tmp_101_4_cast_fu_8967_p1() {
    tmp_101_4_cast_fu_8967_p1 = esl_zext<39,5>(p_Val2_4_phi_reg_11803_pp0_iter2_reg.read());
}

void IdentityQuantAct146::thread_tmp_101_5_cast_fu_9020_p1() {
    tmp_101_5_cast_fu_9020_p1 = esl_zext<39,5>(p_Val2_5_phi_reg_11809_pp0_iter2_reg.read());
}

void IdentityQuantAct146::thread_tmp_101_6_cast_fu_9073_p1() {
    tmp_101_6_cast_fu_9073_p1 = esl_zext<39,5>(p_Val2_6_phi_reg_11815_pp0_iter2_reg.read());
}

void IdentityQuantAct146::thread_tmp_101_7_cast_fu_9126_p1() {
    tmp_101_7_cast_fu_9126_p1 = esl_zext<39,5>(p_Val2_719_phi_reg_11821_pp0_iter2_reg.read());
}

void IdentityQuantAct146::thread_tmp_101_8_cast_fu_9179_p1() {
    tmp_101_8_cast_fu_9179_p1 = esl_zext<39,5>(p_Val2_8_phi_reg_11827_pp0_iter2_reg.read());
}

void IdentityQuantAct146::thread_tmp_101_9_cast_fu_9232_p1() {
    tmp_101_9_cast_fu_9232_p1 = esl_zext<39,5>(p_Val2_9_phi_reg_11833_pp0_iter2_reg.read());
}

void IdentityQuantAct146::thread_tmp_101_cast_362_fu_9285_p1() {
    tmp_101_cast_362_fu_9285_p1 = esl_zext<39,5>(p_Val2_1021_phi_reg_11839_pp0_iter2_reg.read());
}

void IdentityQuantAct146::thread_tmp_101_cast_fu_8755_p1() {
    tmp_101_cast_fu_8755_p1 = esl_zext<39,5>(p_Val2_0_phi_reg_11779_pp0_iter2_reg.read());
}

void IdentityQuantAct146::thread_tmp_109_fu_8680_p1() {
    tmp_109_fu_8680_p1 = ret_V_s_reg_11875.read().range(18-1, 0);
}

void IdentityQuantAct146::thread_tmp_10_fu_4702_p2() {
    tmp_10_fu_4702_p2 = (!k_mid2_fu_4530_p3.read().is_01() || !ap_const_lv3_3.is_01())? sc_lv<1>(): sc_lv<1>(k_mid2_fu_4530_p3.read() == ap_const_lv3_3);
}

void IdentityQuantAct146::thread_tmp_110_fu_8683_p1() {
    tmp_110_fu_8683_p1 = ret_V_11_1_reg_11881.read().range(18-1, 0);
}

void IdentityQuantAct146::thread_tmp_111_fu_8686_p1() {
    tmp_111_fu_8686_p1 = ret_V_11_2_reg_11887.read().range(18-1, 0);
}

void IdentityQuantAct146::thread_tmp_112_fu_8689_p1() {
    tmp_112_fu_8689_p1 = ret_V_11_3_reg_11893.read().range(18-1, 0);
}

void IdentityQuantAct146::thread_tmp_113_fu_8692_p1() {
    tmp_113_fu_8692_p1 = ret_V_11_4_reg_11899.read().range(18-1, 0);
}

void IdentityQuantAct146::thread_tmp_114_fu_8695_p1() {
    tmp_114_fu_8695_p1 = ret_V_11_5_reg_11905.read().range(18-1, 0);
}

void IdentityQuantAct146::thread_tmp_115_fu_8698_p1() {
    tmp_115_fu_8698_p1 = ret_V_11_6_reg_11911.read().range(18-1, 0);
}

void IdentityQuantAct146::thread_tmp_116_fu_8701_p1() {
    tmp_116_fu_8701_p1 = ret_V_11_7_reg_11917.read().range(18-1, 0);
}

void IdentityQuantAct146::thread_tmp_117_fu_8704_p1() {
    tmp_117_fu_8704_p1 = ret_V_11_8_reg_11923.read().range(18-1, 0);
}

void IdentityQuantAct146::thread_tmp_118_fu_8707_p1() {
    tmp_118_fu_8707_p1 = ret_V_11_9_reg_11929.read().range(18-1, 0);
}

void IdentityQuantAct146::thread_tmp_119_fu_8710_p1() {
    tmp_119_fu_8710_p1 = ret_V_11_s_reg_11935.read().range(18-1, 0);
}

void IdentityQuantAct146::thread_tmp_120_fu_8713_p1() {
    tmp_120_fu_8713_p1 = ret_V_11_10_reg_11941.read().range(18-1, 0);
}

void IdentityQuantAct146::thread_tmp_121_fu_8716_p1() {
    tmp_121_fu_8716_p1 = ret_V_11_11_reg_11947.read().range(18-1, 0);
}

void IdentityQuantAct146::thread_tmp_122_fu_8719_p1() {
    tmp_122_fu_8719_p1 = ret_V_11_12_reg_11953.read().range(18-1, 0);
}

void IdentityQuantAct146::thread_tmp_123_fu_8722_p1() {
    tmp_123_fu_8722_p1 = ret_V_11_13_reg_11959.read().range(18-1, 0);
}

void IdentityQuantAct146::thread_tmp_124_fu_8725_p1() {
    tmp_124_fu_8725_p1 = ret_V_11_14_reg_11965.read().range(18-1, 0);
}

void IdentityQuantAct146::thread_tmp_125_fu_8763_p1() {
    tmp_125_fu_8763_p1 = r_V_5_fu_8758_p2.read().range(21-1, 0);
}

void IdentityQuantAct146::thread_tmp_126_fu_8816_p1() {
    tmp_126_fu_8816_p1 = r_V_5_1_fu_8811_p2.read().range(21-1, 0);
}

void IdentityQuantAct146::thread_tmp_127_fu_8869_p1() {
    tmp_127_fu_8869_p1 = r_V_5_2_fu_8864_p2.read().range(21-1, 0);
}

void IdentityQuantAct146::thread_tmp_128_fu_8922_p1() {
    tmp_128_fu_8922_p1 = r_V_5_3_fu_8917_p2.read().range(21-1, 0);
}

void IdentityQuantAct146::thread_tmp_129_fu_8975_p1() {
    tmp_129_fu_8975_p1 = r_V_5_4_fu_8970_p2.read().range(21-1, 0);
}

void IdentityQuantAct146::thread_tmp_12_fu_4313_p3() {
    tmp_12_fu_4313_p3 = esl_concat<32,4>(N_fu_4296_p1.read(), ap_const_lv4_0);
}

void IdentityQuantAct146::thread_tmp_130_fu_9028_p1() {
    tmp_130_fu_9028_p1 = r_V_5_5_fu_9023_p2.read().range(21-1, 0);
}

void IdentityQuantAct146::thread_tmp_131_fu_9081_p1() {
    tmp_131_fu_9081_p1 = r_V_5_6_fu_9076_p2.read().range(21-1, 0);
}

void IdentityQuantAct146::thread_tmp_132_fu_9134_p1() {
    tmp_132_fu_9134_p1 = r_V_5_7_fu_9129_p2.read().range(21-1, 0);
}

void IdentityQuantAct146::thread_tmp_133_fu_9187_p1() {
    tmp_133_fu_9187_p1 = r_V_5_8_fu_9182_p2.read().range(21-1, 0);
}

void IdentityQuantAct146::thread_tmp_134_fu_9240_p1() {
    tmp_134_fu_9240_p1 = r_V_5_9_fu_9235_p2.read().range(21-1, 0);
}

void IdentityQuantAct146::thread_tmp_135_fu_9293_p1() {
    tmp_135_fu_9293_p1 = r_V_5_s_fu_9288_p2.read().range(21-1, 0);
}

void IdentityQuantAct146::thread_tmp_136_fu_9346_p1() {
    tmp_136_fu_9346_p1 = r_V_5_10_fu_9341_p2.read().range(21-1, 0);
}

void IdentityQuantAct146::thread_tmp_137_fu_9399_p1() {
    tmp_137_fu_9399_p1 = r_V_5_11_fu_9394_p2.read().range(21-1, 0);
}

void IdentityQuantAct146::thread_tmp_138_fu_9452_p1() {
    tmp_138_fu_9452_p1 = r_V_5_12_fu_9447_p2.read().range(21-1, 0);
}

void IdentityQuantAct146::thread_tmp_139_fu_9505_p1() {
    tmp_139_fu_9505_p1 = r_V_5_13_fu_9500_p2.read().range(21-1, 0);
}

void IdentityQuantAct146::thread_tmp_13_fu_4494_p2() {
    tmp_13_fu_4494_p2 = (!j_reg_4259.read().is_01() || !ap_const_lv4_B.is_01())? sc_lv<1>(): sc_lv<1>(j_reg_4259.read() == ap_const_lv4_B);
}

void IdentityQuantAct146::thread_tmp_140_fu_9558_p1() {
    tmp_140_fu_9558_p1 = r_V_5_14_fu_9553_p2.read().range(21-1, 0);
}

void IdentityQuantAct146::thread_tmp_14_fu_4506_p2() {
    tmp_14_fu_4506_p2 = (!k_reg_4270.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k_reg_4270.read() == ap_const_lv3_4);
}

void IdentityQuantAct146::thread_tmp_15_fu_4524_p2() {
    tmp_15_fu_4524_p2 = (tmp_6_mid_fu_4512_p2.read() | exitcond_flatten_fu_4474_p2.read());
}

void IdentityQuantAct146::thread_tmp_1_fu_8737_p2() {
    tmp_1_fu_8737_p2 = (!tmp_94_cast_fu_8733_p1.read().is_01())? sc_lv<18>(): ap_const_lv18_1 << (unsigned short)tmp_94_cast_fu_8733_p1.read().to_uint();
}

void IdentityQuantAct146::thread_tmp_2_fu_8743_p2() {
    tmp_2_fu_8743_p2 = (tmp_1_fu_8737_p2.read() & tmp_109_fu_8680_p1.read());
}

void IdentityQuantAct146::thread_tmp_3_fu_9629_p17() {
    tmp_3_fu_9629_p17 = esl_concat<469,32>(esl_concat<437,32>(esl_concat<405,32>(esl_concat<373,32>(esl_concat<341,32>(esl_concat<309,32>(esl_concat<277,32>(esl_concat<245,32>(esl_concat<213,32>(esl_concat<181,32>(esl_concat<149,32>(esl_concat<117,32>(esl_concat<85,32>(esl_concat<53,32>(esl_concat<21,32>(in_data2_15_V_reg_12046.read(), in_data2_14_V_cast_fu_9626_p1.read()), in_data2_13_V_cast_fu_9623_p1.read()), in_data2_12_V_cast_fu_9620_p1.read()), in_data2_11_V_cast_fu_9617_p1.read()), in_data2_10_V_cast_fu_9614_p1.read()), in_data2_9_V_cast_fu_9611_p1.read()), in_data2_8_V_cast_fu_9608_p1.read()), in_data2_7_V_cast_fu_9605_p1.read()), in_data2_6_V_cast_fu_9602_p1.read()), in_data2_5_V_cast_fu_9599_p1.read()), in_data2_4_V_cast_fu_9596_p1.read()), in_data2_3_V_cast_fu_9593_p1.read()), in_data2_2_V_cast_fu_9590_p1.read()), in_data2_1_V_cast_fu_9587_p1.read()), in_data2_0_V_cast_fu_9584_p1.read());
}

void IdentityQuantAct146::thread_tmp_4_fu_4331_p1() {
    tmp_4_fu_4331_p1 = esl_zext<64,4>(j_reg_4259.read());
}

void IdentityQuantAct146::thread_tmp_4_mid1_fu_4538_p1() {
    tmp_4_mid1_fu_4538_p1 = esl_zext<64,4>(j_3_fu_4518_p2.read());
}

void IdentityQuantAct146::thread_tmp_5_mid1_fu_4670_p2() {
    tmp_5_mid1_fu_4670_p2 = (!j_3_fu_4518_p2.read().is_01() || !ap_const_lv4_B.is_01())? sc_lv<1>(): sc_lv<1>(j_3_fu_4518_p2.read() == ap_const_lv4_B);
}

void IdentityQuantAct146::thread_tmp_5_mid2_fu_4676_p3() {
    tmp_5_mid2_fu_4676_p3 = (!tmp_6_mid_fu_4512_p2.read()[0].is_01())? sc_lv<1>(): ((tmp_6_mid_fu_4512_p2.read()[0].to_bool())? tmp_5_mid1_fu_4670_p2.read(): tmp_5_mid_fu_4500_p2.read());
}

void IdentityQuantAct146::thread_tmp_5_mid_fu_4500_p2() {
    tmp_5_mid_fu_4500_p2 = (tmp_13_fu_4494_p2.read() & not_exitcond_flatten_fu_4488_p2.read());
}

void IdentityQuantAct146::thread_tmp_6_mid_fu_4512_p2() {
    tmp_6_mid_fu_4512_p2 = (tmp_14_fu_4506_p2.read() & not_exitcond_flatten_fu_4488_p2.read());
}

void IdentityQuantAct146::thread_tmp_8_fu_4692_p2() {
    tmp_8_fu_4692_p2 = (!k_mid2_fu_4530_p3.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(k_mid2_fu_4530_p3.read() == ap_const_lv3_0);
}

void IdentityQuantAct146::thread_tmp_94_10_cast_fu_9316_p1() {
    tmp_94_10_cast_fu_9316_p1 = esl_zext<18,5>(index_assign_11_fu_9311_p2.read());
}

void IdentityQuantAct146::thread_tmp_94_11_cast_fu_9369_p1() {
    tmp_94_11_cast_fu_9369_p1 = esl_zext<18,5>(index_assign_12_fu_9364_p2.read());
}

void IdentityQuantAct146::thread_tmp_94_12_cast_fu_9422_p1() {
    tmp_94_12_cast_fu_9422_p1 = esl_zext<18,5>(index_assign_13_fu_9417_p2.read());
}

void IdentityQuantAct146::thread_tmp_94_13_cast_fu_9475_p1() {
    tmp_94_13_cast_fu_9475_p1 = esl_zext<18,5>(index_assign_14_fu_9470_p2.read());
}

void IdentityQuantAct146::thread_tmp_94_14_cast_fu_9528_p1() {
    tmp_94_14_cast_fu_9528_p1 = esl_zext<18,5>(index_assign_s_fu_9523_p2.read());
}

void IdentityQuantAct146::thread_tmp_94_1_cast_fu_8786_p1() {
    tmp_94_1_cast_fu_8786_p1 = esl_zext<18,5>(index_assign_1_fu_8781_p2.read());
}

void IdentityQuantAct146::thread_tmp_94_2_cast_fu_8839_p1() {
    tmp_94_2_cast_fu_8839_p1 = esl_zext<18,5>(index_assign_2_fu_8834_p2.read());
}

void IdentityQuantAct146::thread_tmp_94_3_cast_fu_8892_p1() {
    tmp_94_3_cast_fu_8892_p1 = esl_zext<18,5>(index_assign_3_fu_8887_p2.read());
}

void IdentityQuantAct146::thread_tmp_94_4_cast_fu_8945_p1() {
    tmp_94_4_cast_fu_8945_p1 = esl_zext<18,5>(index_assign_4_fu_8940_p2.read());
}

void IdentityQuantAct146::thread_tmp_94_5_cast_fu_8998_p1() {
    tmp_94_5_cast_fu_8998_p1 = esl_zext<18,5>(index_assign_5_fu_8993_p2.read());
}

void IdentityQuantAct146::thread_tmp_94_6_cast_fu_9051_p1() {
    tmp_94_6_cast_fu_9051_p1 = esl_zext<18,5>(index_assign_6_fu_9046_p2.read());
}

void IdentityQuantAct146::thread_tmp_94_7_cast_fu_9104_p1() {
    tmp_94_7_cast_fu_9104_p1 = esl_zext<18,5>(index_assign_7_fu_9099_p2.read());
}

void IdentityQuantAct146::thread_tmp_94_8_cast_fu_9157_p1() {
    tmp_94_8_cast_fu_9157_p1 = esl_zext<18,5>(index_assign_8_fu_9152_p2.read());
}

void IdentityQuantAct146::thread_tmp_94_9_cast_fu_9210_p1() {
    tmp_94_9_cast_fu_9210_p1 = esl_zext<18,5>(index_assign_9_fu_9205_p2.read());
}

void IdentityQuantAct146::thread_tmp_94_cast_361_fu_9263_p1() {
    tmp_94_cast_361_fu_9263_p1 = esl_zext<18,5>(index_assign_10_fu_9258_p2.read());
}

void IdentityQuantAct146::thread_tmp_94_cast_fu_8733_p1() {
    tmp_94_cast_fu_8733_p1 = esl_zext<18,5>(index_assign_fu_8728_p2.read());
}

void IdentityQuantAct146::thread_tmp_95_10_fu_9320_p2() {
    tmp_95_10_fu_9320_p2 = (!tmp_94_10_cast_fu_9316_p1.read().is_01())? sc_lv<18>(): ap_const_lv18_1 << (unsigned short)tmp_94_10_cast_fu_9316_p1.read().to_uint();
}

void IdentityQuantAct146::thread_tmp_95_11_fu_9373_p2() {
    tmp_95_11_fu_9373_p2 = (!tmp_94_11_cast_fu_9369_p1.read().is_01())? sc_lv<18>(): ap_const_lv18_1 << (unsigned short)tmp_94_11_cast_fu_9369_p1.read().to_uint();
}

void IdentityQuantAct146::thread_tmp_95_12_fu_9426_p2() {
    tmp_95_12_fu_9426_p2 = (!tmp_94_12_cast_fu_9422_p1.read().is_01())? sc_lv<18>(): ap_const_lv18_1 << (unsigned short)tmp_94_12_cast_fu_9422_p1.read().to_uint();
}

void IdentityQuantAct146::thread_tmp_95_13_fu_9479_p2() {
    tmp_95_13_fu_9479_p2 = (!tmp_94_13_cast_fu_9475_p1.read().is_01())? sc_lv<18>(): ap_const_lv18_1 << (unsigned short)tmp_94_13_cast_fu_9475_p1.read().to_uint();
}

void IdentityQuantAct146::thread_tmp_95_14_fu_9532_p2() {
    tmp_95_14_fu_9532_p2 = (!tmp_94_14_cast_fu_9528_p1.read().is_01())? sc_lv<18>(): ap_const_lv18_1 << (unsigned short)tmp_94_14_cast_fu_9528_p1.read().to_uint();
}

void IdentityQuantAct146::thread_tmp_95_1_fu_8790_p2() {
    tmp_95_1_fu_8790_p2 = (!tmp_94_1_cast_fu_8786_p1.read().is_01())? sc_lv<18>(): ap_const_lv18_1 << (unsigned short)tmp_94_1_cast_fu_8786_p1.read().to_uint();
}

void IdentityQuantAct146::thread_tmp_95_2_fu_8843_p2() {
    tmp_95_2_fu_8843_p2 = (!tmp_94_2_cast_fu_8839_p1.read().is_01())? sc_lv<18>(): ap_const_lv18_1 << (unsigned short)tmp_94_2_cast_fu_8839_p1.read().to_uint();
}

void IdentityQuantAct146::thread_tmp_95_3_fu_8896_p2() {
    tmp_95_3_fu_8896_p2 = (!tmp_94_3_cast_fu_8892_p1.read().is_01())? sc_lv<18>(): ap_const_lv18_1 << (unsigned short)tmp_94_3_cast_fu_8892_p1.read().to_uint();
}

void IdentityQuantAct146::thread_tmp_95_4_fu_8949_p2() {
    tmp_95_4_fu_8949_p2 = (!tmp_94_4_cast_fu_8945_p1.read().is_01())? sc_lv<18>(): ap_const_lv18_1 << (unsigned short)tmp_94_4_cast_fu_8945_p1.read().to_uint();
}

void IdentityQuantAct146::thread_tmp_95_5_fu_9002_p2() {
    tmp_95_5_fu_9002_p2 = (!tmp_94_5_cast_fu_8998_p1.read().is_01())? sc_lv<18>(): ap_const_lv18_1 << (unsigned short)tmp_94_5_cast_fu_8998_p1.read().to_uint();
}

void IdentityQuantAct146::thread_tmp_95_6_fu_9055_p2() {
    tmp_95_6_fu_9055_p2 = (!tmp_94_6_cast_fu_9051_p1.read().is_01())? sc_lv<18>(): ap_const_lv18_1 << (unsigned short)tmp_94_6_cast_fu_9051_p1.read().to_uint();
}

void IdentityQuantAct146::thread_tmp_95_7_fu_9108_p2() {
    tmp_95_7_fu_9108_p2 = (!tmp_94_7_cast_fu_9104_p1.read().is_01())? sc_lv<18>(): ap_const_lv18_1 << (unsigned short)tmp_94_7_cast_fu_9104_p1.read().to_uint();
}

void IdentityQuantAct146::thread_tmp_95_8_fu_9161_p2() {
    tmp_95_8_fu_9161_p2 = (!tmp_94_8_cast_fu_9157_p1.read().is_01())? sc_lv<18>(): ap_const_lv18_1 << (unsigned short)tmp_94_8_cast_fu_9157_p1.read().to_uint();
}

void IdentityQuantAct146::thread_tmp_95_9_fu_9214_p2() {
    tmp_95_9_fu_9214_p2 = (!tmp_94_9_cast_fu_9210_p1.read().is_01())? sc_lv<18>(): ap_const_lv18_1 << (unsigned short)tmp_94_9_cast_fu_9210_p1.read().to_uint();
}

void IdentityQuantAct146::thread_tmp_95_s_fu_9267_p2() {
    tmp_95_s_fu_9267_p2 = (!tmp_94_cast_361_fu_9263_p1.read().is_01())? sc_lv<18>(): ap_const_lv18_1 << (unsigned short)tmp_94_cast_361_fu_9263_p1.read().to_uint();
}

void IdentityQuantAct146::thread_tmp_96_10_fu_9326_p2() {
    tmp_96_10_fu_9326_p2 = (tmp_95_10_fu_9320_p2.read() & tmp_120_fu_8713_p1.read());
}

void IdentityQuantAct146::thread_tmp_96_11_fu_9379_p2() {
    tmp_96_11_fu_9379_p2 = (tmp_95_11_fu_9373_p2.read() & tmp_121_fu_8716_p1.read());
}

void IdentityQuantAct146::thread_tmp_96_12_fu_9432_p2() {
    tmp_96_12_fu_9432_p2 = (tmp_95_12_fu_9426_p2.read() & tmp_122_fu_8719_p1.read());
}

void IdentityQuantAct146::thread_tmp_96_13_fu_9485_p2() {
    tmp_96_13_fu_9485_p2 = (tmp_95_13_fu_9479_p2.read() & tmp_123_fu_8722_p1.read());
}

void IdentityQuantAct146::thread_tmp_96_14_fu_9538_p2() {
    tmp_96_14_fu_9538_p2 = (tmp_95_14_fu_9532_p2.read() & tmp_124_fu_8725_p1.read());
}

void IdentityQuantAct146::thread_tmp_96_1_fu_8796_p2() {
    tmp_96_1_fu_8796_p2 = (tmp_95_1_fu_8790_p2.read() & tmp_110_fu_8683_p1.read());
}

void IdentityQuantAct146::thread_tmp_96_2_fu_8849_p2() {
    tmp_96_2_fu_8849_p2 = (tmp_95_2_fu_8843_p2.read() & tmp_111_fu_8686_p1.read());
}

void IdentityQuantAct146::thread_tmp_96_3_fu_8902_p2() {
    tmp_96_3_fu_8902_p2 = (tmp_95_3_fu_8896_p2.read() & tmp_112_fu_8689_p1.read());
}

void IdentityQuantAct146::thread_tmp_96_4_fu_8955_p2() {
    tmp_96_4_fu_8955_p2 = (tmp_95_4_fu_8949_p2.read() & tmp_113_fu_8692_p1.read());
}

void IdentityQuantAct146::thread_tmp_96_5_fu_9008_p2() {
    tmp_96_5_fu_9008_p2 = (tmp_95_5_fu_9002_p2.read() & tmp_114_fu_8695_p1.read());
}

void IdentityQuantAct146::thread_tmp_96_6_fu_9061_p2() {
    tmp_96_6_fu_9061_p2 = (tmp_95_6_fu_9055_p2.read() & tmp_115_fu_8698_p1.read());
}

void IdentityQuantAct146::thread_tmp_96_7_fu_9114_p2() {
    tmp_96_7_fu_9114_p2 = (tmp_95_7_fu_9108_p2.read() & tmp_116_fu_8701_p1.read());
}

void IdentityQuantAct146::thread_tmp_96_8_fu_9167_p2() {
    tmp_96_8_fu_9167_p2 = (tmp_95_8_fu_9161_p2.read() & tmp_117_fu_8704_p1.read());
}

void IdentityQuantAct146::thread_tmp_96_9_fu_9220_p2() {
    tmp_96_9_fu_9220_p2 = (tmp_95_9_fu_9214_p2.read() & tmp_118_fu_8707_p1.read());
}

void IdentityQuantAct146::thread_tmp_96_s_fu_9273_p2() {
    tmp_96_s_fu_9273_p2 = (tmp_95_s_fu_9267_p2.read() & tmp_119_fu_8710_p1.read());
}

void IdentityQuantAct146::thread_tmp_data_V_10_fu_9664_p1() {
    tmp_data_V_10_fu_9664_p1 = esl_sext<512,501>(tmp_3_fu_9629_p17.read());
}

void IdentityQuantAct146::thread_tmp_fu_4698_p1() {
    tmp_fu_4698_p1 = k_mid2_fu_4530_p3.read().range(2-1, 0);
}

void IdentityQuantAct146::thread_tmp_mid1_fu_4754_p2() {
    tmp_mid1_fu_4754_p2 = (!i_s_fu_4748_p2.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(i_s_fu_4748_p2.read() == ap_const_lv32_0);
}

void IdentityQuantAct146::thread_tmp_s_fu_4734_p2() {
    tmp_s_fu_4734_p2 = (!i_reg_4281.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(i_reg_4281.read() == ap_const_lv32_0);
}

void IdentityQuantAct146::thread_tmp_user_V_12_mid1_fu_4760_p3() {
    tmp_user_V_12_mid1_fu_4760_p3 = (!tmp_mid1_fu_4754_p2.read()[0].is_01())? sc_lv<5>(): ((tmp_mid1_fu_4754_p2.read()[0].to_bool())? ap_const_lv5_11: ap_const_lv5_10);
}

void IdentityQuantAct146::thread_tmp_user_V_13_cast1_fu_9576_p1() {
    tmp_user_V_13_cast1_fu_9576_p1 = esl_sext<6,5>(tmp_user_V_1_reg_11689_pp0_iter3_reg.read());
}

void IdentityQuantAct146::thread_tmp_user_V_13_cast_fu_9579_p1() {
    tmp_user_V_13_cast_fu_9579_p1 = esl_zext<16,6>(tmp_user_V_13_cast1_fu_9576_p1.read());
}

void IdentityQuantAct146::thread_tmp_user_V_1_fu_4768_p3() {
    tmp_user_V_1_fu_4768_p3 = (!exitcond_flatten_reg_10707.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten_reg_10707.read()[0].to_bool())? tmp_user_V_12_mid1_fu_4760_p3.read(): tmp_user_V_fu_4740_p3.read());
}

void IdentityQuantAct146::thread_tmp_user_V_fu_4740_p3() {
    tmp_user_V_fu_4740_p3 = (!tmp_s_fu_4734_p2.read()[0].is_01())? sc_lv<5>(): ((tmp_s_fu_4734_p2.read()[0].to_bool())? ap_const_lv5_11: ap_const_lv5_10);
}

}

